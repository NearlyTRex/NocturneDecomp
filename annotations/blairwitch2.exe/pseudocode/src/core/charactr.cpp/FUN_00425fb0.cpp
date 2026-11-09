// Name: core_charactr.cpp_FUN_00425fb0
// Address: 00425fb0
// Address Range: [[00425fb0, 004264cd]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_00425fb0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_FUN_00425fb0(CCharacter *this_ptr,float delta_time)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  CSkeleton *pCVar4;
  CDeformableModel *pCVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  CCharacter *pCVar10;
  byte bVar11;
  float afStackY_1070 [1014];
  uint *puVar12;
  uint local_88;
  uint local_7c;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  float local_54;
  float local_50;
  byte *local_4c;
  CDeformableModelInstance *local_48;
  byte *local_44;
  CSkeleton *local_40;
  CDeformableModel *local_3c;
  int local_38;
  int local_34;
  int local_30;
  uint *local_2c;
  CCharacter *local_28;
  int *local_24;
  int *local_20;
  int *local_1c;
  CSkeleton *local_18;
  
  bVar11 = 0;
  puVar1 = &this_ptr->field_0x2b4;
  local_18 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                       ((CDeformableModelInstance *)puVar1);
  if (*(int *)&this_ptr->field_0x10224 == 0) {
    if (0 < *(int *)&this_ptr->field_0x3564) {
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                         ((CDeformableModelInstance *)puVar1);
      local_40 = pCVar4;
      pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810
                         ((CDeformableModelInstance *)puVar1);
      iVar9 = 0;
      if (0 < *(int *)&pCVar4->field_0x1d1f8) {
        iVar6 = 0;
        do {
          *(uint *)((int)&DAT_007bdc9c + iVar6) = 0;
          iVar9 = iVar9 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar9 < *(int *)&local_40->field_0x1d1f8);
      }
      fVar2 = 0x40400000;
      iVar9 = 0;
      if (0 < *(int *)&this_ptr->field_0x3564) {
        fVar3 = (float)_DAT_005ccd76;
        pCVar10 = this_ptr;
        do {
          iVar9 = iVar9 + 1;
          (&DAT_007bdc9c)[*(int *)&pCVar10->field_0x3574] =
               (float)(&DAT_007bdc9c)[*(int *)&pCVar10->field_0x3574] +
               (*(float *)&pCVar10->field_0x3584 * fVar3) / fVar2;
          pCVar10 = (CCharacter *)&pCVar10->field_0x18;
        } while (iVar9 < *(int *)&this_ptr->field_0x3564);
      }
      iVar9 = 0;
      local_38 = 0;
      if (0 < *(int *)&local_40->field_0x1d1f8) {
        local_48 = (CDeformableModelInstance *)&this_ptr->field_0x2b4;
        iVar6 = 0;
        local_3c = pCVar5;
        do {
          if ((float)_DAT_005ccd76 <= *(float *)((int)&DAT_007bdc9c + iVar6)) {
            iVar9 = iVar9 + 1;
          }
          if (*(int *)&local_3c->field_0x288c == -1) {
            iVar9 = iVar9 + 1;
          }
          pCVar5 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00547810(local_48);
          if (*(int *)(&this_ptr->field_0x23f4 + *(int *)(&pCVar5->field_0x26fc + iVar6) * 4) == 0)
          {
            iVar9 = iVar9 + 1;
          }
          iVar6 = iVar6 + 4;
          local_3c = (CDeformableModel *)&local_3c->field_0x4;
          local_38 = local_38 + 1;
        } while (local_38 < *(int *)&local_40->field_0x1d1f8);
      }
      if (iVar9 == *(int *)&local_40->field_0x1d1f8) {
        *(uint *)&this_ptr->field_0x10228 = 0x3f800000;
        *(uint *)&this_ptr->field_0x10224 = 1;
      }
      local_54 = (float)*(int *)&this_ptr->field_0x3564 * (float)_DAT_005ccd7e *
                 (float)_DAT_005ccd86 + (float)_DAT_005ccd8e;
      iVar9 = sound_sndmain_cpp_FUN_00550f20(*(uint *)&this_ptr->field_0x10220,local_54);
      if (iVar9 == 0) {
        sound_sndmain_cpp_FUN_00550450();
        sound_sndmain_cpp_FUN_00550270(local_54);
        uVar7 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x38))
                          (this_ptr,"character-onfire-loop.wav");
        *(uint *)&this_ptr->field_0x10220 = uVar7;
        sound_sndmain_cpp_FUN_005504d0();
      }
    }
  }
  else {
    fVar2 = *(float *)&this_ptr->field_0x10228 - delta_time;
    *(float *)&this_ptr->field_0x10228 = fVar2;
    if (fVar2 < 0.0) {
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)&this_ptr->field_0x10220);
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))
                (this_ptr,"?character-onfire-fallapart.wav" + 1);
      core_charactr_cpp_CCharacter_dismember_FUN_00427360(this_ptr,(CVector3f *)0x0,-1.0,0);
    }
  }
  local_30 = 0;
  if (0 < *(int *)&this_ptr->field_0x3564) {
    local_4c = &this_ptr->field_0x1134;
    local_44 = &this_ptr->field_0x3a20;
    local_24 = (int *)&this_ptr->field_0x3570;
    local_28 = this_ptr;
    local_2c = (uint *)&this_ptr->field_0x3a40;
    do {
      if (*(int *)(&this_ptr->field_0x23f4 + *local_24 * 4) != 0) {
        *(uint *)&this_ptr->field_0xfc = 1;
        core_xform_cpp_FUN_00591530(local_24 + 2,local_4c + local_24[1] * 0x30);
        puVar12 = &stack0xffffff9c;
        local_64 = local_7c;
        *(uint *)((int)&stack0xffffffa0 + (uint)bVar11 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff88 + (uint)bVar11 * -8);
        *(uint *)(&stack0xffffffa4 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
             *(uint *)(&stack0xffffff8c + (uint)bVar11 * -8 + (uint)bVar11 * -8);
        core_actor_cpp_FUN_00408d70(this_ptr,puVar12);
        iVar9 = local_30;
        puVar1 = local_44;
        local_70 = local_88;
        *(uint *)((int)&stack0xffffff94 + (uint)bVar11 * -8) =
             *(uint *)(&stack0xffffff7c + (uint)bVar11 * -8);
        *(uint *)((int)&stack0xffffff98 + (uint)bVar11 * -8 + (uint)bVar11 * -8) =
             *(uint *)(&stack0xffffff80 + (uint)bVar11 * -8 + (uint)bVar11 * -8);
        *local_2c = local_70;
        local_2c[1] = local_6c;
        local_2c[2] = local_68;
        fVar2 = (float)_DAT_005ccd96;
        *(float *)&local_28->field_0x3cd4 = (float)local_24[5] * fVar2;
        *(int *)&local_28->field_0x3cd8 = local_24[5];
        *(float *)&local_28->field_0x3cdc = fVar2 * (float)local_24[5];
        (**(code **)(*(int *)(puVar1 + iVar9 * 0x400 + 0x2b0) + 0x14))
                  (puVar1 + iVar9 * 0x400,delta_time);
      }
      local_24 = local_24 + 6;
      local_28 = (CCharacter *)&local_28->field_0x400;
      local_2c = local_2c + 0x100;
      local_30 = local_30 + 1;
    } while (local_30 < *(int *)&this_ptr->field_0x3564);
  }
  if ((*(int *)&this_ptr->field_0x2810 == 0) && (0 < *(int *)&this_ptr->field_0x3564)) {
    local_20 = (int *)&this_ptr->field_0x3570;
    local_50 = delta_time * _DAT_005f407c;
    local_34 = 0;
    do {
      local_1c = local_20;
      if ((*(int *)(&this_ptr->field_0x23f4 + *local_20 * 4) != 0) &&
         (fVar2 = local_50 * *(float *)&this_ptr->field_0x356c + (float)local_20[5],
         local_20[5] = (int)fVar2, 0x40400000 < fVar2)) {
        local_20[5] = (int)0x40400000;
        iVar9 = 0;
        pCVar4 = local_18;
        if (0 < *(int *)&local_18->field_0x1d1f8) {
          do {
            if (*(uint *)&pCVar4->field_0x1d21c == local_1c[1]) {
              uVar8 = *(uint *)&pCVar4->field_0x1d21c ^ local_1c[1];
              pCVar10 = this_ptr;
              if (0 < *(int *)&this_ptr->field_0x3564) {
                do {
                  if (iVar9 == *(int *)&pCVar10->field_0x3574) break;
                  uVar8 = uVar8 + 1;
                  pCVar10 = (CCharacter *)&pCVar10->field_0x18;
                } while ((int)uVar8 < *(int *)&this_ptr->field_0x3564);
              }
              if (uVar8 == *(uint *)&this_ptr->field_0x3564) {
                core_charactr_cpp_FUN_00425bb0(this_ptr,local_18,iVar9);
              }
            }
            iVar9 = iVar9 + 1;
            pCVar4 = (CSkeleton *)&pCVar4->field_0x24;
          } while (iVar9 < *(int *)&local_18->field_0x1d1f8);
        }
        iVar9 = 0;
        if (0 < *(int *)&this_ptr->field_0x3564) {
          pCVar10 = this_ptr;
          do {
            if (*(int *)(&local_18->field_0x1d21c + local_1c[1] * 0x24) ==
                *(int *)&pCVar10->field_0x3574) break;
            iVar9 = iVar9 + 1;
            pCVar10 = (CCharacter *)&pCVar10->field_0x18;
          } while (iVar9 < *(int *)&this_ptr->field_0x3564);
        }
        if (iVar9 == *(int *)&this_ptr->field_0x3564) {
          core_charactr_cpp_FUN_00425bb0
                    (this_ptr,local_18,*(int *)(&local_18->field_0x1d21c + local_1c[1] * 0x24));
        }
      }
      local_20 = local_20 + 6;
      local_34 = local_34 + 1;
    } while (local_34 < *(int *)&this_ptr->field_0x3564);
  }
  return;
}
