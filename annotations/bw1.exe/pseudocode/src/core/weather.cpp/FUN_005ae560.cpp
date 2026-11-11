// Name: core_weather.cpp_FUN_005ae560
// Address: 005ae560
// Address Range: [[005ae560, 005ae578]]
// Convention: unknown
// Signature: float core_weather_cpp_FUN_005ae560(void)

#include "nocturne.h"

float core_weather_cpp_FUN_005ae560(void)

{
  return g_CDemonSetPtr->cameras[g_CDemonSetPtr->selected_camera_index].ambient_value;
}
