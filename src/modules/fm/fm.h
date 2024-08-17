#include <Adafruit_Si4713.h>
#include "core/globals.h"
#include "core/display.h"
#include "core/mykeyboard.h"

void fm_live_run(bool reserved=true);
void fm_zic_run();
void fm_ta_run();
bool fm_setup(bool traffic_alert=false);
void fm_stop();
void fm_loop();
