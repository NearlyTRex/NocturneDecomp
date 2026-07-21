// Name: core_fire.cpp_CSmokeParticle_init_FUN_00482780
// Address: 00482780
// Address Range: [[00482780, 00482812]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CSmokeParticle_init_FUN_00482780(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 *param_4,undefined4 param_5)

#include "nocturne.h"

void __cdecl core_fire_cpp_CSmokeParticle_init_FUN_00482780(uint *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1 + 1 != param_2) {
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
  }
  puVar1 = param_1 + 7;
  if (param_4 == (uint *)0x0) {
    param_1[9] = 0;
    param_1[8] = param_1[9];
    *puVar1 = param_1[8];
  }
  else if (puVar1 != param_4) {
    *puVar1 = *param_4;
    param_1[8] = param_4[1];
    param_1[9] = param_4[2];
  }
  param_1[6] = 0;
  param_1[5] = param_3;
  uVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f733333,0x3f866666);
  *param_1 = 1;
  param_1[4] = uVar2;
  param_1[10] = param_5;
  return;
}
