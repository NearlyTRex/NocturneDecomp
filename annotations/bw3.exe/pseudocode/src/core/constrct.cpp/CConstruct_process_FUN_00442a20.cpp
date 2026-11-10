// Name: core_constrct.cpp_CConstruct_process_FUN_00442a20
// Address: 00442a20
// Address Range: [[00442a20, 00443c82]]
// Convention: __cdecl
// Signature: void __cdecl core_constrct_cpp_CConstruct_process_FUN_00442a20(CConstruct *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_constrct_cpp_CConstruct_process_FUN_00442a20(CConstruct *this_ptr,float delta_time)

{
  byte *this_ptr_00;
  CCharacter *this_ptr_01;
  float *pfVar1;
  SMotion *pSVar2;
  int iVar3;
  uint uVar4;
  CCharacter *pCVar5;
  float *pfVar6;
  uint uVar7;
  CPathMap *path_map;
  CConstruct *pCVar8;
  CVector3f *pCVar9;
  byte bVar10;
  float afStackY_1a80 [1503];
  float fVar11;
  SMRGLTextureBasic *texture_ptr;
  int iVar12;
  float max_distance;
  SDamageInfo aSStack_2e0 [4];
  float fStack_2dc;
  CConstruct *pCStack_2ac;
  CConstruct *pCStack_2a8;
  uint uStack_2a4;
  float afStack_2a0 [7];
  uint uStack_284;
  CVector3f CStack_278;
  uint uStack_26c;
  float afStack_268 [4];
  float fStack_258;
  uint uStack_254;
  float fStack_248;
  float fStack_244;
  float fStack_240;
  uint uStack_23c;
  float afStack_230 [4];
  float afStack_220 [4];
  float fStack_210;
  float fStack_20c;
  uint uStack_208;
  uint uStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  CVector3f CStack_1e8;
  CVector3f CStack_1dc;
  float fStack_1d0;
  float afStack_1cc [5];
  CVector3f CStack_1b8;
  float fStack_1ac;
  float afStack_1a8 [4];
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  uint uStack_188;
  CVector3f CStack_17c;
  uint uStack_170;
  float afStack_16c [5];
  float fStack_158;
  uint uStack_14c;
  uint uStack_140;
  float fStack_13c;
  float fStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  float fStack_11c;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  uint uStack_bc;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  uint uStack_a4;
  uint uStack_98;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float afStack_80 [3];
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  CMotionController *pCStack_48;
  float fStack_44;
  int iStack_40;
  float fStack_3c;
  int iStack_38;
  float fStack_34;
  float fStack_30;
  byte *puStack_2c;
  float *pfStack_28;
  byte *puStack_24;
  byte *puStack_20;
  int iStack_1c;
  float *pfStack_18;
  byte *puStack_14;
  
  bVar10 = 0;
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070
                     ((CMotionController *)&this_ptr->field_0x158);
  iStack_38 = *(int *)(pSVar2 + 0x24);
  iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                    (0x01C6E360,&this_ptr->field_0xd114);
  if (iVar3 != 0) {
    *(uint *)&this_ptr->field_0x2538 = 0;
    *(uint *)&this_ptr->field_0xcdd0 = 1;
    *(uint *)&this_ptr->field_0xd850 = 0;
    if (*(int *)&this_ptr->field_0xd844 == 0) {
      core_construc_cpp_FUN_00444110(this_ptr);
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,"ConstructDead");
    }
    *(uint *)&this_ptr->field_0xd844 = 1;
    core_motion_cpp_CMotionController_jumpToMotion_FUN_004fc420
              ((CMotionController *)&this_ptr->field_0x158,0xb,0.0);
    *(uint *)&this_ptr->field_0xd848 = 0xffffffff;
  }
  fStack_34 = 0.25;
  fStack_3c = 1.0;
  fStack_30 = 1.0;
  if (*(int *)&this_ptr->field_0xcdd0 == 0) {
    if (*(int *)&this_ptr->field_0xd844 == 0) {
      if (iStack_38 != 0xc) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd0f4);
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
          *(uint *)&this_ptr->field_0xd0f4 = uVar4;
          fStack_30 = 1.0;
          fStack_34 = 0.4;
        }
        puStack_14 = &this_ptr->field_0x158;
        core_skeleton_cpp_FUN_0054dcc0();
        uStack_284 = uStack_128;
        afStack_2a0[(uint)bVar10 * -2 + 8] = afStack_16c[(uint)bVar10 * -2 + 0x12];
        afStack_2a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 9] =
             afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x13];
        core_actor_cpp_FUN_00408b80();
        fStack_ec = fStack_11c;
        afStack_16c[(uint)bVar10 * -2 + 0x21] = afStack_16c[(uint)bVar10 * -2 + 0x15];
        afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x22] =
             afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x16];
        core_skeleton_cpp_FUN_0054dcc0();
        afStack_1cc[2] = (float)uStack_170;
        afStack_1cc[(uint)bVar10 * -2 + 3] = afStack_16c[(uint)bVar10 * -2];
        afStack_1cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        core_actor_cpp_FUN_00408b80();
        fVar11 = fStack_ec;
        fStack_8c = fStack_158;
        afStack_16c[(uint)bVar10 * -2 + 0x39] = afStack_16c[(uint)bVar10 * -2 + 6];
        afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x3a] =
             afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
        fStack_f8 = fVar11 + fStack_8c;
        fStack_f4 = fStack_e8 + fStack_88;
        fStack_f0 = fStack_e4 + fStack_84;
        afStack_220[2] = fVar11 + fStack_8c;
        afStack_220[(uint)bVar10 * -2 + 3] = afStack_16c[(uint)bVar10 * -2 + 0x1e];
        afStack_220[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1f];
        fStack_200 = afStack_220[2] * _DAT_005b9679;
        fStack_1fc = afStack_220[3] * _DAT_005b9679;
        fStack_1f8 = fStack_210 * _DAT_005b9679;
        CStack_278.x = afStack_220[2] * _DAT_005b9679;
        *(float *)((int)&CStack_278 + (uint)bVar10 * -8 + 4) = afStack_220[(uint)bVar10 * -2 + 9];
        *(float *)((int)&CStack_278 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
             afStack_220[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
        iVar3 = *(int *)&this_ptr->field_0xd85c;
        if (iVar3 == 1) {
          texture_ptr = (SMRGLTextureBasic *)&DAT_005f16c4;
          pCVar9 = &CStack_278;
        }
        else if (iVar3 == 2) {
          texture_ptr = (SMRGLTextureBasic *)&DAT_005f16dc;
          pCVar9 = &CStack_278;
        }
        else {
          if (iVar3 != 3) goto LAB_00442bf6;
          texture_ptr = (SMRGLTextureBasic *)&DAT_005f16f4;
          pCVar9 = &CStack_278;
        }
LAB_00442bee:
        core_fire_cpp_CFireEffect_createTrailSegment_FUN_004a3cf0
                  (0x01C73654,pCVar9,fStack_30,fStack_34,fStack_3c,texture_ptr);
      }
    }
    else if (*(int *)&this_ptr->field_0xd844 == 1) {
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd0f4);
      if (iVar3 == 0) {
        uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
        *(uint *)&this_ptr->field_0xd0f4 = uVar4;
        fStack_34 = 0.4;
      }
      iVar3 = *(int *)(&this_ptr->field_0xd1c8 + *(int *)&this_ptr->field_0xd848 * 0x48);
      if (iVar3 != 0) {
        if (&CStack_17c != (CVector3f *)(iVar3 + 0x20)) {
          CStack_17c.x = ((CVector3f *)(iVar3 + 0x20))->x;
          CStack_17c.y = *(float *)(iVar3 + 0x24);
          CStack_17c.z = *(float *)(iVar3 + 0x28);
        }
        iVar3 = *(int *)&this_ptr->field_0xd85c;
        if (iVar3 == 1) {
          texture_ptr = (SMRGLTextureBasic *)&DAT_005f16c4;
          pCVar9 = &CStack_17c;
        }
        else if (iVar3 == 2) {
          texture_ptr = (SMRGLTextureBasic *)&DAT_005f16dc;
          pCVar9 = &CStack_17c;
        }
        else {
          if (iVar3 != 3) goto LAB_00442bf6;
          texture_ptr = (SMRGLTextureBasic *)&DAT_005f16f4;
          pCVar9 = &CStack_17c;
        }
        goto LAB_00442bee;
      }
    }
  }
