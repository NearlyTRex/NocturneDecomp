// Name: core_dmodel.cpp_FUN_00468420
// Address: 00468420
// Address Range: [[00468420, 00468774]]
// Convention: unknown
// Signature: void core_dmodel_cpp_FUN_00468420(int param_1,undefined4 *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dmodel_cpp_FUN_00468420(int param_1,uint *param_2)

{
  int *piVar1;
  CMatrix3x3f *this_ptr;
  int iVar2;
  byte bVar3;
  float afStackY_108c [1014];
  float local_a4;
  float local_98;
  float local_94;
  float local_90;
  byte local_8c [8];
  float local_84;
  byte local_80 [8];
  float local_78;
  float local_74;
  float afStack_70 [2];
  byte local_68 [8];
  float local_60;
  float local_5c;
  float local_58 [5];
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  CMatrix3x3f *local_34;
  CMatrix3x3f *local_30;
  int local_2c;
  int local_28;
  CMatrix3x3f *local_24;
  int local_20;
  int local_1c;
  CDemonTriangle *local_18;
  int local_14;
  
  bVar3 = 0;
  if ((uint *)(param_1 + 0x364) != param_2) {
    *(uint *)(param_1 + 0x364) = *param_2;
    *(uint *)(param_1 + 0x368) = param_2[1];
    *(uint *)(param_1 + 0x36c) = param_2[2];
  }
  this_ptr = (CMatrix3x3f *)(param_1 + 0x370);
  core_dirmat_cpp_FUN_0045f3e0(this_ptr,(CVector3f *)(param_1 + 0x364));
  local_18 = *(CDemonTriangle **)(param_1 + 0x358);
  local_38 = 0;
  local_34 = this_ptr;
  local_30 = this_ptr;
  local_24 = this_ptr;
  if (0 < *(int *)(param_1 + 0x100)) {
    do {
      local_20 = *(int *)(param_1 + 0x10c) + *(int *)(param_1 + 0x104) * local_38 * 0xc;
      local_28 = 0;
      if (0 < *(int *)(param_1 + 0x110)) {
        local_2c = 0;
        do {
          local_1c = local_2c + *(int *)(param_1 + 0x114);
          piVar1 = (int *)(*(int *)(local_1c + 0x18) * 0xc + local_20);
          local_80._0_4_ = (float)*piVar1 * _DAT_005fec44;
          local_80._4_4_ = (float)piVar1[1] * _DAT_005fec44;
          local_78 = (float)piVar1[2] * _DAT_005fec44;
          piVar1 = (int *)(*(int *)(local_1c + 0x24) * 0xc + local_20);
          local_8c._0_4_ = (float)*piVar1 * _DAT_005fec44;
          local_8c._4_4_ = (float)piVar1[1] * _DAT_005fec44;
          local_84 = (float)piVar1[2] * _DAT_005fec44;
          core_dirmat_cpp_FUN_0045f690(local_34,local_80);
          local_44 = local_58[2];
          local_58[(uint)bVar3 * -2 + 6] = local_58[(uint)bVar3 * -2 + 3];
          local_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7] =
               local_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
          if ((float *)local_80 != local_58 + 5) {
            local_80._0_4_ = local_44;
            local_80._4_4_ = local_40;
            local_78 = local_3c;
          }
          core_dirmat_cpp_FUN_0045f690(local_30,local_8c);
          local_98 = local_a4;
          (&stack0xffffff6c)[(uint)bVar3 * 0xfffffffe] =
               (float)*(uint *)(&stack0xffffff60 + (uint)bVar3 * -8);
          afStack_70[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -8] =
               *(float *)(&stack0xffffff64 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          if ((float *)local_8c != &stack0xffffff68) {
            local_8c._0_4_ = local_98;
            local_8c._4_4_ = local_94;
            local_84 = local_90;
          }
          iVar2 = 2;
          if (2 < *(int *)(local_1c + 4)) {
            local_14 = local_1c + 0x18;
            do {
              piVar1 = (int *)(*(int *)(local_14 + 0x18) * 0xc + local_20);
              local_68._0_4_ = (float)*piVar1 * _DAT_005fec44;
              local_68._4_4_ = (float)piVar1[1] * _DAT_005fec44;
              local_60 = (float)piVar1[2] * _DAT_005fec44;
              core_dirmat_cpp_FUN_0045f690(local_24,local_68);
              local_5c = local_74;
              local_58[(uint)bVar3 * -2] = afStack_70[(uint)bVar3 * -2];
              local_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
                   afStack_70[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
              if ((float *)local_68 != &local_5c) {
                local_68._0_4_ = local_5c;
                local_68._4_4_ = local_58[0];
                local_60 = local_58[1];
              }
              core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
                        (local_18,(CVector3f *)local_80,(CVector3f *)local_8c,(CVector3f *)local_68)
              ;
              local_18 = local_18 + 1;
              if (local_8c != local_68) {
                local_8c._0_4_ = local_68._0_4_;
                local_8c._4_4_ = local_68._4_4_;
                local_84 = local_60;
              }
              iVar2 = iVar2 + 1;
              local_14 = local_14 + 0xc;
            } while (iVar2 < *(int *)(local_1c + 4));
          }
          local_28 = local_28 + 1;
          local_2c = local_2c + 0x48;
        } while (local_28 < *(int *)(param_1 + 0x110));
      }
      local_38 = local_38 + 1;
    } while (local_38 < *(int *)(param_1 + 0x100));
  }
  return;
}
