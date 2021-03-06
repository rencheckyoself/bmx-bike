#ifndef __ENCODER_H__
#define __ENCODER_H__

#include <math.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include "driverlib/qei.h"
#include "inc/hw_gpio.h"
#include "inc/hw_memmap.h"
#include "inc/hw_types.h"
#include "inc/hw_ints.h"
#include "driverlib/gpio.h"
#include "driverlib/pin_map.h"

void ConfigureQEI(void);
void ConfigureQEIVel(void);
int pulsesToDegrees(float pulses, float ppr);

#endif // __ENCODER_H__
