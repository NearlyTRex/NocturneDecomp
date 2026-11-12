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
  uint uVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  float *pfVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float afStackY_18cc [1490];
  float fVar9;
  float max_value;
  float *pfVar10;
  float *pfVar11;
  CMatrix3x4f CStack_150;
  float afStack_120 [12];
  CQuaternion4f CStack_f0;
  float fStack_e0;
  float afStack_dc [7];
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
  float fStack_7c;
  float afStack_70 [3];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
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
  
  bVar6 = 0;
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
  iVar1 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4);
  if (*(int *)(iVar1 + 0x24) == 0) {
    if (*(char *)(param_1 + 0x11741) == '\0') {
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x11848));
    }
    else {
      fVar9 = *(float *)(param_1 + 0x11840) - param_2;
      *(float *)(param_1 + 0x11840) = fVar9;
      if (fVar9 <= 0.0) {
        *(uint *)(param_1 + 0x11840) = *(uint *)(param_1 + 0x11844);
        uVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))();
        *(uint *)(param_1 + 0x11848) = uVar2;
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
        iVar1 = sound_sndmain_cpp_FUN_00550b70(*(uint *)(param_1 + 0x1185c));
        if (iVar1 == 0) {
          sound_sndmain_cpp_pushSfxOptions_FUN_00550450();
          iVar1 = 2;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
          sound_sndmain_cpp_setNextSfxTriggerTime_FUN_005503e0((double)fStack_14,iVar1);
          uVar2 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x38))();
          *(uint *)(param_1 + 0x1185c) = uVar2;
          sound_sndmain_cpp_popSfxOptions_FUN_005504d0();
        }
        iVar1 = core_bwspart_cpp_CSimpleParticleSystem_isActive_FUN_005a8130
                          ((CSimpleParticleSystem *)(param_1 + 0x154));
        if (iVar1 != 0) {
          iVar1 = 0;
          pCStack_24 = (CSimpleParticleSystem *)(param_1 + 0x154);
          do {
            iVar3 = core_bwgrndma_cpp_FUN_005a7ed0();
            if (iVar3 != 0) {
              fStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.1415927,6.2831855);
              fStack_14 = fStack_20;
              fStack_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.1415927,6.2831855);
              fStack_14 = fStack_1c;
              fStack_5c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.1415927,6.2831855);
              fStack_64 = fStack_20;
              fStack_60 = fStack_1c;
              fStack_18 = fStack_5c;
              fStack_14 = fStack_5c;
              core_xform_cpp_FUN_00594380(afStack_90 + 0xb);
              CStack_f0.w = fStack_e0;
              pfVar5 = (float *)((int)&CStack_f0 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
              *(float *)((int)&CStack_f0 + (uint)bVar6 * -8 + 4) = afStack_dc[(uint)bVar6 * -2];
              *pfVar5 = afStack_dc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
              pfVar5[(uint)bVar6 * -2 + 1] =
                   (afStack_dc + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
              core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_f0,&CStack_150);
              pCVar4 = &CStack_150;
              pfVar5 = afStack_120;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *pfVar5 = pCVar4->m[0].w;
                pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
                pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
              }
              afStack_dc[3] = 0.0;
              afStack_dc[4] = 0.0;
              afStack_dc[5] = 8.0;
              core_xform_cpp_FUN_00591530();
              afStack_54[2] = fStack_7c;
              afStack_54[(uint)bVar6 * -2 + 3] = afStack_90[(uint)bVar6 * -2 + 6];
              afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                   afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
              fStack_58 = -afStack_54[2];
              afStack_54[0] = -afStack_54[3];
              afStack_54[1] = -fStack_44;
              fStack_40 = -afStack_54[2];
              afStack_54[(uint)bVar6 * -2 + 6] = afStack_54[(uint)bVar6 * -2];
              afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
                   afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
              pfVar5 = afStack_90 + 8;
              uVar2 = 0;
              fStack_94 = fStack_40 * _DAT_005f0c7e;
              afStack_90[0] = fStack_3c * _DAT_005f0c7e;
              afStack_90[1] = fStack_38 * _DAT_005f0c7e;
              afStack_90[2] = fStack_40 * _DAT_005f0c7e;
              afStack_90[(uint)bVar6 * -2 + 3] = afStack_90[(uint)bVar6 * -2];
              afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
                   afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
              pfVar11 = afStack_90 + 2;
              pfVar10 = afStack_54 + 2;
              max_value = 1.0;
              fVar9 = 0.5;
              afStack_dc[6] = afStack_90[2] * _DAT_005f0c82;
              afStack_c0[0] = afStack_90[3] * _DAT_005f0c82;
              afStack_c0[1] = fStack_80 * _DAT_005f0c82;
              afStack_70[0] = afStack_90[2] * _DAT_005f0c82;
              afStack_90[(uint)bVar6 * -2 + 9] = afStack_c0[(uint)bVar6 * -2];
              afStack_90[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
                   afStack_c0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar9,max_value);
              core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                        (pCStack_24,0x40400000,0x3f800000,0,0x3f333333,0,0x3e99999a,0x3e4ccccd,
                         fStack_14,pfVar10,pfVar11,pfVar5,uVar2);
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < 5);
          iVar1 = core_bwgrndma_cpp_FUN_005a7ed0();
          if (iVar1 != 0) {
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
            fVar7 = (float10)fcos((float10)fStack_14);
            fVar8 = (float10)fsin((float10)fStack_14);
            dStack_34 = (double)fVar8;
            fStack_2c = (float)(fVar7 * (float10)_DAT_005f0c86);
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
