// Name: core_shotgun.cpp_CShadowsc_process_FUN_00546400
// Address: 00546400
// Address Range: [[00546400, 00546d43]]
// Convention: __cdecl
// Signature: void __cdecl core_shotgun_cpp_CShadowsc_process_FUN_00546400(CShadowsc *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_shotgun_cpp_CShadowsc_process_FUN_00546400(CShadowsc *this_ptr,float delta_time)

{
  uint uVar1;
  int iVar2;
  SMotion *pSVar3;
  CShadowsc *pCVar4;
  uint uVar5;
  CPathMap *path_map;
  byte bVar6;
  float afStackY_1130 [997];
  float *pfVar7;
  uint *puVar8;
  CGore *this_ptr_00;
  CMotionController *pCVar9;
  CVector3f *pCVar10;
  float min_distance;
  int iVar11;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo aSStack_184 [4];
  float fStack_180;
  CShadowsc *pCStack_150;
  CShadowsc *pCStack_14c;
  uint uStack_148;
  float afStack_144 [5];
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  uint auStack_124 [3];
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  uint uStack_e8;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  uint uStack_d0;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint auStack_b8 [3];
  uint uStack_ac;
  uint uStack_a0;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  uint uStack_64;
  float afStack_60 [5];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  float fStack_20;
  CMotionController *pCStack_1c;
  float fStack_18;
  byte *puStack_14;
  
  bVar6 = 0;
  iVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x148))(this_ptr,delta_time);
  if (iVar2 == 0) {
    return;
  }
  core_charactr_cpp_FUN_00433c60(this_ptr,delta_time);
  core_charactr_cpp_FUN_00432330(this_ptr,delta_time,*(int *)&this_ptr->field_0xcdd0 == 1);
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  fStack_2c = delta_time * *(float *)&this_ptr->field_0xcdcc * *(float *)&this_ptr->field_0xd068;
  while (0.0 < fStack_2c) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&this_ptr->field_0x158,afStack_60 + 0xd);
    core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,iVar2);
  }
  pCStack_1c = (CMotionController *)&this_ptr->field_0x158;
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_1c);
  iStack_24 = *(int *)(pSVar3 + 0x24);
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00434850(this_ptr,delta_time * *(float *)&this_ptr->field_0xcdcc);
  iVar2 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar2 == 0) {
    switch(iStack_24) {
    case 1:
      iVar2 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0((CEnemy *)this_ptr,delta_time);
      pCVar9 = pCStack_1c;
      if (iVar2 == 0) {
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
        iVar2 = *(int *)&this_ptr->field_0xcde4;
        if (iVar2 != 0) {
          fStack_94 = *(float *)(iVar2 + 0x20) - *(float *)&this_ptr->field_0x20;
          fStack_90 = *(float *)(iVar2 + 0x24) - *(float *)&this_ptr->field_0x24;
          fStack_8c = *(float *)(iVar2 + 0x28) - *(float *)&this_ptr->field_0x28;
          fStack_130 = fStack_94;
          afStack_144[(uint)bVar6 * -2 + 6] = afStack_144[(uint)bVar6 * -2 + 0x2d];
          afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
               afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2e];
          fStack_34 = fStack_128 * fStack_128 + fStack_130 * fStack_130 + fStack_12c * fStack_12c;
          fStack_30 = (float)(((int)fStack_34 >> 1) + _DAT_01d1a0a4);
          if (fStack_30 < _DAT_005e4358) {
            iVar11 = 1;
            iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
          }
          else {
            iVar11 = 1;
            iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
          }
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (pCStack_1c,iVar2 + 2,iVar11);
          iVar2 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                            (0x02CF5680,*(uint *)&this_ptr->field_0xd064);
          if (iVar2 == 0) {
            uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"dog5.wav");
            *(uint *)&this_ptr->field_0xd064 = uVar5;
          }
        }
      }
      else {
        puStack_14 = (byte *)core_motion_cpp_FUN_004fc930(pCStack_1c);
        if ((float)_DAT_005d14de < (float)puStack_14) {
          iVar11 = 1;
          iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCVar9,iVar2 + 2,iVar11);
        }
      }
      break;
    case 2:
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
      iVar2 = *(int *)&this_ptr->field_0xcde4;
      if (iVar2 == 0) {
        iVar2 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0((CEnemy *)this_ptr,delta_time);
        if (iVar2 == 0) {
          iVar11 = 1;
          iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    (pCStack_1c,iVar2 + 1,iVar11);
        }
        else {
          puStack_14 = (byte *)core_motion_cpp_FUN_004fc930(pCStack_1c);
          if ((float)_DAT_005d14de < (float)puStack_14) {
            iVar11 = 1;
            iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      (pCStack_1c,iVar2 + 2,iVar11);
          }
        }
        break;
      }
      fStack_118 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar2 + 0x20);
      fStack_114 = *(float *)&this_ptr->field_0x24 - *(float *)(iVar2 + 0x24);
      fStack_110 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar2 + 0x28);
      fStack_100 = fStack_118;
      afStack_144[(uint)bVar6 * -2 + 0x12] = afStack_144[(uint)bVar6 * -2 + 0xc];
      pCVar9 = pCStack_1c;
      afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
           afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
      fStack_28 = SQRT(fStack_f8 * fStack_f8 + fStack_100 * fStack_100 + fStack_fc * fStack_fc);
      fStack_20 = fStack_28;
      if ((_DAT_005e4358 < fStack_28) && (iStack_24 == 2)) {
        if (*(float *)&this_ptr->field_0xcde0 <= (float)_DAT_005d14d6) {
          puStack_14 = (byte *)core_motion_cpp_FUN_004fc930(pCStack_1c);
          if ((float)_DAT_005d14de < (float)puStack_14) {
            iVar11 = 1;
            iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
            goto LAB_00546b5f;
          }
        }
        else {
          puStack_14 = (byte *)core_motion_cpp_FUN_004fc930(pCStack_1c);
          if ((float)_DAT_005d14de < (float)puStack_14) {
            iVar11 = 1;
            iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
            pCVar9 = pCStack_1c;
LAB_00546b5f:
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCVar9,iVar2 + 2,iVar11);
          }
        }
      }
      if (((_DAT_005d14e6 < fStack_20) && (fStack_20 < _DAT_005d14ea)) &&
         (iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,10), iVar2 == 5)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&this_ptr->field_0x158,3,1);
        *(uint *)&this_ptr->field_0xcde0 = 0x40200000;
      }
      CStack_70.z = 0x41000000;
      max_distance = 0.17453292;
      fStack_18 = 0x41000000;
      min_distance = 0.5;
      *(uint *)&this_ptr->field_0x24a4 = 0;
      *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
      *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
      CStack_70.x = 0.0;
      pCVar10 = &CStack_70;
      CStack_70.y = 0.0;
      path_map = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0xc4))
                           (*(int *)&this_ptr->field_0xcde4);
      iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)this_ptr,
                         (CVector3f *)(*(int *)&this_ptr->field_0xcde4 + 0x20),path_map,pCVar10,
                         min_distance,max_distance);
      if (iVar2 < 0) {
        engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&this_ptr->field_0x158,1,1);
      }
      else if ((0 < iVar2) && (*(float *)&this_ptr->field_0xcde0 <= 0.0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&this_ptr->field_0x158,3,1);
        *(uint *)&this_ptr->field_0xcde0 = 0x40200000;
      }
      break;
    case 3:
    case 4:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_184);
      fStack_180 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(15.0,35.0);
      pCStack_150 = this_ptr;
      pCStack_14c = this_ptr;
      puStack_14 = &this_ptr->field_0xfd8;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,puStack_14 + *(int *)&this_ptr->field_0xd05c * 0x30,0x3fd9999a,
                 aSStack_184);
      pfVar7 = afStack_144 + 2;
      afStack_144[2] = (float)uStack_e8;
      afStack_144[(uint)bVar6 * -2 + 3] = afStack_144[(uint)bVar6 * -2 + 0x18];
      afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
      core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
      puVar8 = &uStack_148;
      uStack_148 = uStack_d0;
      afStack_144[(uint)bVar6 * -2] = afStack_144[(uint)bVar6 * -2 + 0x1e];
      pCVar4 = this_ptr;
      afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1f];
      core_enemy_cpp_FUN_004893f0(pCVar4,puVar8);
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,puStack_14 + *(int *)&this_ptr->field_0xd060 * 0x30,0x3fd9999a,
                 aSStack_184);
      pfVar7 = afStack_144 + 8;
      auStack_124[0] = uStack_ac;
      afStack_144[(uint)bVar6 * -2 + 9] = afStack_144[(uint)bVar6 * -2 + 0x27];
      afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
           afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x28];
      core_actor_cpp_FUN_00408b80(this_ptr,pfVar7);
      pfVar7 = afStack_144 + 0x23;
      auStack_b8[0] = uStack_a0;
      afStack_144[(uint)bVar6 * -2 + 0x24] = afStack_144[(uint)bVar6 * -2 + 0x2a];
      pCVar4 = this_ptr;
      afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x25] =
           afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x2b];
      core_enemy_cpp_FUN_004893f0(pCVar4,pfVar7);
      iVar2 = core_sound_cpp_CSound_isSoundPlaying_FUN_00560af0
                        (0x02CF5680,*(uint *)&this_ptr->field_0xd064);
      if (iVar2 == 0) {
        uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"dog5.wav");
        *(uint *)&this_ptr->field_0xd064 = uVar5;
      }
      break;
    case 7:
      if ((*(int *)&this_ptr->field_0xcdd0 == 0) && (*(int *)&this_ptr->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_0054dbd0(pCStack_1c,0);
        puVar8 = &uStack_64;
        uStack_64 = afStack_60[2];
        afStack_60[(uint)bVar6 * -2] = afStack_60[(uint)bVar6 * -2 + 3];
        afStack_60[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_60[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        core_actor_cpp_FUN_00408b80(this_ptr,puVar8);
        blood_type = BLOOD_TYPE_RED;
        pCVar10 = &CStack_88;
        CStack_88.x = fStack_10c;
        *(float *)((int)&CStack_88 + (uint)bVar6 * -8 + 4) = afStack_144[(uint)bVar6 * -2 + 0xf];
        this_ptr_00 = g_CGorePtr;
        *(float *)((int)&CStack_88 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
        core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_00,pCVar10,blood_type);
        *(uint *)&this_ptr->field_0xcdd0 = 1;
      }
    }
    goto switchD_00546d3d_caseD_5;
  }
  uVar1 = *(uint *)&this_ptr->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_0054652d:
      puStack_14 = (byte *)
                   core_motion_cpp_FUN_004fc930((CMotionController *)&this_ptr->field_0x158);
      if ((float)puStack_14 <= (float)_DAT_005d14de) goto LAB_0054656e;
      iVar11 = 1;
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
      iVar2 = iVar2 + 2;
    }
    else {
LAB_00546726:
      puStack_14 = (byte *)
                   core_motion_cpp_FUN_004fc930((CMotionController *)&this_ptr->field_0x158);
      if ((float)puStack_14 <= (float)_DAT_005d14de) goto LAB_0054656e;
      iVar11 = 1;
      iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,0);
      iVar2 = iVar2 + 1;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&this_ptr->field_0x158,iVar2,iVar11);
  }
  else {
    if (uVar1 < 3) goto LAB_0054652d;
    if (uVar1 != 3) goto LAB_00546726;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,1,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
LAB_0054656e:
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
switchD_00546d3d_caseD_5:
  if (0.0 < *(float *)&this_ptr->field_0xcde0) {
    *(float *)&this_ptr->field_0xcde0 = *(float *)&this_ptr->field_0xcde0 - delta_time;
  }
  iVar2 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if (iVar2 != 0) {
    iVar2 = *(int *)&this_ptr->field_0xcde4;
    if ((iVar2 != 0) &&
       (pCVar4 = (CShadowsc *)(**(code **)(*(int *)(iVar2 + 0x154) + 0xf4))(iVar2),
       pCVar4 == this_ptr)) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->field_0xcde4);
    }
    core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
    fStack_f4 = *(float *)&this_ptr->field_0x2518 * delta_time;
    fStack_f0 = *(float *)&this_ptr->field_0x251c * delta_time;
    fStack_ec = *(float *)&this_ptr->field_0x2520 * delta_time;
    fStack_c4 = fStack_f4;
    afStack_144[(uint)bVar6 * -2 + 0x21] = afStack_144[(uint)bVar6 * -2 + 0x15];
    afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x22] =
         afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
    fStack_4c = fStack_c4 + *(float *)&this_ptr->field_0x250c;
    fStack_48 = fStack_c0 + *(float *)&this_ptr->field_0x2510;
    fStack_44 = fStack_bc + *(float *)&this_ptr->field_0x2514;
    fStack_dc = fStack_4c;
    afStack_144[(uint)bVar6 * -2 + 0x1b] = afStack_60[(uint)bVar6 * -2 + 6];
    afStack_144[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c] =
         afStack_60[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
    fStack_40 = fStack_dc + *(float *)&this_ptr->field_0x249c;
    fStack_3c = fStack_d8 + *(float *)&this_ptr->field_0x24a0;
    fStack_38 = fStack_d4 + *(float *)&this_ptr->field_0x24a4;
    CStack_7c.x = fStack_40;
    *(float *)((int)&CStack_7c + (uint)bVar6 * -8 + 4) = afStack_60[(uint)bVar6 * -2 + 9];
    *(float *)((int)&CStack_7c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         afStack_60[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    *(uint *)&this_ptr->field_0x2514 = 0;
    *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
    core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_7c);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  return;
}
