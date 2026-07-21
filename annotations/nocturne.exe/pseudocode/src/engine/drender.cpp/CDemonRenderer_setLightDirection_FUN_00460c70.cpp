// Name: engine_drender.cpp_CDemonRenderer_setLightDirection_FUN_00460c70
// Address: 00460c70
// Address Range: [[00460c70, 00460c89]]
// Convention: __cdecl
// Signature: void __cdecl engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_00460c70(undefined4 param_1,undefined4 *param_2)

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_setLightDirection_FUN_00460c70(uint param_1,uint *param_2)

{
  engine_light_cpp_setDirectionalLightVector_FUN_004c6a10(*param_2,param_2[1],param_2[2]);
  return;
}
