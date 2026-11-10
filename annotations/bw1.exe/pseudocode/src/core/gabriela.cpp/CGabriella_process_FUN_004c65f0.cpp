// Name: core_gabriela.cpp_CGabriella_process_FUN_004c65f0
// Address: 004c65f0
// Address Range: [[004c65f0, 004c7a95]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_process_FUN_004c65f0(CGabriella *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_gabriela_cpp_CGabriella_process_FUN_004c65f0(CGabriella *this_ptr,float delta_time)

{
  byte *puVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  float fVar5;
  uint *puVar6;
  int iVar7;
  CAmmoBox *this_ptr_00;
  SMotion *pSVar8;
  float *pfVar9;
  uint *puVar10;
  float *pfVar11;
  bool bVar12;
  byte bVar13;
  float afStackY_1294 [990];
  CMotionController *pCVar14;
  CGabriella *pCVar15;
  char *pcVar16;
  CVector3f *pCVar17;
  CMatrix3x3f CStack_304;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float afStack_2c4 [6];
  float fStack_2ac;
  float afStack_2a8 [2];
  CVector3f CStack_2a0;
  uint uStack_294;
  float afStack_290 [4];
  float fStack_280;
  CVector3f CStack_27c;
  uint uStack_270;
  float afStack_26c [5];
  float afStack_258 [3];
  float fStack_24c;
  uint uStack_240;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  uint uStack_210;
  uint uStack_204;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  CVector3f CStack_1ec;
  float fStack_1e0;
  float afStack_1dc [5];
  float afStack_1c8 [3];
  float afStack_1bc [3];
  float fStack_1b0;
  float afStack_1ac [4];
  float fStack_19c;
  float afStack_198 [3];
  uint uStack_18c;
  uint uStack_188;
  float fStack_180;
  uint uStack_174;
  uint uStack_168;
  uint uStack_15c;
  uint uStack_150;
  float afStack_144 [3];
  float afStack_138 [3];
  uint uStack_12c;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  uint uStack_114;
  float fStack_110;
  uint uStack_108;
  float fStack_fc;
  uint uStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float afStack_d8 [4];
  float afStack_c8 [5];
  uint uStack_b4;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [4];
  uint uStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  double dStack_6c;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  float fStack_50;
  CBoxActor *pCStack_4c;
  uint *puStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CMotionController *pCStack_34;
  float fStack_30;
  uint *puStack_2c;
  uint *puStack_28;
  float fStack_24;
  float fStack_20;
  uint uStack_1c;
  float fStack_18;
  uint *puStack_14;
  
  bVar13 = 0;
  iVar7 = core_charactr_cpp_CCharacter_processCharacter_FUN_0042e1a0
                    ((CCharacter *)this_ptr,delta_time);
  if (iVar7 == 0) {
    return;
  }
  if (*(int *)&this_ptr->field_0xc1d4 == 2) {
    core_gabriela_cpp_FUN_004c7aa0(this_ptr,delta_time);
  }
  fVar5 = *(float *)&this_ptr->field_0xc1d0 - delta_time;
  *(float *)&this_ptr->field_0xc1d0 = fVar5;
  if (fVar5 < 0.0) {
    *(uint *)&this_ptr->field_0xc1d0 = 0;
  }
  core_gabriela_cpp_FUN_004c8900(this_ptr);
  pfVar9 = afStack_1ac + 0x1d;
  afStack_138[0] = afStack_26c[2];
  afStack_1ac[(uint)bVar13 * -2 + 0x1e] = afStack_26c[(uint)bVar13 * -2 + 3];
  afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f] =
       afStack_26c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
  core_actor_cpp_FUN_00408b40(this_ptr,pfVar9);
  CStack_27c.x = fStack_228;
  *(float *)((int)&CStack_27c + (uint)bVar13 * -8 + 4) = afStack_26c[(uint)bVar13 * -2 + 0x12];
  *(float *)((int)&CStack_27c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
       afStack_26c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
  *(uint *)&this_ptr->field_0x24a4 = 0;
  *(uint *)&this_ptr->field_0x24a0 = *(uint *)&this_ptr->field_0x24a4;
  *(uint *)&this_ptr->field_0x249c = *(uint *)&this_ptr->field_0x24a0;
  core_gabriela_cpp_FUN_004c83b0(this_ptr,delta_time);
  uStack_1c = (uint)(*(float *)&this_ptr->field_0x2538 <= 0.0);
  if (*(int *)&this_ptr->field_0x26fc != 0) {
    uStack_1c = 1;
  }
  if (*(int *)&this_ptr->field_0x1ff7c != 0) {
    uStack_1c = 1;
  }
  if (*(int *)&this_ptr->field_0x1ff84 != 0) {
    uStack_1c = 1;
  }
  puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(&this_ptr->field_0x158,8);
  if (0.0 < (float)puStack_14) {
    uStack_1c = 1;
  }
  puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(&this_ptr->field_0x158,0xb);
  if (0.0 < (float)puStack_14) {
    uStack_1c = 1;
  }
  puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(&this_ptr->field_0x158,0xc);
  if (0.0 < (float)puStack_14) {
    uStack_1c = 1;
  }
  puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(&this_ptr->field_0x158,0x12);
  if (0.0 < (float)puStack_14) {
    uStack_1c = 1;
  }
  *(uint *)&this_ptr->field_0x2528 = 0;
  *(uint *)&this_ptr->field_0x2524 = 0;
  fStack_24 = 0.0;
  if (*(int *)&this_ptr->field_0x2500 != 0) {
    puVar1 = &this_ptr->field_0x158;
    puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(puVar1,1);
    *(float *)&this_ptr->field_0x2524 =
         (float)puStack_14 * _DAT_01cc90c8 + *(float *)&this_ptr->field_0x2524;
    puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(puVar1,2);
    *(float *)&this_ptr->field_0x2524 =
         (float)puStack_14 * _DAT_01cc90cc + *(float *)&this_ptr->field_0x2524;
    puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(puVar1,3);
    *(float *)&this_ptr->field_0x2524 =
         *(float *)&this_ptr->field_0x2524 - (float)puStack_14 * _DAT_01cc90d0;
    puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(puVar1,0x14);
    fStack_24 = 0.0 - (float)puStack_14 * _DAT_00600d88;
    puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(puVar1,0x15);
    fStack_24 = (float)puStack_14 * _DAT_00600d88 + fStack_24;
    core_charactr_cpp_FUN_00435320(this_ptr,delta_time);
  }
  fStack_24 = fStack_24 * delta_time;
  iVar7 = *(int *)&this_ptr->field_0x1ff84;
  *(float *)&this_ptr->field_0x2524 = *(float *)&this_ptr->field_0x2524 * delta_time;
  if (iVar7 == 0) {
    if (*(int *)&this_ptr->field_0x26fc != 0) {
      if (*(int *)&this_ptr->field_0x2700 == 0) {
        core_actor_cpp_FUN_00408bb0(this_ptr,*(int *)&this_ptr->field_0x26fc + 0x20);
        afStack_258[0] = (float)uStack_240;
        afStack_26c[(uint)bVar13 * -2 + 6] = afStack_26c[(uint)bVar13 * -2 + 0xc];
        afStack_26c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
             afStack_26c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
        core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_26c + 5);
        uStack_270 = uStack_174;
        afStack_26c[(uint)bVar13 * -2] = afStack_1ac[(uint)bVar13 * -2 + 0xf];
        afStack_26c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
             afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10];
        puStack_14 = (uint *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(afStack_26c[0]);
        fStack_20 = (float)puStack_14;
        if ((float)puStack_14 < _DAT_005e1000) {
          fStack_20 = (float)puStack_14 + _DAT_005e0ffc;
        }
        if (_DAT_005e1004 < fStack_20) {
          fStack_20 = fStack_20 + _DAT_005e1008;
        }
        fStack_30 = delta_time * _DAT_005e0ffc;
        fStack_44 = -fStack_30;
        if (fStack_20 < fStack_44) {
          fStack_20 = fStack_44;
        }
        if (fStack_30 < fStack_20) {
          fStack_20 = fStack_30;
        }
        *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + fStack_20;
        core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0((CDemonActor *)this_ptr);
      }
      iStack_5c = *(int *)&this_ptr->field_0x26fc;
      puStack_14 = *(uint **)(iStack_5c + 0x154);
      pCStack_34 = (CMotionController *)&this_ptr->field_0x158;
      core_skeleton_cpp_FUN_00569130(pCStack_34,0);
      puVar6 = puStack_14;
      iVar7 = iStack_5c;
      puVar10 = &uStack_294;
      uStack_294 = uStack_b4;
      afStack_290[(uint)bVar13 * -2] = afStack_c8[(uint)bVar13 * -2 + 6];
      pCVar15 = this_ptr;
      afStack_290[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7];
      iVar7 = (*(code *)puVar6[0x44])(iVar7,pCVar15,puVar10);
      if (iVar7 == 0) {
        *(uint *)&this_ptr->field_0x26fc = 0;
      }
      else if (*(int *)&this_ptr->field_0x26fc != 0) {
        if (*(int *)&this_ptr->field_0xc1e4 != 0) {
          iVar7 = 7;
          pCVar14 = pCStack_34;
          goto LAB_004c698f;
        }
        goto LAB_004c6997;
      }
      goto LAB_004c6988;
    }
    iVar3 = *(int *)&this_ptr->field_0x1ff7c;
    if (iVar3 == 0) {
      iVar7 = core_charactr_cpp_CCharacter_processWalking_FUN_00432240
                        ((CCharacter *)this_ptr,delta_time);
      pCVar14 = (CMotionController *)&this_ptr->field_0x158;
      if (iVar7 == 0) {
        if (uStack_1c == 0) {
          pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCVar14);
          uVar4 = *(uint *)(pSVar8 + 0x24);
          if (uVar4 < 0xe) {
            if ((((uVar4 == 0) || (uVar4 < 2)) || (uVar4 < 3)) || (uVar4 == 3)) goto LAB_004c73cb;
          }
          else if (uVar4 < 0xf) {
            this_ptr_00 = (CAmmoBox *)
                          core_actor_cpp_castToClassHash_FUN_0040c600
                                    (*(uint *)&this_ptr->field_0x1ff78,
                                     g_CAmmoBoxClassInfo.name_hash);
            if (this_ptr_00 != (CAmmoBox *)0x0) {
              puStack_14 = (uint *)core_motion_cpp_FUN_00525020(pCVar14);
              core_ammobox_cpp_CAmmoBox_openBox_FUN_0040e1a0(this_ptr_00,(float)puStack_14);
            }
          }
          else if (uVar4 < 0x11) {
            if (uVar4 == 0x10) {
LAB_004c73cb:
              if (*(int *)&this_ptr->field_0x2500 != 0) {
                iVar7 = 0;
                if (*(int *)&this_ptr->field_0xc1d8 != 0) {
                  if (*(int *)&this_ptr->field_0xc1e0 == 0) {
                    iVar7 = 1;
                  }
                  else {
                    iVar7 = 2;
                  }
                }
                if (*(int *)&this_ptr->field_0xc1dc != 0) {
                  iVar7 = 3;
                }
                *(float *)&this_ptr->field_0x2508 =
                     *(float *)&this_ptr->field_0xc200 * *(float *)&this_ptr->field_0x2528;
                *(float *)&this_ptr->field_0x2514 =
                     *(float *)&this_ptr->field_0x2524 + *(float *)&this_ptr->field_0x2514;
                *(float *)&this_ptr->field_0x250c = *(float *)&this_ptr->field_0x250c + fStack_24;
                pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                                   ((CMotionController *)&this_ptr->field_0x158);
                if (iVar7 != *(int *)(pSVar8 + 0x24)) {
                  core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                            ((CMotionController *)&this_ptr->field_0x158,iVar7,1);
                }
                if ((*(int *)&this_ptr->field_0xc1e8 != 0) &&
                   (iVar7 = core_gabriela_cpp_CGabriella_findAndPickupNearbyObject_FUN_004c9500
                                      (this_ptr), iVar7 == 0)) {
                  core_gabriela_cpp_CGabriella_tryThrowObject_FUN_004c9eb0(this_ptr);
                }
              }
            }
          }
          else if ((uVar4 < 0x12) || ((0x13 < uVar4 && ((uVar4 < 0x15 || (uVar4 == 0x15))))))
          goto LAB_004c73cb;
        }
        goto LAB_004c6997;
      }
      uVar4 = *(uint *)&this_ptr->field_0x273c;
      if (uVar4 < 2) {
        if (uVar4 != 1) goto LAB_004c6988;
        iVar7 = 1;
      }
      else {
        if (2 < uVar4) {
          if (uVar4 == 3) {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCVar14,0,1);
            engine_console_cpp_FUN_00445430
                      (g_CConsolePtr,"%s confused while walking to scriptDest!\n",this_ptr);
            goto LAB_004c6997;
          }
          goto LAB_004c6988;
        }
        iVar7 = 2;
      }
      goto LAB_004c698f;
    }
    iStack_54 = iVar7;
    if (*(int *)&this_ptr->field_0xc1e4 != 0) {
      (**(code **)(*(int *)(iVar3 + 0x154) + 0x1c))(iVar3);
      pfVar9 = afStack_2c4;
      pfVar11 = &fStack_2dc;
      for (iVar7 = 6; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar11 = *pfVar9;
        pfVar9 = pfVar9 + (uint)bVar13 * -2 + 1;
        pfVar11 = pfVar11 + (uint)bVar13 * -2 + 1;
      }
      fStack_f0 = fStack_2dc + fStack_2d0;
      fStack_ec = fStack_2d8 + fStack_2cc;
      fStack_e8 = fStack_2d4 + fStack_2c8;
      fStack_e4 = fStack_2dc + fStack_2d0;
      afStack_1ac[(uint)bVar13 * -2 + 0x33] = afStack_1ac[(uint)bVar13 * -2 + 0x30];
      afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x34] =
           afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x31];
      fStack_1f8 = fStack_e4 * _DAT_005e0fe0;
      fStack_1f4 = fStack_e0 * _DAT_005e0fe0;
      fStack_1f0 = fStack_dc * _DAT_005e0fe0;
      afStack_1c8[0] = fStack_e4 * _DAT_005e0fe0;
      afStack_1dc[(uint)bVar13 * -2 + 6] = afStack_26c[(uint)bVar13 * -2 + 0x1e];
      afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
           afStack_26c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1f];
      core_actor_cpp_FUN_00408b40(*(uint *)&this_ptr->field_0x1ff7c,afStack_1dc + 5);
      pfVar9 = afStack_1dc + 2;
      afStack_1dc[2] = (float)uStack_168;
      afStack_1dc[(uint)bVar13 * -2 + 3] = afStack_1ac[(uint)bVar13 * -2 + 0x12];
      afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x13];
      core_actor_cpp_FUN_00408bb0(this_ptr,pfVar9);
      afStack_1ac[2] = (float)uStack_210;
      afStack_1ac[(uint)bVar13 * -2 + 3] = afStack_26c[(uint)bVar13 * -2 + 0x18];
      afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_26c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
      core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005a7520(afStack_1ac + 2);
      uStack_18c = uStack_204;
      afStack_1ac[(uint)bVar13 * -2 + 9] = afStack_26c[(uint)bVar13 * -2 + 0x1b];
      afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10] =
           afStack_26c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c];
      puVar10 = (uint *)core_actor_cpp_normalizeAngleToPi_FUN_0040cd60(uStack_188);
      fStack_a8 = fStack_2d0 - fStack_2dc;
      fStack_a4 = fStack_2cc - fStack_2d8;
      fStack_a0 = fStack_2c8 - fStack_2d4;
      fStack_90 = fStack_2d0 - fStack_2dc;
      afStack_8c[(uint)bVar13 * -2] = afStack_c8[(uint)bVar13 * -2 + 9];
      afStack_8c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
      fStack_120 = fStack_90 * _DAT_005e0fe0;
      fStack_11c = afStack_8c[0] * _DAT_005e0fe0;
      fStack_118 = afStack_8c[1] * _DAT_005e0fe0;
      fStack_fc = fStack_90 * _DAT_005e0fe0;
      afStack_1ac[(uint)bVar13 * -2 + 0x2d] = afStack_1ac[(uint)bVar13 * -2 + 0x24];
      afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2e] =
           afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x25];
      uStack_f8 = 0;
      puStack_28 = puVar10;
      puStack_14 = puVar10;
      if ((((fStack_19c - SQRT(fStack_f4 * fStack_f4 + fStack_fc * fStack_fc) < (float)_DAT_005e0fe4
            ) && (dStack_6c = (double)afStack_1ac[3], 1.0 < dStack_6c)) &&
          (dStack_6c < _DAT_005e0fec)) && (ABS((float)puVar10) < (float)_DAT_005e0ff4)) {
        puStack_2c = (uint *)(delta_time * _DAT_005e0ffc);
        if ((float)puVar10 < -(float)puStack_2c) {
          puStack_28 = (uint *)-(float)puStack_2c;
        }
        if ((float)puStack_2c < (float)puStack_28) {
          puStack_28 = puStack_2c;
        }
        *(float *)&this_ptr->field_0x34 = *(float *)&this_ptr->field_0x34 + (float)puStack_28;
        goto LAB_004c6997;
      }
    }
    if (iStack_54 == 0) {
      core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                ((CMotionController *)&this_ptr->field_0x158,0,1);
      core_hero_cpp_CHero_stopPushingBox_FUN_004ebbe0((CHero *)this_ptr);
    }
  }
  else {
    core_actor_cpp_FUN_00408b40(iVar7,iVar7 + 0x2d4);
    uStack_114 = uStack_150;
    afStack_1ac[(uint)bVar13 * -2 + 0x27] = afStack_1ac[(uint)bVar13 * -2 + 0x18];
    afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x28] =
         afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x19];
    if (*(float *)&this_ptr->field_0x24 <= fStack_110) goto LAB_004c6997;
    *(uint *)&this_ptr->field_0x1ff84 = 0;
    afStack_d8[0] = 0.0;
    afStack_d8[2] = 4.0;
    afStack_d8[1] = 0.5;
    core_actor_cpp_FUN_00408ac0(this_ptr,afStack_1ac + 0x35);
    fStack_21c = afStack_c8[2];
    afStack_26c[(uint)bVar13 * -2 + 0x15] = afStack_c8[(uint)bVar13 * -2 + 3];
    afStack_26c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16] =
         afStack_c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
    *(float *)&this_ptr->field_0x20 = fStack_21c + *(float *)&this_ptr->field_0x20;
    *(float *)&this_ptr->field_0x24 = fStack_218 + *(float *)&this_ptr->field_0x24;
    *(float *)&this_ptr->field_0x28 = fStack_214 + *(float *)&this_ptr->field_0x28;
    puStack_14 = (uint *)
                 (**(code **)(*(int *)&this_ptr->field_0x154 + 0x40))
                           (this_ptr,*(uint *)&this_ptr->field_0x2fec,0);
    *(uint **)&this_ptr->field_0x2504 = puStack_14;
    *(uint *)&this_ptr->field_0x2500 =
         (uint)(*(float *)&this_ptr->field_0x24 <
               *(float *)&this_ptr->field_0x2504 + (float)_DAT_005e100c);