LAB_00442bf6:
  iVar3 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x148))();
  if (iVar3 == 0) {
    sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd0f0);
    return;
  }
  if ((0.0 < *(float *)&this_ptr->field_0x2538) && (0 < *(int *)&this_ptr->field_0xd848)) {
    iStack_40 = *(int *)(&this_ptr->field_0xd1c8 + *(int *)&this_ptr->field_0xd848 * 0x48);
    if ((iStack_40 != 0) &&
       (iVar3 = (**(code **)(*(int *)(iStack_40 + 0x154) + 0x94))(iStack_40),
       iVar3 == *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04))) {
      core_event_cpp_CEventList_executeCommands_FUN_0048c150(0x01C6E360,&this_ptr->field_0xd114);
      core_event_cpp_CEventList_executeCommands_FUN_0048c150
                (0x01C6E360,"ConstructKilled");
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd104);
      if (iVar3 == 0) {
        uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
        *(uint *)&this_ptr->field_0xd104 = uVar4;
      }
      pCVar9 = (CVector3f *)(iStack_40 + 0x20);
      iVar3 = 0;
      CStack_1dc.x = 0.0;
      CStack_1dc.y = 1.0;
      CStack_1dc.z = 0.0;
      core_fire_cpp_CFireEffect_createSmokeParticle_FUN_004a2560
                (0x01C73654,pCVar9,0.5,&CStack_1dc,0x4000);
      do {
        afStack_230[1] = 1.0;
        afStack_230[0] = 0.0;
        afStack_230[2] = 0.0;
        iVar3 = iVar3 + 1;
        core_fire_cpp_FUN_004a29d0
                  (0x01C73654,pCVar9,afStack_268 + 0xe,4000,0xffdc,1,35000,0x3f800000,0x3e4ccccd);
      } while (iVar3 < 10);
      core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0
                (*(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04));
      *(uint *)(iStack_40 + 0x70) = 2;
      *(uint *)&this_ptr->field_0xd844 = 3;
      return;
    }
  }
  if ((*(int *)&this_ptr->field_0xd844 == 1) && (0.0 < *(float *)&this_ptr->field_0x2538)) {
    fVar11 = *(float *)&this_ptr->field_0xd850 + delta_time;
    *(float *)&this_ptr->field_0xd850 = fVar11;
    if (fVar11 <= *(float *)&this_ptr->field_0xd178) {
      return;
    }
    core_construc_cpp_FUN_004443d0(this_ptr);
    return;
  }
  if (*(int *)&this_ptr->field_0xd844 == 2) {
    iVar3 = *(int *)(&this_ptr->field_0xd1c8 + *(int *)&this_ptr->field_0xd848 * 0x48);
    if (iVar3 != 0) {
      pCVar5 = (CCharacter *)(**(code **)(*(int *)(iVar3 + 0x154) + 0x94))(iVar3);
      this_ptr_01 = *(CCharacter **)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      if (pCVar5 == this_ptr_01) {
        core_charactr_cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0(this_ptr_01);
      }
    }
    fVar11 = delta_time / _DAT_005dd6f8 + *(float *)&this_ptr->field_0xd850;
    *(float *)&this_ptr->field_0xd850 = fVar11;
    if (fVar11 < 1.0) {
      iStack_1c = 0;
      if (*(int *)&this_ptr->field_0xd180 < 1) {
        return;
      }
      puStack_2c = &this_ptr->field_0xd184;
      pfStack_28 = (float *)&this_ptr->field_0xd850;
      puStack_24 = &this_ptr->field_0xd19c;
      puStack_20 = &this_ptr->field_0xd1ac;
      pfStack_18 = (float *)&this_ptr->field_0xd1bc;
      do {
        pfVar1 = pfStack_18;
        pfVar6 = (float *)(puStack_2c + iStack_1c * 0x48);
        fStack_44 = pfVar6[0x11];
        fStack_b0 = *pfVar6 - *pfStack_18;
        fStack_ac = pfVar6[1] - pfStack_18[1];
        fStack_a8 = pfVar6[2] - pfStack_18[2];
        afStack_268[2] = *pfVar6 - *pfStack_18;
        afStack_268[(uint)bVar10 * -2 + 3] = afStack_16c[(uint)bVar10 * -2 + 0x30];
        afStack_268[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
             afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x31];
        fStack_68 = afStack_268[2] * *pfStack_28;
        fStack_64 = afStack_268[3] * *pfStack_28;
        fStack_60 = fStack_258 * *pfStack_28;
        fStack_c8 = afStack_268[2] * *pfStack_28;
        afStack_16c[(uint)bVar10 * -2 + 0x2a] = afStack_16c[(uint)bVar10 * -2 + 0x42];
        afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2b] =
             afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x43];
        afStack_1a8[2] = *pfVar1 + fStack_c8;
        afStack_1a8[3] = pfVar1[1] + fStack_c4;
        fStack_198 = pfVar1[2] + fStack_c0;
        fStack_134 = *pfVar1 + fStack_c8;
        afStack_16c[(uint)bVar10 * -2 + 0xf] = afStack_1a8[(uint)bVar10 * -2 + 3];
        afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x10] =
             afStack_1a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4];
        core_xform_cpp_slerpQuaternion_FUN_00585b20
                  (puStack_24,puStack_20,*(uint *)&this_ptr->field_0xd850);
        afStack_2a0[3] = (float)uStack_2a4;
        afStack_2a0[(uint)bVar10 * -2 + 4] = afStack_2a0[(uint)bVar10 * -2];
        afStack_2a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 5] =
             afStack_2a0[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        (afStack_2a0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 5)[(uint)bVar10 * -2 + 1] =
             (afStack_2a0 + (uint)bVar10 * -2 + (uint)bVar10 * -2 + 1)[(uint)bVar10 * -2 + 1];
        core_xform_cpp_FUN_00585de0(afStack_2a0 + 3);
        fStack_20c = fStack_1d0;
        afStack_220[(uint)bVar10 * -2 + 6] = afStack_1cc[(uint)bVar10 * -2];
        afStack_220[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7] =
             afStack_1cc[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
        fStack_20c = *(float *)&this_ptr->field_0xd850 * (float)_DAT_005b969d + fStack_20c;
        *(float *)((int)fStack_44 + 0x20) = fStack_134;
        *(uint *)((int)fStack_44 + 0x24) = uStack_130;
        *(uint *)((int)fStack_44 + 0x28) = uStack_12c;
        if ((float *)((int)fStack_44 + 0x30) != afStack_220 + 5) {
          *(float *)((int)fStack_44 + 0x30) = fStack_20c;
          *(uint *)((int)fStack_44 + 0x34) = uStack_208;
          *(uint *)((int)fStack_44 + 0x38) = uStack_204;
        }
        if ((float *)((int)fStack_44 + 0xcd0) != afStack_16c + 0xe) {
          *(float *)((int)fStack_44 + 0xcd0) = fStack_134;
          *(uint *)((int)fStack_44 + 0xcd4) = uStack_130;
          *(uint *)((int)fStack_44 + 0xcd8) = uStack_12c;
        }
        if ((float *)((int)fStack_44 + 0xcdc) != afStack_220 + 5) {
          *(float *)((int)fStack_44 + 0xcdc) = fStack_20c;
          *(uint *)((int)fStack_44 + 0xce0) = uStack_208;
          *(uint *)((int)fStack_44 + 0xce4) = uStack_204;
        }
        iStack_1c = iStack_1c + 1;
        puStack_24 = puStack_24 + 0x48;
        puStack_20 = puStack_20 + 0x48;
        pfStack_18 = pfStack_18 + 0x12;
      } while (iStack_1c < *(int *)&this_ptr->field_0xd180);
      return;
    }
    iVar3 = 0;
    core_skeleton_cpp_FUN_0054e670(&this_ptr->field_0x158);
    pCVar8 = this_ptr;
    if (0 < *(int *)&this_ptr->field_0xd180) {
      do {
        core_mission_cpp_FUN_004f6f10(0x01D81080,*(uint *)&pCVar8->field_0xd1c8,1);
        *(uint *)&pCVar8->field_0xd1c8 = 0;
        iVar3 = iVar3 + 1;
        pCVar8 = (CConstruct *)&pCVar8->field_0x48;
      } while (iVar3 < *(int *)&this_ptr->field_0xd180);
    }
    *(uint *)&this_ptr->field_0xd844 = 0;
    *(float *)&this_ptr->field_0x2538 = (float)*(int *)&this_ptr->field_0xd17c;
  }
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  fStack_54 = delta_time * *(float *)&this_ptr->field_0xcdcc * *(float *)&this_ptr->field_0xd858;
  this_ptr_00 = &this_ptr->field_0x158;
  while (0.0 < fStack_54) {
    uVar7 = core_motion_cpp_CMotionController_advance_FUN_004fbb70
                      ((CMotionController *)this_ptr_00,afStack_16c + 0x46);
    if (uVar7 == 0) {
LAB_0044335d:
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar7);
    }
    else {
      if (uVar7 < 2) {
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd0f8);
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
          *(uint *)&this_ptr->field_0xd0f8 = uVar4;
        }
