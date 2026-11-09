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
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float afStackY_18cc [1490];
  uint uVar10;
  float *pfVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uStack_f0;
  uint uStack_e0;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  uint uStack_b4;
  float fStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  uint uStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_70;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  double dStack_34;
  float fStack_2c;
  uint uStack_28;
  CComplexPolygon *pCStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  float fStack_14;
  
  bVar7 = 0;
  iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0();
  if (iVar2 == 0) {
    iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0();
    if (iVar2 == 0) {
      iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0();
      if (iVar2 == 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
      }
    }
  }
  unkafter_superopt_cpp_FUN_005a8180();
  unkafter_superopt_cpp_FUN_005a8180();
  iVar2 = core_motion_cpp_FUN_005035c0(param_1 + 0x2b4);
  if (*(int *)(iVar2 + 0x24) == 0) {
    if (*(char *)(param_1 + 0x11741) == '\0') {
      sound_sndmain_cpp_killSfx_FUN_00551050(*(uint *)(param_1 + 0x11848));
    }
    else {
      fVar1 = *(float *)(param_1 + 0x11840) - param_2;
      *(float *)(param_1 + 0x11840) = fVar1;
      if (fVar1 <= 0.0) {
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
    iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0();
    if (iVar2 == 0) {
      iVar2 = unkaddr_0059d350_cpp_FUN_0059daa0();
      if (iVar2 == 0) {
        *(float *)(param_1 + 0x25a8) = param_2 * (float)_DAT_005f0c76 + *(float *)(param_1 + 0x25a8)
        ;
        iVar2 = sound_sndmain_cpp_FUN_00550b70(*(uint *)(param_1 + 0x1185c));
        if (iVar2 == 0) {
          sound_sndmain_cpp_FUN_00550450();
          iVar2 = 2;
          fStack_14 = (float)core_actor_cpp_FUN_0040cf60(0,0x3f800000);
          sound_sndmain_cpp_FUN_005503e0((double)fStack_14,iVar2);
          uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x38))();
          *(uint *)(param_1 + 0x1185c) = uVar3;
          sound_sndmain_cpp_FUN_005504d0();
        }
        iVar2 = shape_superopt_cpp_CComplexPolygon_getMaterialId_FUN_005a8130
                          ((CComplexPolygon *)(param_1 + 0x154));
        if (iVar2 != 0) {
          iVar2 = 0;
          pCStack_24 = (CComplexPolygon *)(param_1 + 0x154);
          do {
            iVar4 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
            if (iVar4 != 0) {
              uStack_20 = core_actor_cpp_FUN_0040cf60();
              fStack_14 = (float)uStack_20;
              uStack_1c = core_actor_cpp_FUN_0040cf60();
              fStack_14 = (float)uStack_1c;
              uStack_5c = core_actor_cpp_FUN_0040cf60();
              uStack_64 = uStack_20;
              uStack_60 = uStack_1c;
              uStack_18 = uStack_5c;
              fStack_14 = (float)uStack_5c;
              core_xform_cpp_FUN_00594380(&stack0xffffff9c);
              uStack_f0 = uStack_e0;
              *(uint *)((int)&stack0xffffff14 + (uint)bVar7 * 0xfffffffe * 4) =
                   *(uint *)(&stack0xffffff24 + (uint)bVar7 * -8);
              *(uint *)(&stack0xffffff18 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                   *(uint *)(&stack0xffffff28 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
              *(uint *)
               ((int)(&stack0xffffff18 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
               ((uint)bVar7 * -2 + 1) * 4) =
                   *(uint *)
                    ((int)(&stack0xffffff28 + (uint)bVar7 * -8 + (uint)bVar7 * -8) +
                    ((uint)bVar7 * -2 + 1) * 4);
              core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&stack0xffffff10);
              puVar5 = (uint *)&stack0xfffffeb0;
              puVar6 = (uint *)&stack0xfffffee0;
              for (iVar4 = 0xc; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar6 = *puVar5;
                puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
                puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
              }
              uStack_d0 = 0;
              uStack_cc = 0;
              uStack_c8 = 0x41000000;
              core_xform_cpp_FUN_00591530();
              fStack_4c = fStack_7c;
              (&stack0xffffffb8)[(uint)bVar7 * 0xfffffffe] =
                   (float)*(uint *)(&stack0xffffff88 + (uint)bVar7 * -8);
              *(uint *)((int)&stack0xffffffbc + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                   *(uint *)(&stack0xffffff8c + (uint)bVar7 * -8 + (uint)bVar7 * -8);
              fStack_58 = -fStack_4c;
              fStack_54 = -fStack_48;
              fStack_50 = -fStack_44;
              fStack_40 = -fStack_4c;
              *(float *)((int)&stack0xffffffc4 + (uint)bVar7 * -8) =
                   (&stack0xffffffac)[(uint)bVar7 * 0xfffffffe];
              *(uint *)((int)&stack0xffffffc8 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                   *(uint *)((int)&stack0xffffffb0 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
              pfVar11 = &stack0xffffff90;
              uVar13 = 0;
              fStack_94 = fStack_40 * _DAT_005f0c7e;
              fStack_90 = fStack_3c * _DAT_005f0c7e;
              fStack_8c = fStack_38 * _DAT_005f0c7e;
              fStack_88 = fStack_40 * _DAT_005f0c7e;
              (&stack0xffffff7c)[(uint)bVar7 * 0xfffffffe] =
                   (&stack0xffffff70)[(uint)bVar7 * 0xfffffffe];
              *(uint *)((int)&stack0xffffff80 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                   *(uint *)((int)&stack0xffffff74 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
              uVar12 = CONCAT44(pfVar11,&stack0xffffff78);
              pfVar11 = &stack0xffffffb4;
              uVar10 = 0x3f800000;
              uVar3 = 0x3f000000;
              fStack_c4 = fStack_88 * _DAT_005f0c82;
              fStack_c0 = fStack_84 * _DAT_005f0c82;
              fStack_bc = fStack_80 * _DAT_005f0c82;
              fStack_70 = fStack_88 * _DAT_005f0c82;
              *(float *)((int)&stack0xffffff94 + (uint)bVar7 * 0xfffffffe * 4) =
                   (&stack0xffffff40)[(uint)bVar7 * 0xfffffffe];
              *(uint *)(&stack0xffffff98 + (uint)bVar7 * -8 + (uint)bVar7 * -8) =
                   *(uint *)((int)&stack0xffffff44 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
              fStack_14 = (float)core_actor_cpp_FUN_0040cf60(uVar3,uVar10,pfVar11,uVar12,uVar13);
              unkafter_superopt_cpp_FUN_005a8300
                        (pCStack_24,0x40400000,0x3f800000,0,0x3f333333,0,0x3e99999a,0x3e4ccccd,
                         fStack_14);
            }
            iVar2 = iVar2 + 1;
          } while (iVar2 < 5);
          iVar2 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
          if (iVar2 != 0) {
            fStack_14 = (float)core_actor_cpp_FUN_0040cf60();
            fVar8 = (float10)fcos((float10)fStack_14);
            fVar9 = (float10)fsin((float10)fStack_14);
            dStack_34 = (double)fVar9;
            fStack_2c = (float)(fVar8 * (float10)_DAT_005f0c86);
            uStack_b4 = core_actor_cpp_FUN_0040cf60();
            fStack_b8 = (float)((float10)dStack_34 * (float10)_DAT_005f0c86);
            fStack_b0 = fStack_2c;
            uStack_9c = 0x3f800000;
            uStack_ac = 0;
            uStack_a8 = 0x3dcccccd;
            uStack_a4 = 0;
            uStack_a0 = 0;
            uStack_98 = 0;
            uStack_28 = uStack_b4;
            fStack_14 = fStack_b8;
            unkafter_superopt_cpp_FUN_005a8300
                      (param_1 + 0x154,0x40000000,0x3f333333,0,0x3e99999a,0x3f800000,0x3f800000,0,0,
                       &stack0xffffff48,&stack0xffffff54,&stack0xffffff60,0);
            return;
          }
        }
      }
    }
  }
  return;
}
