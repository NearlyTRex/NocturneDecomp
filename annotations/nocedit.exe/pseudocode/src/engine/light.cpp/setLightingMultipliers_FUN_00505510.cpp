// Name: engine_light.cpp_setLightingMultipliers_FUN_00505510
// Address: 00505510
// Address Range: [[00505510, 00505522]]
// Convention: __cdecl
// Signature: void engine_light.cpp_setLightingMultipliers_FUN_00505510(int diffuse_multiplier, int specular_multiplier)
// Globals:
//   int g_DiffuseLightMultiplier = 0x10000
//   int g_SpecularLightMultiplier = 0x10000

#include "nocturne.h"

void __cdecl
engine_light_cpp_setLightingMultipliers_FUN_00505510(int diffuse_multiplier,int specular_multiplier)

{
  g_DiffuseLightMultiplier = diffuse_multiplier;
  g_SpecularLightMultiplier = specular_multiplier;
  return;
}


// Assembly code:
// 00505510: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_light.cpp_setLightingMultipliers_FUN_00505510
//   XREF to: Stack[0x4] (READ)
// 00505514: MOV [0x0067cfd0],EAX
//   XREF to: 0067cfd0 (WRITE)
// 00505519: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0050551d: MOV [0x0067cfd4],EAX
//   XREF to: 0067cfd4 (WRITE)
// 00505522: RET
