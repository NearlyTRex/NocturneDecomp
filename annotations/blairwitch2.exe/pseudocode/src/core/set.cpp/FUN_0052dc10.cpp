// Name: core_set.cpp_FUN_0052dc10
// Address: 0052dc10
// Address Range: [[0052dc10, 0052dd78]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_FUN_0052dc10(CDemonSet *this_ptr,int layer_flag)

#include "nocturne.h"

void __cdecl core_set_cpp_FUN_0052dc10(CDemonSet *this_ptr,int layer_flag)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  CVector3f CStack_60;
  CVector3f CStack_54;
  uint local_48 [6];
  uint local_30 [3];
  CVector3f CStack_24;
  CDemonSet *local_18;
  int local_14;
  
  bVar5 = 0;
  if (*(int *)(0x01D182F0 + 0x1008) != 0) {
    layer_flag = 0;
  }
  local_14 = 0;
  if (0 < *(int *)&this_ptr->field_0x15f6f8) {
    local_18 = this_ptr;
    do {
      iVar1 = *(int *)&local_18->field_0x15f6fc;
      (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x24))(iVar1);
      puVar3 = local_48;
      puVar4 = local_30;
      for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar4 = *puVar3;
        puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
      }
      if (&CStack_54 != &CStack_24) {
        CStack_54._0_4_ = CStack_24._0_4_;
        CStack_54._4_4_ = CStack_24._4_4_;
        CStack_54._8_4_ = CStack_24._8_4_;
      }
      core_set_cpp_CDemonSet_setLightingParameters_FUN_00530980
                (this_ptr,(CVector3f *)(iVar1 + 0x20),(UOrientationVector *)(iVar1 + 0x30),
                 &CStack_60,&CStack_54,(CMatrix3x3f *)(iVar1 + 0x3c));
      core_set_cpp_FUN_005344c0
                (this_ptr,*(int *)(iVar1 + 0x108),*(int *)(iVar1 + 0x10c),*(int *)(iVar1 + 0x110));
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
      (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x20))(iVar1,layer_flag);
      core_set_cpp_FUN_005344c0(this_ptr,0x10000,0x10000,0x10000);
      engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0046b920(DAT_0060b280,1);
      local_18 = (CDemonSet *)&local_18->field_0x4;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)&this_ptr->field_0x15f6f8);
  }
  return;
}
