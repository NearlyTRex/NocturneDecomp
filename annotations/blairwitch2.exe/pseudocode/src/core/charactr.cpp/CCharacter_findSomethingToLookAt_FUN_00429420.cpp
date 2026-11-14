// Name: core_charactr.cpp_CCharacter_findSomethingToLookAt_FUN_00429420
// Address: 00429420
// Address Range: [[00429420, 00429b30]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429420(CCharacter *this_ptr,float delta_time,int disable_search)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_findSomethingToLookAt_FUN_00429420(CCharacter *this_ptr,float delta_time,int disable_search)

{
  CCharacter *pCVar1;
  EDeathState EVar2;
  int iVar3;
  CSkeleton *this_ptr_00;
  float fVar4;
  CLocation *pCVar5;
  CDeformableModelInstance *this_ptr_01;
  byte bVar6;
  float afStackY_118c [1012];
  char *bone_name;
  float *pfVar7;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  CVector3f CStack_1a4;
  float fStack_198;
  float afStack_194 [4];
  uint uStack_184;
  float fStack_180;
  float afStack_17c [4];
  uint uStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  CVector3f CStack_15c;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float afStack_140 [6];
  float afStack_128 [5];
  float fStack_114;
  float fStack_110;
  uint uStack_10c;
  uint uStack_108;
  float afStack_104 [5];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [5];
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [5];
  float fStack_78;
  float afStack_6c [3];
  float fStack_60;
  float afStack_54 [3];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float afStack_3c [5];
  CSkeleton *pCStack_28;
  CCharacter *pCStack_24;
  CCharacter *pCStack_20;
  CCharacter *pCStack_1c;
  float fStack_18;
  
  bVar6 = 0;
  EVar2 = (*(((this_ptr->base).vtable._uc)->_uc).getDeathState)(this_ptr);
  if (EVar2 != DEATH_STATE_ALIVE) {
    disable_search = 1;
  }
  pCStack_28 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                         (&this_ptr->model);
  iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(pCStack_28,"Bip01 head",0);
  if (iVar3 == -1) {
    disable_search = 1;
  }
  pCStack_24 = (CCharacter *)0x0;
  pCVar1 = pCStack_24;
  if ((disable_search == 0) &&
     (pCVar1 = this_ptr->look_at_target, this_ptr->look_at_target == (CCharacter *)0x0)) {
    if (this_ptr->look_at_search_timer <= 0.0) {
      iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(pCStack_28,"Bip01 head",0);
      if (iVar3 == -1) {
        afStack_140[3] = 5.5;
        afStack_140[2] = 0.0;
        afStack_140[4] = 0.0;
        core_actor_cpp_FUN_00408d70(this_ptr,afStack_140 + 2);
        fStack_198 = fStack_90;
        afStack_194[(uint)bVar6 * -2] = afStack_8c[(uint)bVar6 * -2];
        afStack_194[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        if (afStack_128 + 5 != &fStack_198) {
          fStack_114 = fStack_198;
          fStack_110 = afStack_194[0];
          uStack_10c = afStack_194[1];
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                  (&this_ptr->model,iVar3,&CStack_15c);
        pfVar7 = afStack_104 + 2;
        afStack_104[2] = CStack_15c.x;
        afStack_104[(uint)bVar6 * -2 + 3] = *(float *)((int)&CStack_15c + (uint)bVar6 * -8 + 4);
        afStack_104[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             *(float *)((int)&CStack_15c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        core_actor_cpp_FUN_00408d70(this_ptr,pfVar7);
        afStack_140[5] = fStack_d8;
        afStack_128[(uint)bVar6 * -2] = afStack_104[(uint)bVar6 * -2 + 0xc];
        afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_104[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        if (afStack_128 + 5 != afStack_140 + 5) {
          fStack_114 = afStack_140[5];
          fStack_110 = afStack_128[0];
          uStack_10c = afStack_128[1];
        }
      }
      for (iVar3 = 0; iVar3 < g_CDemonSetPtr->character_count; iVar3 = iVar3 + 1) {
      }
      core_setcolid_cpp_CDemonSet_init_FUN_00537e00(g_CDemonSetPtr);
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
      this_ptr->look_at_search_timer = fStack_18;
    }
    else {
      pCStack_24 = this_ptr->look_at_candidate;
      this_ptr->look_at_search_timer = this_ptr->look_at_search_timer - delta_time;
    }
  }
  else {
    pCStack_24 = pCVar1;
    this_ptr->look_at_search_timer = 0.0;
  }
  this_ptr->look_at_candidate = pCStack_24;
  if (pCStack_24 != (CCharacter *)0x0) {
    iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(pCStack_28,"Bip01 head",0);
    if (iVar3 == -1) {
      afStack_3c[0] = 0.0;
      afStack_3c[2] = 0.0;
      afStack_3c[1] = 5.5;
      core_actor_cpp_FUN_00408d70(this_ptr,afStack_8c + 0x14);
      fStack_168 = fStack_144;
      afStack_17c[(uint)bVar6 * -2 + 6] = afStack_140[(uint)bVar6 * -2];
      afStack_17c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           afStack_140[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      if (&fStack_150 != afStack_17c + 5) {
        fStack_150 = fStack_168;
        fStack_14c = fStack_164;
        fStack_148 = fStack_160;
      }
    }
    else {
      core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                (&this_ptr->model,iVar3,&CStack_1a4);
      pfVar7 = afStack_128 + 2;
      afStack_128[2] = CStack_1a4.x;
      afStack_128[(uint)bVar6 * -2 + 3] = *(float *)((int)&CStack_1a4 + (uint)bVar6 * -8 + 4);
      afStack_128[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           *(float *)((int)&CStack_1a4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_actor_cpp_FUN_00408d70(this_ptr,pfVar7);
      fStack_cc = fStack_180;
      afStack_104[(uint)bVar6 * -2 + 0xf] = afStack_17c[(uint)bVar6 * -2];
      afStack_104[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
           afStack_17c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      if (&fStack_150 != afStack_104 + 0xe) {
        fStack_150 = fStack_cc;
        fStack_14c = fStack_c8;
        fStack_148 = fStack_c4;
      }
    }
    pCStack_1c = (CCharacter *)
                 core_actor_cpp_castToClassHash_FUN_0040c8f0
                           (&this_ptr->look_at_candidate->base,g_CCharacterClassInfo.name_hash);
    pCStack_20 = pCStack_1c;
    if (pCStack_1c == (CCharacter *)0x0) {
      pCVar1 = this_ptr->look_at_candidate;
      pCVar5 = &(pCVar1->base).location;
      if ((CLocation *)&fStack_1b0 != pCVar5) {
        fStack_1b0 = (pCVar5->position).x;
        fStack_1ac = (pCVar1->base).location.position.y;
        fStack_e8 = (pCVar1->base).location.position.z;
LAB_00429762:
        fStack_1a8 = fStack_e8;
      }
    }
    else {
      EVar2 = (*(((pCStack_1c->base).vtable._uc)->_uc).getDeathState)(pCStack_1c);
      if ((EVar2 == DEATH_STATE_ALIVE) || ((pCStack_1c->model).model_name[0] == '\0')) {
        iVar3 = 0;
        bone_name = "Bip01 head";
        this_ptr_01 = &pCStack_20->model;
        this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_00547890
                                (this_ptr_01);
        iVar3 = core_skeleton_cpp_CSkeleton_findBone_FUN_00540e80(this_ptr_00,bone_name,iVar3);
        if (iVar3 == -1) {
          pCVar5 = &(pCStack_20->base).location;
          if ((CLocation *)&fStack_1b0 != pCVar5) {
            fStack_1b0 = (pCVar5->position).x;
            fStack_1ac = (pCStack_20->base).location.position.y;
            fStack_1a8 = (pCStack_20->base).location.position.z;
          }
          fStack_1ac = fStack_1ac + _DAT_005cd0ba;
        }
        else {
          core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                    (this_ptr_01,iVar3,&CStack_c0);
          afStack_54[0] = CStack_c0.x;
          afStack_8c[(uint)bVar6 * -2 + 0xf] = *(float *)((int)&CStack_c0 + (uint)bVar6 * -8 + 4);
          afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
               *(float *)((int)&CStack_c0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
          core_actor_cpp_FUN_00408d70(pCStack_20,afStack_8c + 0xe);
          fStack_f0 = fStack_78;
          afStack_104[(uint)bVar6 * -2 + 6] = afStack_8c[(uint)bVar6 * -2 + 6];
          afStack_104[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
               afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
          if (&fStack_1b0 != afStack_104 + 5) {
            fStack_1b0 = fStack_f0;
            fStack_1ac = fStack_ec;
            goto LAB_00429762;
          }
        }
      }
      else {
        core_skeleton_cpp_CDeformableModelInstance_getBoneCachedModelPosition_FUN_00546a90
                  (&pCStack_1c->model,0,&CStack_9c);
        pCVar1 = pCStack_1c;
        pfVar7 = &fStack_b4;
        fStack_b4 = CStack_9c.x;
        afStack_b0[(uint)bVar6 * -2] = *(float *)((int)&CStack_9c + (uint)bVar6 * -8 + 4);
        afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             *(float *)((int)&CStack_9c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        core_actor_cpp_FUN_00408d70(pCVar1,pfVar7);
        fStack_48 = fStack_60;
        afStack_8c[(uint)bVar6 * -2 + 0x12] = afStack_8c[(uint)bVar6 * -2 + 0xc];
        afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
             afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        if (&fStack_1b0 != afStack_8c + 0x11) {
          fStack_1b0 = fStack_48;
          fStack_1ac = fStack_44;
          fStack_e8 = fStack_40;
          goto LAB_00429762;
        }
      }
    }
    pfVar7 = afStack_8c + 8;
    fStack_e4 = fStack_1b0 - fStack_150;
    fStack_e0 = fStack_1ac - fStack_14c;
    fStack_dc = fStack_1a8 - fStack_148;
    afStack_6c[0] = fStack_1b0 - fStack_150;
    afStack_8c[(uint)bVar6 * -2 + 9] = afStack_104[(uint)bVar6 * -2 + 9];
    afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         afStack_104[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    core_actor_cpp_FUN_00408d30(this_ptr,pfVar7);
    uStack_108 = afStack_8c[2];
    afStack_104[(uint)bVar6 * -2] = afStack_8c[(uint)bVar6 * -2 + 3];
    afStack_104[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005838f0(&uStack_108);
    afStack_17c[2] = afStack_b0[2];
    afStack_17c[(uint)bVar6 * -2 + 3] = afStack_b0[(uint)bVar6 * -2 + 3];
    afStack_17c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
         afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    if (afStack_194 + 2 != afStack_17c + 2) {
      afStack_194[2] = afStack_17c[2];
      afStack_194[3] = afStack_17c[3];
      uStack_184 = uStack_16c;
    }
    if ((float)_DAT_005cd0be < ABS(afStack_194[3])) {
      this_ptr->look_at_candidate = (CCharacter *)0x0;
    }
    if ((float)_DAT_005cd0c6 < ABS(afStack_194[2])) {
      this_ptr->look_at_candidate = (CCharacter *)0x0;
      goto LAB_004294b3;
    }
  }
  if (this_ptr->look_at_candidate != (CCharacter *)0x0) {
    fVar4 = delta_time / _DAT_005cd0ce + this_ptr->look_at_weight;
    this_ptr->look_at_weight = fVar4;
    if (1.0 < fVar4) {
      this_ptr->look_at_weight = 1.0;
    }
    fStack_18 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0
                          (afStack_194[3] - this_ptr->look_at_yaw);
    this_ptr->look_at_yaw = fStack_18 * (float)_DAT_005cd0d6 + this_ptr->look_at_yaw;
    fVar4 = core_actor_cpp_normalizeAngleToPi_FUN_0040d0c0(afStack_194[2] - this_ptr->look_at_pitch)
    ;
    this_ptr->look_at_pitch = fVar4 * (float)_DAT_005cd0d6 + this_ptr->look_at_pitch;
    return;
  }
LAB_004294b3:
  fVar4 = this_ptr->look_at_weight - delta_time / _DAT_005cd0ce;
  this_ptr->look_at_weight = fVar4;
  if (fVar4 < 0.0) {
    this_ptr->look_at_pitch = 0.0;
    this_ptr->look_at_weight = 0.0;
    this_ptr->look_at_yaw = 0.0;
    return;
  }
  return;
}
