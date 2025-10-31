// Name: engine_light.cpp_getAmbientLightLevel_FUN_005054c0
// Address: 005054c0
// Address Range: [[005054c0, 005054c5]]
// Convention: __cdecl
// Signature: int engine_light.cpp_getAmbientLightLevel_FUN_005054c0(void)
// Globals:
//   int g_AmbientLightLevel = 0x8000

#include "nocturne.h"

int __cdecl engine_light_cpp_getAmbientLightLevel_FUN_005054c0(void)

{
  return g_AmbientLightLevel;
}


// Assembly code:
// 005054c0: MOV EAX,[0x0067cfc8]
//   Label: engine_light.cpp_getAmbientLightLevel_FUN_005054c0
//   XREF to: 0067cfc8 (READ)
// 005054c5: RET
