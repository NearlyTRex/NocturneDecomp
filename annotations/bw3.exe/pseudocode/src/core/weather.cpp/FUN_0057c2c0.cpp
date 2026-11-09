// Name: core_weather.cpp_FUN_0057c2c0
// Address: 0057c2c0
// Address Range: [[0057c2c0, 0057c2d8]]
// Convention: unknown
// Signature: undefined4 core_weather_cpp_FUN_0057c2c0(void)

#include "nocturne.h"

uint core_weather_cpp_FUN_0057c2c0(void)

{
  return *(uint *)
          (&g_CDemonSetPtr->field_0x14c + *(int *)&g_CDemonSetPtr->field_0x15aeb8 * 0x1a4);
}
