// Name: core_charactr.cpp_FUN_0042f8e0
// Address: 0042f8e0
// Address Range: [[0042f8e0, 0042fdfe]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_FUN_0042f8e0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_FUN_0042f8e0(CCharacter *this_ptr,float delta_time)

{
  byte *this_ptr_00;
  float fVar1;
  float fVar2;
  CSkeleton *pCVar3;
  CDeformableModel *pCVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  CCharacter *pCVar9;
  byte bVar10;
  float afStackY_1070 [1014];
  uint *puVar11;
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
  
  bVar10 = 0;
  this_ptr_00 = &this_ptr->field_0x158;
  local_18 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                       ((CDeformableModelInstance *)this_ptr_00);
  if (*(int *)&this_ptr->field_0xb9e8 == 0) {
    if (0 < *(int *)&this_ptr->field_0x3120) {
      pCVar3 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00569f30
                         ((CDeformableModelInstance *)this_ptr_00);
      local_40 = pCVar3;
      pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0
                         ((CDeformableModelInstance *)this_ptr_00);
      iVar8 = 0;
      if (0 < *(int *)&pCVar3->field_0x1de78) {
        iVar5 = 0;
        do {
          *(uint *)((int)&DAT_007c6384 + iVar5) = 0;
          iVar8 = iVar8 + 1;
          iVar5 = iVar5 + 4;
        } while (iVar8 < *(int *)&local_40->field_0x1de78);
      }
      fVar1 = 0x40400000;
      iVar8 = 0;
      if (0 < *(int *)&this_ptr->field_0x3120) {
        fVar2 = (float)_DAT_005d59ff;
        pCVar9 = this_ptr;
        do {
          iVar8 = iVar8 + 1;
          (&DAT_007c6384)[*(int *)&pCVar9->field_0x3130] =
               (float)(&DAT_007c6384)[*(int *)&pCVar9->field_0x3130] +
               (*(float *)&pCVar9->field_0x3140 * fVar2) / fVar1;
          pCVar9 = (CCharacter *)&pCVar9->field_0x18;
        } while (iVar8 < *(int *)&this_ptr->field_0x3120);
      }
      iVar8 = 0;
      local_38 = 0;
      if (0 < *(int *)&local_40->field_0x1de78) {
        local_48 = (CDeformableModelInstance *)&this_ptr->field_0x158;
        iVar5 = 0;
        local_3c = pCVar4;
        do {
          if ((float)_DAT_005d59ff <= *(float *)((int)&DAT_007c6384 + iVar5)) {
            iVar8 = iVar8 + 1;
          }
          if (*(int *)&local_3c->field_0x33cc == -1) {
            iVar8 = iVar8 + 1;
          }
          pCVar4 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_00569eb0(local_48);
          if (*(int *)(&this_ptr->field_0x2298 + *(int *)(&pCVar4->field_0x323c + iVar5) * 4) == 0)
          {
            iVar8 = iVar8 + 1;
          }
          iVar5 = iVar5 + 4;
          local_3c = (CDeformableModel *)&local_3c->field_0x4;
          local_38 = local_38 + 1;
        } while (local_38 < *(int *)&local_40->field_0x1de78);
      }
      if (iVar8 == *(int *)&local_40->field_0x1de78) {
        *(uint *)&this_ptr->field_0xb9ec = 0x3f800000;
        *(uint *)&this_ptr->field_0xb9e8 = 1;
      }
      local_54 = (float)*(int *)&this_ptr->field_0x3120 * (float)_DAT_005d5a07 *
                 (float)_DAT_005d5a0f + (float)_DAT_005d5a17;
      iVar8 = sound_sndmain_cpp_FUN_00573950(*(uint *)&this_ptr->field_0xb9e4,local_54);
      if (iVar8 == 0) {
        sound_sndmain_cpp_FUN_00572ac0();
        sound_sndmain_cpp_FUN_005728e0(local_54);
        uVar6 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x30))
                          (this_ptr,"character-onfire-loop.wav");
        *(uint *)&this_ptr->field_0xb9e4 = uVar6;
        sound_sndmain_cpp_FUN_00572b40();
      }
    }
  }
  else {
    fVar1 = *(float *)&this_ptr->field_0xb9ec - delta_time;
    *(float *)&this_ptr->field_0xb9ec = fVar1;
    if (fVar1 < 0.0) {
      sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0xb9e4);
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                (this_ptr,"?character-onfire-fallapart.wav" + 1);
      core_charactr_cpp_CCharacter_dismember_FUN_00430d90(this_ptr,(CVector3f *)0x0,-1.0,0);
    }
  }
  local_30 = 0;
  if (0 < *(int *)&this_ptr->field_0x3120) {
    local_4c = &this_ptr->field_0xfd8;
    local_44 = &this_ptr->field_0x35dc;
    local_24 = (int *)&this_ptr->field_0x312c;
    local_28 = this_ptr;
    local_2c = (uint *)&this_ptr->field_0x35fc;
    do {
      if (*(int *)(&this_ptr->field_0x2298 + *local_24 * 4) != 0) {
        *(uint *)&this_ptr->field_0xfc = 1;
        core_xform_cpp_FUN_005b5080(local_24 + 2,local_4c + local_24[1] * 0x30);
        puVar11 = &stack0xffffff9c;
        local_64 = local_7c;
        *(uint *)((int)&stack0xffffffa0 + (uint)bVar10 * 0xfffffffe * 4) =
             *(uint *)(&stack0xffffff88 + (uint)bVar10 * -8);
        *(uint *)(&stack0xffffffa4 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
             *(uint *)(&stack0xffffff8c + (uint)bVar10 * -8 + (uint)bVar10 * -8);
        core_actor_cpp_FUN_00408b40(this_ptr,puVar11);
        iVar8 = local_30 * 0x2a4;
        local_70 = local_88;
        *(uint *)((int)&stack0xffffff94 + (uint)bVar10 * -8) =
             *(uint *)(&stack0xffffff7c + (uint)bVar10 * -8);
        *(uint *)((int)&stack0xffffff98 + (uint)bVar10 * -8 + (uint)bVar10 * -8) =
             *(uint *)(&stack0xffffff80 + (uint)bVar10 * -8 + (uint)bVar10 * -8);
        *local_2c = local_70;
        local_2c[1] = local_6c;
        local_2c[2] = local_68;
        fVar1 = (float)_DAT_005d5a1f;
        *(float *)&local_28->field_0x3734 = (float)local_24[5] * fVar1;
        *(int *)&local_28->field_0x3738 = local_24[5];
        *(float *)&local_28->field_0x373c = fVar1 * (float)local_24[5];
        (**(code **)(*(int *)(local_44 + iVar8 + 0x154) + 0xc))(local_44 + iVar8,delta_time);
      }
      local_24 = local_24 + 6;
      local_28 = (CCharacter *)&local_28->field_0x2a4;
      local_2c = local_2c + 0xa9;
      local_30 = local_30 + 1;
    } while (local_30 < *(int *)&this_ptr->field_0x3120);
  }
  if ((*(int *)&this_ptr->field_0x27a4 == 0) && (0 < *(int *)&this_ptr->field_0x3120)) {
    local_20 = (int *)&this_ptr->field_0x312c;
    local_50 = delta_time * _DAT_005fd60c;
    local_34 = 0;
    do {
      local_1c = local_20;
      if ((*(int *)(&this_ptr->field_0x2298 + *local_20 * 4) != 0) &&
         (fVar1 = local_50 * *(float *)&this_ptr->field_0x3128 + (float)local_20[5],
         local_20[5] = (int)fVar1, 0x40400000 < fVar1)) {
        local_20[5] = (int)0x40400000;
        iVar8 = 0;
        pCVar3 = local_18;
        if (0 < *(int *)&local_18->field_0x1de78) {
          do {
            if (*(uint *)&pCVar3->field_0x1de9c == local_1c[1]) {
              uVar7 = *(uint *)&pCVar3->field_0x1de9c ^ local_1c[1];
              pCVar9 = this_ptr;
              if (0 < *(int *)&this_ptr->field_0x3120) {
                do {
                  if (iVar8 == *(int *)&pCVar9->field_0x3130) break;
                  uVar7 = uVar7 + 1;
                  pCVar9 = (CCharacter *)&pCVar9->field_0x18;
                } while ((int)uVar7 < *(int *)&this_ptr->field_0x3120);
              }
              if (uVar7 == *(uint *)&this_ptr->field_0x3120) {
                core_charactr_cpp_FUN_0042f4d0(this_ptr,local_18,iVar8);
              }
            }
            iVar8 = iVar8 + 1;
            pCVar3 = (CSkeleton *)&pCVar3->field_0x24;
          } while (iVar8 < *(int *)&local_18->field_0x1de78);
        }
        iVar8 = 0;
        if (0 < *(int *)&this_ptr->field_0x3120) {
          pCVar9 = this_ptr;
          do {
            if (*(int *)(&local_18->field_0x1de9c + local_1c[1] * 0x24) ==
                *(int *)&pCVar9->field_0x3130) break;
            iVar8 = iVar8 + 1;
            pCVar9 = (CCharacter *)&pCVar9->field_0x18;
          } while (iVar8 < *(int *)&this_ptr->field_0x3120);
        }
        if (iVar8 == *(int *)&this_ptr->field_0x3120) {
          core_charactr_cpp_FUN_0042f4d0
                    (this_ptr,local_18,*(int *)(&local_18->field_0x1de9c + local_1c[1] * 0x24));
        }
      }
      local_20 = local_20 + 6;
      local_34 = local_34 + 1;
    } while (local_34 < *(int *)&this_ptr->field_0x3120);
  }
  return;
}
