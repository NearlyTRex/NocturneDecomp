// Name: unkaddr_0059d350.cpp_FUN_0059d360
// Address: 0059d360
// Address Range: [[0059d360, 0059d419]]
// Convention: unknown
// Signature: void unkaddr_0059d350_cpp_FUN_0059d360(undefined4 *param_1,CVector3f *param_2,undefined4 param_3)

#include "nocturne.h"

void unkaddr_0059d350_cpp_FUN_0059d360(uint *param_1,CVector3f *param_2,uint param_3)

{
  CDemonGlobe *this_ptr;
  CDemonSet *this_ptr_00;
  byte bVar1;
  uint auStackY_1010 [1016];
  uint local_28;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  bVar1 = 0;
  this_ptr = (CDemonGlobe *)(param_1 + 7);
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810(this_ptr,param_2);
  param_1[0x16] = 0x8000;
  *(byte *)(param_1 + 0xe) = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860(this_ptr,8.0);
  this_ptr_00 = g_CDemonSetPtr;
  param_1[0xf] = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(this_ptr_00,this_ptr);
  if ((CVector3f *)(param_1 + 1) != param_2) {
    param_1[1] = *(uint *)param_2;
    param_1[2] = *(uint *)&param_2->field_0x4;
    param_1[3] = *(uint *)&param_2->field_0x8;
  }
  core_dirmat_cpp_FUN_004496e0(param_3);
  local_1c = local_28;
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar1 * -8 + (uint)bVar1 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (param_1 + 4 == &stack0xffffffe4) {
    *param_1 = 2;
    return;
  }
  param_1[4] = local_1c;
  param_1[5] = local_18;
  param_1[6] = local_14;
  *param_1 = 2;
  return;
}
