// Name: core_boneguy.cpp_FUN_00419b40
// Address: 00419b40
// Address Range: [[00419b40, 0041a809]]
// Convention: unknown
// Signature: void core_boneguy_cpp_FUN_00419b40(CBoneGuy *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_boneguy_cpp_FUN_00419b40(CBoneGuy *param_1,float param_2)

{
  byte *this_ptr;
  uint uVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  SMotion *pSVar5;
  int iVar6;
  CBoneGuy *pCVar7;
  uint uVar8;
  CPathMap *path_map;
  byte bVar9;
  float afStackY_19a8 [1490];
  CVector3f *direction;
  float fVar10;
  float fVar11;
  SDamageInfo aSStack_244 [4];
  float fStack_240;
  CBoneGuy *pCStack_210;
  CBoneGuy *pCStack_20c;
  SDamageInfo aSStack_208 [4];
  uint uStack_204;
  CBoneGuy *pCStack_1d4;
  CBoneGuy *pCStack_1d0;
  uint uStack_1cc;
  float afStack_1c8 [7];
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_164;
  uint uStack_158;
  uint uStack_14c;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  uint uStack_134;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  uint uStack_11c;
  byte auStack_110 [12];
  float fStack_104;
  float afStack_100 [4];
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float afStack_dc [4];
  float fStack_cc;
  float fStack_c8;
  uint uStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  uint uStack_94;
  uint uStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  uint uStack_74;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_48;
  float fStack_44;
  int iStack_40;
  float fStack_3c;
  byte *puStack_38;
  CMotionController *pCStack_34;
  byte *puStack_30;
  float *pfStack_2c;
  byte *puStack_28;
  int iStack_24;
  float *pfStack_20;
  float fStack_1c;
  float fStack_14;
  
  bVar9 = 0;
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (0x01C6E360,&param_1->field_0xd07c);
  if (iVar3 != 0) {
    *(uint *)&param_1->field_0x2538 = 0;
    *(uint *)&param_1->field_0xcdd0 = 1;
    *(uint *)&param_1->field_0xd694 = 0;
    if (*(int *)&param_1->field_0xd0e4 == 0) {
      core_boneguy_cpp_FUN_00419550(param_1);
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
              ((CMotionController *)&param_1->field_0x158,5,0.0);
  }
  iVar3 = (**(code **)(*(int *)&param_1->field_0x154 + 0x148))();
  if (iVar3 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0xd078);
    return;
  }
  if ((*(int *)&param_1->field_0xd0e4 == 1) && (0.0 < *(float *)&param_1->field_0x2538)) {
    *(float *)&param_1->field_0xd694 = *(float *)&param_1->field_0xd694 + param_2;
    return;
  }
  if (*(int *)&param_1->field_0xd0e4 == 2) {
    fVar10 = param_2 / _DAT_005dc144 + *(float *)&param_1->field_0xd694;
    *(float *)&param_1->field_0xd694 = fVar10;
    if (fVar10 < 1.0) {
      iStack_24 = 0;
      if (*(int *)&param_1->field_0xd0e8 < 1) {
        return;
      }
      puStack_38 = &param_1->field_0xd0f0;
      pfStack_2c = (float *)&param_1->field_0xd694;
      puStack_30 = &param_1->field_0xd108;
      puStack_28 = &param_1->field_0xd118;
      pfStack_20 = (float *)&param_1->field_0xd128;
      do {
        pfVar2 = pfStack_20;
        pfVar4 = (float *)(puStack_38 + iStack_24 * 0x48);
        fStack_54 = pfVar4[0x11];
        fStack_140 = *pfVar4 - *pfStack_20;
        fStack_13c = pfVar4[1] - pfStack_20[1];
        fStack_138 = pfVar4[2] - pfStack_20[2];
        fStack_80 = *pfVar4 - *pfStack_20;
        afStack_dc[(uint)bVar9 * -2 + 0x18] = afStack_1c8[(uint)bVar9 * -2 + 0x23];
        afStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x19] =
             afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x24];
        fStack_128 = fStack_80 * *pfStack_2c;
        fStack_124 = fStack_7c * *pfStack_2c;
        fStack_120 = fStack_78 * *pfStack_2c;
        fStack_1ac = fStack_80 * *pfStack_2c;
        afStack_1c8[(uint)bVar9 * -2 + 8] = afStack_1c8[(uint)bVar9 * -2 + 0x29];
        afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 9] =
             afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2a];
        fStack_8c = *pfVar2 + fStack_1ac;
        fStack_88 = pfVar2[1] + fStack_1a8;
        fStack_84 = pfVar2[2] + fStack_1a4;
        fStack_98 = *pfVar2 + fStack_1ac;
        afStack_dc[(uint)bVar9 * -2 + 0x12] = afStack_dc[(uint)bVar9 * -2 + 0x15];
        afStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x13] =
             afStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x16];
        core_xform_cpp_FUN_00585b20(puStack_30,puStack_28,*(uint *)&param_1->field_0xd694);
        uStack_1cc = afStack_1c8[3];
        afStack_1c8[(uint)bVar9 * -2] = afStack_1c8[(uint)bVar9 * -2 + 4];
        afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 5];
        (afStack_1c8 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
             (afStack_1c8 + (uint)bVar9 * -2 + (uint)bVar9 * -2 + 5)[(uint)bVar9 * -2 + 1];
        core_xform_cpp_FUN_00585de0(&uStack_1cc);
        fStack_17c = fStack_c8;
        afStack_1c8[(uint)bVar9 * -2 + 0x14] = afStack_dc[(uint)bVar9 * -2 + 6];
        afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x15] =
             afStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
        fStack_17c = *(float *)&param_1->field_0xd694 * (float)_DAT_005b7252 + fStack_17c;
        *(float *)((int)fStack_54 + 0x20) = fStack_98;
        *(uint *)((int)fStack_54 + 0x24) = uStack_94;
        *(uint *)((int)fStack_54 + 0x28) = uStack_90;
        if ((float *)((int)fStack_54 + 0x30) != afStack_1c8 + 0x13) {
          *(float *)((int)fStack_54 + 0x30) = fStack_17c;
          *(uint *)((int)fStack_54 + 0x34) = uStack_178;
          *(uint *)((int)fStack_54 + 0x38) = uStack_174;
        }
        if ((float *)((int)fStack_54 + 0xcd0) != &fStack_98) {
          *(float *)((int)fStack_54 + 0xcd0) = fStack_98;
          *(uint *)((int)fStack_54 + 0xcd4) = uStack_94;
          *(uint *)((int)fStack_54 + 0xcd8) = uStack_90;
        }
        if ((float *)((int)fStack_54 + 0xcdc) != afStack_1c8 + 0x13) {
          *(float *)((int)fStack_54 + 0xcdc) = fStack_17c;
          *(uint *)((int)fStack_54 + 0xce0) = uStack_178;
          *(uint *)((int)fStack_54 + 0xce4) = uStack_174;
        }
        iStack_24 = iStack_24 + 1;
        puStack_30 = puStack_30 + 0x48;
        puStack_28 = puStack_28 + 0x48;
        pfStack_20 = pfStack_20 + 0x12;
      } while (iStack_24 < *(int *)&param_1->field_0xd0e8);
      return;
    }
    iVar3 = 0;
    core_skeleton_cpp_FUN_0054e670(&param_1->field_0x158);
    pCVar7 = param_1;
    if (0 < *(int *)&param_1->field_0xd0e8) {
      do {
        core_mission_cpp_FUN_004f6f10(0x01D81080,*(uint *)&pCVar7->field_0xd134,1);
        *(uint *)&pCVar7->field_0xd134 = 0;
        iVar3 = iVar3 + 1;
        pCVar7 = (CBoneGuy *)&pCVar7->field_0x48;
      } while (iVar3 < *(int *)&param_1->field_0xd0e8);
    }
    *(uint *)&param_1->field_0xd0e4 = 0;
    fVar10 = *(float *)&param_1->field_0xd0e0 * (float)_DAT_005b722a;
    *(uint *)&param_1->field_0x2538 = 0x41200000;
    *(float *)&param_1->field_0xd0e0 = fVar10;
    if (fVar10 <= (float)_DAT_005b7232) {
      *(uint *)&param_1->field_0xd0e0 = 0x40200000;
    }
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
  fStack_48 = param_2 * *(float *)&param_1->field_0xcdcc;
  pCStack_34 = (CMotionController *)&param_1->field_0x158;
  while (0.0 < fStack_48) {
    iVar3 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)&param_1->field_0x158,&fStack_48);
    if (iVar3 == 100) {
      iVar3 = *(int *)&param_1->field_0xd064;
      if (iVar3 != 0) {
        *(uint *)&param_1->field_0xd064 = 0;
        core_charactr_cpp_FUN_004319d0(param_1,1,iVar3,0x3e4ccccd,0);
      }
    }
    else {
      core_charactr_cpp_FUN_00433fb0((CCharacter *)param_1,iVar3);
    }
  }
  *(uint *)&param_1->field_0x2524 = *(uint *)&param_1->field_0x24a4;
  core_charactr_cpp_FUN_00434850();
  pSVar5 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(pCStack_34);
  iVar3 = *(int *)(pSVar5 + 0x24);
  iStack_40 = iVar3;
  iVar6 = core_charactr_cpp_FUN_00431660((CCharacter *)param_1,param_2);
  if (iVar6 == 0) {
    switch(iVar3) {
    case 0:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_1a0 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
      fStack_19c = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
      fStack_198 = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
      fStack_b0 = fStack_1a0;
      afStack_dc[(uint)bVar9 * -2 + 0xc] = afStack_1c8[(uint)bVar9 * -2 + 0xb];
      afStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
           afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xc];
      if (0.0 < *(float *)&param_1->field_0xcde0) {
        fStack_60 = fStack_a8 * fStack_a8 + fStack_b0 * fStack_b0 + fStack_ac * fStack_ac;
        fStack_5c = (float)(((int)fStack_60 >> 1) + _DAT_01d1a0a4);
        if (fStack_5c <= 0x40400000 + (float)_DAT_005b724a) break;
      }
      fStack_1c = fStack_a8 * fStack_a8 + fStack_b0 * fStack_b0 + fStack_ac * fStack_ac;
      fStack_58 = (float)(((int)fStack_1c >> 1) + _DAT_01d1a0a4);
      this_ptr = &param_1->field_0x158;
      if (0x40400000 + (float)_DAT_005b724a < fStack_58) {
        iVar3 = core_enemy_cpp_FUN_00489ff0((CEnemy *)param_1,param_2);
        if (iVar3 == 0) {
          (**(code **)(*(int *)&param_1->field_0x154 + 0x144))();
          if (*(int *)&param_1->field_0xcde4 != 0) {
            *(uint *)&param_1->field_0xd690 = 0;
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)this_ptr,1,1);
          }
        }
        else {
          *(uint *)&param_1->field_0xd690 = 0;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)this_ptr,1,1);
        }
      }
      else {
        *(uint *)&param_1->field_0xd690 = 1;
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)this_ptr,6,1);
      }
      break;
    case 1:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_194 = *(float *)&param_1->field_0x20 - *(float *)(iVar3 + 0x20);
      fStack_190 = *(float *)&param_1->field_0x24 - *(float *)(iVar3 + 0x24);
      fStack_18c = *(float *)&param_1->field_0x28 - *(float *)(iVar3 + 0x28);
      fStack_188 = fStack_194;
      afStack_1c8[(uint)bVar9 * -2 + 0x11] = afStack_1c8[(uint)bVar9 * -2 + 0xe];
      afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x12] =
           afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xf];
      fStack_44 = fStack_180 * fStack_180 + fStack_188 * fStack_188 + fStack_184 * fStack_184;
      fStack_50 = (float)(((int)fStack_44 >> 1) + _DAT_01d1a0a4);
      if (((fStack_50 <= 0x40400000 + (float)_DAT_005b724a) &&
          (0.0 < *(float *)&param_1->field_0xcde0)) && (*(int *)&param_1->field_0xd690 == 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_34,0,1);
      }
      (**(code **)(*(int *)&param_1->field_0x154 + 0x144))();
      if (*(int *)&param_1->field_0xcde4 == 0) {
        iVar3 = core_enemy_cpp_FUN_00489ff0((CEnemy *)param_1,param_2);
        if (iVar3 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&param_1->field_0x158,0,1);
        }
      }
      else {
        iVar3 = core_boneguy_cpp_FUN_00418930(param_1,param_2);
        if (iVar3 == 0) {
          fStack_3c = 0x40400000;
          fVar11 = 0.17453292;
          auStack_110._0_4_ = 0;
          auStack_110._8_4_ = 0x40400000;
          direction = (CVector3f *)auStack_110;
          auStack_110._4_4_ = 0;
          fVar10 = 0.5;
          path_map = (CPathMap *)
                     (**(code **)(*(int *)(*(int *)&param_1->field_0xcde4 + 0x154) + 0xc4))();
          iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                            ((CCharacter *)param_1,
                             (CVector3f *)(*(int *)&param_1->field_0xcde4 + 0x20),path_map,direction
                             ,fVar10,fVar11);
          if (iVar3 < 0) {
            engine_console_cpp_FUN_00441ff0
                      (g_CConsolePtr,"%s gave up chase - I'm confused\n",param_1);
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                      ((CMotionController *)&param_1->field_0x158,0,1);
          }
          else {
            fVar10 = *(float *)&param_1->field_0x20 -
                     *(float *)(*(int *)&param_1->field_0xcde4 + 0x20);
            fVar11 = *(float *)&param_1->field_0x28 -
                     *(float *)(*(int *)&param_1->field_0xcde4 + 0x28);
            if ((SQRT(fVar11 * fVar11 + fVar10 * fVar10) <= fStack_3c + (float)_DAT_005b722a) &&
               (*(float *)&param_1->field_0xcde0 <= 0.0)) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        ((CMotionController *)&param_1->field_0x158,6,1);
              *(uint *)&param_1->field_0xd690 = 1;
              sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0xd078);
              (**(code **)(*(int *)&param_1->field_0x154 + 0x2c))();
              *(uint *)&param_1->field_0xcde0 = 0x3f800000;
            }
          }
        }
      }
      break;
    case 2:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_244);
      fStack_240 = *(float *)&param_1->field_0xce5c * _DAT_005b7242;
      pCStack_210 = param_1;
      pCStack_20c = param_1;
      core_xform_cpp_FUN_00583260();
      uStack_158 = uStack_14c;
      afStack_1c8[(uint)bVar9 * -2 + 0x1d] = afStack_1c8[(uint)bVar9 * -2 + 0x20];
      afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1e] =
           afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x21];
      core_actor_cpp_FUN_00408b80();
      uStack_170 = uStack_134;
      afStack_1c8[(uint)bVar9 * -2 + 0x17] = afStack_1c8[(uint)bVar9 * -2 + 0x26];
      afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x18] =
           afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x27];
      core_enemy_cpp_FUN_004893f0();
      break;
    case 5:
      if ((*(int *)&param_1->field_0xcdd0 == 0) && (*(int *)&param_1->field_0xdc == 0)) {
        *(uint *)&param_1->field_0xcdd0 = 1;
      }
      break;
    case 6:
      if (*(int *)&param_1->field_0x2628 == 0) {
        fStack_14 = core_motion_cpp_FUN_004fc930(pCStack_34);
        if (((float)_DAT_005b723a < fStack_14) && (*(float *)&param_1->field_0xcde0 <= 0.0)) {
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_208);
          uStack_204 = *(uint *)&param_1->field_0xce5c;
          pCStack_1d4 = param_1;
          pCStack_1d0 = param_1;
          core_xform_cpp_FUN_00583260();
          uStack_bc = uStack_164;
          afStack_dc[(uint)bVar9 * -2 + 9] = afStack_1c8[(uint)bVar9 * -2 + 0x1a];
          afStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
               afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1b];
          core_actor_cpp_FUN_00408b80();
          uStack_74 = uStack_11c;
          afStack_dc[(uint)bVar9 * -2 + 0x1b] = afStack_1c8[(uint)bVar9 * -2 + 0x2c];
          afStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x1c] =
               afStack_1c8[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x2d];
          core_enemy_cpp_FUN_004893f0();
          *(uint *)&param_1->field_0xcde0 = 0x40200000;
        }
      }
      else {
        (**(code **)(*(int *)(*(int *)&param_1->field_0x2628 + 0x154) + 0x78))();
        *(uint *)&param_1->field_0xcde0 = 0x40200000;
      }
    }
    goto switchD_0041a7ec_caseD_3;
  }
  uVar1 = *(uint *)&param_1->field_0x273c;
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00419fef:
      iVar3 = 1;
    }
    else {
LAB_0041a251:
      iVar3 = 0;
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&param_1->field_0x158,iVar3,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00419fef;
    if (uVar1 != 3) goto LAB_0041a251;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_34,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)&param_1->field_0x24a4 = 0;
  *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
  *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a0;
