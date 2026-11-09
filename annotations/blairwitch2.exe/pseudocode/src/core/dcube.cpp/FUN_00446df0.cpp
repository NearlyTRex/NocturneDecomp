// Name: core_dcube.cpp_FUN_00446df0
// Address: 00446df0
// Address Range: [[00446df0, 00446f41]]
// Convention: __cdecl
// Signature: int __cdecl core_dcube_cpp_FUN_00446df0(CDemonCube *this_ptr,CVector3f *cylinder_position,float cylinder_radius,CVector3f *output_height,CVector3f *output_normal,uint *output_material)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dcube_cpp_FUN_00446df0(CDemonCube *this_ptr,CVector3f *cylinder_position,float cylinder_radius,CVector3f *output_height,CVector3f *output_normal,uint *output_material)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  float afStackY_1010 [1014];
  byte local_28 [8];
  float local_20 [4];
  
  bVar6 = 0;
  iVar3 = -1;
  iVar4 = 0;
  if (0 < *(int *)&this_ptr->field_0x28) {
    iVar5 = 0;
    do {
      uVar2 = core_dcube_cpp_FUN_00445620
                        ((CDemonCubeTriangle *)(*(int *)&this_ptr->field_0x2c + iVar5),
                         cylinder_position,cylinder_radius,(float *)output_height);
      if (uVar2 != 0) {
        iVar3 = iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x20;
    } while (iVar4 < *(int *)&this_ptr->field_0x28);
  }
  if (-1 < iVar3) {
    puVar1 = *(uint **)(iVar3 * 0x20 + *(int *)&this_ptr->field_0x2c);
    if (puVar1 != (uint *)&DAT_01510da8) {
      _DAT_01510da8 = *puVar1;
      _DAT_01510db0 = puVar1[2];
      _DAT_01510dac = puVar1[1];
    }
    puVar1 = *(uint **)(*(int *)&this_ptr->field_0x2c + 4 + iVar3 * 0x20);
    if (puVar1 != (uint *)&DAT_01510db4) {
      _DAT_01510db4 = *puVar1;
      _DAT_01510dbc = puVar1[2];
      _DAT_01510db8 = puVar1[1];
    }
    puVar1 = *(uint **)(iVar3 * 0x20 + 8 + *(int *)&this_ptr->field_0x2c);
    if (puVar1 != (uint *)&DAT_01510dc0) {
      _DAT_01510dc0 = *puVar1;
      _DAT_01510dc8 = puVar1[2];
      _DAT_01510dc4 = puVar1[1];
    }
    *output_material = (uint)*(byte *)(*(int *)&this_ptr->field_0x30 + iVar3);
    iVar4 = *(int *)&this_ptr->field_0x2c;
    iVar3 = iVar3 * 0x20;
    local_20[1] = -*(float *)(iVar4 + 0xc + iVar3);
    local_20[2] = -*(float *)(iVar4 + 0x10 + iVar3);
    local_20[3] = -*(float *)(iVar4 + 0x14 + iVar3);
    local_28._0_4_ = local_20[1];
    *(float *)((int)local_28 + (uint)bVar6 * -8 + 4) = local_20[(uint)bVar6 * 0xfffffffe + 2];
    *(float *)((int)local_28 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         local_20[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 3];
    if ((CVector3f *)local_28 != output_normal) {
      *(uint *)output_normal = local_28._0_4_;
      *(uint *)&output_normal->field_0x4 = local_28._4_4_;
      *(float *)&output_normal->field_0x8 = local_20[0];
    }
    return 1;
  }
  return 0;
}
