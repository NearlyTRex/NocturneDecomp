// Name: core_mimic.cpp_FUN_0050fba0
// Address: 0050fba0
// Address Range: [[0050fba0, 00510525]]
// Convention: __cdecl
// Signature: void __cdecl core_mimic_cpp_FUN_0050fba0(CMimic *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mimic_cpp_FUN_0050fba0(CMimic *this_ptr,float delta_time)

{
  byte *this_ptr_00;
  uint uVar1;
  SMotion *pSVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  float *pfVar6;
  uint *puVar7;
  float *pfVar8;
  bool bVar9;
  byte bVar10;
  float afStackY_11d8 [15];
  uint auStackY_119c [9];
  float afStackY_1178 [66];
  uint auStackY_1070 [6];
  float afStackY_1058 [3];
  uint auStackY_104c [862];
  CMimic *this_ptr_01;
  CMotionController *pCVar11;
  CDemonSet *this_ptr_02;
  CVector3f *pCVar12;
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
  
  bVar10 = 0;
  core_skeleton_cpp_FUN_00569040(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x158,0);
  pfVar6 = local_174 + 2;
  uVar1 = *(uint *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_174[2] = local_b4[2];
  local_174[(uint)bVar10 * -2 + 3] = local_b4[(uint)bVar10 * -2 + 3];
  local_174[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
       local_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
  core_actor_cpp_FUN_00408b40(uVar1,pfVar6);
  iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
  local_1e4._0_4_ = local_1f0._0_4_;
  *(uint *)((int)&local_1e4 + (uint)bVar10 * -8 + 4) =
       *(uint *)((int)&local_1f0 + (uint)bVar10 * -8 + 4);
  *(uint *)((int)&local_1e4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
       *(uint *)((int)&local_1f0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
  local_1e4._4_4_ = *(uint *)(iVar3 + 0x24);
  core_actor_cpp_FUN_00408bb0(this_ptr,&local_1e4);
  afStack_1c8[2] = local_10c;
  afStack_1c8[(uint)bVar10 * -2 + 3] = afStack_108[(uint)bVar10 * -2];
  afStack_1c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
       afStack_108[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  local_d0 = afStack_1c8[2];
  local_cc = 0.0;
  local_c8 = local_1b8;
  local_20 = (CMotionController *)&this_ptr->field_0x158;
  local_24 = -1.0;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(local_20);
  uVar4 = *(uint *)(pSVar2 + 0x24);
  if (uVar4 < 2) {
    if (uVar4 == 0) {
      iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
      if (((iVar3 == 0) && (*(int *)&g_CGamePtr->field_0x1f0 == 0)) &&
         (ABS(*(float *)&this_ptr->field_0x24 -
              *(float *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x24)) <= (float)_DAT_005e89e0))
      {
        core_vecdir_cpp_FUN_005a7520(auStack_e4 + 5);
        auStack_1b0[2] = local_88;
        auStack_1b0[(uint)bVar10 * -2 + 3] = auStack_84[(uint)bVar10 * -2];
        auStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             auStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        local_14 = (float)core_actor_cpp_FUN_0040cd60(auStack_1b0[3]);
        if (SQRT(local_c8 * local_c8 + local_d0 * local_d0 + local_cc * local_cc) <
            (1.0 - ABS(local_14) * (float)_DAT_005e89e8) * (float)_DAT_005e89f0 +
            (float)_DAT_005e89f8) {
          core_skeleton_cpp_FUN_00568e30(local_20,_DAT_01d22424);
          afStack_108[4] = 0.3;
          puVar5 = local_250;
          puVar7 = local_280;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar7 = *puVar5;
            puVar5 = puVar5 + (uint)bVar10 * -2 + 1;
            puVar7 = puVar7 + (uint)bVar10 * -2 + 1;
          }
          afStack_108[3] = 0.7;
          afStack_108[2] = 0.0;
          core_xform_cpp_FUN_005b5080(afStack_108 + 2,local_280);
          puVar5 = &local_130;
          local_130 = local_18c[2];
          afStack_12c[(uint)bVar10 * -2] = local_18c[(uint)bVar10 * -2 + 3];
          afStack_12c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
               local_18c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
          core_actor_cpp_FUN_00408b40(this_ptr,puVar5);
          pCVar12 = &local_1e4;
          start_pos = &local_118;
          local_118._0_4_ = local_a0._0_4_;
          *(uint *)((int)&local_118 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)&local_a0 + (uint)bVar10 * -8 + 4);
          this_ptr_02 = g_CDemonSetPtr;
          *(uint *)((int)&local_118 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
               *(uint *)((int)&local_a0 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
          iVar3 = core_setcolid_cpp_CDemonSet_testVoxelRaycast_FUN_005572e0
                            (this_ptr_02,start_pos,pCVar12);
          if (iVar3 == 0) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(local_20,2,1);
            (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                      (this_ptr,"gh-alrt[1,4].wav");
          }
        }
      }
      goto LAB_0050fccf;
    }
LAB_0050fc98:
    iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x154) + 0x10c))(iVar3);
    if ((iVar3 != 0) || (*(int *)&g_CGamePtr->field_0x1f0 != 0)) {
      iVar3 = 0;
      goto LAB_0050fcc0;
    }
    core_actor_cpp_FUN_00408bb0(*(uint *)&this_ptr->field_0x46e64,&this_ptr->field_0x20);
    local_148 = local_160;
    local_174[(uint)bVar10 * -2 + 0xc] = local_174[(uint)bVar10 * -2 + 6];
    local_174[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
         local_174[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
    (**(code **)(*(int *)&this_ptr->field_0x154 + 0x1c))(this_ptr);
    pfVar6 = local_220;
    pfVar8 = &local_208;
    for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + (uint)bVar10 * -2 + 1;
      pfVar8 = pfVar8 + (uint)bVar10 * -2 + 1;
    }
    local_b8 = local_1fc - local_208;
    local_b4[0] = local_1f8 - local_204;
    local_b4[1] = local_1f4 - local_200;
    local_154 = local_1fc - local_208;
    local_174[(uint)bVar10 * -2 + 9] = local_b4[(uint)bVar10 * -2];
    local_174[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
         local_b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    local_150 = 0;
    if (-local_140 <= SQRT(local_14c * local_14c + local_154 * local_154)) {
      pCVar11 = (CMotionController *)&this_ptr->field_0x158;
      local_14 = (float)core_motion_cpp_FUN_00524a40(pCVar11,1);
      *(float *)&this_ptr->field_0x2524 = local_14 * _DAT_005e89d0;
      local_14 = (float)core_motion_cpp_FUN_00524a40(pCVar11,2);
      *(float *)&this_ptr->field_0x2524 =
           local_14 * _DAT_005e89d4 + *(float *)&this_ptr->field_0x2524;
      *(float *)&this_ptr->field_0x2524 =
           *(float *)&this_ptr->field_0xc1d0 * delta_time * *(float *)&this_ptr->field_0x2524;
      core_charactr_cpp_FUN_00435320(this_ptr,delta_time * *(float *)&this_ptr->field_0xc1d0);
      local_58._8_4_ = 0x40200000;
      iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      local_58._0_4_ = 0;
      local_58._4_4_ = 0;
      iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                        ((CCharacter *)this_ptr,(CVector3f *)(iVar3 + 0x20),
                         (CPathMap *)(iVar3 + 0xc208),(CVector3f *)local_58,1.0,0.17453292);
      if (iVar3 < 0) {
        iVar3 = 0;
      }
      else {
        if (0 < iVar3) {
          core_mimic_cpp_CMimic_beginMorph_FUN_00510b00(this_ptr);
          goto LAB_0050fccf;
        }
        if (ABS(*(float *)&this_ptr->field_0x2508) /
            (delta_time * *(float *)&this_ptr->field_0xc1d0) <= (float)_DAT_005e89d8) {
          iVar3 = 2;
        }
        else {
          iVar3 = 1;
        }
      }
      goto LAB_0050fcc7;
    }
    core_mimic_cpp_CMimic_beginMorph_FUN_00510b00(this_ptr);
  }
  else {
    if (uVar4 < 3) goto LAB_0050fc98;
    if (0xb < uVar4) {
      if (0xc < uVar4) {
        if (uVar4 != 0x13) goto LAB_0051029c;
        if (*(int *)(*(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4) + 0x26fc) == 0) {
          local_28 = core_motion_cpp_FUN_00525020(local_20);
          pCVar11 = local_20;
          local_40 = (double)local_28;
          local_14 = local_28;
          if (local_28 <= (float)_DAT_005e89c8) {
            local_24 = 0x40200000;
            if (1.0 <= local_40) {
              local_34 = (float)core_actor_cpp_FUN_0040cc00(0x40e00000,0x41700000);
              local_14 = local_34;
              core_skeleton_cpp_FUN_00569130(pCVar11,_DAT_01d22444);
              local_64 = auStack_84[2];
              auStack_60[(uint)bVar10 * -2] = auStack_84[(uint)bVar10 * -2 + 3];
              auStack_60[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
                   auStack_84[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
              local_64 = local_64 ^ 0x80000000;
              core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(local_2bc);
              local_2b8 = local_34;
              damage_info = local_2bc;
              radius = 0.2;
              local_288 = this_ptr;
              local_284 = this_ptr;
              core_actor_cpp_FUN_00408b40(this_ptr,&local_64);
              pCVar12 = &local_94;
              local_94._0_4_ = local_13c._0_4_;
              *(uint *)((int)&local_94 + (uint)bVar10 * -8 + 4) =
                   *(uint *)((int)&local_13c + (uint)bVar10 * -8 + 4);
              this_ptr_01 = this_ptr;
              *(uint *)((int)&local_94 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
                   *(uint *)((int)&local_13c + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
              iVar3 = core_enemy_cpp_FUN_004a0770((CEnemy *)this_ptr_01,pCVar12,radius,damage_info);
              if (iVar3 != 0) {
                (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                          (this_ptr,"gh-hits[1,4].wav");
              }
            }
          }
          goto LAB_0050fccf;
        }
        iVar3 = 0;
        pCVar11 = local_20;
        goto LAB_0050fcc7;
      }
      if ((*(int *)&this_ptr->field_0xc1d4 == 0) && (*(int *)&this_ptr->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_00569040(local_20,0);
        puVar5 = &local_e8;
        local_e8 = auStack_e4[2];
        auStack_e4[(uint)bVar10 * -2] = auStack_e4[(uint)bVar10 * -2 + 3];
        auStack_e4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             auStack_e4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        core_actor_cpp_FUN_00408b40(this_ptr,puVar5);
        blood_type = BLOOD_TYPE_RED;
        local_f4._0_4_ = local_c4._0_4_;
        *(uint *)((int)&local_f4 + (uint)bVar10 * -8 + 4) =
             *(uint *)((int)&local_c4 + (uint)bVar10 * -8 + 4);
        *(uint *)((int)&local_f4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             *(uint *)((int)&local_c4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8);
        core_gore_cpp_CGore_createBloodPool_FUN_004e62e0(g_CGorePtr,&local_f4,blood_type);
        *(uint *)&this_ptr->field_0xc1d4 = 1;
      }
      goto LAB_0050fccf;
    }
LAB_0051029c:
    iVar3 = 2;
LAB_0050fcc0:
    pCVar11 = (CMotionController *)&this_ptr->field_0x158;
LAB_0050fcc7:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCVar11,iVar3,1);
  }
LAB_0050fccf:
  if (0.0 <= local_24) {
    *(float *)&this_ptr->field_0x2524 = *(float *)&this_ptr->field_0xc1d0 * delta_time;
    core_charactr_cpp_FUN_00435320(this_ptr,delta_time * *(float *)&this_ptr->field_0xc1d0);
    local_4c._8_4_ = local_24;
    iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
    local_4c._0_4_ = 0;
    local_4c._4_4_ = 0;
    iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                      ((CCharacter *)this_ptr,(CVector3f *)(iVar3 + 0x20),
                       (CPathMap *)(iVar3 + 0xc208),(CVector3f *)local_4c,3.0,0.5235988);
    if (iVar3 != 1) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&this_ptr->field_0x158,2,1);
    }
  }
  local_18 = (CMotionController *)&this_ptr->field_0x158;
  local_2c = delta_time * *(float *)&this_ptr->field_0xc1d0;
  while (pCVar11 = local_18, 0.0 < local_2c) {
    uVar4 = core_motion_cpp_CMotionController_advance_FUN_00524270(local_18,&local_2c);
    if (uVar4 != 0) {
      if (uVar4 < 2) {
        if (*(int *)&this_ptr->field_0x2500 != 0) {
          core_skeleton_cpp_FUN_00569040(local_18,_DAT_01d22440);
          afStack_12c[2] = (float)local_1cc;
          afStack_12c[(uint)bVar10 * -2 + 3] = afStack_1c8[(uint)bVar10 * -2];
          afStack_12c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
               afStack_1c8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
          afStack_12c[2] = -afStack_12c[2];
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x24))(this_ptr,afStack_12c + 2,0x3f800000);
        }
      }
      else if ((uVar4 == 7) && (*(int *)&this_ptr->field_0x2500 != 0)) {
        core_skeleton_cpp_FUN_00569040(pCVar11,_DAT_01d22444);
        local_1b4 = local_19c;
        auStack_1b0[(uint)bVar10 * -2] = auStack_1b0[(uint)bVar10 * -2 + 6];
        auStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
             auStack_1b0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
        local_1b4 = local_1b4 ^ 0x80000000;
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x24))(this_ptr,&local_1b4,0x3f800000);
      }
    }
  }
  core_charactr_cpp_FUN_0042e160((CCharacter *)this_ptr);
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(local_18);
  local_1c = *(uint *)(pSVar2 + 0x24);
  if (((local_1c == 0xc) || (local_1c == 0)) && (*(int *)&this_ptr->field_0xdc == 0))
  goto LAB_005104af;
  core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
  local_190 = *(float *)&this_ptr->field_0x2518 * delta_time;
  local_18c[0] = *(float *)&this_ptr->field_0x251c * delta_time;
  local_18c[1] = *(float *)&this_ptr->field_0x2520 * delta_time;
  local_70 = local_190;
  local_6c[(uint)bVar10 * -2] = local_18c[(uint)bVar10 * -2];
  local_6c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       local_18c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  local_1d8 = local_70 + *(float *)&this_ptr->field_0x250c;
  local_1d4[0] = local_6c[0] + *(float *)&this_ptr->field_0x2510;
  local_1d4[1] = local_6c[1] + *(float *)&this_ptr->field_0x2514;
  local_178 = local_1d8;
  local_174[(uint)bVar10 * -2] = local_1d4[(uint)bVar10 * -2];
  local_174[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
       local_1d4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
  if (local_1c < 3) {
    if (local_1c == 0) {
      bVar9 = true;
LAB_00510467:
      if (!bVar9) {
LAB_00510469:
        local_178 = local_178 + *(float *)&this_ptr->field_0x249c;
        local_174[0] = local_174[0] + *(float *)&this_ptr->field_0x24a0;
        local_174[1] = local_174[1] + *(float *)&this_ptr->field_0x24a4;
      }
    }
  }
  else if (3 < local_1c) {
    if (local_1c < 0x11) {
      bVar9 = local_1c == 0x10;
      goto LAB_00510467;
    }
    if (0x11 < local_1c) {
      if (local_1c < 0x14) goto LAB_00510469;
      if (0x14 < local_1c) {
        bVar9 = local_1c == 0x15;
        goto LAB_00510467;
      }
    }
  }
  core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,(CVector3f *)&local_178);
LAB_005104af:
  this_ptr_00 = &this_ptr->field_0x158;
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)this_ptr_00);
  core_skeleton_cpp_FUN_00569180((CDeformableModelInstance *)this_ptr_00);
  core_cloth_cpp_CCloth_process_FUN_00440610
            ((CCloth *)&this_ptr->field_0xc330,(CVector3f *)&this_ptr->field_0x20,
             (CVector3f *)&this_ptr->field_0x30,delta_time,*(float *)&this_ptr->field_0x2504,
             (CDeformableModelInstance *)this_ptr_00);
  return;
}
