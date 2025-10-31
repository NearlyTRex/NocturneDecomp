// Name: core_weather.cpp_staticInit_FUN_005eeaa0
// Address: 005eeaa0
// Address Range: [[005eeaa0, 005eeac4]]
// Convention: unknown
// Signature: undefined core_weather.cpp_staticInit_FUN_005eeaa0()
// Globals:
//   WatcomTypeInfo g_CVectorTypeInfo
//   CWeather g_CWeatherInstance
//   CVector3f[200] DAT_03f95df8
// Function calls:
//   core_weather.cpp_CWeather_ctor_FUN_005eead0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

void core_weather_cpp_staticInit_FUN_005eeaa0(void)

{
  core_weather_cpp_CWeather_ctor_FUN_005eead0(&g_CWeatherInstance);
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(DAT_03f95df8,200,&g_CVectorTypeInfo);
  return;
}


// Assembly code:
// 005eeaa0: PUSH 0x3f95dc0
//   Label: core_weather.cpp_staticInit_FUN_005eeaa0
//   XREF to: 03f95dc0 (DATA)
// 005eeaa5: CALL core_weather.cpp_CWeather_ctor_FUN_005eead0
//   XREF to: 005eead0 (UNCONDITIONAL_CALL)
// 005eeaaa: ADD ESP,0x4
// 005eeaad: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 005eeab2: PUSH 0xc8
// 005eeab7: PUSH 0x3f95df8
//   XREF to: 03f95df8 (DATA)
// 005eeabc: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 005eeac1: ADD ESP,0xc
// 005eeac4: RET
