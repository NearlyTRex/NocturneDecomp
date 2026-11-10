// Name: core_mattnntt.cpp_CMattanntote_process_FUN_00591f30
// Address: 00591f30
// Address Range: [[00591f30, 005936f4]]
// Convention: __cdecl
// Signature: void __cdecl core_mattnntt_cpp_CMattanntote_process_FUN_00591f30(CMattanntote *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_mattnntt_cpp_CMattanntote_process_FUN_00591f30(CMattanntote *this_ptr,float delta_time)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  SMotion *pSVar4;
  uint uVar5;
  CPathMap *path_map;
  int iVar6;
  byte *puVar7;
  byte bVar8;
  float afStackY_130c [1011];
  CGore *this_ptr_00;
  CVector3f *pCVar9;
  float fVar10;
  uint *puVar11;
  float *pfVar12;
  EBloodType blood_type;
  float max_distance;
  float fStack_324;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  uint uStack_2e8;
  uint uStack_2e4;
  uint uStack_2e0;
  uint uStack_2dc;
  float fStack_2d8;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  uint uStack_2c4;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  CVector3f CStack_2ac;
  uint uStack_2a0;
  float afStack_29c [5];
  uint uStack_288;
  uint uStack_27c;
  float fStack_270;
  float fStack_26c;
  float fStack_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  CVector3f CStack_258;
  uint uStack_24c;
  float afStack_248 [4];
  float fStack_238;
  float fStack_234;
  uint uStack_230;
  uint uStack_22c;
  float fStack_228;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  uint uStack_210;
  float afStack_20c [5];
  float fStack_1f8;
  uint uStack_1f4;
  uint uStack_1f0;
  uint auStack_1ec [3];
  uint uStack_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  float afStack_1d4 [3];
  uint uStack_1c8;
  float fStack_1c4;
  float fStack_1bc;
  uint uStack_1b8;
  uint uStack_1b4;
  uint uStack_1b0;
  float afStack_1ac [5];
  float fStack_198;
  uint uStack_194;
  uint uStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  uint uStack_180;
  float afStack_174 [3];
  float fStack_168;
  float fStack_164;
  float fStack_160;
  uint uStack_15c;
  float fStack_150;
  uint uStack_14c;
  uint uStack_148;
  float fStack_144;
  float afStack_140 [5];
  float afStack_12c [3];
  float fStack_120;
  uint uStack_11c;
  uint uStack_118;
  float fStack_114;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  CVector3f CStack_e4;
  float fStack_d8;
  float afStack_d4 [4];
  float fStack_c4;
  CVector3f CStack_c0;
  uint uStack_b4;
  float afStack_b0 [5];
  float afStack_9c [3];
  CVector3f CStack_90;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_60;
  float fStack_5c;
  CMotionController *pCStack_54;
  float fStack_50;
  float *pfStack_4c;
  uint uStack_48;
  float fStack_44;
  byte *puStack_40;
  byte *puStack_3c;
  byte *puStack_38;
  byte *puStack_34;
  float *pfStack_30;
  float *pfStack_2c;
  float *pfStack_28;
  float *pfStack_24;
  CDeformableModelInstance *pCStack_20;
  CVector3f *pCStack_1c;
  float fStack_18;
  byte *puStack_14;
  
  bVar8 = 0;
  iVar2 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x148))(this_ptr,delta_time);
  if (iVar2 != 0) {
    if (0.0 < *(float *)&this_ptr->field_0xd054) {
      *(float *)&this_ptr->field_0xd054 = *(float *)&this_ptr->field_0xd054 - delta_time;
    }
    fVar1 = *(float *)&this_ptr->field_0xd064 + delta_time;
    *(float *)&this_ptr->field_0xd064 = fVar1;
    if (*(float *)&this_ptr->field_0xd06c <= fVar1) {
      *(uint *)&this_ptr->field_0xd064 = *(uint *)&this_ptr->field_0xd06c;
    }
    puStack_14 = &this_ptr->field_0x158;
    core_skeleton_cpp_FUN_0054dcc0(puStack_14,*(uint *)&this_ptr->field_0xd07c);
    puVar11 = &uStack_210;
    uStack_210 = uStack_b4;
    afStack_20c[(uint)bVar8 * -2] = afStack_b0[(uint)bVar8 * -2];
    afStack_20c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    core_actor_cpp_FUN_00408b80(this_ptr,puVar11);
    uStack_1e0 = uStack_2c4;
    afStack_20c[(uint)bVar8 * -2 + 0xc] = *(float *)(&stack0xfffffd40 + (uint)bVar8 * -8);
    afStack_20c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
         *(float *)(&stack0xfffffd44 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
    *(uint *)&this_ptr->field_0xd0d8 = uStack_1e0;
    *(uint *)&this_ptr->field_0xd0dc = uStack_1dc;
    *(uint *)&this_ptr->field_0xd0e0 = uStack_1d8;
    core_skeleton_cpp_FUN_0054dcc0(puStack_14,*(uint *)&this_ptr->field_0xd080);
    pfVar12 = afStack_20c + 2;
    afStack_20c[2] = (float)uStack_180;
    afStack_20c[(uint)bVar8 * -2 + 3] = afStack_1ac[(uint)bVar8 * -2 + 0xc];
    afStack_20c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
         afStack_1ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
    core_actor_cpp_FUN_00408b80(this_ptr,pfVar12);
    uStack_24c = uStack_2a0;
    afStack_248[(uint)bVar8 * -2] = afStack_29c[(uint)bVar8 * -2];
    afStack_248[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_29c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    *(uint *)&this_ptr->field_0xd37c = uStack_24c;
    *(float *)&this_ptr->field_0xd380 = afStack_248[0];
    *(float *)&this_ptr->field_0xd384 = afStack_248[1];
    core_skeleton_cpp_FUN_0054dcc0(puStack_14,*(uint *)&this_ptr->field_0xd088);
    pfVar12 = afStack_1ac + 0xe;
    afStack_174[0] = (float)uStack_288;
    afStack_1ac[(uint)bVar8 * -2 + 0xf] = afStack_29c[(uint)bVar8 * -2 + 6];
    afStack_1ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
         afStack_29c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
    core_actor_cpp_FUN_00408b80(this_ptr,pfVar12);
    uStack_1b0 = uStack_27c;
    afStack_1ac[(uint)bVar8 * -2] = afStack_29c[(uint)bVar8 * -2 + 9];
    afStack_1ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_29c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
    *(uint *)&this_ptr->field_0xd620 = uStack_1b0;
    *(float *)&this_ptr->field_0xd624 = afStack_1ac[0];
    *(float *)&this_ptr->field_0xd628 = afStack_1ac[1];
    core_skeleton_cpp_FUN_0054dcc0(puStack_14,*(uint *)&this_ptr->field_0xd084);
    pfVar12 = afStack_20c + 8;
    auStack_1ec[0] = uStack_15c;
    afStack_20c[(uint)bVar8 * -2 + 9] = afStack_1ac[(uint)bVar8 * -2 + 0x15];
    afStack_20c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
         afStack_1ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
    core_actor_cpp_FUN_00408b80(this_ptr,pfVar12);
    uStack_2e8 = afStack_140[2];
    *(float *)((int)&stack0xfffffd1c + (uint)bVar8 * -8) = afStack_140[(uint)bVar8 * -2 + 3];
    *(float *)((int)&stack0xfffffd20 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    puVar7 = &this_ptr->field_0xd0b8;
    *(uint *)&this_ptr->field_0xd8c4 = uStack_2e8;
    *(uint *)&this_ptr->field_0xd8c8 = uStack_2e4;
    *(uint *)&this_ptr->field_0xd8cc = uStack_2e0;
    do {
      (**(code **)(*(int *)(puVar7 + 0x154) + 0xc))(puVar7,delta_time);
      puVar7 = puVar7 + 0x2a4;
    } while (puVar7 != &this_ptr->field_0xf068);
    if ((*(int *)&this_ptr->field_0xd0a0 == 0) && (*(int *)&this_ptr->field_0xd09c == 0)) {
      *(uint *)&this_ptr->field_0xd09c = 1;
      fVar1 = *(float *)&this_ptr->field_0xcdcc + _DAT_005d91ab;
      *(uint *)&this_ptr->field_0xd098 = 1;
      *(float *)&this_ptr->field_0xcdcc = fVar1;
    }
    if ((0.0 < *(float *)&this_ptr->field_0xd090) &&
       (*(float *)&this_ptr->field_0xd090 - delta_time <= 0.0)) {
      puVar7 = &this_ptr->field_0x20;
      iVar6 = _DAT_01d5ba14 * 4;
      iVar2 = *(int *)(iVar6 + 0x1d5ba04);
      fStack_f0 = *(float *)puVar7 - *(float *)(iVar2 + 0x20);
      fStack_ec = *(float *)&this_ptr->field_0x24 - *(float *)(iVar2 + 0x24);
      fStack_e8 = *(float *)&this_ptr->field_0x28 - *(float *)(iVar2 + 0x28);
      fStack_108 = fStack_f0;
      afStack_140[(uint)bVar8 * -2 + 0xf] = afStack_140[(uint)bVar8 * -2 + 0x15];
      afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
           afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
      fStack_68 = fStack_100 * fStack_100 + fStack_108 * fStack_108 + fStack_104 * fStack_104;
      fStack_84 = (float)(((int)fStack_68 >> 1) + _DAT_01d1a0a4);
      pfStack_4c = (float *)puVar7;
      if (fStack_84 < (float)_DAT_005d91b3) {
        *(uint *)&this_ptr->field_0xd090 = 0x3f000000;
      }
      else {
        fVar1 = *(float *)&this_ptr->field_0xcdcc + _DAT_005d91bb;
        *(uint *)&this_ptr->field_0xd090 = 0;
        *(float *)&this_ptr->field_0xcdcc = fVar1;
        iVar2 = *(int *)(iVar6 + 0x1d5ba04);
        iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
        pCStack_54 = (CMotionController *)&this_ptr->field_0x158;
        if (iVar2 == 0) {
          iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fStack_144 = *(float *)(iVar2 + 0x20) - *pfStack_4c;
          afStack_140[0] = *(float *)(iVar2 + 0x24) - pfStack_4c[1];
          afStack_140[1] = *(float *)(iVar2 + 0x28) - pfStack_4c[2];
          afStack_9c[0] = fStack_144;
          afStack_b0[(uint)bVar8 * -2 + 6] = afStack_140[(uint)bVar8 * -2];
          afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
               afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_b0 + 5);
          fStack_fc = fStack_324;
          afStack_140[(uint)bVar8 * -2 + 0x12] = *(float *)(&stack0xfffffce0 + (uint)bVar8 * -8);
          afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
               *(float *)(&stack0xfffffce4 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
          fStack_18 = (float)core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                       (fStack_f8 - *(float *)&this_ptr->field_0x34);
          puStack_14 = (byte *)fStack_18;
          puStack_14 = (byte *)
                       core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                 (fStack_fc - *(float *)&this_ptr->field_0x30);
          *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fStack_18;
          *(float *)&this_ptr->field_0x30 = *(float *)&this_ptr->field_0x30 + (float)puStack_14;
          core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0((CDemonActor *)this_ptr);
        }
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(pCStack_54,0xd,1);
      }
    }
    fVar1 = *(float *)&this_ptr->field_0xd094 - delta_time;
    *(float *)&this_ptr->field_0xd094 = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)&this_ptr->field_0xd094 = 0;
    }
    fVar1 = *(float *)&this_ptr->field_0xd090 - delta_time;
    *(float *)&this_ptr->field_0xd090 = fVar1;
    if (fVar1 < 0.0) {
      *(uint *)&this_ptr->field_0xd08c = 0;
      *(uint *)&this_ptr->field_0xd098 = 0;
      if (*(float *)&this_ptr->field_0xd090 < (float)_DAT_005d91c3) {
        *(uint *)&this_ptr->field_0xd090 = 0;
        *(uint *)&this_ptr->field_0xd09c = 0;
      }
    }
    pfStack_30 = (float *)&this_ptr->field_0x2518;
    fStack_50 = delta_time * *(float *)&this_ptr->field_0xcdcc;
    pfStack_2c = (float *)&this_ptr->field_0x250c;
    pfStack_28 = (float *)&this_ptr->field_0x249c;
    pCStack_20 = (CDeformableModelInstance *)&this_ptr->field_0x158;
    pfStack_24 = (float *)&this_ptr->field_0x20;
    pCStack_1c = (CVector3f *)&this_ptr->field_0xd0ac;
    while (0.0 < fStack_50) {
      uVar3 = core_motion_cpp_CMotionController_advance_FUN_004fbb70(&pCStack_20->base,&fStack_50);
      if (uVar3 < 0x451) {
        if (uVar3 < 0x44d) {
          if (1000 < uVar3) {
            if (uVar3 < 0x3ea) {
              iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                                (*(uint *)&this_ptr->field_0x2628,g_CWeaponClassInfo.name_hash
                                );
              if (iVar2 != 0) {
                core_setcolid_cpp_CDemonSet_init_FUN_0053ebe0(g_CDemonSetPtr);
                uStack_48 = *(uint *)(iVar2 + 0x568);
                *(CMattanntote **)(iVar2 + 0x304) = this_ptr;
                *(uint *)(iVar2 + 0x568) = 100;
                iVar6 = (**(code **)(*(int *)(iVar2 + 0x154) + 0xe8))(iVar2);
                if (iVar6 != 0) {
                  (**(code **)(*(int *)(iVar2 + 0x154) + 0xe4))(iVar2);
                  iVar6 = sound_sndmain_cpp_FUN_00556700
                                    (*(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4));
                  if (iVar6 == 0) {
                    uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                                      (this_ptr,"mann_firestaff.wav");
                    *(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4) = uVar5;
                    *(uint *)(iVar2 + 0x568) = uStack_48;
                    goto LAB_00592354;
                  }
                }
                *(uint *)(iVar2 + 0x568) = uStack_48;
              }
            }
            else if ((uVar3 == 0x44c) &&
                    (iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)&this_ptr->field_0xf068),
                    iVar2 == 0)) {
              uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                                (this_ptr,"mann_stand.wav");
              *(uint *)&this_ptr->field_0xf068 = uVar5;
            }
          }
        }
        else if (uVar3 < 0x44e) {
          iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4));
          if (iVar2 == 0) {
            uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"mann_chasewalk.wav");
            *(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4) = uVar5;
          }
        }
        else if (uVar3 < 0x44f) {
          iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4));
          if (iVar2 == 0) {
            uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"mann_chasefast.wav");
            *(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4) = uVar5;
          }
        }
        else if (uVar3 < 0x450) {
          iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4));
          if (iVar2 == 0) {
            uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"mann_attack.wav");
            *(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4) = uVar5;
          }
        }
        else {
          iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4));
          if (iVar2 == 0) {
            uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"mann_attack1.wav");
            *(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4) = uVar5;
          }
        }
      }
      else if (uVar3 < 0x452) {
        iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4));
        if (iVar2 == 0) {
          uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"mann_attack2.wav");
          *(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4) = uVar5;
        }
      }
      else if (uVar3 < 0x454) {
        if (uVar3 < 0x453) {
          iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4));
          if (iVar2 == 0) {
            uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"mann_attack3.wav");
            *(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4) = uVar5;
          }
        }
        else {
          iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4));
          if (iVar2 == 0) {
            uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                              (this_ptr,"mann_pain.wav");
            *(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4) = uVar5;
          }
        }
      }
      else if (uVar3 < 0x455) {
        iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4));
        if (iVar2 == 0) {
          uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"mann_die.wav");
          *(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4) = uVar5;
        }
      }
      else if (uVar3 < 0x456) {
        iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4));
        if (iVar2 == 0) {
          uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"mann_warning.wav");
          *(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4) = uVar5;
        }
      }
      else if (uVar3 < 0x457) {
        iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4));
        if (iVar2 == 0) {
          uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                            (this_ptr,"mann_appear.wav");
          *(uint *)(&this_ptr->field_0xdf38 + uVar3 * 4) = uVar5;
        }
      }
      else if ((uVar3 == 0x457) &&
              (iVar2 = sound_sndmain_cpp_FUN_00556700(*(uint *)(&this_ptr->field_0xdf38 + 0x115c)),
              iVar2 == 0)) {
        uVar5 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))
                          (this_ptr,"mann_disappear.wav");
        *(uint *)(&this_ptr->field_0xdf38 + 0x115c) = uVar5;
      }