LAB_0044337c:
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd0fc);
        if (iVar3 == 0) {
          uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
          *(uint *)&this_ptr->field_0xd0fc = uVar4;
        }
        goto LAB_0044335d;
      }
      if (uVar7 == 7) goto LAB_0044337c;
      core_charactr_cpp_CCharacter_processMotion_FUN_00433fb0((CCharacter *)this_ptr,uVar7);
    }
  }
  *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
  core_charactr_cpp_FUN_00434850();
  iVar3 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar3 == 0) {
    switch(iStack_38) {
    case 0:
    case 1:
    case 2:
      iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0((CEnemy *)this_ptr,delta_time);
      if (iVar3 == 0) {
        (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))();
        if (*(int *)&this_ptr->field_0xcde4 != 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                    ((CMotionController *)&this_ptr->field_0x158,3,1);
        }
      }
      else {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&this_ptr->field_0x158,3,1);
      }
      break;
    case 3:
    case 4:
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))();
      pCStack_48 = (CMotionController *)&this_ptr->field_0x158;
      if (*(int *)&this_ptr->field_0xcde4 == 0) {
        iVar3 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0((CEnemy *)this_ptr,delta_time);
        if (iVar3 == 0) {
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_48,0,1);
        }
      }
      else {
        max_distance = 0.17453292;
        CStack_1e8.x = 0.0;
        CStack_1e8.z = 0x40400000;
        pCVar9 = &CStack_1e8;
        CStack_1e8.y = 0.0;
        fVar11 = 0.5;
        fStack_50 = 0x40400000 + (float)_DAT_005b968d;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&this_ptr->field_0xcde4 + 0x154) + 0xc4))();
        iVar3 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          ((CCharacter *)this_ptr,
                           (CVector3f *)(*(int *)&this_ptr->field_0xcde4 + 0x20),path_map,pCVar9,
                           fVar11,max_distance);
        if (iVar3 < 0) {
          engine_console_cpp_FUN_00441ff0
                    (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_48,0,1);
        }
        else {
          iVar3 = *(int *)&this_ptr->field_0xcde4;
          fStack_194 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar3 + 0x20);
          fStack_190 = *(float *)&this_ptr->field_0x24 - *(float *)(iVar3 + 0x24);
          fStack_18c = *(float *)&this_ptr->field_0x28 - *(float *)(iVar3 + 0x28);
          afStack_16c[2] = fStack_194;
          afStack_16c[(uint)bVar10 * -2 + 3] = afStack_1a8[(uint)bVar10 * -2 + 6];
          afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 4] =
               afStack_1a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
          fStack_4c = SQRT(afStack_16c[4] * afStack_16c[4] + afStack_16c[2] * afStack_16c[2]);
          afStack_16c[3] = 0.0;
          if ((*(float *)&this_ptr->field_0xcde0 <= 0.0) && (fStack_4c <= fStack_50)) {
            fStack_104 = *(float *)(iVar3 + 0x20) - *(float *)&this_ptr->field_0x20;
            fStack_100 = *(float *)(iVar3 + 0x24) - *(float *)&this_ptr->field_0x24;
            fStack_fc = *(float *)(iVar3 + 0x28) - *(float *)&this_ptr->field_0x28;
            afStack_80[0] = fStack_104;
            afStack_16c[(uint)bVar10 * -2 + 0x3c] = afStack_16c[(uint)bVar10 * -2 + 0x1b];
            afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x3d] =
                 afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x1c];
            core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_16c + 0x3b);
            uStack_140 = uStack_188;
            afStack_16c[(uint)bVar10 * -2 + 0xc] = afStack_1a8[(uint)bVar10 * -2 + 9];
            afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd] =
                 afStack_1a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
            puStack_14 = (byte *)
                         core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                   (fStack_13c - *(float *)&this_ptr->field_0x34);
            if (ABS((float)puStack_14) < (float)_DAT_005b9695) {
              iVar12 = 1;
              iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,1);
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                        (pCStack_48,iVar3 + 5,iVar12);
              *(uint *)&this_ptr->field_0xcde0 = 0x40200000;
              iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd108);
              if (iVar3 == 0) {
                uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
                *(uint *)&this_ptr->field_0xd108 = uVar4;
              }
            }
          }
        }
      }
      break;
    case 5:
    case 6:
      core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(aSStack_2e0);
      fStack_2dc = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(7.0,15.0);
      fStack_2dc = fStack_2dc * *(float *)&this_ptr->field_0xd858;
      pCStack_2ac = this_ptr;
      pCStack_2a8 = this_ptr;
      puStack_14 = &this_ptr->field_0xfd8;
      core_xform_cpp_FUN_00583260();
      uStack_bc = afStack_230[3];
      afStack_16c[(uint)bVar10 * -2 + 0x2d] = afStack_220[(uint)bVar10 * -2];
      afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x2e] =
           afStack_220[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_actor_cpp_FUN_00408b80();
      uStack_a4 = uStack_26c;
      afStack_16c[(uint)bVar10 * -2 + 0x33] = afStack_268[(uint)bVar10 * -2];
      afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x34] =
           afStack_268[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1];
      core_enemy_cpp_FUN_004893f0();
      core_xform_cpp_FUN_00583260();
      uStack_98 = uStack_254;
      afStack_16c[(uint)bVar10 * -2 + 0x36] = afStack_268[(uint)bVar10 * -2 + 6];
      afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x37] =
           afStack_268[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 7];
      core_actor_cpp_FUN_00408b80();
      uStack_14c = uStack_23c;
      afStack_16c[(uint)bVar10 * -2 + 9] = afStack_268[(uint)bVar10 * -2 + 0xc];
      afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10] =
           afStack_268[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
      core_enemy_cpp_FUN_004893f0();
      break;
    case 0xb:
      if (*(int *)&this_ptr->field_0xd854 == 0) {
        uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
        *(uint *)&this_ptr->field_0xd854 = 1;
        *(uint *)&this_ptr->field_0xd104 = uVar4;
      }
      break;
    case 0xc:
      iVar3 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      fStack_110 = *(float *)&this_ptr->field_0x20 - *(float *)(iVar3 + 0x20);
      fStack_10c = *(float *)&this_ptr->field_0x24 - *(float *)(iVar3 + 0x24);
      fStack_108 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar3 + 0x28);
      fStack_e0 = fStack_110;
      afStack_16c[(uint)bVar10 * -2 + 0x24] = afStack_16c[(uint)bVar10 * -2 + 0x18];
      afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x25] =
           afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x19];
      if ((SQRT(fStack_d8 * fStack_d8 + fStack_e0 * fStack_e0 + fStack_dc * fStack_dc) <
           *(float *)&this_ptr->field_0xcddc * _DAT_005b9685) &&
         (((**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(),
          *(int *)&this_ptr->field_0xcde4 != 0 ||
          (iVar3 = core_event_cpp_CEventList_evaluateCondition_FUN_00491aa0
                             (0x01C6E360,&this_ptr->field_0xd054), iVar3 != 0)))) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)&this_ptr->field_0x158,0xe,1);
        iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd104);
        if ((iVar3 == 0) &&
           (((iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd108), iVar3 == 0
             && (iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd100),
                iVar3 == 0)) &&
            (iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd100), iVar3 == 0)))
           ) {
          uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
          *(uint *)&this_ptr->field_0xd100 = uVar4;
        }
      }
      break;
    case 0xe:
      if (*(float *)&this_ptr->field_0x24 < *(float *)&this_ptr->field_0x2504 + (float)_DAT_005b967d
         ) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                  ((CMotionController *)this_ptr_00,0xf,1);
      }
      break;
    case 0xf:
      iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd10c);
      if (iVar3 == 0) {
        uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
        *(uint *)&this_ptr->field_0xd10c = uVar4;
      }
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))();
    }
    goto switchD_00443c5c_caseD_7;
  }
  uVar7 = *(uint *)&this_ptr->field_0x273c;
  if (uVar7 < 2) {
    if (uVar7 == 1) {
LAB_0044342f:
      iVar12 = 1;
      iVar3 = 3;
    }
    else {
LAB_00443674:
      iVar12 = 1;
      iVar3 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
    }
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)&this_ptr->field_0x158,iVar3,iVar12);
  }
  else {
    if (uVar7 < 3) goto LAB_0044342f;
    if (uVar7 != 3) goto LAB_00443674;
    core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
              ((CMotionController *)this_ptr_00,0,1);
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
  }
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
switchD_00443c5c_caseD_7:
  if (0.0 < *(float *)&this_ptr->field_0xcde0) {
    *(float *)&this_ptr->field_0xcde0 = *(float *)&this_ptr->field_0xcde0 - delta_time;
  }
  iVar3 = core_charactr_cpp_CCharacter_isOnGround_FUN_0042ccf0((CCharacter *)this_ptr);
  if ((iVar3 != 0) && (iStack_38 != 0xc)) {
    core_charactr_cpp_FUN_0042c1e0();
    fStack_74 = *(float *)&this_ptr->field_0x2518 * delta_time;
    fStack_70 = *(float *)&this_ptr->field_0x251c * delta_time;
    fStack_6c = *(float *)&this_ptr->field_0x2520 * delta_time;
    fStack_1ac = fStack_74;
    afStack_1a8[(uint)bVar10 * -2] = afStack_16c[(uint)bVar10 * -2 + 0x3f];
    afStack_1a8[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 1] =
         afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x40];
    fStack_248 = fStack_1ac + *(float *)&this_ptr->field_0x250c;
    fStack_244 = afStack_1a8[0] + *(float *)&this_ptr->field_0x2510;
    fStack_240 = afStack_1a8[1] + *(float *)&this_ptr->field_0x2514;
    fStack_d4 = fStack_248;
    afStack_16c[(uint)bVar10 * -2 + 0x27] = afStack_268[(uint)bVar10 * -2 + 9];
    afStack_16c[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0x28] =
         afStack_268[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 10];
    fStack_1f4 = fStack_d4 + *(float *)&this_ptr->field_0x249c;
    fStack_1f0 = fStack_d0 + *(float *)&this_ptr->field_0x24a0;
    fStack_1ec = fStack_cc + *(float *)&this_ptr->field_0x24a4;
    CStack_1b8.x = fStack_1f4;
    *(float *)((int)&CStack_1b8 + (uint)bVar10 * -8 + 4) = afStack_220[(uint)bVar10 * -2 + 0xc];
    *(float *)((int)&CStack_1b8 + (uint)bVar10 * -8 + (uint)bVar10 * -8 + 8) =
         afStack_220[(uint)bVar10 * -2 + (uint)bVar10 * -2 + 0xd];
    *(uint *)&this_ptr->field_0x2514 = 0;
    *(uint *)&this_ptr->field_0x2510 = *(uint *)&this_ptr->field_0x2514;
    *(uint *)&this_ptr->field_0x250c = *(uint *)&this_ptr->field_0x2510;
    *(uint *)&this_ptr->field_0x24a4 = 0;
    *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
    *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a4;
    core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_1b8);
  }
  core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
  core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130
            ((CDeformableModelInstance *)&this_ptr->field_0x158);
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
  if (((iStack_38 == 3) || (iStack_38 == 4)) &&
     (iVar3 = sound_sndmain_cpp_FUN_00557170
                        ((double)*(float *)&this_ptr->field_0x20,
                         (double)*(float *)&this_ptr->field_0x24,
                         (double)*(float *)&this_ptr->field_0x28,0x42c80000), iVar3 != 0)) {
    iVar3 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xd0f0);
    if ((iVar3 == 0) && (iVar3 = core_actor_cpp_randomChance_FUN_0040cf40(0.3), iVar3 != 0)) {
      uVar4 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))();
      *(uint *)&this_ptr->field_0xd0f0 = uVar4;
      return;
    }
    return;
  }
  sound_sndmain_cpp_killSfx_FUN_00556be0(*(uint *)&this_ptr->field_0xd0f0);
  return;
}
