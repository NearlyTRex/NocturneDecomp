// Name: core_weather.cpp_FUN_0057c2c0
// Address: 0057c2c0
// Address Range: [[0057c2c0, 0057c2d8]]
// Convention: unknown
// Signature: float core_weather_cpp_FUN_0057c2c0(void)

#include "nocturne.h"

float core_weather_cpp_FUN_0057c2c0(void)

{
  return g_CDemonSetPtr->cameras[g_CDemonSetPtr->selected_camera_index].ambient_value;
}
