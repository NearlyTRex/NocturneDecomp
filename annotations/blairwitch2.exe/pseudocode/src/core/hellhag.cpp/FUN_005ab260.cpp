// Name: core_hellhag.cpp_FUN_005ab260
// Address: 005ab260
// Address Range: [[005ab260, 005ab752]]
// Convention: unknown
// Signature: void core_hellhag_cpp_FUN_005ab260(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hellhag_cpp_FUN_005ab260(int param_1,float param_2)

{
  int iVar1;
  SMotion *pSVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  CMatrix3x4f *pCVar6;
  uint *puVar7;
  CMatrix3x4f *pCVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  float afStackY_18cc [1490];
  float fVar12;
  float max_value;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  CMatrix3x4f CStack_150;
  CMatrix3x4f CStack_120;
  CQuaternion4f CStack_f0;
  CQuaternion4f CStack_e0;
  CVector3f CStack_d0;
  float fStack_c4;
  float afStack_c0 [4];
  float fStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  float fStack_94;
  float afStack_90 [4];
  float fStack_80;
  CVector3f CStack_7c;
  float fStack_70;
  float afStack_6c [2];
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  double dStack_34;
  float fStack_2c;
  float fStack_28;
  CSimpleParticleSystem *pCStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar9 = 0;
  iVar1 = core_muzzle_cpp_FUN_0059daa0();
  if (iVar1 == 0) {
    iVar1 = core_muzzle_cpp_FUN_0059daa0();
    if (iVar1 == 0) {
      iVar1 = core_muzzle_cpp_FUN_0059daa0();
      if (iVar1 == 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
      }
    }
  }
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((CSimpleParticleSystem *)(param_1 + 0x154),param_2);
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((CSimpleParticleSystem *)(param_1 + 0x264),param_2);
  pSVar2 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_005035c0
                     ((CMotionController *)(param_1 + 0x2b4));
  if (pSVar2->state_index == 0) {
    if (*(char *)(param_1 + 0x11741) == '\0') {
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x11848));
    }
    else {
      fVar12 = *(float *)(param_1 + 0x11840) - param_2;
      *(float *)(param_1 + 0x11840) = fVar12;
      if (fVar12 <= 0.0) {
        *(uint *)(param_1 + 0x11840) = *(uint *)(param_1 + 0x11844);
        uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))();
        *(uint *)(param_1 + 0x11848) = uVar3;
      }
    }
  }
  else {
    sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x11848));
  }
  if (*(float *)(param_1 + 0x25a8) < *(float *)(param_1 + 0x25ac)) {
    iVar1 = core_muzzle_cpp_FUN_0059daa0();
    if (iVar1 == 0) {
      iVar1 = core_muzzle_cpp_FUN_0059daa0();
      if (iVar1 == 0) {
        *(float *)(param_1 + 0x25a8) = param_2 * (float)_DAT_005f0c76 + *(float *)(param_1 + 0x25a8)
        ;
        iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_00550b70(*(uint *)(param_1 + 0x1185c));
        if (iVar1 == 0) {
          sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
          iVar1 = 2;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
          sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005503e0((double)fStack_14,iVar1);
          uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x38))();
          *(uint *)(param_1 + 0x1185c) = uVar3;
          sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
        }
        iVar1 = core_bwspart_cpp_CSimpleParticleSystem_isActive_FUN_005a8130
                          ((CSimpleParticleSystem *)(param_1 + 0x154));
        if (iVar1 != 0) {
          iVar1 = 0;
          pCStack_24 = (CSimpleParticleSystem *)(param_1 + 0x154);
          do {
            iVar4 = core_bwgrndma_cpp_FUN_005a7ed0();
            if (iVar4 != 0) {
              fStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.1415927,6.2831855);
              fStack_14 = fStack_20;
              fStack_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.1415927,6.2831855);
              fStack_14 = fStack_1c;
              CStack_64.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.1415927,6.2831855)
              ;
              CStack_64.x = fStack_20;
              CStack_64.y = fStack_1c;
              fStack_18 = CStack_64.z;
              fStack_14 = CStack_64.z;
              core_xform_cpp_eulerToQuaternion_FUN_00594380(&CStack_64,&CStack_e0);
              CStack_f0.w = CStack_e0.w;
              puVar7 = (uint *)((int)&CStack_f0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
              puVar5 = (uint *)((int)&CStack_e0 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
              *(uint *)((int)&CStack_f0 + (uint)bVar9 * -8 + 4) =
                   *(uint *)((int)&CStack_e0 + (uint)bVar9 * -8 + 4);
              *puVar7 = *puVar5;
              puVar7[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
              core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_f0,&CStack_150);
              pCVar6 = &CStack_150;
              pCVar8 = &CStack_120;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                pCVar8->m[0].w = pCVar6->m[0].w;
                pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
                pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
              }
              CStack_d0.x = 0.0;
              CStack_d0.y = 0.0;
              CStack_d0.z = 8.0;
              core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_d0,&CStack_120,&CStack_7c);
              afStack_54[2] = CStack_7c.x;
              afStack_54[(uint)bVar9 * -2 + 3] = *(float *)((int)&CStack_7c + (uint)bVar9 * -8 + 4);
              afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                   *(float *)((int)&CStack_7c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
              fStack_58 = -afStack_54[2];
              afStack_54[0] = -afStack_54[3];
              afStack_54[1] = -fStack_44;
              fStack_40 = -afStack_54[2];
              afStack_54[(uint)bVar9 * -2 + 6] = afStack_54[(uint)bVar9 * -2];
              afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
                   afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
              pfVar15 = &fStack_70;
              uVar3 = 0;
              fStack_94 = fStack_40 * _DAT_005f0c7e;
              afStack_90[0] = fStack_3c * _DAT_005f0c7e;
              afStack_90[1] = fStack_38 * _DAT_005f0c7e;
              afStack_90[2] = fStack_40 * _DAT_005f0c7e;
              afStack_90[(uint)bVar9 * -2 + 3] = afStack_90[(uint)bVar9 * -2];
              afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
                   afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
              pfVar14 = afStack_90 + 2;
              pfVar13 = afStack_54 + 2;
              max_value = 1.0;
              fVar12 = 0.5;
              fStack_c4 = afStack_90[2] * _DAT_005f0c82;
              afStack_c0[0] = afStack_90[3] * _DAT_005f0c82;
              afStack_c0[1] = fStack_80 * _DAT_005f0c82;
              fStack_70 = afStack_90[2] * _DAT_005f0c82;
              afStack_6c[(uint)bVar9 * -2] = afStack_c0[(uint)bVar9 * -2];
              afStack_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                   afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar12,max_value);
              core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                        (pCStack_24,0x40400000,0x3f800000,0,0x3f333333,0,0x3e99999a,0x3e4ccccd,
                         fStack_14,pfVar13,pfVar14,pfVar15,uVar3);
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < 5);
          iVar1 = core_bwgrndma_cpp_FUN_005a7ed0();
          if (iVar1 != 0) {
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
            fVar10 = (float10)fcos((float10)fStack_14);
            fVar11 = (float10)fsin((float10)fStack_14);
            dStack_34 = (double)fVar11;
            fStack_2c = (float)(fVar10 * (float10)_DAT_005f0c86);
            afStack_c0[3] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,6.0);
            afStack_c0[2] = (float)((float10)dStack_34 * (float10)_DAT_005f0c86);
            fStack_b0 = fStack_2c;
            uStack_9c = 0x3f800000;
            uStack_ac = 0;
            uStack_a8 = 0x3dcccccd;
            uStack_a4 = 0;
            uStack_a0 = 0;
            uStack_98 = 0;
            fStack_28 = afStack_c0[3];
            fStack_14 = afStack_c0[2];
            core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                      ((CSimpleParticleSystem *)(param_1 + 0x154),0x40000000,0x3f333333,0,0x3e99999a
                       ,0x3f800000,0x3f800000,0,0,afStack_c0 + 2,&uStack_ac,&uStack_a0,0);
            return;
          }
        }
      }
    }
  }
  return;
}
