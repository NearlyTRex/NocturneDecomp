// Name: core_weather.cpp_getCurrentCameraAmbientValue_FUN_0057c2c0
// Address: 0057c2c0
// Address Range: [[0057c2c0, 0057c2d8]]
// Convention: __cdecl
// Signature: int __cdecl core_weather_cpp_getCurrentCameraAmbientValue_FUN_0057c2c0(void)

#include "nocturne.h"

int __cdecl core_weather_cpp_getCurrentCameraAmbientValue_FUN_0057c2c0(void)

{
  return (int)g_CDemonSetPtr->cameras[g_CDemonSetPtr->selected_camera_index].ambient_value;
}