LAB_00592354:
      fVar1 = (float)_DAT_005d91cb;
      *(uint *)&this_ptr->field_0x2524 = *(uint *)&this_ptr->field_0x24a4;
      core_charactr_cpp_FUN_00434850
                (this_ptr,delta_time * *(float *)&this_ptr->field_0xcdcc * fVar1);
      pSVar4 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_004fc070(&pCStack_20->base);
      iVar2 = *(int *)(pSVar4 + 0x24);
      engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"State: %d\n",iVar2);
      iVar6 = core_charactr_cpp_CCharacter_processWalking_FUN_00431660
                        ((CCharacter *)this_ptr,delta_time);
      if (iVar6 == 0) {
        switch(iVar2) {
        case 0:
          iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fStack_270 = *(float *)(iVar2 + 0x20) - *pfStack_24;
          fStack_26c = *(float *)(iVar2 + 0x24) - pfStack_24[1];
          fStack_268 = *(float *)(iVar2 + 0x28) - pfStack_24[2];
          fStack_318 = fStack_270;
          *(float *)((int)&stack0xfffffcec + (uint)bVar8 * -8) = afStack_29c[(uint)bVar8 * -2 + 0xc]
          ;
          *(float *)((int)&stack0xfffffcf0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
               afStack_29c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
          if (&fStack_21c != &stack0xfffffce8) {
            fStack_21c = fStack_318;
            fStack_218 = fStack_314;
            fStack_214 = fStack_310;
          }
          if (0.0 < *(float *)&this_ptr->field_0xcde0) {
            fStack_80 = fStack_214 * fStack_214 + fStack_21c * fStack_21c + fStack_218 * fStack_218;
            fStack_7c = (float)(((int)fStack_80 >> 1) + _DAT_01d1a0a4);
            if (fStack_7c < 0x40A00000 + 1.0) break;
          }
          iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
          if (iVar2 == 0) {
            iVar2 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0((CEnemy *)this_ptr,delta_time);
            if (iVar2 != 0) {
              core_mattnntt_cpp_FUN_00593a90(this_ptr);
            }
            (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
            if (*(int *)&this_ptr->field_0xcde4 == 0) {
              iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
              if (iVar2 == 0) break;
              *(uint *)&g_CGamePtr->field_0x244 = 1;
              *(uint *)&this_ptr->field_0xcde4 =
                   *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            }
            if (*(int *)&this_ptr->field_0xcde4 != 0) {
              *(uint *)&this_ptr->field_0xd0a8 = 0;
              core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(&fStack_21c);
              uStack_2dc = afStack_29c[2];
              *(float *)((int)&stack0xfffffd28 + (uint)bVar8 * -8) =
                   afStack_29c[(uint)bVar8 * -2 + 3];
              *(float *)(&stack0xfffffd2c + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
                   afStack_29c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
              puStack_14 = (byte *)
                           core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                     (fStack_2d8 - *(float *)&this_ptr->field_0x34);
              if ((ABS((float)puStack_14) < (float)_DAT_005d91e3) &&
                 (*(float *)&this_ptr->field_0xcde0 <= 0.0)) {
                fStack_78 = fStack_214 * fStack_214 +
                            fStack_21c * fStack_21c + fStack_218 * fStack_218;
                fStack_74 = (float)(((int)fStack_78 >> 1) + _DAT_01d1a0a4);
                if (fStack_74 < 0x40A00000 + 1.0) {
                  *(uint *)&this_ptr->field_0xd0a8 = 1;
                  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
                  if (iVar2 < 0x4b) {
                    iVar2 = 3;
                  }
                  else if ((iVar2 < 0x4b) || (0x5a < iVar2)) {
                    iVar2 = 5;
                  }
                  else {
                    iVar2 = 4;
                  }
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            (&pCStack_20->base,iVar2,1);
                  *(uint *)&this_ptr->field_0xcde0 = 0x40400000;
                  break;
                }
              }
              core_mattnntt_cpp_FUN_00593a90(this_ptr);
            }
          }
          break;
        case 1:
        case 2:
          iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          fStack_264 = *(float *)(iVar2 + 0x20) - *pfStack_24;
          fStack_260 = *(float *)(iVar2 + 0x24) - pfStack_24[1];
          fStack_25c = *(float *)(iVar2 + 0x28) - pfStack_24[2];
          afStack_d4[2] = fStack_264;
          afStack_d4[(uint)bVar8 * -2 + 3] = afStack_29c[(uint)bVar8 * -2 + 0xf];
          afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
               afStack_29c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
          if (&fStack_228 != afStack_d4 + 2) {
            fStack_228 = afStack_d4[2];
            fStack_224 = afStack_d4[3];
            fStack_220 = fStack_c4;
          }
          if (0.0 < *(float *)&this_ptr->field_0xcde0) {
            fStack_70 = fStack_220 * fStack_220 + fStack_228 * fStack_228 + fStack_224 * fStack_224;
            fStack_6c = (float)(((int)fStack_70 >> 1) + _DAT_01d1a0a4);
            if ((fStack_6c < 0x40A00000 + 1.0) && (*(int *)&this_ptr->field_0xd0a8 == 0)) {
              engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Going to Stand\n");
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_20->base,0,1);
              break;
            }
          }
          iVar2 = *(int *)&this_ptr->field_0xcde4;
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
          if ((*(int *)&this_ptr->field_0xcde4 == 0) &&
             (iVar6 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04),
             iVar6 = (**(code **)(*(int *)(iVar6 + 0x154) + 0x10c))(iVar6), iVar6 != 0)) {
            *(uint *)&g_CGamePtr->field_0x244 = 1;
            *(uint *)&this_ptr->field_0xcde4 = *(uint *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          }
          if (*(int *)&this_ptr->field_0xcde4 == 0) {
            iVar2 = core_enemy_cpp_CEnemy_updatePatrol_FUN_00489ff0((CEnemy *)this_ptr,delta_time);
            if (iVar2 == 0) {
              core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_20->base,0,1);
            }
          }
          else if (iVar2 == 0) {
            core_mattnntt_cpp_FUN_00593a90(this_ptr);
          }
          else {
            pfStack_28[2] = 0.0;
            pfStack_28[1] = pfStack_28[2];
            *pfStack_28 = pfStack_28[1];
            fVar1 = *(float *)&this_ptr->field_0xd08c;
            if (fVar1 == 0.0) {
              max_distance = 0.34906584;
              fVar10 = 0.2;
              CStack_c0.z = 0x40A00000;
              pCVar9 = &CStack_c0;
              iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
              CStack_c0.x = fVar1;
              CStack_c0.y = fVar1;
              path_map = (CPathMap *)(**(code **)(*(int *)(iVar2 + 0x154) + 0xc4))(iVar2);
              iVar2 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                                ((CCharacter *)this_ptr,
                                 (CVector3f *)(*(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04) + 0x20),
                                 path_map,pCVar9,fVar10,max_distance);
              if (iVar2 < 0) {
                engine_console_cpp_FUN_00441ff0
                          (g_CConsolePtr,"%s gave up chase - I'm confused\n",this_ptr);
                core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                          (&pCStack_20->base,0,1);
              }
              else if (0 < iVar2) {
                iVar2 = *(int *)&this_ptr->field_0xcde4;
                fStack_18c = *(float *)(iVar2 + 0x20) - *pfStack_24;
                fStack_188 = *(float *)(iVar2 + 0x24) - pfStack_24[1];
                fStack_184 = *(float *)(iVar2 + 0x28) - pfStack_24[2];
                afStack_1d4[0] = fStack_18c;
                afStack_20c[(uint)bVar8 * -2 + 0xf] = afStack_1ac[(uint)bVar8 * -2 + 9];
                afStack_20c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10] =
                     afStack_1ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10];
                core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_00576250(afStack_20c + 0xe);
                uStack_1c8 = afStack_1ac[2];
                afStack_20c[(uint)bVar8 * -2 + 0x12] = afStack_1ac[(uint)bVar8 * -2 + 3];
                afStack_20c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
                     afStack_1ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
                puStack_14 = (byte *)
                             core_actor_cpp_normalizeAngleToPi_FUN_0040cfa0
                                       (fStack_1c4 - *(float *)&this_ptr->field_0x34);
                if ((ABS((float)puStack_14) < (float)_DAT_005d91e3) &&
                   (*(float *)&this_ptr->field_0xcde0 <= 0.0)) {
                  *(uint *)&this_ptr->field_0xd0a8 = 1;
                  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,100);
                  if (iVar2 < 0x4b) {
                    iVar2 = 3;
                  }
                  else if ((iVar2 < 0x4b) || (0x5a < iVar2)) {
                    iVar2 = 5;
                  }
                  else {
                    iVar2 = 4;
                  }
                  core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0
                            (&pCStack_20->base,iVar2,1);
                  *(uint *)&this_ptr->field_0xcde0 = 0x40400000;
                }
              }
            }
            else {
              if (*(float *)&this_ptr->field_0xd094 <= 0.0) {
                fStack_60 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
                CStack_e4.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-5.0,5.0);
                fStack_5c = fStack_60;
                CStack_e4.z = fStack_60;
                CStack_e4.y = 0.0;
                if (&CStack_e4 != pCStack_1c) {
                  pCStack_1c->x = CStack_e4.x;
                  pCStack_1c->y = 0.0;
                  pCStack_1c->z = fStack_60;
                }
                fStack_44 = SQRT(pCStack_1c->z * pCStack_1c->z +
                                 pCStack_1c->x * pCStack_1c->x + pCStack_1c->y * pCStack_1c->y);
                if (fStack_44 <= 0.0) {
                  pCStack_1c->z = 0.0;
                  pCStack_1c->y = pCStack_1c->z;
                  pCStack_1c->x = pCStack_1c->y;
                }
                else {
                  fVar1 = 1.0 / fStack_44;
                  pCStack_1c->x = pCStack_1c->x * fVar1;
                  pCStack_1c->y = pCStack_1c->y * fVar1;
                  pCStack_1c->z = pCStack_1c->z * fVar1;
                }
                fVar1 = pCStack_1c->y * _DAT_005d91d7;
                fVar10 = pCStack_1c->z * _DAT_005d91d7;
                pCStack_1c->x = pCStack_1c->x * _DAT_005d91d7;
                pCStack_1c->y = fVar1;
                pCStack_1c->z = fVar10;
                iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
                pCStack_1c->x = *(float *)(iVar2 + 0x20) + pCStack_1c->x;
                pCStack_1c->y = *(float *)(iVar2 + 0x24) + pCStack_1c->y;
                pCStack_1c->z = *(float *)(iVar2 + 0x28) + pCStack_1c->z;
                *(uint *)&this_ptr->field_0xd094 = 0x3f800000;
                puStack_40 = (byte *)CStack_e4.x;
                puStack_14 = (byte *)CStack_e4.x;
              }
              CStack_258.x = 0.0;
              CStack_258.y = 0.0;
              CStack_258.z = 0.0;
              core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                        ((CCharacter *)this_ptr,pCStack_1c,(CPathMap *)0x0,&CStack_258,0.2,0.0);
            }
          }
          break;
        case 3:
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
          if (*(int *)&this_ptr->field_0xcde4 == 0) {
            core_mattnntt_cpp_FUN_00593a90(this_ptr);
          }
          else {
            iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            fStack_2f4 = *pfStack_24 - *(float *)(iVar2 + 0x20);
            fStack_2f0 = pfStack_24[1] - *(float *)(iVar2 + 0x24);
            fStack_2ec = pfStack_24[2] - *(float *)(iVar2 + 0x28);
            fStack_198 = fStack_2f4;
            afStack_1ac[(uint)bVar8 * -2 + 6] = *(float *)((int)&stack0xfffffd10 + (uint)bVar8 * -8)
            ;
            afStack_1ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
                 *(float *)((int)&stack0xfffffd14 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
            if (afStack_20c + 0x14 != afStack_1ac + 5) {
              fStack_1bc = fStack_198;
              uStack_1b8 = uStack_194;
              uStack_1b4 = uStack_190;
            }
            puStack_34 = (byte *)core_motion_cpp_FUN_004fc930(&pCStack_20->base);
            puStack_14 = puStack_34;
            if ((0x3f7fffff < (int)puStack_34) && ((float)puStack_34 <= _DAT_005d91d3)) {
              (**(code **)(*(int *)(*(int *)&this_ptr->field_0x2628 + 0x154) + 0x78))
                        (*(int *)&this_ptr->field_0x2628,2);
            }
          }
          break;
        case 4:
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
          if (*(int *)&this_ptr->field_0xcde4 == 0) {
            core_mattnntt_cpp_FUN_00593a90(this_ptr);
          }
          else {
            iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            afStack_248[2] = *pfStack_24 - *(float *)(iVar2 + 0x20);
            afStack_248[3] = pfStack_24[1] - *(float *)(iVar2 + 0x24);
            fStack_238 = pfStack_24[2] - *(float *)(iVar2 + 0x28);
            fStack_1f8 = afStack_248[2];
            afStack_20c[(uint)bVar8 * -2 + 6] = afStack_248[(uint)bVar8 * -2 + 3];
            afStack_20c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
                 afStack_248[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
            if (afStack_248 + 5 != afStack_20c + 5) {
              fStack_234 = fStack_1f8;
              uStack_230 = uStack_1f4;
              uStack_22c = uStack_1f0;
            }
            puStack_3c = (byte *)core_motion_cpp_FUN_004fc930(&pCStack_20->base);
            puStack_14 = puStack_3c;
            if ((0x403fffff < (int)puStack_3c) && ((int)puStack_3c < 0x40800001)) {
              (**(code **)(*(int *)(*(int *)&this_ptr->field_0x2628 + 0x154) + 0x78))
                        (*(int *)&this_ptr->field_0x2628,2);
            }
          }
          break;
        case 5:
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
          if (*(int *)&this_ptr->field_0xcde4 == 0) {
            core_mattnntt_cpp_FUN_00593a90(this_ptr);
          }
          else {
            iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
            fStack_30c = *pfStack_24 - *(float *)(iVar2 + 0x20);
            fStack_308 = pfStack_24[1] - *(float *)(iVar2 + 0x24);
            fStack_304 = pfStack_24[2] - *(float *)(iVar2 + 0x28);
            fStack_120 = fStack_30c;
            afStack_140[(uint)bVar8 * -2 + 9] = *(float *)((int)&stack0xfffffcf8 + (uint)bVar8 * -8)
            ;
            afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
                 *(float *)((int)&stack0xfffffcfc + (uint)bVar8 * -8 + (uint)bVar8 * -8);
            if (afStack_1ac + 0x17 != afStack_140 + 8) {
              fStack_150 = fStack_120;
              uStack_14c = uStack_11c;
              uStack_148 = uStack_118;
            }
            puStack_38 = (byte *)core_motion_cpp_FUN_004fc930(&pCStack_20->base);
            puStack_14 = puStack_38;
            if ((0x403fffff < (int)puStack_38) && ((int)puStack_38 < 0x40800001)) {
              (**(code **)(*(int *)(*(int *)&this_ptr->field_0x2628 + 0x154) + 0x78))
                        (*(int *)&this_ptr->field_0x2628,2);
            }
          }
          break;
        case 6:
          (**(code **)(*(int *)&this_ptr->field_0x154 + 0x144))(this_ptr,delta_time);
          if (*(int *)&this_ptr->field_0xcde4 == 0) {
            core_mattnntt_cpp_FUN_00593a90(this_ptr);
          }
          break;
        case 9:
          if ((*(int *)&this_ptr->field_0xcdd0 == 0) && (*(int *)&this_ptr->field_0xdc == 0)) {
            core_skeleton_cpp_FUN_0054dbd0(pCStack_20,0);
            pfVar12 = afStack_140 + 5;
            afStack_12c[0] = afStack_b0[2];
            afStack_140[(uint)bVar8 * -2 + 6] = afStack_b0[(uint)bVar8 * -2 + 3];
            afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
                 afStack_b0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
            core_actor_cpp_FUN_00408b80(this_ptr,pfVar12);
            blood_type = BLOOD_TYPE_RED;
            pCVar9 = &CStack_90;
            CStack_90.x = fStack_114;
            *(float *)((int)&CStack_90 + (uint)bVar8 * -8 + 4) = afStack_140[(uint)bVar8 * -2 + 0xc]
            ;
            this_ptr_00 = g_CGorePtr;
            *(float *)((int)&CStack_90 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
                 afStack_140[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
            core_gore_cpp_CGore_createBloodPool_FUN_004cec40(this_ptr_00,pCVar9,blood_type);
            *(uint *)&this_ptr->field_0xcdd0 = 1;
          }
          break;
        case 0xd:
          iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
          iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
          if (iVar2 == 0) goto switchD_00593661_caseD_e;
          puStack_14 = (byte *)core_motion_cpp_FUN_004fc930(&pCStack_20->base);
          if ((float)_DAT_005d91db < (float)puStack_14) {
            core_motion_cpp_CMotionController_jumpToMotionByName_FUN_004fc3f0
                      (&pCStack_20->base,"stand",0.0);
          }
          break;
        case 0xe:
switchD_00593661_caseD_e:
          if (*(int *)&this_ptr->field_0xd068 == 0) {
            *(uint *)&this_ptr->field_0xd068 = 1;
            *(uint *)&this_ptr->field_0xd064 = 0;
            core_charactr_cpp_FUN_0042fbd0(this_ptr,pfStack_24,0,0,0x42480000,0,0x40000000);
          }
          break;
        case 0xf:
          if (*(int *)&this_ptr->field_0xd068 == 1) {
            *(uint *)&this_ptr->field_0xd064 = 0;
            *(uint *)&this_ptr->field_0xd068 = 0;
            core_charactr_cpp_FUN_0042fbd0(this_ptr,pfStack_24,0,0,0x42480000,0,0x40000000);
            *(uint *)&this_ptr->field_0xd090 = 0x40800000;
            *(uint *)&this_ptr->field_0xd08c = 1;
          }
        }
      }
      else {
        uVar3 = *(uint *)&this_ptr->field_0x273c;
        if (uVar3 < 2) {
          if (uVar3 == 1) {
LAB_005923d6:
            if (iVar2 != 2) {
              core_mattnntt_cpp_FUN_00593a90(this_ptr);
            }
          }
          else {
LAB_00592a8c:
            core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_20->base,0,1);
          }
        }
        else {
          if (uVar3 < 3) goto LAB_005923d6;
          if (uVar3 != 3) goto LAB_00592a8c;
          core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_20->base,0,1);
          engine_console_cpp_FUN_00441ff0
                    (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
        }
        pfStack_28[2] = 0.0;
        pfStack_28[1] = pfStack_28[2];
        *pfStack_28 = pfStack_28[1];
      }
      if (0.0 < *(float *)&this_ptr->field_0xcde0) {
        *(float *)&this_ptr->field_0xcde0 = *(float *)&this_ptr->field_0xcde0 - delta_time;
      }
      iVar2 = *(int *)(_DAT_01d5ba14 * 4 + 0x1d5ba04);
      iVar2 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
      if ((iVar2 != 0) && (*(int *)&this_ptr->field_0xd0a4 == 0)) {
        core_motion_cpp_CMotionController_setDesiredState_FUN_004fc0d0(&pCStack_20->base,0xd,1);
        *(uint *)&this_ptr->field_0xd0a4 = 1;
      }
      core_charactr_cpp_FUN_0042c1e0(this_ptr,delta_time);
      fStack_300 = *pfStack_30 * delta_time;
      fStack_2fc = pfStack_30[1] * delta_time;
      fStack_2f8 = pfStack_30[2] * delta_time;
      fStack_2b8 = *pfStack_30 * delta_time;
      *(uint *)((int)&stack0xfffffd4c + (uint)bVar8 * -8) =
           *(uint *)((int)&stack0xfffffd04 + (uint)bVar8 * -8);
      *(uint *)((int)&stack0xfffffd50 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
           *(uint *)((int)&stack0xfffffd08 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      fStack_2d0 = fStack_2b8 + *pfStack_2c;
      fStack_2cc = fStack_2b4 + pfStack_2c[1];
      fStack_2c8 = fStack_2b0 + pfStack_2c[2];
      fStack_168 = fStack_2b8 + *pfStack_2c;
      afStack_1ac[(uint)bVar8 * -2 + 0x12] = *(float *)((int)&stack0xfffffd34 + (uint)bVar8 * -8);
      pfVar12 = pfStack_2c;
      afStack_1ac[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
           *(float *)((int)&stack0xfffffd38 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
      fStack_d8 = fStack_168 + *pfStack_28;
      afStack_d4[0] = fStack_164 + pfStack_28[1];
      afStack_d4[1] = fStack_160 + pfStack_28[2];
      CStack_2ac.x = fStack_168 + *pfStack_28;
      *(float *)((int)&CStack_2ac + (uint)bVar8 * -8 + 4) = afStack_d4[(uint)bVar8 * -2];
      *(float *)((int)&CStack_2ac + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
           afStack_d4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
      pfVar12[2] = 0.0;
      pfVar12[1] = pfVar12[2];
      *pfVar12 = pfVar12[1];
      pfStack_28[2] = 0.0;
      pfStack_28[1] = pfStack_28[2];
      *pfStack_28 = pfStack_28[1];
      core_charactr_cpp_FUN_0042c230((CCharacter *)this_ptr,&CStack_2ac);
    }
    core_charactr_cpp_FUN_0042cd30((CCharacter *)this_ptr);
    core_skeleton_cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(pCStack_20);
    core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433350((CCharacter *)this_ptr,delta_time);
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)&this_ptr->field_0x2628,g_CWeaponClassInfo.name_hash);
    if (iVar2 != 0) {
      (**(code **)(*(int *)(iVar2 + 0x154) + 0xc))(iVar2,delta_time);
      return;
    }
  }
  return;
}
