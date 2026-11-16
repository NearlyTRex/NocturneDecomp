// Name: core_weather.cpp_getCurrentCameraAmbientValue_FUN_005ae560
// Address: 005ae560
// Address Range: [[005ae560, 005ae578]]
// Convention: __cdecl
// Signature: int __cdecl core_weather_cpp_getCurrentCameraAmbientValue_FUN_005ae560(void)

#include "nocturne.h"

int __cdecl core_weather_cpp_getCurrentCameraAmbientValue_FUN_005ae560(void)

{
  return (int)g_CDemonSetPtr->cameras[g_CDemonSetPtr->selected_camera_index].ambient_value;
}