LAB_004c6988:
    iVar7 = 0;
    pCVar14 = (CMotionController *)&this_ptr->field_0x158;
LAB_004c698f:
    core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0(pCVar14,iVar7,1);
  }
LAB_004c6997:
  if (*(int *)&this_ptr->field_0x1ff84 == 0) {
    if (((uStack_1c == 0) ||
        (pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                            ((CMotionController *)&this_ptr->field_0x158),
        *(int *)(pSVar8 + 0x24) == 0xd)) || (*(int *)&this_ptr->field_0xdc != 0)) {
      pCVar14 = (CMotionController *)&this_ptr->field_0x158;
      puVar10 = (uint *)((int)this_ptr + (uint)bVar13 * -8 + 0x2510);
      CStack_2a0.x = *(float *)&this_ptr->field_0x250c;
      *(uint *)((int)&CStack_2a0 + (uint)bVar13 * -8 + 4) = *puVar10;
      *(uint *)((int)&CStack_2a0 + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           puVar10[(uint)bVar13 * -2 + 1];
      pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770(pCVar14);
      uVar4 = *(uint *)(pSVar8 + 0x24);
      if (uVar4 < 3) {
        if (uVar4 == 0) {
          bVar12 = true;
LAB_004c7567:
          if (!bVar12) {
LAB_004c7569:
            CStack_2a0.x = CStack_2a0.x + *(float *)&this_ptr->field_0x249c;
            CStack_2a0.y = CStack_2a0.y + *(float *)&this_ptr->field_0x24a0;
            CStack_2a0.z = CStack_2a0.z + *(float *)&this_ptr->field_0x24a4;
          }
        }
      }
      else if (3 < uVar4) {
        if (uVar4 < 0x11) {
          bVar12 = uVar4 == 0x10;
          goto LAB_004c7567;
        }
        if (0x11 < uVar4) {
          if (uVar4 < 0x14) goto LAB_004c7569;
          if (0x14 < uVar4) {
            bVar12 = uVar4 == 0x15;
            goto LAB_004c7567;
          }
        }
      }
      core_charactr_cpp_FUN_0042d700(this_ptr,delta_time);
      afStack_290[2] = *(float *)&this_ptr->field_0x2518 * delta_time;
      pCVar17 = &CStack_2a0;
      afStack_290[3] = *(float *)&this_ptr->field_0x251c * delta_time;
      fStack_280 = *(float *)&this_ptr->field_0x2520 * delta_time;
      fStack_78 = afStack_290[2];
      afStack_8c[(uint)bVar13 * -2 + 6] = afStack_290[(uint)bVar13 * -2 + 3];
      afStack_8c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
           afStack_290[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4];
      CStack_2a0.x = CStack_2a0.x + fStack_78;
      CStack_2a0.y = CStack_2a0.y + fStack_74;
      CStack_2a0.z = CStack_2a0.z + fStack_70;
      core_charactr_cpp_FUN_0042d750((CCharacter *)this_ptr,pCVar17);
    }
  }
  else {
    puStack_14 = (uint *)&this_ptr->field_0x249c;
    core_actor_cpp_FUN_00408ac0(this_ptr,puStack_14);
    fStack_1e0 = fStack_1b0;
    afStack_1dc[(uint)bVar13 * -2] = afStack_1ac[(uint)bVar13 * -2];
    afStack_1dc[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
         afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
    *(float *)&this_ptr->field_0x20 = *(float *)&this_ptr->field_0x20 + fStack_1e0;
    *(float *)&this_ptr->field_0x24 = *(float *)&this_ptr->field_0x24 + afStack_1dc[0];
    *(float *)&this_ptr->field_0x28 = *(float *)&this_ptr->field_0x28 + afStack_1dc[1];
    puStack_14[2] = 0;
    puStack_14[1] = puStack_14[2];
    *puStack_14 = puStack_14[1];
  }
  uVar4 = uStack_1c;
  core_charactr_cpp_CCharacter_preProcess_FUN_0042e160((CCharacter *)this_ptr);
  if (((uVar4 == 0) && (*(int *)&this_ptr->field_0xc1f0 != 0)) &&
     (*(int *)&this_ptr->field_0x1fe20 != 0)) {
    bVar2 = (byte)this_ptr->weapon_state_flags;
    if ((bVar2 & 3) == 0) {
      *(byte *)&this_ptr->weapon_state_flags = bVar2 | 2;
    }
    else {
      *(byte *)&this_ptr->weapon_state_flags = bVar2 & 0xfc;
    }
  }
  iVar7 = core_actor_cpp_castToClassHash_FUN_0040c600
                    (*(uint *)&this_ptr->field_0x25b0,DAT_007c5330);
  if (iVar7 != 0) {
    if (((*(int *)&this_ptr->field_0xc1ec != 0) && (uStack_1c == 0)) &&
       (*(uint *)(iVar7 + 0x2330) = (uint)(*(int *)(iVar7 + 0x2330) == 0),
       *(int *)(iVar7 + 0x678) == 1)) {
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,"flashlit.wav");
    }
    if (*(int *)(iVar7 + 0x2330) != 0) {
      this_ptr->flashlight_angle =
           *(float *)&this_ptr->field_0xc204 * _DAT_005e0ffc * (float)_DAT_005e1014 * delta_time +
           this_ptr->flashlight_angle;
      fStack_3c = core_gabriela_cpp_CGabriella_getFlashlightMinAngle_FUN_004c88a0(this_ptr);
      puStack_14 = (uint *)fStack_3c;
      puStack_48 = (uint *)
                   core_gabriela_cpp_CGabriella_getFlashlightMaxAngle_FUN_004c88f0(this_ptr);
      if (this_ptr->flashlight_angle < fStack_3c) {
        this_ptr->flashlight_angle = fStack_3c;
      }
      puStack_14 = puStack_48;
      if ((float)puStack_48 < this_ptr->flashlight_angle) {
        this_ptr->flashlight_angle = (float)puStack_48;
      }
    }
  }
  if ((this_ptr->weapon_state_flags & 1) == 0) {
    fVar5 = this_ptr->holster_blend - delta_time / _DAT_00600d4c;
    this_ptr->holster_blend = fVar5;
    if (fVar5 < 0.0) {
      this_ptr->holster_blend = 0.0;
    }
  }
  else {
    fVar5 = delta_time / _DAT_00600d48 + this_ptr->holster_blend;
    this_ptr->holster_blend = fVar5;
    if (1.0 < fVar5) {
      this_ptr->holster_blend = 1.0;
    }
  }
  if ((this_ptr->weapon_state_flags & 2) == 0) {
    fStack_38 = this_ptr->draw_blend;
    fVar5 = fStack_38 - delta_time / _DAT_00600d4c;
    this_ptr->draw_blend = fVar5;
    if (fVar5 < 0.0) {
      this_ptr->draw_blend = 0.0;
    }
    fStack_18 = _DAT_00600d54 + (float)_DAT_005e101c;
    if ((fStack_18 <= fStack_38) && (this_ptr->draw_blend < fStack_18)) {
      pcVar16 = "undraw-s.wav @ .7";
      goto LAB_004c6b92;
    }
  }
  else {
    fStack_40 = this_ptr->draw_blend;
    fVar5 = delta_time / _DAT_00600d48 + fStack_40;
    this_ptr->draw_blend = fVar5;
    if (1.0 < fVar5) {
      this_ptr->draw_blend = 1.0;
    }
    fStack_50 = _DAT_00600d54 + (float)_DAT_005e1024;
    if ((fStack_40 <= fStack_50) && (fStack_50 < this_ptr->draw_blend)) {
      core_game_cpp_CGame_resetWeaponSwitchTimers_FUN_004d6300(g_CGamePtr);
      pcVar16 = "draw-f.wav @ 1.5";
LAB_004c6b92:
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x2c))(this_ptr,pcVar16);
    }
  }
  if ((this_ptr->weapon_state_flags & 3) == 0) {
    fVar5 = this_ptr->aim_blend - delta_time / _DAT_00600d4c;
    this_ptr->aim_blend = fVar5;
    if (fVar5 < 0.0) {
      this_ptr->aim_blend = 0.0;
    }
  }
  else {
    fVar5 = delta_time / _DAT_00600d48 + this_ptr->aim_blend;
    this_ptr->aim_blend = fVar5;
    if (1.0 < fVar5) {
      this_ptr->aim_blend = 1.0;
    }
  }
  if (uStack_1c == 0) {
    if (((iVar7 == 0) || (*(int *)(iVar7 + 0x2330) == 0)) ||
       (pSVar8 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                           ((CMotionController *)&this_ptr->field_0x158),
       *(int *)(pSVar8 + 0x24) == 5)) {
      fVar5 = delta_time / _DAT_00600d4c;
      goto LAB_004c6bf3;
    }
    fVar5 = delta_time / _DAT_00600d48 + this_ptr->light_aim_blend;
  }
  else {
    fVar5 = (delta_time / _DAT_00600d4c) * (float)_DAT_005e0fe4;
LAB_004c6bf3:
    fVar5 = this_ptr->light_aim_blend - fVar5;
  }
  uVar4 = uStack_1c;
  this_ptr->light_aim_blend = fVar5;
  if (this_ptr->light_aim_blend < 0.0) {
    this_ptr->light_aim_blend = 0.0;
  }
  if ((float)_DAT_005e102c < this_ptr->light_aim_blend) {
    this_ptr->light_aim_blend = 0.9;
  }
  core_gabriela_cpp_CGabriella_updateAimTracking_FUN_004ca450(this_ptr,delta_time,uStack_1c);
  fVar5 = this_ptr->fire_cooldown_timer - delta_time / _DAT_00600d5c;
  this_ptr->fire_cooldown_timer = fVar5;
  if (((fVar5 <= 0.0) && (this_ptr->fire_cooldown_timer = 0.0, uVar4 == 0)) &&
     ((*(int *)&this_ptr->field_0xc1e4 != 0 && (this_ptr->fire_state == 0)))) {
    if (this_ptr->weapon_state_flags == 0) {
      if ((this_ptr->draw_blend <= 0.0) &&
         (iVar7 = core_hero_cpp_CHero_tryInteract_FUN_004eb090((CHero *)this_ptr), iVar7 == 0)) {
        iVar7 = core_hero_cpp_FUN_004eb3e0(this_ptr,0);
        switch(iVar7) {
        case 0:
        case 1:
          break;
        case 2:
        case 3:
          core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                    ((CMotionController *)&this_ptr->field_0x158,0x12,1);
          break;
        default:
          core_hero_cpp_CHero_tryOpenDoor_FUN_004eb5e0((CHero *)this_ptr);
        }
        if ((iVar7 == 0) &&
           (iVar7 = core_hero_cpp_CHero_tryTalkToNearbyCharacter_FUN_004eb240((CHero *)this_ptr),
           iVar7 == 0)) {
          iVar7 = core_hero_cpp_FUN_004eb890(this_ptr);
          if (iVar7 == 0) {
            iVar7 = core_hero_cpp_FUN_004eb660((CHero *)this_ptr);
            if (iVar7 == 0) {
              core_gabriela_cpp_CGabriella_tryClimbLadder_FUN_004c99e0(this_ptr);
            }
            else {
              core_hero_cpp_FUN_004eb7f0(this_ptr);
            }
          }
          else {
            core_motion_cpp_CMotionController_setDesiredState_FUN_005247c0
                      ((CMotionController *)&this_ptr->field_0x158,0xd,1);
          }
        }
      }
    }
    else {
      this_ptr->fire_state = 3;
    }
  }
  uVar4 = uStack_1c;
  core_gabriela_cpp_CGabriella_updateWeaponAndAimAnimation_FUN_004c89c0(this_ptr);
  core_gabriela_cpp_CGabriella_updateClavicleCollisionAvoidance_FUN_004cad20
            (this_ptr,delta_time,(uint)(uVar4 == 0));
  core_charactr_cpp_CCharacter_applyGestureLookAt_FUN_00433e80((CCharacter *)this_ptr,delta_time);
  puStack_14 = (uint *)core_motion_cpp_FUN_00524a40(&this_ptr->field_0x158,0xd);
  if ((float)puStack_14 <= 0.0) {
    core_hero_cpp_CHero_stopPushingBox_FUN_004ebbe0((CHero *)this_ptr);
  }
  else {
    puStack_14 = (uint *)
                 core_motion_cpp_FUN_00525020((CMotionController *)&this_ptr->field_0x158);
    if ((1.0 < (float)puStack_14) &&
       (pCStack_4c = (CBoxActor *)
                     core_actor_cpp_castToClassHash_FUN_0040c600
                               (*(uint *)&this_ptr->field_0x1ff7c,
                                g_CBoxActorClassInfo.name_hash), pCStack_4c != (CBoxActor *)0x0)) {
      core_gabriela_cpp_FUN_004c8900(this_ptr);
      pfVar9 = afStack_1ac + 0x1a;
      afStack_144[0] = (float)uStack_108;
      afStack_1ac[(uint)bVar13 * -2 + 0x1b] = afStack_1ac[(uint)bVar13 * -2 + 0x2a];
      afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x1c] =
           afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x2b];
      core_actor_cpp_FUN_00408b40(this_ptr,pfVar9);
      pCVar17 = &CStack_9c;
      fStack_234 = fStack_24c;
      afStack_26c[(uint)bVar13 * -2 + 0xf] = afStack_26c[(uint)bVar13 * -2 + 9];
      afStack_26c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x10] =
           afStack_26c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 10];
      fStack_2ac = fStack_234 - CStack_27c.x;
      afStack_2a8[0] = fStack_230 - CStack_27c.y;
      afStack_2a8[1] = fStack_22c - CStack_27c.z;
      CStack_9c.x = fStack_234 - CStack_27c.x;
      *(float *)((int)&CStack_9c + (uint)bVar13 * -8 + 4) = afStack_2a8[(uint)bVar13 * -2];
      *(float *)((int)&CStack_9c + (uint)bVar13 * -8 + (uint)bVar13 * -8 + 8) =
           afStack_2a8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1];
      CStack_9c.y = 0.0;
      core_actor_cpp_FUN_00408b00(this_ptr,pCVar17);
      afStack_d8[3] = (float)uStack_15c;
      afStack_c8[(uint)bVar13 * -2] = afStack_1ac[(uint)bVar13 * -2 + 0x15];
      afStack_c8[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 1] =
           afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x16];
      if (0.0 < afStack_c8[1]) {
        core_boxactor_cpp_CBoxActor_resolveRayPush_FUN_00422ab0(pCStack_4c,&CStack_27c,&CStack_9c);
      }
    }
  }
  core_gabriela_cpp_CGabriella_updateWeaponPosition_FUN_004c91b0(this_ptr,delta_time);
  if (this_ptr->fire_state == 3) {
    iStack_58 = core_actor_cpp_castToClassHash_FUN_0040c600
                          (*(uint *)&this_ptr->field_0x1fe20,g_CDynamiteClassInfo.name_hash);
    if (iStack_58 != 0) {
      if (*(int *)&this_ptr->field_0xc1e4 == 0) {
        this_ptr->fire_state = 2;
      }
      else {
        fVar5 = delta_time * (float)_DAT_005e1034 + *(float *)&this_ptr->field_0x5ab1c;
        *(float *)&this_ptr->field_0x5ab1c = fVar5;
        if (0x42700000 < fVar5) {
          *(uint *)&this_ptr->field_0xc1e4 = 0;
          this_ptr->fire_state = 2;
          *(float *)&this_ptr->field_0x5ab1c = 0x42700000;
        }
      }
      CStack_1ec.x = this_ptr->aim_pitch;
      CStack_1ec.z = 0.0;
      CStack_1ec.y = 0.0;
      core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0(&CStack_304,&CStack_1ec);
      afStack_1bc[2] = *(float *)&this_ptr->field_0x5ab1c;
      afStack_1bc[0] = 0.0;
      afStack_1bc[1] = 0.0;
      core_dirmat_cpp_FUN_0045f690(&CStack_304,afStack_1dc + 8);
      pfVar9 = afStack_1ac + 5;
      afStack_198[0] = (float)uStack_12c;
      afStack_1ac[(uint)bVar13 * -2 + 6] = afStack_1ac[(uint)bVar13 * -2 + 0x21];
      afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 7] =
           afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0x22];
      core_actor_cpp_FUN_00408ac0(this_ptr,pfVar9);
      afStack_8c[2] = fStack_180;
      afStack_8c[(uint)bVar13 * -2 + 3] = afStack_1ac[(uint)bVar13 * -2 + 0xc];
      afStack_8c[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 4] =
           afStack_1ac[(uint)bVar13 * -2 + (uint)bVar13 * -2 + 0xd];
      if ((float *)(iStack_58 + 0x57c) != afStack_8c + 2) {
        *(float *)(iStack_58 + 0x57c) = afStack_8c[2];
        *(float *)(iStack_58 + 0x580) = afStack_8c[3];
        *(uint *)(iStack_58 + 0x584) = uStack_7c;
      }
      goto LAB_004c7a4b;
    }
    this_ptr->fire_state = 2;
