// Name: core_mimic.cpp_FUN_004f0e10
// Address: 004f0e10
// Address Range: [[004f0e10, 004f1795]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_FUN_004f0e10(CMimic *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_FUN_004f0e10(CMimic *this_ptr,float delta_time)

{
  byte *this_ptr_00;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  float *pfVar7;
  bool bVar8;
  byte bVar9;
  float afStackY_11d8 [15];
  uint auStackY_119c [9];
  float afStackY_1178 [66];
  uint auStackY_1070 [6];
  float afStackY_1058 [3];
  uint auStackY_104c [862];
  CMimic *this_ptr_01;
  CMotionController *pCVar10;
  CDemonSet *this_ptr_02;
  CVector3f *pCVar11;
  CVector3f *start_pos;
  float radius;
  EBloodType blood_type;
  SDamageInfo *damage_info;
  SDamageInfo local_2bc [4];
  float local_2b8;
  CMimic *local_288;
  CMimic *local_284;
  uint local_280 [12];
  uint local_250 [12];
  float local_220 [6];
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  float local_1f4;
  CVector3f local_1f0;
  CVector3f local_1e4;
  float local_1d8;
  float local_1d4 [2];
  uint local_1cc;
  float afStack_1c8 [4];
  float local_1b8;
  uint local_1b4;
  uint auStack_1b0 [5];
  uint local_19c;
  float local_190;
  float local_18c [5];
  float local_178;
  float local_174 [5];
  uint local_160;
  float local_154;
  uint local_150;
  float local_14c;
  uint local_148;
  float local_140;
  CVector3f local_13c;
  uint local_130;
  float afStack_12c [5];
  CVector3f local_118;
  float local_10c;
  float afStack_108 [5];
  CVector3f local_f4;
  uint local_e8;
  uint auStack_e4 [5];
  float local_d0;
  float local_cc;
  float local_c8;
  CVector3f local_c4;
  float local_b8;
  float local_b4 [5];
  CVector3f local_a0;
  CVector3f local_94;
  uint local_88;
  uint auStack_84 [5];
  float local_70;
  float local_6c [2];
  uint local_64;
  uint auStack_60 [2];
  byte local_58 [12];
  byte local_4c [12];
  double local_40;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  CMotionController *local_20;
  uint local_1c;
  CMotionController *local_18;
  float local_14;
  
  bVar9 = 0;
  core_skeleton_cpp_FUN_005469a0(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x2b4,0);
  pfVar5 = local_174 + 2;
  uVar1 = *(uint *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_174[2] = local_b4[2];
  local_174[(uint)bVar9 * -2 + 3] = local_b4[(uint)bVar9 * -2 + 3];
  local_174[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       local_b4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  core_actor_cpp_FUN_00408d70(uVar1,pfVar5);
  iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
  local_1e4._0_4_ = local_1f0._0_4_;
  *(uint *)((int)&local_1e4 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&local_1f0 + (uint)bVar9 * -8 + 4);
  *(uint *)((int)&local_1e4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       *(uint *)((int)&local_1f0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  local_1e4._4_4_ = *(uint *)(iVar2 + 0x24);
  core_actor_cpp_FUN_00408de0(this_ptr,&local_1e4);
  afStack_1c8[2] = local_10c;
  afStack_1c8[(uint)bVar9 * -2 + 3] = afStack_108[(uint)bVar9 * -2];
  afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       afStack_108[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  local_d0 = afStack_1c8[2];
  local_cc = 0.0;
  local_c8 = local_1b8;
  local_20 = (CMotionController *)&this_ptr->field_0x2b4;
  local_24 = -1.0;
  iVar2 = core_motion_cpp_FUN_005035c0(local_20);
  uVar3 = *(uint *)(iVar2 + 0x24);
  if (uVar3 < 2) {
    if (uVar3 == 0) {
      iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      iVar2 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x114))(iVar2);
      if (((iVar2 == 0) && (*(int *)&g_CGamePtr->field_0x1f0 == 0)) &&
         (ABS(*(float *)&this_ptr->field_0x24 -
              *(float *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x24)) <= (float)_DAT_005dd959))
      {
        core_vecdir_cpp_FUN_005838f0(auStack_e4 + 5);
        auStack_1b0[2] = local_88;
        auStack_1b0[(uint)bVar9 * -2 + 3] = auStack_84[(uint)bVar9 * -2];
        auStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             auStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        local_14 = (float)core_actor_cpp_FUN_0040d0c0(auStack_1b0[3]);
        if (SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc) <
            (1.0 - ABS(local_14) * (float)_DAT_005dd961) * (float)_DAT_005dd969 +
            (float)_DAT_005dd971) {
          core_skeleton_cpp_FUN_00546790(local_20,_DAT_01d097c4);
          afStack_108[4] = 0.3;
          puVar4 = local_250;
          puVar6 = local_280;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar6 = *puVar4;
            puVar4 = puVar4 + (uint)bVar9 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
          }
          afStack_108[3] = 0.7;
          afStack_108[2] = 0.0;
          core_xform_cpp_FUN_00591530(afStack_108 + 2,local_280);
          puVar4 = &local_130;
          local_130 = local_18c[2];
          afStack_12c[(uint)bVar9 * -2] = local_18c[(uint)bVar9 * -2 + 3];
          afStack_12c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
               local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
          core_actor_cpp_FUN_00408d70(this_ptr,puVar4);
          pCVar11 = &local_1e4;
          start_pos = &local_118;
          local_118._0_4_ = local_a0._0_4_;
          *(uint *)((int)&local_118 + (uint)bVar9 * -8 + 4) =
               *(uint *)((int)&local_a0 + (uint)bVar9 * -8 + 4);
          this_ptr_02 = g_CDemonSetPtr;
          *(uint *)((int)&local_118 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
               *(uint *)((int)&local_a0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
          iVar2 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_00535ec0
                            (this_ptr_02,start_pos,pCVar11);
          if (iVar2 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(local_20,2,1);
            (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))
                      (this_ptr,"gh-alrt[1,4].wav");
          }
        }
      }
      goto LAB_004f0f3f;
    }
LAB_004f0f08:
    iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    iVar2 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x114))(iVar2);
    if ((iVar2 != 0) || (*(int *)&g_CGamePtr->field_0x1f0 != 0)) {
      iVar2 = 0;
      goto LAB_004f0f30;
    }
    core_actor_cpp_FUN_00408de0(*(uint *)&this_ptr->field_0x4b6f4,&this_ptr->field_0x20);
    local_148 = local_160;
    local_174[(uint)bVar9 * -2 + 0xc] = local_174[(uint)bVar9 * -2 + 6];
    local_174[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
         local_174[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
    (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x24))(this_ptr);
    pfVar5 = local_220;
    pfVar7 = &local_208;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar7 = *pfVar5;
      pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
      pfVar7 = pfVar7 + (uint)bVar9 * -2 + 1;
    }
    local_b8 = local_1fc - local_208;
    local_b4[0] = local_1f8 - local_204;
    local_b4[1] = local_1f4 - local_200;
    local_154 = local_1fc - local_208;
    local_174[(uint)bVar9 * -2 + 9] = local_b4[(uint)bVar9 * -2];
    local_174[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
         local_b4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    local_150 = 0;
    if (-local_140 <= SQRT(local_14c * local_14c + local_154 * local_154)) {
      pCVar10 = (CMotionController *)&this_ptr->field_0x2b4;
      local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar10,1);
      *(float *)&this_ptr->field_0x2594 = local_14 * _DAT_005dd949;
      local_14 = (float)core_motion_cpp_FUN_005038a0(pCVar10,2);
      *(float *)&this_ptr->field_0x2594 =
           local_14 * _DAT_005dd94d + *(float *)&this_ptr->field_0x2594;
      *(float *)&this_ptr->field_0x2594 =
           *(float *)&this_ptr->field_0x10a60 * delta_time * *(float *)&this_ptr->field_0x2594;
      core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * *(float *)&this_ptr->field_0x10a60);
      local_58._8_4_ = 0x40200000;
      iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
      local_58._0_4_ = 0;
      local_58._4_4_ = 0;
      iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        ((CCharacter *)this_ptr,(CVector3f *)(iVar2 + 0x20),
                         (CPathMap *)(iVar2 + 0x10a9c),(CVector3f *)local_58,1.0,0.17453292);
      if (iVar2 < 0) {
        iVar2 = 0;
      }
      else {
        if (0 < iVar2) {
          core_mimic_cpp_CMimic_beginMorph_FUN_004f1d70(this_ptr);
          goto LAB_004f0f3f;
        }
        if (ABS(*(float *)&this_ptr->field_0x2578) /
            (delta_time * *(float *)&this_ptr->field_0x10a60) <= (float)_DAT_005dd951) {
          iVar2 = 2;
        }
        else {
          iVar2 = 1;
        }
      }
      goto LAB_004f0f37;
    }
    core_mimic_cpp_CMimic_beginMorph_FUN_004f1d70(this_ptr);
  }
  else {
    if (uVar3 < 3) goto LAB_004f0f08;
    if (0xb < uVar3) {
      if (0xc < uVar3) {
        if (uVar3 != 0x13) goto LAB_004f150c;
        if (*(int *)(*(int *)(_DAT_01cedef4 * 4 + 0x1cedee4) + 0x276c) == 0) {
          local_28 = core_motion_cpp_FUN_00503e60(local_20);
          pCVar10 = local_20;
          local_40 = (double)local_28;
          local_14 = local_28;
          if (local_28 <= (float)_DAT_005dd941) {
            local_24 = 0x40200000;
            if (1.0 <= local_40) {
              local_34 = (float)core_actor_cpp_FUN_0040cf60(0x40e00000,0x41700000);
              local_14 = local_34;
              core_skeleton_cpp_FUN_00546a90(pCVar10,_DAT_01d097e4);
              local_64 = auStack_84[2];
              auStack_60[(uint)bVar9 * -2] = auStack_84[(uint)bVar9 * -2 + 3];
              auStack_60[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                   auStack_84[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
              local_64 = local_64 ^ 0x80000000;
              core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(local_2bc);
              local_2b8 = local_34;
              damage_info = local_2bc;
              radius = 0.2;
              local_288 = this_ptr;
              local_284 = this_ptr;
              core_actor_cpp_FUN_00408d70(this_ptr,&local_64);
              pCVar11 = &local_94;
              local_94._0_4_ = local_13c._0_4_;
              *(uint *)((int)&local_94 + (uint)bVar9 * -8 + 4) =
                   *(uint *)((int)&local_13c + (uint)bVar9 * -8 + 4);
              this_ptr_01 = this_ptr;
              *(uint *)((int)&local_94 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                   *(uint *)((int)&local_13c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
              iVar2 = core_enemy_cpp_FUN_00488110((CEnemy *)this_ptr_01,pCVar11,radius,damage_info);
              if (iVar2 != 0) {
                (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x34))
                          (this_ptr,"gh-hits[1,4].wav");
              }
            }
          }
          goto LAB_004f0f3f;
        }
        iVar2 = 0;
        pCVar10 = local_20;
        goto LAB_004f0f37;
      }
      if ((*(int *)&this_ptr->field_0x10a64 == 0) && (*(int *)&this_ptr->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_005469a0(local_20,0);
        puVar4 = &local_e8;
        local_e8 = auStack_e4[2];
        auStack_e4[(uint)bVar9 * -2] = auStack_e4[(uint)bVar9 * -2 + 3];
        auStack_e4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             auStack_e4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        core_actor_cpp_FUN_00408d70(this_ptr,puVar4);
        blood_type = BLOOD_TYPE_RED;
        local_f4._0_4_ = local_c4._0_4_;
        *(uint *)((int)&local_f4 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&local_c4 + (uint)bVar9 * -8 + 4);
        *(uint *)((int)&local_f4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             *(uint *)((int)&local_c4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004c9ad0(g_CGorePtr,&local_f4,blood_type);
        *(uint *)&this_ptr->field_0x10a64 = 1;
      }
      goto LAB_004f0f3f;
    }
LAB_004f150c:
    iVar2 = 2;
LAB_004f0f30:
    pCVar10 = (CMotionController *)&this_ptr->field_0x2b4;
LAB_004f0f37:
    core_motion_cpp_CMotionController_setDesiredState_FUN_00503620(pCVar10,iVar2,1);
  }
LAB_004f0f3f:
  if (0.0 <= local_24) {
    *(float *)&this_ptr->field_0x2594 = *(float *)&this_ptr->field_0x10a60 * delta_time;
    core_charactr_cpp_FUN_0042b2a0(this_ptr,delta_time * *(float *)&this_ptr->field_0x10a60);
    local_4c._8_4_ = local_24;
    iVar2 = *(int *)(_DAT_01cedef4 * 4 + 0x1cedee4);
    local_4c._0_4_ = 0;
    local_4c._4_4_ = 0;
    iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                      ((CCharacter *)this_ptr,(CVector3f *)(iVar2 + 0x20),
                       (CPathMap *)(iVar2 + 0x10a9c),(CVector3f *)local_4c,3.0,0.5235988);
    if (iVar2 != 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_00503620
                ((CMotionController *)&this_ptr->field_0x2b4,2,1);
    }
  }
  local_18 = (CMotionController *)&this_ptr->field_0x2b4;
  local_2c = delta_time * *(float *)&this_ptr->field_0x10a60;
  while (pCVar10 = local_18, 0.0 < local_2c) {
    uVar3 = core_motion_cpp_CMotionController_advance_FUN_005030c0(local_18,&local_2c);
    if (uVar3 != 0) {
      if (uVar3 < 2) {
        if (*(int *)&this_ptr->field_0x2570 != 0) {
          core_skeleton_cpp_FUN_005469a0(local_18,_DAT_01d097e0);
          afStack_12c[2] = (float)local_1cc;
          afStack_12c[(uint)bVar9 * -2 + 3] = afStack_1c8[(uint)bVar9 * -2];
          afStack_12c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
               afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
          afStack_12c[2] = -afStack_12c[2];
          (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x2c))(this_ptr,afStack_12c + 2,0x3f800000);
        }
      }
      else if ((uVar3 == 7) && (*(int *)&this_ptr->field_0x2570 != 0)) {
        core_skeleton_cpp_FUN_005469a0(pCVar10,_DAT_01d097e4);
        local_1b4 = local_19c;
        auStack_1b0[(uint)bVar9 * -2] = auStack_1b0[(uint)bVar9 * -2 + 6];
        auStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             auStack_1b0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        local_1b4 = local_1b4 ^ 0x80000000;
        (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x2c))(this_ptr,&local_1b4,0x3f800000);
      }
    }
  }
  core_charactr_cpp_FUN_00424470((CCharacter *)this_ptr);
  iVar2 = core_motion_cpp_FUN_005035c0(local_18);
  local_1c = *(uint *)(iVar2 + 0x24);
  if (((local_1c == 0xc) || (local_1c == 0)) && (*(int *)&this_ptr->field_0xdc == 0))
  goto LAB_004f171f;
  core_charactr_cpp_FUN_00423a10(this_ptr,delta_time);
  local_190 = *(float *)&this_ptr->field_0x2588 * delta_time;
  local_18c[0] = *(float *)&this_ptr->field_0x258c * delta_time;
  local_18c[1] = *(float *)&this_ptr->field_0x2590 * delta_time;
  local_70 = local_190;
  local_6c[(uint)bVar9 * -2] = local_18c[(uint)bVar9 * -2];
  local_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       local_18c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  local_1d8 = local_70 + *(float *)&this_ptr->field_0x257c;
  local_1d4[0] = local_6c[0] + *(float *)&this_ptr->field_0x2580;
  local_1d4[1] = local_6c[1] + *(float *)&this_ptr->field_0x2584;
  local_178 = local_1d8;
  local_174[(uint)bVar9 * -2] = local_1d4[(uint)bVar9 * -2];
  local_174[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       local_1d4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  if (local_1c < 3) {
    if (local_1c == 0) {
      bVar8 = true;
LAB_004f16d7:
      if (!bVar8) {
LAB_004f16d9:
        local_178 = local_178 + *(float *)&this_ptr->field_0x2508;
        local_174[0] = local_174[0] + *(float *)&this_ptr->field_0x250c;
        local_174[1] = local_174[1] + *(float *)&this_ptr->field_0x2510;
      }
    }
  }
  else if (3 < local_1c) {
    if (local_1c < 0x11) {
      bVar8 = local_1c == 0x10;
      goto LAB_004f16d7;
    }
    if (0x11 < local_1c) {
      if (local_1c < 0x14) goto LAB_004f16d9;
      if (0x14 < local_1c) {
        bVar8 = local_1c == 0x15;
        goto LAB_004f16d7;
      }
    }
  }
  core_charactr_cpp_FUN_00423a60((CCharacter *)this_ptr,(CVector3f *)&local_178);
LAB_004f171f:
  this_ptr_00 = &this_ptr->field_0x2b4;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00
            ((CDeformableModelInstance *)this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_00546ae0
            ((CDeformableModelInstance *)this_ptr_00);
  core_cloth_cpp_CCloth_process_FUN_005afdf0
            ((CCloth *)&this_ptr->field_0x10bc0,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,delta_time,*(float *)&this_ptr->field_0x2574,
             (CDeformableModelInstance *)this_ptr_00);
  return;
}
