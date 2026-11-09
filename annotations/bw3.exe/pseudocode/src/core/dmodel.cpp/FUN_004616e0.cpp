// Name: core_dmodel.cpp_FUN_004616e0
// Address: 004616e0
// Address Range: [[004616e0, 00461857]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_FUN_004616e0(CKeyFramedModel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_FUN_004616e0(CKeyFramedModel *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int *piVar1;
  int iVar2;
  CBoundingBox3D *this_ptr_01;
  byte local_28 [8];
  float local_20;
  int local_1c;
  int local_18;
  CBoundingBox3D *local_14;
  
  local_18 = 0;
  if (0 < *(int *)&this_ptr->field_0x100) {
    local_14 = (CBoundingBox3D *)&this_ptr->field_0x338;
    local_1c = 0;
    do {
      this_ptr_01 = (CBoundingBox3D *)(*(int *)&this_ptr->field_0x350 + local_1c);
      piVar1 = (int *)(*(int *)&this_ptr->field_0x10c +
                      local_18 * *(int *)&this_ptr->field_0x104 * 0xc);
      local_20 = (float)_DAT_005bb95c;
      local_28._0_4_ = (float)*piVar1 * local_20;
      local_28._4_4_ = (float)piVar1[1] * local_20;
      local_20 = (float)piVar1[2] * local_20;
      if (this_ptr_01 != (CBoundingBox3D *)local_28) {
        *(uint *)this_ptr_01 = local_28._0_4_;
        *(uint *)&this_ptr_01->field_0x4 = local_28._4_4_;
        *(float *)&this_ptr_01->field_0x8 = local_20;
      }
      if (&this_ptr_01->field_0xc != local_28) {
        *(uint *)&this_ptr_01->field_0xc = local_28._0_4_;
        *(uint *)&this_ptr_01->field_0x10 = local_28._4_4_;
        *(float *)&this_ptr_01->field_0x14 = local_20;
      }
      iVar2 = 1;
      if (1 < *(int *)&this_ptr->field_0x104) {
        do {
          local_28._0_4_ = (float)piVar1[3] * (float)_DAT_005bb95c;
          local_28._4_4_ = (float)piVar1[4] * (float)_DAT_005bb95c;
          local_20 = (float)piVar1[5] * (float)_DAT_005bb95c;
          piVar1 = piVar1 + 3;
          iVar2 = iVar2 + 1;
          core_box_cpp_CBoundingBox3D_expand_FUN_0041d840(this_ptr_01,(CVector3f *)local_28);
        } while (iVar2 < *(int *)&this_ptr->field_0x104);
      }
      this_ptr_00 = local_14;
      if (local_18 == 0) {
        if (this_ptr_01 != local_14) {
          *(uint *)local_14 = *(uint *)this_ptr_01;
          *(uint *)&local_14->field_0x4 = *(uint *)&this_ptr_01->field_0x4;
          *(uint *)&local_14->field_0x8 = *(uint *)&this_ptr_01->field_0x8;
        }
        if ((CBoundingBox3D *)&local_14->field_0xc != this_ptr_01) {
          *(uint *)&local_14->field_0xc = *(uint *)this_ptr_01;
          *(uint *)&local_14->field_0x10 = *(uint *)&this_ptr_01->field_0x4;
          *(uint *)&local_14->field_0x14 = *(uint *)&this_ptr_01->field_0x8;
        }
      }
      core_box_cpp_CBoundingBox3D_expand_FUN_0041d840(local_14,(CVector3f *)this_ptr_01);
      core_box_cpp_CBoundingBox3D_expand_FUN_0041d840
                (this_ptr_00,(CVector3f *)&this_ptr_01->field_0xc);
      local_1c = local_1c + 0x18;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)&this_ptr->field_0x100);
  }
  return;
}
