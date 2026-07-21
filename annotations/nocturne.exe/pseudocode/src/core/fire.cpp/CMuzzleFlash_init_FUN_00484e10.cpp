// Name: core_fire.cpp_CMuzzleFlash_init_FUN_00484e10
// Address: 00484e10
// Address Range: [[00484e10, 00484ec1]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CMuzzleFlash_init_FUN_00484e10(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl core_fire_cpp_CMuzzleFlash_init_FUN_00484e10(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  byte local_18 [12];
  
  puVar2 = param_1 + 7;
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90(puVar2,param_2);
  param_1[0x16] = 0x8000;
  *(byte *)(param_1 + 0xe) = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0(puVar2,0x41000000);
  uVar1 = 0x01E57284;
  param_1[0xf] = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0(uVar1,puVar2);
  if (param_1 + 1 != param_2) {
    param_1[1] = *param_2;
    param_1[2] = param_2[1];
    param_1[3] = param_2[2];
  }
  puVar2 = (uint *)
           core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0044dbd0(param_3,local_18,0,0,0);
  if (param_1 + 4 == puVar2) {
    *param_1 = 2;
    return;
  }
  param_1[4] = *puVar2;
  param_1[5] = puVar2[1];
  param_1[6] = puVar2[2];
  *param_1 = 2;
  return;
}
