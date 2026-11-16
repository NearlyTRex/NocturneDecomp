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
  CVector3f *position_offset;
  CVector3f *velocity;
  CVector3f *acceleration;
  CMatrix3x4f CStack_150;
  CMatrix3x4f CStack_120;
  CQuaternion4f CStack_f0;
  CQuaternion4f CStack_e0;
  CVector3f CStack_d0;
  float fStack_c4;
  float afStack_c0 [2];
  CVector3f CStack_b8;
  CVector3f CStack_ac;
  CVector3f CStack_a0;
  float fStack_94;
  float afStack_90 [2];
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [2];
  CVector3f CStack_4c;
  float fStack_40;
  float afStack_3c [2];
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
              CStack_4c.x = CStack_7c.x;
              *(uint *)((int)&CStack_4c + (uint)bVar9 * -8 + 4) =
                   *(uint *)((int)&CStack_7c + (uint)bVar9 * -8 + 4);
              *(uint *)((int)&CStack_4c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                   *(uint *)((int)&CStack_7c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
              fStack_58 = -CStack_4c.x;
              afStack_54[0] = -CStack_4c.y;
              afStack_54[1] = -CStack_4c.z;
              fStack_40 = -CStack_4c.x;
              afStack_3c[(uint)bVar9 * -2] = afStack_54[(uint)bVar9 * -2];
              afStack_3c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
                   afStack_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
              acceleration = &CStack_70;
              iVar4 = 0;
              fStack_94 = fStack_40 * _DAT_005f0c7e;
              afStack_90[0] = afStack_3c[0] * _DAT_005f0c7e;
              afStack_90[1] = afStack_3c[1] * _DAT_005f0c7e;
              CStack_88.x = fStack_40 * _DAT_005f0c7e;
              *(float *)((int)&CStack_88 + (uint)bVar9 * -8 + 4) = afStack_90[(uint)bVar9 * -2];
              *(float *)((int)&CStack_88 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                   afStack_90[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
              velocity = &CStack_88;
              position_offset = &CStack_4c;
              max_value = 1.0;
              fVar12 = 0.5;
              fStack_c4 = CStack_88.x * _DAT_005f0c82;
              afStack_c0[0] = CStack_88.y * _DAT_005f0c82;
              afStack_c0[1] = CStack_88.z * _DAT_005f0c82;
              CStack_70.x = CStack_88.x * _DAT_005f0c82;
              *(float *)((int)&CStack_70 + (uint)bVar9 * -8 + 4) = afStack_c0[(uint)bVar9 * -2];
              *(float *)((int)&CStack_70 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                   afStack_c0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar12,max_value);
              core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                        (pCStack_24,3.0,1.0,0.0,0.7,0.0,0.3,0.2,fStack_14,position_offset,velocity,
                         acceleration,iVar4);
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
            CStack_b8.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,6.0);
            CStack_b8.x = (float)((float10)dStack_34 * (float10)_DAT_005f0c86);
            CStack_b8.z = fStack_2c;
            CStack_a0.y = 1.0;
            CStack_ac.x = 0.0;
            CStack_ac.y = 0.1;
            CStack_ac.z = 0.0;
            CStack_a0.x = 0.0;
            CStack_a0.z = 0.0;
            fStack_28 = CStack_b8.y;
            fStack_14 = CStack_b8.x;
            core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                      ((CSimpleParticleSystem *)(param_1 + 0x154),2.0,0.7,0.0,0.3,1.0,1.0,0.0,0.0,
                       &CStack_b8,&CStack_ac,&CStack_a0,0);
            return;
          }
        }
      }
    }
  }
  return;
}
