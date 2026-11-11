// Name: core_robin.cpp_FUN_005a61f0
// Address: 005a61f0
// Address Range: [[005a61f0, 005a6715]]
// Convention: unknown
// Signature: void core_robin_cpp_FUN_005a61f0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_robin_cpp_FUN_005a61f0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  uint auStackY_196c [1478];
  float fVar8;
  float max_value;
  uint uVar9;
  float *pfVar10;
  byte *puVar11;
  uint uVar12;
  uint auStack_220 [12];
  uint auStack_1f0 [12];
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  uint auStack_1a8 [6];
  uint uStack_190;
  uint auStack_18c [7];
  uint uStack_170;
  uint auStack_16c [7];
  uint uStack_150;
  uint uStack_140;
  uint auStack_13c [3];
  uint uStack_130;
  uint auStack_12c [7];
  uint uStack_110;
  uint auStack_10c [3];
  uint uStack_100;
  float afStack_fc [4];
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
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  float fStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  float fStack_80;
  uint uStack_7c;
  float fStack_78;
  float afStack_74 [6];
  float afStack_5c [4];
  float fStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  float afStack_3c [5];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CSimpleParticleSystem *pCStack_1c;
  CSimpleParticleSystem *pCStack_18;
  float fStack_14;
  
  bVar5 = 0;
  iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"Death");
  if ((iVar1 == 0) &&
     (iVar1 = unkaddr_0059d350_cpp_FUN_0059daa0(param_1 + 0x10af8,"Animation"), iVar1 == 0)
     ) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  }
  pCStack_1c = (CSimpleParticleSystem *)(param_1 + 0x154);
  unkafter_superopt_cpp_CSimpleParticleSystem_process_FUN_005a8180(pCStack_1c,param_2);
  unkafter_superopt_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((CSimpleParticleSystem *)(param_1 + 0x198),param_2);
  param_2 = *(float *)(param_1 + 0x2a8) - param_2;
  *(float *)(param_1 + 0x2a8) = param_2;
  if ((param_2 <= 0.0) &&
     (iVar1 = unkafter_superopt_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(pCStack_1c),
     iVar1 != 0)) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
    puVar3 = auStack_1a8;
    puVar4 = &fStack_1c0;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    fStack_e4 = fStack_1c0 + fStack_1b4;
    fStack_e0 = fStack_1bc + fStack_1b0;
    fStack_dc = fStack_1b8 + fStack_1ac;
    afStack_fc[3] = fStack_1c0 + fStack_1b4;
    *(uint *)((int)afStack_fc + ((uint)bVar5 * -2 + 4) * 4) =
         *(uint *)((int)afStack_fc + ((uint)bVar5 * -2 + 7) * 4);
    *(uint *)((int)afStack_fc + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4) =
         *(uint *)((int)afStack_fc + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 8) * 4);
    fStack_cc = afStack_fc[3] * _DAT_005f06a6;
    fStack_c8 = fStack_ec * _DAT_005f06a6;
    fStack_c4 = fStack_e8 * _DAT_005f06a6;
    fStack_d8 = afStack_fc[3] * _DAT_005f06a6;
    *(uint *)((int)afStack_fc + ((uint)bVar5 * -2 + 10) * 4) =
         *(uint *)((int)afStack_fc + ((uint)bVar5 * -2 + 0xd) * 4);
    *(uint *)((int)afStack_fc + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xb) * 4) =
         *(uint *)((int)afStack_fc + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xe) * 4);
    iVar1 = 0;
    *(uint *)(param_1 + 0x2a8) = 0x3d4ccccd;
    pCStack_18 = pCStack_1c;
    do {
      iVar2 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
      if (iVar2 != 0) {
        fStack_28 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
        fStack_14 = fStack_28;
        fStack_24 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
        fStack_14 = fStack_24;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
        core_xform_cpp_quaternionFromAngleZ_FUN_00594020(fStack_14);
        puVar11 = (byte *)&uStack_170;
        uStack_170 = auStack_12c[3];
        *(uint *)((int)auStack_16c + (uint)bVar5 * 0xfffffff8) =
             *(uint *)((int)auStack_12c + ((uint)bVar5 * -2 + 4) * 4);
        *(uint *)((int)auStack_16c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
             *(uint *)((int)auStack_12c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4);
        ((uint *)((int)auStack_16c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
        [(uint)bVar5 * -2 + 1] =
             ((uint *)((int)auStack_12c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4))
             [(uint)bVar5 * -2 + 1];
        core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(fStack_24,puVar11);
        puVar11 = (byte *)&uStack_110;
        uStack_110 = auStack_16c[3];
        *(uint *)((int)auStack_10c + (uint)bVar5 * 0xfffffff8) =
             *(uint *)((int)auStack_16c + ((uint)bVar5 * -2 + 4) * 4);
        *(uint *)((int)auStack_10c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
             *(uint *)((int)auStack_16c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4);
        ((uint *)((int)auStack_10c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
        [(uint)bVar5 * -2 + 1] =
             ((uint *)((int)auStack_16c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 5) * 4))
             [(uint)bVar5 * -2 + 1];
        core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(fStack_28,puVar11);
        uStack_140 = uStack_190;
        *(uint *)((int)auStack_13c + (uint)bVar5 * 0xfffffff8) =
             *(uint *)((int)auStack_18c + (uint)bVar5 * 0xfffffff8);
        *(uint *)((int)auStack_13c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
             *(uint *)((int)auStack_16c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4);
        ((uint *)((int)auStack_13c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
        [(uint)bVar5 * -2 + 1] =
             ((uint *)((int)auStack_16c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -7) * 4))
             [(uint)bVar5 * -2 + 1];
        core_xform_cpp_multiplyQuaternion_FUN_00593c60(&uStack_140);
        uStack_100 = uStack_150;
        *(uint *)((int)afStack_fc + (uint)bVar5 * 0xfffffff8) =
             *(uint *)((int)auStack_16c + ((uint)bVar5 * -2 + 8) * 4);
        *(uint *)((int)afStack_fc + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
             *(uint *)((int)auStack_16c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 9) * 4);
        ((uint *)((int)afStack_fc + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
        [(uint)bVar5 * -2 + 1] =
             ((uint *)((int)auStack_16c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 9) * 4))
             [(uint)bVar5 * -2 + 1];
        core_xform_cpp_multiplyQuaternion_FUN_00593c60(&uStack_100);
        uStack_130 = auStack_18c[3];
        *(uint *)((int)auStack_12c + (uint)bVar5 * 0xfffffff8) =
             *(uint *)((int)auStack_16c + ((uint)bVar5 * -2 + -4) * 4);
        *(uint *)((int)auStack_12c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
             *(uint *)((int)auStack_16c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -3) * 4);
        ((uint *)((int)auStack_12c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4))
        [(uint)bVar5 * -2 + 1] =
             ((uint *)((int)auStack_16c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + -3) * 4))
             [(uint)bVar5 * -2 + 1];
        core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&uStack_130);
        puVar11 = (byte *)auStack_220;
        puVar3 = auStack_1f0;
        puVar4 = auStack_220;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
          puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
        }
        fStack_80 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        uStack_84 = 0;
        uStack_7c = 0;
        fStack_20 = fStack_80;
        fStack_14 = fStack_80;
        core_xform_cpp_FUN_00591530(&uStack_84,puVar11);
        puVar4 = &uStack_c0;
        uStack_c0 = 0;
        uStack_bc = 0x40a00000;
        uStack_b8 = 0;
        afStack_5c[2] = fStack_b4;
        *(uint *)((int)afStack_5c + ((uint)bVar5 * -2 + 3) * 4) =
             *(uint *)((int)afStack_b0 + (uint)bVar5 * 0xfffffff8);
        *(uint *)((int)afStack_5c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4) =
             *(uint *)((int)afStack_b0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
        uVar12 = 0;
        puVar3 = &fStack_78;
        fStack_9c = afStack_5c[2] + fStack_d8;
        fStack_98 = afStack_5c[3] + fStack_d4;
        fStack_94 = fStack_4c + fStack_d0;
        afStack_b0[2] = afStack_5c[2] + fStack_d8;
        *(uint *)((int)afStack_b0 + ((uint)bVar5 * -2 + 3) * 4) =
             *(uint *)((int)afStack_b0 + ((uint)bVar5 * -2 + 6) * 4);
        *(uint *)((int)afStack_b0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4) =
             *(uint *)((int)afStack_b0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 7) * 4);
        pfVar10 = afStack_b0 + 2;
        uVar9 = 0;
        max_value = 0.2;
        afStack_74[5] = afStack_b0[2] - fStack_d8;
        afStack_5c[0] = afStack_b0[3] - fStack_d4;
        afStack_5c[1] = fStack_a0 - fStack_d0;
        fVar8 = 0.0;
        fStack_78 = afStack_b0[2] - fStack_d8;
        *(uint *)((int)afStack_74 + (uint)bVar5 * 0xfffffff8) =
             *(uint *)((int)afStack_5c + (uint)bVar5 * 0xfffffff8);
        *(uint *)((int)afStack_74 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
             *(uint *)((int)afStack_5c + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
        fVar8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar8,max_value);
        fStack_14 = fVar8;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.3,0.6);
        unkafter_superopt_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (pCStack_18,0x3f800000,0x3f800000,0,0x3f333333,0,fStack_14,fVar8,uVar9,pfVar10,
                   puVar3,puVar4,uVar12);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x14);
  }
  if (*(float *)(param_1 + 0x2a8) <= 0.0) {
    iVar1 = unkafter_superopt_cpp_CSimpleParticleSystem_isActive_FUN_005a8130
                      ((CSimpleParticleSystem *)(param_1 + 0x198));
    if (iVar1 != 0) {
      iVar1 = 0;
      *(uint *)(param_1 + 0x2a8) = 0x3d4ccccd;
      do {
        fVar8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
        fVar6 = (float10)fcos((float10)fVar8);
        fVar7 = (float10)fsin((float10)fVar8);
        afStack_3c[1] = 0.0;
        afStack_3c[2] = (float)(fVar6 * (float10)_DAT_005f06ae);
        afStack_3c[0] = (float)(fVar7 * (float10)_DAT_005f06ae);
        fStack_14 = afStack_3c[2];
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
        if ((float)_DAT_005f06b6 < fStack_14) {
          uStack_8c = 0x3f000000;
          uStack_88 = 0;
          uStack_90 = 0;
          if (&uStack_48 != &uStack_90) {
            uStack_44 = 0x3f000000;
            uStack_40 = 0;
            uStack_48 = 0;
          }
        }
        else if ((CDemonActorType *)&stack0x00000000 != &g_CCryptVesselClassInfo) {
          uStack_48 = _DAT_0265370c;
          uStack_44 = _DAT_02653710;
          uStack_40 = _DAT_02653714;
        }
        afStack_74[3] = 1.5;
        iVar1 = iVar1 + 1;
        afStack_74[2] = 0.0;
        afStack_74[4] = 0.0;
        unkafter_superopt_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  ((CSimpleParticleSystem *)(param_1 + 0x198),0x3f800000,0x3f800000,0,0x3f000000,0,
                   0x3f07ae14,0x3f800000,0x3eeb851f,afStack_3c,&uStack_48,afStack_74 + 2,1);
      } while (iVar1 < 0x14);
    }
  }
  return;
}
