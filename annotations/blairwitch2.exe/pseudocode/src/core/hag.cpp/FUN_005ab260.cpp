// Name: core_hag.cpp_FUN_005ab260
// Address: 005ab260
// Address Range: [[005ab260, 005ab752]]
// Convention: unknown
// Signature: void core_hag_cpp_FUN_005ab260(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_hag_cpp_FUN_005ab260(int param_1,float param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float afStackY_18cc [1490];
  float fVar9;
  float max_value;
  float *pfVar10;
  uint uStack_f0;
  uint uStack_e0;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  float fStack_94;
  float afStack_90 [2];
  float fStack_88;
  float afStack_84 [5];
  float fStack_70;
  float afStack_6c [4];
  float fStack_5c;
  float fStack_58;
  float afStack_54 [2];
  float fStack_4c;
  float afStack_48 [4];
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
  iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0();
  if (iVar1 == 0) {
    iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0();
    if (iVar1 == 0) {
      iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0();
      if (iVar1 == 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
      }
    }
  }
  unkafter_superopt_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((CSimpleParticleSystem *)(param_1 + 0x154),param_2);
  unkafter_superopt_cpp_CSimpleParticleSystem_process_FUN_005a8180
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
    iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0();
    if (iVar1 == 0) {
      iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0();
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
        iVar1 = unkafter_superopt_cpp_CSimpleParticleSystem_isActive_FUN_005a8130
                          ((CSimpleParticleSystem *)(param_1 + 0x154));
        if (iVar1 != 0) {
          iVar1 = 0;
          pCStack_24 = (CSimpleParticleSystem *)(param_1 + 0x154);
          do {
            iVar3 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
            if (iVar3 != 0) {
              fStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.1415927,6.2831855);
              fStack_14 = fStack_20;
              fStack_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.1415927,6.2831855);
              fStack_14 = fStack_1c;
              fStack_5c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(3.1415927,6.2831855);
              afStack_6c[2] = fStack_20;
              afStack_6c[3] = fStack_1c;
              fStack_18 = fStack_5c;
              fStack_14 = fStack_5c;
              core_xform_cpp_FUN_00594380(afStack_6c + 2);
              uStack_f0 = uStack_e0;
              *(uint *)((int)&stack0xffffff14 + (uint)bVar6 * 0xfffffffe * 4) =
                   *(uint *)(&stack0xffffff24 + (uint)bVar6 * -8);
              *(uint *)(&stack0xffffff18 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                   *(uint *)(&stack0xffffff28 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
              *(uint *)
               ((int)(&stack0xffffff18 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
               ((uint)bVar6 * -2 + 1) * 4) =
                   *(uint *)
                    ((int)(&stack0xffffff28 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
                    ((uint)bVar6 * -2 + 1) * 4);
              core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&stack0xffffff10);
              puVar4 = (uint *)&stack0xfffffeb0;
              puVar5 = (uint *)&stack0xfffffee0;
              for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
                *puVar5 = *puVar4;
                puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
                puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
              }
              uStack_d0 = 0;
              uStack_cc = 0;
              uStack_c8 = 0x41000000;
              core_xform_cpp_FUN_00591530();
              fStack_4c = afStack_84[2];
              *(float *)((int)afStack_48 + (uint)bVar6 * -8) =
                   afStack_84[(uint)bVar6 * 0xfffffffe + 3];
              afStack_48[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1] =
                   afStack_84[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 4];
              fStack_58 = -fStack_4c;
              afStack_54[0] = -afStack_48[0];
              afStack_54[1] = -afStack_48[1];
              afStack_48[2] = -fStack_4c;
              afStack_48[(uint)bVar6 * 0xfffffffe + 3] = afStack_54[(uint)bVar6 * 0xfffffffe];
              afStack_48[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 4] =
                   afStack_54[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1];
              puVar4 = &fStack_70;
              uVar2 = 0;
              fStack_94 = afStack_48[2] * _DAT_005f0c7e;
              afStack_90[0] = afStack_48[3] * _DAT_005f0c7e;
              afStack_90[1] = fStack_38 * _DAT_005f0c7e;
              fStack_88 = afStack_48[2] * _DAT_005f0c7e;
              *(float *)((int)afStack_84 + (uint)bVar6 * -8) = afStack_90[(uint)bVar6 * 0xfffffffe];
              afStack_84[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1] =
                   afStack_90[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1];
              puVar5 = &fStack_88;
              pfVar10 = &fStack_4c;
              max_value = 1.0;
              fVar9 = 0.5;
              fStack_c4 = fStack_88 * _DAT_005f0c82;
              fStack_c0 = afStack_84[0] * _DAT_005f0c82;
              fStack_bc = afStack_84[1] * _DAT_005f0c82;
              fStack_70 = fStack_88 * _DAT_005f0c82;
              *(float *)((int)afStack_6c + (uint)bVar6 * -8) =
                   (&stack0xffffff40)[(uint)bVar6 * 0xfffffffe];
              afStack_6c[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1] =
                   (float)*(uint *)
                           ((int)&stack0xffffff44 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
              fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar9,max_value);
              unkafter_superopt_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                        (pCStack_24,0x40400000,0x3f800000,0,0x3f333333,0,0x3e99999a,0x3e4ccccd,
                         fStack_14,pfVar10,puVar5,puVar4,uVar2);
            }
            iVar1 = iVar1 + 1;
          } while (iVar1 < 5);
          iVar1 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
          if (iVar1 != 0) {
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
            fVar7 = (float10)fcos((float10)fStack_14);
            fVar8 = (float10)fsin((float10)fStack_14);
            dStack_34 = (double)fVar8;
            fStack_2c = (float)(fVar7 * (float10)_DAT_005f0c86);
            fStack_b4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,6.0);
            fStack_b8 = (float)((float10)dStack_34 * (float10)_DAT_005f0c86);
            fStack_b0 = fStack_2c;
            uStack_9c = 0x3f800000;
            uStack_ac = 0;
            uStack_a8 = 0x3dcccccd;
            uStack_a4 = 0;
            uStack_a0 = 0;
            uStack_98 = 0;
            fStack_28 = fStack_b4;
            fStack_14 = fStack_b8;
            unkafter_superopt_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                      ((CSimpleParticleSystem *)(param_1 + 0x154),0x40000000,0x3f333333,0,0x3e99999a
                       ,0x3f800000,0x3f800000,0,0,&fStack_b8,&uStack_ac,&uStack_a0,0);
            return;
          }
        }
      }
    }
  }
  return;
}
