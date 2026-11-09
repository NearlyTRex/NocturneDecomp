// Name: core_charactr.cpp_FUN_0042f4d0
// Address: 0042f4d0
// Address Range: [[0042f4d0, 0042f8d2]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_0042f4d0(CCharacter *this_ptr,CSkeleton *skeleton,int target_bone_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_FUN_0042f4d0(CCharacter *this_ptr,CSkeleton *skeleton,int target_bone_index)

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
  float afStackY_10b0 [9];
  int aiStackY_108c [3];
  float afStackY_1080 [15];
  int aiStackY_1044 [989];
  uint *puVar10;
  uint local_c8;
  float afStack_c4 [7];
  float local_a8;
  uint local_a4;
  int aiStack_a0 [2];
  float local_98;
  float local_94 [4];
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  uint local_74;
  float local_70 [4];
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
    local_4c = &this_ptr->field_0x1b0;
    iVar7 = 0;
    local_2c = 0.0;
    pCVar4 = skeleton;
    pfVar6 = (float *)local_4c;
    if (0 < *(int *)&skeleton->field_0x1de78) {
      do {
        if ((*(int *)&pCVar4->field_0x1de9c == target_bone_index) &&
           (local_28 = SQRT(pfVar6[2] * pfVar6[2] + *pfVar6 * *pfVar6 + pfVar6[1] * pfVar6[1]),
           local_2c < local_28)) {
          iVar3 = iVar7;
          local_2c = local_28;
        }
        pCVar4 = (CSkeleton *)&pCVar4->field_0x24;
        iVar7 = iVar7 + 1;
        pfVar6 = pfVar6 + 3;
      } while (iVar7 < *(int *)&skeleton->field_0x1de78);
    }
    if (iVar3 != -1) {
      pfVar5 = (float *)(local_4c + target_bone_index * 0xc);
      pfVar6 = (float *)(local_4c + iVar3 * 0xc);
      afStack_c4[5] = *pfVar6 - *pfVar5;
      afStack_c4[6] = pfVar6[1] - pfVar5[1];
      local_a8 = pfVar6[2] - pfVar5[2];
      fVar9 = SQRT((float10)local_a8 * (float10)local_a8 +
                   (float10)afStack_c4[5] * (float10)afStack_c4[5] +
                   (float10)afStack_c4[6] * (float10)afStack_c4[6]) * (float10)_DAT_005d59b7;
      local_80 = afStack_c4[5];
      local_7c = afStack_c4[6];
      local_78 = local_a8;
      round();
      local_18 = (int)ROUND(fVar9);
      local_34 = local_18 + 1;
      local_20 = 0;
      if (0 < local_34) {
        local_3c = &this_ptr->field_0xfd8;
        local_44 = &this_ptr->field_0x35dc;
        local_40 = &this_ptr->field_0x312c;
        local_48 = (CDeformableModelInstance *)&this_ptr->field_0x158;
        local_38 = local_18 + 2;
        while (*(int *)&this_ptr->field_0x3120 < 0x32) {
          *(uint *)&this_ptr->field_0xfc = 1;
          local_1c = (int *)(local_40 + *(int *)&this_ptr->field_0x3120 * 0x18);
          *(int *)&this_ptr->field_0x3120 = *(int *)&this_ptr->field_0x3120 + 1;
          this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                                  (local_48);
          iVar3 = core_skeleton_cpp_FUN_00565810(this_ptr_00,target_bone_index);
          piVar2 = local_1c;
          *local_1c = iVar3;
          local_1c[1] = target_bone_index;
          local_18 = local_38;
          local_14 = local_20 + 1;
          local_24 = (float)(local_20 + 1);
          fVar1 = (float)local_38;
          afStack_c4[2] = local_80 * local_24;
          afStack_c4[3] = local_7c * local_24;
          afStack_c4[4] = local_78 * local_24;
          local_94[2] = local_80 * local_24;
          local_94[(uint)bVar8 * -2 + 3] =
               *(float *)((int)afStack_c4 + (uint)bVar8 * 0xfffffff8 + 0xc);
          *(uint *)((int)local_70 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + -8) * 4 + 0xc) =
               *(uint *)
                ((int)afStack_c4 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4 + 0xc);
          local_30 = fVar1;
          fVar1 = 1.0 / fVar1;
          local_98 = local_94[2] * fVar1;
          local_94[0] = local_94[3] * fVar1;
          local_94[1] = local_84 * fVar1;
          local_70[2] = local_94[2] * fVar1;
          *(float *)((int)local_70 + (uint)bVar8 * 0xfffffff8 + 0xc) = local_94[(uint)bVar8 * -2];
          *(float *)((int)local_70 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 1) * 4 + 0xc) =
               local_94[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          if ((float *)(piVar2 + 2) != local_70 + 2) {
            piVar2[2] = (int)local_70[2];
            piVar2[3] = (int)local_70[3];
            piVar2[4] = local_60;
          }
          core_xform_cpp_FUN_005b5080(local_1c + 2,local_3c + local_1c[1] * 0x30);
          puVar10 = &local_a4;
          local_a4 = local_5c;
          aiStack_a0[(uint)bVar8 * -2] = *(int *)((int)local_70 + ((uint)bVar8 * -2 + 3) * 4 + 0xc);
          aiStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               *(int *)((int)local_70 + ((uint)bVar8 * -2 + (uint)bVar8 * -2 + 4) * 4 + 0xc);
          core_actor_cpp_FUN_00408b40(this_ptr,puVar10);
          local_74 = local_c8;
          local_70[(uint)bVar8 * -2] = afStack_c4[(uint)bVar8 * 0xfffffffe];
          local_70[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               *(float *)((int)afStack_c4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4);
          iVar3 = *(int *)&this_ptr->field_0x3120 + -1;
          *(uint *)(local_44 + iVar3 * 0x2a4 + 0x20) = local_74;
          *(float *)(local_44 + iVar3 * 0x2a4 + 0x24) = local_70[0];
          *(float *)(local_44 + iVar3 * 0x2a4 + 0x28) = local_70[1];
          *(uint *)(&this_ptr->field_0x34e4 + *(int *)&this_ptr->field_0x3120 * 0x2a4) = 0;
          local_1c[5] = 0x3f000000;
          fVar1 = (float)_DAT_005d59b7;
          *(float *)(&this_ptr->field_0x3490 + *(int *)&this_ptr->field_0x3120 * 0x2a4) =
               (float)local_1c[5] * fVar1;
          *(int *)(&this_ptr->field_0x3494 + *(int *)&this_ptr->field_0x3120 * 0x2a4) = local_1c[5];
          *(float *)(&this_ptr->field_0x3498 + *(int *)&this_ptr->field_0x3120 * 0x2a4) =
               fVar1 * (float)local_1c[5];
          *(uint *)(&this_ptr->field_0x34e0 + *(int *)&this_ptr->field_0x3120 * 0x2a4) =
               *(uint *)&this_ptr->field_0x3124;
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