switchD_0041a7ec_caseD_3:
  if (0.0 < *(float *)&param_1->field_0xcde0) {
    *(float *)&param_1->field_0xcde0 = *(float *)&param_1->field_0xcde0 - param_2;
  }
  iVar3 = core_charactr_cpp_FUN_0042ccf0((CCharacter *)param_1);
  if (iVar3 != 0) {
    iVar3 = *(int *)&param_1->field_0xcde4;
    if ((iVar3 != 0) &&
       (pCVar7 = (CBoneGuy *)(**(code **)(*(int *)(iVar3 + 0x154) + 0xf4))(iVar3), pCVar7 == param_1
       )) {
      core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10
                (g_CDemonSetPtr,*(CDemonActor **)&param_1->field_0xcde4);
    }
    core_charactr_cpp_FUN_0042c1e0();
    fStack_104 = *(float *)&param_1->field_0x2518 * param_2;
    afStack_100[0] = *(float *)&param_1->field_0x251c * param_2;
    afStack_100[1] = *(float *)&param_1->field_0x2520 * param_2;
    afStack_dc[2] = fStack_104;
    afStack_dc[(uint)bVar9 * -2 + 3] = afStack_100[(uint)bVar9 * -2];
    afStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
         afStack_100[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    afStack_100[2] = afStack_dc[2] + *(float *)&param_1->field_0x250c;
    afStack_100[3] = afStack_dc[3] + *(float *)&param_1->field_0x2510;
    fStack_f0 = fStack_cc + *(float *)&param_1->field_0x2514;
    fStack_ec = afStack_100[2];
    afStack_100[(uint)bVar9 * -2 + 6] = afStack_100[(uint)bVar9 * -2 + 3];
    afStack_100[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         afStack_100[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    fStack_a4 = fStack_ec + *(float *)&param_1->field_0x249c;
    fStack_a0 = fStack_e8 + *(float *)&param_1->field_0x24a0;
    fStack_9c = fStack_e4 + *(float *)&param_1->field_0x24a4;
    fStack_e0 = fStack_a4;
    afStack_dc[(uint)bVar9 * -2] = afStack_dc[(uint)bVar9 * -2 + 0xf];
    afStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_dc[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
    *(uint *)&param_1->field_0x2514 = 0;
    *(uint *)&param_1->field_0x2510 = *(uint *)&param_1->field_0x2514;
    *(uint *)&param_1->field_0x250c = *(uint *)&param_1->field_0x2510;
    *(uint *)&param_1->field_0x24a4 = 0;
    *(uint *)&param_1->field_0x24a0 = *(uint *)&param_1->field_0x24a4;
    *(uint *)&param_1->field_0x249c = *(uint *)&param_1->field_0x24a4;
    core_charactr_cpp_FUN_0042c230((CCharacter *)param_1,(CVector3f *)&fStack_e0);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)param_1);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&param_1->field_0x158);
  core_charactr_cpp_FUN_00433350((CCharacter *)param_1,param_2);
  if ((iStack_40 == 1) &&
     (iVar3 = sound_sndmain_cpp_FUN_00557170
                        ((double)*(float *)&param_1->field_0x20,
                         (double)*(float *)&param_1->field_0x24,
                         (double)*(float *)&param_1->field_0x28,0x42c80000), iVar3 != 0)) {
    iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&param_1->field_0xd078);
    if (iVar3 != 0) {
      return;
    }
    sound_sndmain_cpp_FUN_00555fd0();
    iVar3 = 2;
    fStack_14 = (float)core_actor_cpp_FUN_0040ce40(0,0x3f800000);
    sound_sndmain_cpp_FUN_00555f60((double)fStack_14,iVar3);
    uVar8 = (**(code **)(*(int *)&param_1->field_0x154 + 0x30))();
    *(uint *)&param_1->field_0xd078 = uVar8;
    sound_sndmain_cpp_FUN_00556050();
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&param_1->field_0xd078);
  return;
}
