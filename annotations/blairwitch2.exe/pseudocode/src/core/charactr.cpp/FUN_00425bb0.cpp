// Name: core_charactr.cpp_FUN_00425bb0
// Address: 00425bb0
// Address Range: [[00425bb0, 00425fa4]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00425bb0(CCharacter *this_ptr,CSkeleton *skeleton,int target_bone_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_FUN_00425bb0(CCharacter *this_ptr,CSkeleton *skeleton,int target_bone_index)

{
  float fVar1;
  int *piVar2;
  CDeformableModel *this_ptr_00;
  int iVar3;
  CSkeleton *pCVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  byte bVar8;
  float10 fVar9;
  int aiStackY_10b0 [3];
  float afStackY_10a4 [6];
  int aiStackY_108c [6];
  float afStackY_1074 [3];
  int aiStackY_1068 [6];
  float afStackY_1050 [3];
  int aiStackY_1044 [989];
  uint local_c8;
  float local_bc;
  float local_b8 [4];
  float local_a8;
  float local_a4;
  int aiStack_a0 [2];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88 [4];
  uint local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  int local_60;
  uint local_5c;
  byte *local_4c;
  CDeformableModelInstance *local_48;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  int local_20;
  int *local_1c;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  if (-1 < target_bone_index) {
    iVar3 = -1;
    local_4c = &this_ptr->field_0x30c;
    iVar7 = 0;
    local_2c = 0.0;
    pCVar4 = skeleton;
    pfVar6 = (float *)local_4c;
    if (0 < *(int *)&skeleton->field_0x1d1f8) {
      do {
        if ((*(int *)&pCVar4->field_0x1d21c == target_bone_index) &&
           (local_28 = SQRT(pfVar6[2] * pfVar6[2] + *pfVar6 * *pfVar6 + pfVar6[1] * pfVar6[1]),
           local_2c < local_28)) {
          iVar3 = iVar7;
          local_2c = local_28;
        }
        pCVar4 = (CSkeleton *)&pCVar4->field_0x24;
        iVar7 = iVar7 + 1;
        pfVar6 = pfVar6 + 3;
      } while (iVar7 < *(int *)&skeleton->field_0x1d1f8);
    }
    if (iVar3 != -1) {
      pfVar5 = (float *)(local_4c + target_bone_index * 0xc);
      pfVar6 = (float *)(local_4c + iVar3 * 0xc);
      local_98 = *pfVar6 - *pfVar5;
      local_94 = pfVar6[1] - pfVar5[1];
      local_90 = pfVar6[2] - pfVar5[2];
      fVar9 = SQRT((float10)local_90 * (float10)local_90 +
                   (float10)local_98 * (float10)local_98 + (float10)local_94 * (float10)local_94) *
              (float10)_DAT_005ccd2e;
      local_74 = local_98;
      local_70 = local_94;
      local_6c = local_90;
      round();
      local_18 = (int)ROUND(fVar9);
      local_34 = local_18 + 1;
      local_20 = 0;
      if (0 < local_34) {
        local_40 = &this_ptr->field_0x1134;
        local_44 = &this_ptr->field_0x3a20;
        local_3c = &this_ptr->field_0x3570;
        local_48 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
        local_38 = local_18 + 2;
        while (*(int *)&this_ptr->field_0x3564 < 0x32) {
          *(uint *)&this_ptr->field_0xfc = 1;
          local_1c = (int *)(local_3c + *(int *)&this_ptr->field_0x3564 * 0x18);
          *(int *)&this_ptr->field_0x3564 = *(int *)&this_ptr->field_0x3564 + 1;
          this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                                  (local_48);
          iVar3 = core_skeleton_cpp_FUN_00543190(this_ptr_00,target_bone_index);
          piVar2 = local_1c;
          *local_1c = iVar3;
          local_1c[1] = target_bone_index;
          local_18 = local_38;
          local_14 = local_20 + 1;
          local_24 = (float)(local_20 + 1);
          fVar1 = (float)local_38;
          local_8c = local_74 * local_24;
          local_88[0] = local_70 * local_24;
          local_88[1] = local_6c * local_24;
          local_bc = local_74 * local_24;
          local_b8[(uint)bVar8 * -2] = local_88[(uint)bVar8 * -2];
          local_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               (&local_64)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -8];
          local_30 = fVar1;
          fVar1 = 1.0 / fVar1;
          local_b8[2] = local_bc * fVar1;
          local_b8[3] = local_b8[0] * fVar1;
          local_a8 = local_b8[1] * fVar1;
          local_68 = local_bc * fVar1;
          (&local_64)[(uint)bVar8 * -2] = local_b8[(uint)bVar8 * -2 + 3];
          (&local_64)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               local_b8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
          if ((float *)(piVar2 + 2) != &local_68) {
            piVar2[2] = (int)local_68;
            piVar2[3] = (int)local_64;
            piVar2[4] = local_60;
          }
          core_xform_cpp_FUN_00591530(local_1c + 2,local_40 + local_1c[1] * 0x30);
          pfVar6 = local_b8 + 5;
          local_a4 = (float)local_5c;
          aiStack_a0[(uint)bVar8 * -2] = (int)(&local_64)[(uint)bVar8 * -2 + 3];
          aiStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               (int)(&local_64)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
          core_actor_cpp_FUN_00408d70(this_ptr,pfVar6);
          local_88[2] = (float)local_c8;
          (&local_64)[(uint)bVar8 * -2 + -6] = (float)*(int *)(&stack0xffffff3c + (uint)bVar8 * -8);
          (&local_64)[(uint)bVar8 * -2 + (uint)bVar8 * -2 + -5] =
               (float)*(int *)(&stack0xffffff40 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          iVar3 = *(int *)&this_ptr->field_0x3564 + -1;
          *(float *)(local_44 + iVar3 * 0x400 + 0x20) = local_88[2];
          *(float *)(local_44 + iVar3 * 0x400 + 0x24) = local_88[3];
          *(uint *)(local_44 + iVar3 * 0x400 + 0x28) = local_78;
          *(uint *)(&this_ptr->field_0x3928 + *(int *)&this_ptr->field_0x3564 * 0x400) = 0;
          local_1c[5] = 0x3f000000;
          fVar1 = (float)_DAT_005ccd2e;
          *(float *)(&this_ptr->field_0x38d4 + *(int *)&this_ptr->field_0x3564 * 0x400) =
               (float)local_1c[5] * fVar1;
          *(int *)(&this_ptr->field_0x38d8 + *(int *)&this_ptr->field_0x3564 * 0x400) = local_1c[5];
          *(float *)(&this_ptr->field_0x38dc + *(int *)&this_ptr->field_0x3564 * 0x400) =
               (float)local_1c[5] * fVar1;
          *(uint *)(&this_ptr->field_0x3924 + *(int *)&this_ptr->field_0x3564 * 0x400) =
               *(uint *)&this_ptr->field_0x3568;
          local_20 = local_20 + 1;
          if (local_34 <= local_20) {
            return;
          }
        }
      }
    }
  }
  return;
}
