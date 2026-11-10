// Name: core_constrct.cpp_CConstruct_process_FUN_00445cb0
// Address: 00445cb0
// Address Range: [[00445cb0, 00446e1b]]
// Convention: __cdecl
// Signature: void __cdecl core_constrct_cpp_CConstruct_process_FUN_00445cb0(CConstruct *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_constrct_cpp_CConstruct_process_FUN_00445cb0(CConstruct *this_ptr,float delta_time)

{
  byte *this_ptr_00;
  CCharacter *this_ptr_01;
  float *pfVar1;
  SMotion *pSVar2;
  int iVar3;
  CCharacter *pCVar4;
  float *pfVar5;
  uint uVar6;
  uint uVar7;
  CPathMap *path_map;
  CConstruct *pCVar8;
  CVector3f *pCVar9;
  byte bVar10;
  float afStackY_1a80 [1503];
  CFireEffect *this_ptr_02;
  float size;
  float fVar11;
  SMRGLTextureBasic *texture_ptr;
  int iVar12;
  SDamageInfo *pSVar13;
  float fVar14;
  SDamageInfo aSStack_2e0 [4];
  float fStack_2dc;
  CConstruct *pCStack_2ac;
  CConstruct *pCStack_2a8;
  uint uStack_2a4;
  float afStack_2a0 [7];
  uint uStack_284;
  CVector3f CStack_278;
  float fStack_26c;
  float afStack_268 [5];
  uint uStack_254;
  CVector3f CStack_248;
  float fStack_23c;
  float afStack_238 [5];
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_20c;
  uint uStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  CVector3f CStack_1e8;
  float fStack_1dc;
  float afStack_1d8 [4];
  float fStack_1c8;
  CVector3f CStack_1c4;
  float fStack_1b8;
  float afStack_1b4 [4];
  float fStack_1a4;
  float fStack_1a0;
  uint uStack_19c;
  uint uStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint uStack_164;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  uint uStack_110;
  float afStack_104 [3];
  CVector3f CStack_f8;
  float fStack_ec;
  float afStack_e8 [4];
  float fStack_d8;
  uint uStack_d4;
  uint uStack_c8;
  CVector3f CStack_bc;
  uint uStack_b0;
  float afStack_ac [6];
  float afStack_94 [4];
  float fStack_84;
  CVector3f CStack_80;
  uint uStack_74;
  float afStack_70 [4];
  float fStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  CMotionController *pCStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  int iStack_38;
  int iStack_34;
  byte *puStack_30;
  byte *puStack_2c;
  byte *puStack_28;
  float *pfStack_24;
  int iStack_20;
  float *pfStack_1c;
  float fStack_18;
  byte *puStack_14;
  
  bVar10 = 0;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                     ((CMotionController *)&this_ptr->field_0x158);
  iStack_34 = *(int *)(pSVar2 + 0x24);
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                    (0x01C51D80,&this_ptr->field_0xc328);
  if (iVar3 != 0) {
    *(uint *)&this_ptr->field_0x2538 = 0;
    *(uint *)&this_ptr->field_0xc1d4 = 1;
    *(uint *)&this_ptr->field_0xca5c = 0;
    if (*(int *)&this_ptr->field_0xca58 == 0) {
      core_construc_cpp_FUN_004472a0(this_ptr);
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,"ConstructDead");
    }
    core_motion_cpp_CMotionController_jumpToMotion_FUN_00524b10
              ((CMotionController *)&this_ptr->field_0x158,0xb,0.0);
  }
  fStack_40 = 0.25;
  fStack_4c = 1.0;
  fStack_3c = 1.0;
  if (*(int *)&this_ptr->field_0xc1d4 == 0) {
    if (*(int *)&this_ptr->field_0xca58 == 0) {
      if (iStack_34 != 0xc) {
        iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc308);
        if (iVar3 == 0) {
          uVar7 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
          *(uint *)&this_ptr->field_0xc308 = uVar7;
          fStack_3c = 1.0;
          fStack_40 = 0.4;
        }
        puStack_14 = &this_ptr->field_0x158;
        core_skeleton_cpp_FUN_00569130();
        afStack_238[2] = (float)uStack_c8;
        afStack_238[(uint)bVar10 * -2 + 3] = afStack_e8[(uint)bVar10 * -2 + 9];
        afStack_238[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
        core_actor_cpp_FUN_00408b40();
        fStack_14c = fStack_11c;
        afStack_1b4[(uint)bVar10 * -2 + 0x1b] = afStack_1b4[(uint)bVar10 * -2 + 0x27];
        afStack_1b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c] =
             afStack_1b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x28];
        core_skeleton_cpp_FUN_00569130();
        uStack_110 = uStack_b0;
        afStack_1b4[(uint)bVar10 * -2 + 0x2a] = afStack_ac[(uint)bVar10 * -2];
        afStack_1b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2b] =
             afStack_ac[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        core_actor_cpp_FUN_00408b40();
        fVar11 = fStack_14c;
        fStack_140 = fStack_218;
        afStack_1b4[(uint)bVar10 * -2 + 0x1e] = afStack_238[(uint)bVar10 * -2 + 9];
        afStack_1b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f] =
             afStack_238[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
        fStack_200 = fVar11 + fStack_140;
        fStack_1fc = fStack_148 + fStack_13c;
        fStack_1f8 = fStack_144 + fStack_138;
        fStack_194 = fVar11 + fStack_140;
        afStack_1b4[(uint)bVar10 * -2 + 9] = afStack_238[(uint)bVar10 * -2 + 0xf];
        size = fStack_3c;
        fVar14 = fStack_40;
        fVar11 = fStack_4c;
        afStack_1b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
             afStack_238[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10];
        texture_ptr = (SMRGLTextureBasic *)&DAT_00611130;
        pCVar9 = &CStack_248;
        fStack_1b8 = fStack_194 * _DAT_005d6f71;
        afStack_1b4[0] = fStack_190 * _DAT_005d6f71;
        afStack_1b4[1] = fStack_18c * _DAT_005d6f71;
        CStack_248.x = fStack_194 * _DAT_005d6f71;
        *(float *)((int)&CStack_248 + (uint)bVar10 * -8 + 4) = afStack_1b4[(uint)bVar10 * -2];
        this_ptr_02 = 0x01C57074;
        *(float *)((int)&CStack_248 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             afStack_1b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
LAB_00445e87:
        core_fire_cpp_CFireEffect_createTrailSegment_FUN_004b70f0
                  (this_ptr_02,pCVar9,size,fVar14,fVar11,texture_ptr);
      }
    }
    else if (*(int *)&this_ptr->field_0xca58 == 1) {
      iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc308);
      if (iVar3 == 0) {
        uVar7 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
        *(uint *)&this_ptr->field_0xc308 = uVar7;
        fStack_40 = 0.4;
      }
      iVar3 = *(int *)(&this_ptr->field_0xc3dc + *(int *)&this_ptr->field_0xca60 * 0x48);
      if (iVar3 != 0) {
        if (&CStack_80 != (CVector3f *)(iVar3 + 0x20)) {
          CStack_80.x = ((CVector3f *)(iVar3 + 0x20))->x;
          CStack_80.y = *(float *)(iVar3 + 0x24);
          CStack_80.z = *(float *)(iVar3 + 0x28);
        }
        texture_ptr = (SMRGLTextureBasic *)&DAT_00611130;
        pCVar9 = &CStack_80;
        this_ptr_02 = 0x01C57074;
        fVar14 = fStack_40;
        fVar11 = fStack_4c;
        size = fStack_3c;
        goto LAB_00445e87;
      }
    }
  }
  iVar3 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar3 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0xc304);
    return;
  }
  if ((*(int *)&this_ptr->field_0xca58 == 1) && (0.0 < *(float *)&this_ptr->field_0x2538)) {
    fVar11 = *(float *)&this_ptr->field_0xca5c + delta_time;
    *(float *)&this_ptr->field_0xca5c = fVar11;
    if (fVar11 <= *(float *)&this_ptr->field_0xc38c) {
      iStack_38 = *(int *)(&this_ptr->field_0xc3dc + *(int *)&this_ptr->field_0xca60 * 0x48);
      if (iStack_38 == 0) {
        return;
      }
      iVar3 = (**(code **)(*(int *)(iStack_38 + 0x154) + 0x94))(iStack_38);
      if (iVar3 != *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4)) {
        return;
      }
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70(0x01C51D80,&this_ptr->field_0xc328);
      core_event_cpp_CEventList_executeCommands_FUN_004a1b70
                (0x01C51D80,"ConstructKilled");
      iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc318);
      if (iVar3 == 0) {
        uVar7 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
        *(uint *)&this_ptr->field_0xc318 = uVar7;
      }
      pCVar9 = (CVector3f *)(iStack_38 + 0x20);
      iVar3 = 0;
      CStack_278.x = 0.0;
      CStack_278.y = 1.0;
      CStack_278.z = 0.0;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004b5b30
                (0x01C57074,pCVar9,0.5,&CStack_278,0xffff);
      do {
        afStack_ac[2] = 0.0;
        afStack_ac[4] = 0.0;
        iVar3 = iVar3 + 1;
        afStack_ac[3] = 1.0;
        core_fire_cpp_FUN_004b5fa0
                  (0x01C57074,pCVar9,afStack_ac + 2,4000,0xffdc,1,35000,0x3f800000,0x3e4ccccd);
      } while (iVar3 < 10);
      core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0
                (*(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4));
      *(uint *)(iStack_38 + 0x70) = 2;
      *(uint *)&this_ptr->field_0xca58 = 3;
      return;
    }
    core_construc_cpp_FUN_00447560(this_ptr);
  }
  if (*(int *)&this_ptr->field_0xca58 == 2) {
    iVar3 = *(int *)(&this_ptr->field_0xc3dc + *(int *)&this_ptr->field_0xca60 * 0x48);
    if (iVar3 != 0) {
      pCVar4 = (CCharacter *)(**(code **)(*(int *)(iVar3 + 0x154) + 0x94))(iVar3);
      this_ptr_01 = *(CCharacter **)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      if (pCVar4 == this_ptr_01) {
        core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_004328c0(this_ptr_01);
      }
    }
    fVar11 = delta_time / _DAT_005fddc8 + *(float *)&this_ptr->field_0xca5c;
    *(float *)&this_ptr->field_0xca5c = fVar11;
    if (fVar11 < 1.0) {
      iStack_20 = 0;
      if (*(int *)&this_ptr->field_0xc394 < 1) {
        return;
      }
      puStack_30 = &this_ptr->field_0xc398;
      pfStack_24 = (float *)&this_ptr->field_0xca5c;
      puStack_2c = &this_ptr->field_0xc3b0;
      puStack_28 = &this_ptr->field_0xc3c0;
      pfStack_1c = (float *)&this_ptr->field_0xc3d0;
      do {
        pfVar1 = pfStack_1c;
        pfVar5 = (float *)(puStack_30 + iStack_20 * 0x48);
        fStack_44 = pfVar5[0x11];
        fStack_188 = *pfVar5 - *pfStack_1c;
        fStack_184 = pfVar5[1] - pfStack_1c[1];
        fStack_180 = pfVar5[2] - pfStack_1c[2];
        fStack_17c = *pfVar5 - *pfStack_1c;
        afStack_1b4[(uint)bVar10 * -2 + 0xf] = afStack_1b4[(uint)bVar10 * -2 + 0xc];
        afStack_1b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
             afStack_1b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
        afStack_ac[5] = fStack_17c * *pfStack_24;
        afStack_94[0] = fStack_178 * *pfStack_24;
        afStack_94[1] = fStack_174 * *pfStack_24;
        fStack_224 = fStack_17c * *pfStack_24;
        afStack_238[(uint)bVar10 * -2 + 6] = afStack_94[(uint)bVar10 * -2];
        afStack_238[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_94[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        afStack_e8[2] = *pfVar1 + fStack_224;
        afStack_e8[3] = pfVar1[1] + fStack_220;
        fStack_d8 = pfVar1[2] + fStack_21c;
        fStack_1a0 = *pfVar1 + fStack_224;
        afStack_1b4[(uint)bVar10 * -2 + 6] = afStack_e8[(uint)bVar10 * -2 + 3];
        afStack_1b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        core_xform_cpp_slerpQuaternion_FUN_005b7940
                  (puStack_2c,puStack_28,*(uint *)&this_ptr->field_0xca5c);
        afStack_2a0[3] = (float)uStack_2a4;
        afStack_2a0[(uint)bVar10 * -2 + 4] = afStack_2a0[(uint)bVar10 * -2];
        afStack_2a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5] =
             afStack_2a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        (afStack_2a0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1] =
             (afStack_2a0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        core_xform_cpp_FUN_005b7c00(afStack_2a0 + 3);
        fStack_170 = fStack_134;
        afStack_1b4[(uint)bVar10 * -2 + 0x12] = afStack_1b4[(uint)bVar10 * -2 + 0x21];
        afStack_1b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13] =
             afStack_1b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x22];
        fStack_170 = *(float *)&this_ptr->field_0xca5c * (float)_DAT_005d6f95 + fStack_170;
        *(float *)((int)fStack_44 + 0x20) = fStack_1a0;
        *(uint *)((int)fStack_44 + 0x24) = uStack_19c;
        *(uint *)((int)fStack_44 + 0x28) = uStack_198;
        if ((float *)((int)fStack_44 + 0x30) != afStack_1b4 + 0x11) {
          *(float *)((int)fStack_44 + 0x30) = fStack_170;
          *(uint *)((int)fStack_44 + 0x34) = uStack_16c;
          *(uint *)((int)fStack_44 + 0x38) = uStack_168;
        }
        if ((float *)((int)fStack_44 + 0xcd0) != afStack_1b4 + 5) {
          *(float *)((int)fStack_44 + 0xcd0) = fStack_1a0;
          *(uint *)((int)fStack_44 + 0xcd4) = uStack_19c;
          *(uint *)((int)fStack_44 + 0xcd8) = uStack_198;
        }
        if ((float *)((int)fStack_44 + 0xcdc) != afStack_1b4 + 0x11) {
          *(float *)((int)fStack_44 + 0xcdc) = fStack_170;
          *(uint *)((int)fStack_44 + 0xce0) = uStack_16c;
          *(uint *)((int)fStack_44 + 0xce4) = uStack_168;
        }
        iStack_20 = iStack_20 + 1;
        puStack_2c = puStack_2c + 0x48;
        puStack_28 = puStack_28 + 0x48;
        pfStack_1c = pfStack_1c + 0x12;
      } while (iStack_20 < *(int *)&this_ptr->field_0xc394);
      return;
    }
    iVar3 = 0;
    core_skeleton_cpp_FUN_00569ae0(&this_ptr->field_0x158);
    pCVar8 = this_ptr;
    if (0 < *(int *)&this_ptr->field_0xc394) {
      do {
        core_mission_cpp_FUN_0051b740(0x01D2C900,*(uint *)&pCVar8->field_0xc3dc,1);
        *(uint *)&pCVar8->field_0xc3dc = 0;
        iVar3 = iVar3 + 1;
        pCVar8 = (CConstruct *)&pCVar8->field_0x48;
      } while (iVar3 < *(int *)&this_ptr->field_0xc394);
    }
    *(uint *)&this_ptr->field_0xca58 = 0;
    *(float *)&this_ptr->field_0x2538 = (float)*(int *)&this_ptr->field_0xc390;
  }
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  fStack_54 = delta_time * *(float *)&this_ptr->field_0xc1d0 * *(float *)&this_ptr->field_0xca68;
  this_ptr_00 = &this_ptr->field_0x158;
  while (0.0 < fStack_54) {
    uVar6 = core_motion_cpp_CMotionController_advance_FUN_00524270
                      ((CMotionController *)this_ptr_00,afStack_70 + 7);
    if (uVar6 == 0) {
LAB_004464ed:
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar6);
    }
    else {
      if (uVar6 < 2) {
        iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc30c);
        if (iVar3 == 0) {
          uVar7 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
          *(uint *)&this_ptr->field_0xc30c = uVar7;
        }
LAB_0044650c:
        iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc310);
        if (iVar3 == 0) {
          uVar7 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
          *(uint *)&this_ptr->field_0xc310 = uVar7;
        }
        goto LAB_004464ed;
      }
      if (uVar6 == 7) goto LAB_0044650c;
      core_charactr_cpp_CCharacter_processMotion_FUN_00434a80((CCharacter *)this_ptr,uVar6);
    }
  }
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00435320();
  iVar3 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar3 == 0) {
    switch(iStack_34) {
    case 0:
    case 1:
    case 2:
      iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0((CEnemy *)this_ptr,delta_time);
      if (iVar3 == 0) {
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))();
        if (*(int *)&this_ptr->field_0xc1e8 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,3,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,3,1);
      }
      break;
    case 3:
    case 4:
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))();
      pCStack_48 = (CMotionController *)&this_ptr->field_0x158;
      if (*(int *)&this_ptr->field_0xc1e8 == 0) {
        iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_004a0fe0((CEnemy *)this_ptr,delta_time);
        if (iVar3 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_48,0,1);
        }
      }
      else {
        fVar14 = 0.17453292;
        CStack_1e8.x = 0.0;
        CStack_1e8.z = 0x40400000;
        pCVar9 = &CStack_1e8;
        CStack_1e8.y = 0.0;
        fVar11 = 0.5;
        fStack_18 = 0x40400000 + (float)_DAT_005d6f85;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&this_ptr->field_0xc1e8 + 0x154) + 0xc4))();
        iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042ccf0
                          ((CCharacter *)this_ptr,
                           (CVector3f *)(*(int *)&this_ptr->field_0xc1e8 + 0x20),path_map,pCVar9,
                           fVar11,fVar14);
        if (iVar3 < 0) {
          engine_console_cpp_FUN_00445430
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCStack_48,0,1);
        }
        else {
          iVar3 = *(int *)&this_ptr->field_0xc1e8;
          fStack_1f4 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar3 + 0x20);
          fStack_1f0 = *(float *)&this_ptr->field_0x24 - *(float *)(iVar3 + 0x24);
          fStack_1ec = *(float *)&this_ptr->field_0x28 - *(float *)(iVar3 + 0x28);
          fStack_20c = fStack_1f4;
          afStack_238[(uint)bVar10 * -2 + 0xc] = afStack_238[(uint)bVar10 * -2 + 0x12];
          afStack_238[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
               afStack_238[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
          fStack_50 = SQRT(fStack_204 * fStack_204 + fStack_20c * fStack_20c);
          uStack_208 = 0;
          if ((*(float *)&this_ptr->field_0xc1e4 <= 0.0) && (fStack_50 <= fStack_18)) {
            afStack_1d8[2] = *(float *)(iVar3 + 0x20) - *(float *)&this_ptr->field_0x20;
            afStack_1d8[3] = *(float *)(iVar3 + 0x24) - *(float *)&this_ptr->field_0x24;
            fStack_1c8 = *(float *)(iVar3 + 0x28) - *(float *)&this_ptr->field_0x28;
            afStack_104[0] = afStack_1d8[2];
            afStack_1b4[(uint)bVar10 * -2 + 0x2d] = afStack_1d8[(uint)bVar10 * -2 + 3];
            afStack_1b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2e] =
                 afStack_1d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_1b4 + 0x2c);
            afStack_268[2] = (float)uStack_d4;
            afStack_268[(uint)bVar10 * -2 + 3] = afStack_e8[(uint)bVar10 * -2 + 6];
            afStack_268[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
                 afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
            puStack_14 = (byte *)
                         core_actor_cpp_normalizeAngleToPi_FUN_0040cd60
                                   (afStack_268[3] - *(float *)&this_ptr->field_0x34);
            if (ABS((float)puStack_14) < (float)_DAT_005d6f8d) {
              iVar12 = 1;
              iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,1);
              core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                        (pCStack_48,iVar3 + 5,iVar12);
              *(uint *)&this_ptr->field_0xc1e4 = 0x40200000;
              iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc31c);
              if (iVar3 == 0) {
                uVar7 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
                *(uint *)&this_ptr->field_0xc31c = uVar7;
              }
            }
          }
        }
      }
      break;
    case 5:
    case 6:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042c010(aSStack_2e0);
      fStack_2dc = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(7.0,15.0);
      fStack_2dc = fStack_2dc * *(float *)&this_ptr->field_0xca68;
      pSVar13 = aSStack_2e0;
      pCStack_2ac = this_ptr;
      pCStack_2a8 = this_ptr;
      puStack_14 = &this_ptr->field_0xfd8;
      fVar11 = 1.0;
      core_xform_cpp_FUN_005b5080();
      uStack_74 = uStack_284;
      afStack_70[(uint)bVar10 * -2] = afStack_2a0[(uint)bVar10 * -2 + 8];
      afStack_70[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_2a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9];
      core_actor_cpp_FUN_00408b40();
      pCVar9 = &CStack_bc;
      CStack_bc.x = fStack_26c;
      *(float *)((int)&CStack_bc + (uint)bVar10 * -8 + 4) = afStack_268[(uint)bVar10 * -2];
      pCVar8 = this_ptr;
      *(float *)((int)&CStack_bc + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_268[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770((CEnemy *)pCVar8,pCVar9,fVar11,pSVar13);
      pSVar13 = aSStack_2e0;
      fVar11 = 1.0;
      core_xform_cpp_FUN_005b5080();
      uStack_164 = uStack_254;
      afStack_1b4[(uint)bVar10 * -2 + 0x15] = afStack_268[(uint)bVar10 * -2 + 6];
      afStack_1b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16] =
           afStack_268[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      core_actor_cpp_FUN_00408b40();
      pCVar9 = &CStack_f8;
      CStack_f8.x = fStack_23c;
      *(float *)((int)&CStack_f8 + (uint)bVar10 * -8 + 4) = afStack_238[(uint)bVar10 * -2];
      pCVar8 = this_ptr;
      *(float *)((int)&CStack_f8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
           afStack_238[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_enemy_cpp_CEnemy_testAttackRadius_FUN_004a0770((CEnemy *)pCVar8,pCVar9,fVar11,pSVar13);
      break;
    case 0xb:
      if (*(int *)&this_ptr->field_0xca64 == 0) {
        uVar7 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
        *(uint *)&this_ptr->field_0xca64 = 1;
        *(uint *)&this_ptr->field_0xc318 = uVar7;
      }
      break;
    case 0xc:
      iVar3 = *(int *)(_DAT_01d06ab4 * 4 + 0x1d06aa4);
      fStack_158 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar3 + 0x20);
      fStack_154 = *(float *)&this_ptr->field_0x24 - *(float *)(iVar3 + 0x24);
      fStack_150 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar3 + 0x28);
      fStack_ec = fStack_158;
      afStack_e8[(uint)bVar10 * -2] = afStack_1b4[(uint)bVar10 * -2 + 0x18];
      afStack_e8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
           afStack_1b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19];
      if ((SQRT(afStack_e8[1] * afStack_e8[1] +
                fStack_ec * fStack_ec + afStack_e8[0] * afStack_e8[0]) <
           *(float *)&this_ptr->field_0xc1e0 * _DAT_005d6f7d) &&
         (((**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(),
          *(int *)&this_ptr->field_0xc1e8 != 0 ||
          (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_004a6c30
                             (0x01C51D80,&this_ptr->field_0xc268), iVar3 != 0)))) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)&this_ptr->field_0x158,0xe,1);
        iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc318);
        if ((iVar3 == 0) &&
           (((iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc31c), iVar3 == 0
             && (iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc314),
                iVar3 == 0)) &&
            (iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc314), iVar3 == 0)))
           ) {
          uVar7 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
          *(uint *)&this_ptr->field_0xc314 = uVar7;
        }
      }
      break;
    case 0xe:
      if (*(float *)&this_ptr->field_0x24 < *(float *)&this_ptr->field_0x2504 + (float)_DAT_005d6f75
         ) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                  ((CMotionController *)this_ptr_00,0xf,1);
      }
      break;
    case 0xf:
      iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc320);
      if (iVar3 == 0) {
        uVar7 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
        *(uint *)&this_ptr->field_0xc320 = uVar7;
      }
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))();
    }
    goto switchD_00446df5_caseD_7;
  }
  uVar6 = *(uint *)&this_ptr->field_0x273c;
  if (uVar6 < 2) {
    if (uVar6 == 1) {
LAB_004465bf:
      iVar12 = 1;
      iVar3 = 3;
    }
    else {
LAB_00446804:
      iVar12 = 1;
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cc60(0,2);
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)&this_ptr->field_0x158,iVar3,iVar12);
  }
  else {
    if (uVar6 < 3) goto LAB_004465bf;
    if (uVar6 != 3) goto LAB_00446804;
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
              ((CMotionController *)this_ptr_00,0,1);
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
switchD_00446df5_caseD_7:
  if (0.0 < *(float *)&this_ptr->field_0xc1e4) {
    *(float *)&this_ptr->field_0xc1e4 = *(float *)&this_ptr->field_0xc1e4 - delta_time;
  }
  iVar3 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042e120((CCharacter *)this_ptr);
  if ((iVar3 != 0) && (iStack_34 != 0xc)) {
    core_charactr_cpp_FUN_0042d700();
    afStack_94[2] = *(float *)&this_ptr->field_0x2518 * delta_time;
    afStack_94[3] = *(float *)&this_ptr->field_0x251c * delta_time;
    fStack_84 = *(float *)&this_ptr->field_0x2520 * delta_time;
    afStack_1b4[2] = afStack_94[2];
    afStack_1b4[(uint)bVar10 * -2 + 3] = afStack_94[(uint)bVar10 * -2 + 3];
    afStack_1b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
         afStack_94[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    afStack_70[2] = afStack_1b4[2] + *(float *)&this_ptr->field_0x250c;
    afStack_70[3] = afStack_1b4[3] + *(float *)&this_ptr->field_0x2510;
    fStack_60 = fStack_1a4 + *(float *)&this_ptr->field_0x2514;
    fStack_128 = afStack_70[2];
    afStack_1b4[(uint)bVar10 * -2 + 0x24] = afStack_70[(uint)bVar10 * -2 + 3];
    afStack_1b4[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25] =
         afStack_70[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
    fStack_1dc = fStack_128 + *(float *)&this_ptr->field_0x249c;
    afStack_1d8[0] = fStack_124 + *(float *)&this_ptr->field_0x24a0;
    afStack_1d8[1] = fStack_120 + *(float *)&this_ptr->field_0x24a4;
    CStack_1c4.x = fStack_1dc;
    *(float *)((int)&CStack_1c4 + (uint)bVar10 * -8 + 4) = afStack_1d8[(uint)bVar10 * -2];
    *(float *)((int)&CStack_1c4 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_1d8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
    *(uint *)&this_ptr->field_0x2514 = 0;
    *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a4;
    core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,&CStack_1c4);
  }
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  if (((iStack_34 == 3) || (iStack_34 == 4)) &&
     (iVar3 = sound_sndmain_cpp_FUN_00574010
                        ((double)*(float *)&this_ptr->field_0x20,
                         (double)*(float *)&this_ptr->field_0x24,
                         (double)*(float *)&this_ptr->field_0x28,0x42c80000), iVar3 != 0)) {
    iVar3 = sound_sndmain_cpp_FUN_005735a0(*(uint *)&this_ptr->field_0xc304);
    if ((iVar3 == 0) && (iVar3 = core_actor_cpp_randomChance_FUN_0040cd00(0.3), iVar3 != 0)) {
      uVar7 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
      *(uint *)&this_ptr->field_0xc304 = uVar7;
      return;
    }
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00573a80(*(uint *)&this_ptr->field_0xc304);
  return;
}