LAB_004c6e2d:
    *(uint *)&this_ptr->field_0x5ab1c = _DAT_00600d8c;
    iVar7 = core_gabriela_cpp_CGabriella_canFireWeapon_FUN_004c9dd0(this_ptr);
    if (iVar7 == 0) goto LAB_004c7a58;
    this_ptr->fire_state = 1;
  }
  else {
LAB_004c7a4b:
    if (this_ptr->fire_state == 2) goto LAB_004c6e2d;
LAB_004c7a58:
    if (this_ptr->fire_state != 1) goto LAB_004c6e81;
  }
  this_ptr->fire_state = 0;
  core_gabriela_cpp_CGabriella_tryFireWeapon_FUN_004c9e40(this_ptr);
  if (*(int *)(*(int *)&this_ptr->field_0x1fe20 + 0x2ec) == 0) {
    *(uint *)&this_ptr->field_0xc1e4 = 0;
  }
LAB_004c6e81:
  iVar7 = (**(code **)(*(int *)&this_ptr->field_0x154 + 0x10c))(this_ptr);
  if (iVar7 != 2) {
    core_cloth_cpp_CCloth_process_FUN_00440610
              ((CCloth *)&this_ptr->field_0x1ffec,(CVector3f *)&this_ptr->field_0x20,
               (CVector3f *)&this_ptr->field_0x30,delta_time,*(float *)&this_ptr->field_0x2504,
               (CDeformableModelInstance *)&this_ptr->field_0x158);
  }
  (**(code **)(*(int *)(*(int *)&this_ptr->field_0x1fe20 + 0x154) + 0xc))
            (*(int *)&this_ptr->field_0x1fe20,delta_time);
  if (*(int *)(*(int *)&this_ptr->field_0x1fe20 + 0xfc) == 0) {
    return;
  }
  *(uint *)&this_ptr->field_0xfc = 1;
  return;
}
