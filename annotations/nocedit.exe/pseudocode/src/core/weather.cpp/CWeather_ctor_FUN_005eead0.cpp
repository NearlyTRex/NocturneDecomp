// Name: core_weather.cpp_CWeather_ctor_FUN_005eead0
// Address: 005eead0
// Address Range: [[005eead0, 005eeae3]]
// Convention: __cdecl
// Signature: CWeather * core_weather.cpp_CWeather_ctor_FUN_005eead0(CWeather * this_ptr)
// Cross-references:
//   core_weather.cpp_staticInit_FUN_005eeaa0 (005eeaa0) at 005eeaa5 [UNCONDITIONAL_CALL]
// Function calls:
//   core_weather.cpp_CWeather_FUN_005ef8c0

#include "nocturne.h"

CWeather * __cdecl core_weather_cpp_CWeather_ctor_FUN_005eead0(CWeather *this_ptr)

{
  core_weather_cpp_CWeather_FUN_005ef8c0();
  return this_ptr;
}


// Assembly code:
// 005eead0: PUSH EBX
//   Label: core_weather.cpp_CWeather_ctor_FUN_005eead0
// 005eead1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005eead5: PUSH 0x0
// 005eead7: PUSH EBX
// 005eead8: CALL core_weather.cpp_CWeather_FUN_005ef8c0
//   XREF to: 005ef8c0 (UNCONDITIONAL_CALL)
// 005eeadd: ADD ESP,0x8
// 005eeae0: MOV EAX,EBX
// 005eeae2: POP EBX
// 005eeae3: RET
