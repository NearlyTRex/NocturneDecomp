// Name: core_hotdemon.cpp_FUN_004d56b0
// Address: 004d56b0
// Address Range: [[004d56b0, 004d5f04]]
// Convention: unknown
// Signature: void core_hotdemon_cpp_FUN_004d56b0(CEnemy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hotdemon_cpp_FUN_004d56b0(CEnemy *param_1,float param_2)

{
  byte *this_ptr;
  uint uVar1;
  int iVar2;
  SMotion *pSVar3;
  int iVar4;
  CPathMap *path_map;
  uint uVar5;
  byte bVar6;
  float afStackY_114c [997];
  CEnemy *pCVar7;
  float *pfVar8;
  CVector3f *direction;
  float fVar9;
  EBloodType blood_type;
  float max_distance;
  SDamageInfo aSStack_1a0 [4];
  uint uStack_19c;
  CEnemy *pCStack_16c;
  CEnemy *pCStack_168;
  uint uStack_164;
  float afStack_160 [5];
  byte auStack_14c [12];
  float fStack_140;
  float afStack_13c [5];
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  float fStack_118;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float afStack_f8 [3];
  float afStack_ec [3];
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float afStack_c4 [2];
  CVector3f CStack_bc;
  uint uStack_b0;
  float afStack_ac [5];
  uint uStack_98;
  CVector3f CStack_8c;
  uint uStack_80;
  float afStack_7c [4];
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint uStack_50;
  uint uStack_44;
  float fStack_40;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CMotionController *pCStack_20;
  CMotionController *pCStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar2 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))(param_1,param_2);
  if (iVar2 == 0) {
    return;
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_34 = param_2 * *(float *)&param_1->field_0xcdcc;
  this_ptr = &param_1->field_0x158;
  while (0.0 < fStack_34) {
    iVar2 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)this_ptr,afStack_7c + 0x12);
    core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,iVar2);
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850(param_1,param_2 * *(float *)&param_1->field_0xcdcc);
  pSVar3 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)this_ptr);
  iVar2 = *(int *)(pSVar3 + 0x24);
  iStack_18 = iVar2;
  iVar4 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
  if (iVar4 == 0) {
    switch(iVar2) {
    case 0:
    case 6:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      iVar2 = *(int *)&param_1->field_0xcde4;
      pCStack_20 = (CMotionController *)&param_1->field_0x158;
      if (iVar2 == 0) {
        iVar2 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
        if (iVar2 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,1,1);
        }
      }
      else {
        afStack_7c[2] = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
        afStack_7c[3] = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
        fStack_6c = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
        fStack_128 = afStack_7c[2];
        afStack_13c[(uint)bVar6 * -2 + 6] = afStack_7c[(uint)bVar6 * -2 + 3];
        afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
             afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        fStack_38 = SQRT(fStack_120 * fStack_120 + fStack_128 * fStack_128 + fStack_124 * fStack_124
                        );
        fStack_28 = fStack_38;
        if (fStack_38 < 0x40000000) {
          core_vecdir_cpp_FUN_00576250(afStack_13c + 5);
          uStack_44 = uStack_80;
          afStack_7c[(uint)bVar6 * -2 + 0xf] = afStack_7c[(uint)bVar6 * -2];
          afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
               afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          fStack_14 = (float)core_actor_cpp_FUN_0040cfa0(fStack_40 - *(float *)&param_1->field_0x34)
          ;
          if (ABS(fStack_14) < (float)_DAT_005c53d1) {
            if (iStack_18 == 0) {
              iVar2 = 2;
            }
            else {
              iVar2 = 8;
            }
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_20,iVar2,1);
            iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(param_1 + 1));
            if (iVar2 == 0) {
              uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                (param_1,"hotdemon-attack.wav");
              *(uint *)(param_1 + 1) = uVar5;
            }
          }
        }
        if (fStack_28 < *(float *)&param_1->field_0xcddc) {
          if (_DAT_005e1908 <= fStack_28) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&param_1->field_0x158,7,1);
            *(uint *)&param_1->field_0xcde0 = 0;
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&param_1->field_0x158,1,1);
            *(uint *)&param_1->field_0xcde0 = 0;
          }
        }
      }
      break;
    case 1:
    case 7:
    case 0xf:
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))(param_1,param_2);
      fVar9 = 0x40000000;
      pCStack_1c = (CMotionController *)&param_1->field_0x158;
      if (*(int *)&param_1->field_0xcde4 == 0) {
        iVar2 = core_enemy_cpp_FUN_00489ff0(param_1,param_2);
        if (iVar2 == 0) {
          if (iStack_18 == 1) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,0,1);
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,6,1);
          }
        }
        else {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,1,1);
        }
      }
      else {
        fStack_2c = 0x40000000;
        *(uint *)&param_1->field_0x24a4 = 0;
        *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
        *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
        auStack_14c._0_4_ = 0;
        auStack_14c._4_4_ = 0;
        max_distance = 0.17453292;
        auStack_14c._8_4_ = fVar9;
        direction = (CVector3f *)auStack_14c;
        fVar9 = 0.5;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))
                             (*(int *)&param_1->field_0xcde4);
        iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)param_1,
                           (CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),path_map,direction,
                           fVar9,max_distance);
        if (-1 < iVar2) {
          iVar2 = *(int *)&param_1->field_0xcde4;
          fStack_104 = *(float *)&param_1->field_0x20 - *(float *)(iVar2 + 0x20);
          fStack_100 = *(float *)&param_1->field_0x24 - *(float *)(iVar2 + 0x24);
          fStack_fc = *(float *)&param_1->field_0x28 - *(float *)(iVar2 + 0x28);
          afStack_13c[2] = fStack_104;
          afStack_13c[(uint)bVar6 * -2 + 3] = afStack_13c[(uint)bVar6 * -2 + 0xf];
          afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
               afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
          fStack_24 = SQRT(afStack_13c[4] * afStack_13c[4] + afStack_13c[2] * afStack_13c[2]);
          afStack_13c[3] = 0.0;
          fStack_30 = fStack_24;
          if ((_DAT_005e1908 < fStack_24) && (iStack_18 != 7)) {
            *(uint *)&param_1->field_0xcde0 = 0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_1c,7,1);
          }
          if ((fStack_30 <= fStack_2c) && (*(float *)&param_1->field_0xcde0 <= 0.0)) {
            iVar2 = *(int *)&param_1->field_0xcde4;
            fStack_d4 = *(float *)(iVar2 + 0x20) - *(float *)&param_1->field_0x20;
            fStack_d0 = *(float *)(iVar2 + 0x24) - *(float *)&param_1->field_0x24;
            fStack_cc = *(float *)(iVar2 + 0x28) - *(float *)&param_1->field_0x28;
            afStack_ac[2] = fStack_d4;
            afStack_ac[(uint)bVar6 * -2 + 3] = afStack_13c[(uint)bVar6 * -2 + 0x1b];
            afStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                 afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1c];
            core_vecdir_cpp_FUN_00576250(afStack_ac + 2);
            uStack_11c = uStack_50;
            afStack_13c[(uint)bVar6 * -2 + 9] = afStack_7c[(uint)bVar6 * -2 + 0xc];
            afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
                 afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
            fStack_14 = (float)core_actor_cpp_FUN_0040cfa0
                                         (fStack_118 - *(float *)&param_1->field_0x34);
            if (ABS(fStack_14) < (float)_DAT_005c53d1) {
              if (iStack_18 == 7) {
                iVar2 = 8;
              }
              else {
                iVar2 = 2;
              }
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,iVar2,1);
              iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(param_1 + 1));
              if (iVar2 == 0) {
                uVar5 = (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))
                                  (param_1,"hotdemon-attack.wav");
                *(uint *)(param_1 + 1) = uVar5;
              }
              *(uint *)&param_1->field_0xcde0 = 0x40000000;
            }
          }
          if (*(float *)&param_1->field_0xcddc < fStack_30) {
            if (iStack_18 == 7) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,6,1);
              *(uint *)&param_1->field_0xcde0 = 0;
            }
            else {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,0,1);
              *(uint *)&param_1->field_0xcde0 = 0;
            }
          }
        }
      }
      break;
    case 2:
    case 8:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_1a0);
      uStack_19c = *(uint *)&param_1->field_0xce5c;
      pCStack_16c = param_1;
      pCStack_168 = param_1;
      core_xform_cpp_FUN_00583260
                (&DAT_02cfd900,&param_1->field_0xfd8 + _DAT_01d5baf4 * 0x30,0x3ecccccd,aSStack_1a0);
      pfVar8 = afStack_13c + 0x11;
      afStack_f8[0] = (float)uStack_164;
      afStack_13c[(uint)bVar6 * -2 + 0x12] = afStack_160[(uint)bVar6 * -2];
      afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
           afStack_160[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_actor_cpp_FUN_00408b80(param_1,pfVar8);
      pfVar8 = afStack_13c + 0x14;
      afStack_ec[0] = (float)uStack_b0;
      afStack_13c[(uint)bVar6 * -2 + 0x15] = afStack_ac[(uint)bVar6 * -2];
      pCVar7 = param_1;
      afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16] =
           afStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      core_enemy_cpp_FUN_004893f0(pCVar7,pfVar8);
      break;
    case 5:
    case 0xb:
      if ((*(int *)&param_1->field_0xcdd0 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        core_skeleton_cpp_FUN_0054dbd0(&param_1->field_0x158,0);
        pfVar8 = afStack_160 + 2;
        afStack_160[2] = (float)uStack_98;
        afStack_160[(uint)bVar6 * -2 + 3] = afStack_ac[(uint)bVar6 * -2 + 6];
        afStack_160[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_ac[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        core_actor_cpp_FUN_00408b80(param_1,pfVar8);
        blood_type = BLOOD_TYPE_RED;
        CStack_bc._0_4_ = CStack_8c._0_4_;
        *(uint *)((int)&CStack_bc + (uint)bVar6 * -8 + 4) =
             *(uint *)((int)&CStack_8c + (uint)bVar6 * -8 + 4);
        *(uint *)((int)&CStack_bc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
             *(uint *)((int)&CStack_8c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        core_gore_cpp_FUN_004cec40(g_CGorePtr,&CStack_bc,blood_type);
        *(uint *)&param_1->field_0xcdd0 = 1;
      }
    }
    goto switchD_004d5efe_caseD_3;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_004d5785:
      iVar2 = 1;
    }
    else {
LAB_004d594b:
      iVar2 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,iVar2,1);
  }
  else {
    if (uVar1 < 3) goto LAB_004d5785;
    if (uVar1 != 3) goto LAB_004d594b;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)this_ptr,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_004d5efe_caseD_3:
  if (0.0 < *(float *)&param_1->field_0xcde0) {
    *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
  }
  iVar2 = core_charactr_cpp_FUN_0042ccf0((CCharacter *)param_1);
  if (iVar2 != 0) {
    core_charactr_cpp_FUN_0042c1e0(param_1,param_2);
    fStack_140 = *(float *)&param_1->field_0x2518 * param_2;
    afStack_13c[0] = *(float *)&param_1->field_0x251c * param_2;
    afStack_13c[1] = *(float *)&param_1->field_0x2520 * param_2;
    fStack_68 = fStack_140;
    afStack_7c[(uint)bVar6 * -2 + 6] = afStack_13c[(uint)bVar6 * -2];
    afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
         afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    fStack_110 = fStack_68 + *(float *)&param_1->field_0x250c;
    fStack_10c = fStack_64 + *(float *)&param_1->field_0x2510;
    fStack_108 = fStack_60 + *(float *)&param_1->field_0x2514;
    fStack_5c = fStack_110;
    afStack_7c[(uint)bVar6 * -2 + 9] = afStack_13c[(uint)bVar6 * -2 + 0xc];
    afStack_7c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
         afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
    fStack_e0 = fStack_5c + *(float *)&param_1->field_0x249c;
    fStack_dc = fStack_58 + *(float *)&param_1->field_0x24a0;
    fStack_d8 = fStack_54 + *(float *)&param_1->field_0x24a4;
    fStack_c8 = fStack_e0;
    afStack_c4[(uint)bVar6 * -2] = afStack_13c[(uint)bVar6 * -2 + 0x18];
    afStack_c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         afStack_13c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x19];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
    core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)&fStack_c8);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
  return;
}
