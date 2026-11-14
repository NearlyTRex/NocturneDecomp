// Name: core_weaver.cpp_FUN_005a61f0
// Address: 005a61f0
// Address Range: [[005a61f0, 005a6715]]
// Convention: unknown
// Signature: void core_weaver_cpp_FUN_005a61f0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_weaver_cpp_FUN_005a61f0(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  float *pfVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float afStackY_196c [1478];
  float fVar9;
  float max_value;
  uint uVar10;
  float *pfVar11;
  byte *puVar12;
  uint uVar13;
  CMatrix3x4f CStack_1f0;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float afStack_1a8 [6];
  uint uStack_190;
  float afStack_18c [7];
  float afStack_170 [4];
  uint uStack_160;
  uint uStack_150;
  float afStack_140 [4];
  CQuaternion4f CStack_130;
  uint uStack_120;
  float afStack_11c [7];
  uint auStack_100 [4];
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
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  float fStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float afStack_90 [5];
  uint uStack_7c;
  float fStack_78;
  float afStack_74 [6];
  float afStack_5c [4];
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  uint uStack_40;
  float afStack_3c [5];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CSimpleParticleSystem *pCStack_1c;
  CSimpleParticleSystem *pCStack_18;
  float fStack_14;
  
  bVar6 = 0;
  iVar1 = core_muzzle_cpp_FUN_0059daa0(param_1 + 0x10af8,"Death");
  if ((iVar1 == 0) &&
     (iVar1 = core_muzzle_cpp_FUN_0059daa0(param_1 + 0x10af8,"Animation"), iVar1 == 0)) {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x17c))(param_1);
  }
  pCStack_1c = (CSimpleParticleSystem *)(param_1 + 0x154);
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180(pCStack_1c,param_2);
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((CSimpleParticleSystem *)(param_1 + 0x198),param_2);
  param_2 = *(float *)(param_1 + 0x2a8) - param_2;
  *(float *)(param_1 + 0x2a8) = param_2;
  if ((param_2 <= 0.0) &&
     (iVar1 = core_bwspart_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(pCStack_1c), iVar1 != 0))
  {
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
    pfVar3 = afStack_1a8;
    pfVar5 = &fStack_1c0;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar5 = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar6 * -2 + 1;
      pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
    }
    fStack_e4 = fStack_1c0 + fStack_1b4;
    fStack_e0 = fStack_1bc + fStack_1b0;
    fStack_dc = fStack_1b8 + fStack_1ac;
    fStack_f0 = fStack_1c0 + fStack_1b4;
    afStack_11c[(uint)bVar6 * -2 + 0xc] = afStack_11c[(uint)bVar6 * -2 + 0xf];
    afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
         afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
    fStack_cc = fStack_f0 * _DAT_005f06a6;
    fStack_c8 = fStack_ec * _DAT_005f06a6;
    fStack_c4 = fStack_e8 * _DAT_005f06a6;
    fStack_d8 = fStack_f0 * _DAT_005f06a6;
    afStack_11c[(uint)bVar6 * -2 + 0x12] = afStack_11c[(uint)bVar6 * -2 + 0x15];
    afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
         afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x16];
    iVar1 = 0;
    *(uint *)(param_1 + 0x2a8) = 0x3d4ccccd;
    pCStack_18 = pCStack_1c;
    do {
      iVar2 = core_bwgrndma_cpp_FUN_005a7ed0();
      if (iVar2 != 0) {
        fStack_28 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
        fStack_14 = fStack_28;
        fStack_24 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
        fStack_14 = fStack_24;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
        core_xform_cpp_quaternionFromAngleZ_FUN_00594020(fStack_14);
        pfVar3 = afStack_18c + 7;
        afStack_170[0] = (float)uStack_120;
        afStack_18c[(uint)bVar6 * -2 + 8] = afStack_11c[(uint)bVar6 * -2];
        afStack_18c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9] =
             afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        (afStack_18c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1] =
             (afStack_11c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
        core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(fStack_24,pfVar3);
        pfVar3 = afStack_11c + 3;
        afStack_11c[3] = (float)uStack_160;
        afStack_11c[(uint)bVar6 * -2 + 4] = afStack_18c[(uint)bVar6 * -2 + 0xc];
        afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5] =
             afStack_18c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        (afStack_11c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1] =
             (afStack_18c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd)[(uint)bVar6 * -2 + 1];
        core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(fStack_28,pfVar3);
        afStack_140[0] = (float)uStack_190;
        afStack_18c[(uint)bVar6 * -2 + 0x14] = afStack_18c[(uint)bVar6 * -2];
        afStack_18c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15] =
             afStack_18c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        (afStack_18c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15)[(uint)bVar6 * -2 + 1] =
             (afStack_18c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
        core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_18c + 0x13);
        auStack_100[0] = uStack_150;
        afStack_11c[(uint)bVar6 * -2 + 8] = afStack_18c[(uint)bVar6 * -2 + 0x10];
        afStack_11c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9] =
             afStack_18c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11];
        (afStack_11c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 9)[(uint)bVar6 * -2 + 1] =
             (afStack_18c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x11)[(uint)bVar6 * -2 + 1];
        core_xform_cpp_multiplyQuaternion_FUN_00593c60(afStack_11c + 7);
        CStack_130.w = afStack_18c[3];
        pfVar3 = (float *)((int)&CStack_130 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
        *(float *)((int)&CStack_130 + (uint)bVar6 * -8 + 4) = afStack_18c[(uint)bVar6 * -2 + 4];
        *pfVar3 = afStack_18c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
        pfVar3[(uint)bVar6 * -2 + 1] =
             (afStack_18c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
        core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_130,&CStack_1f0);
        puVar12 = &stack0xfffffde0;
        pCVar4 = &CStack_1f0;
        pfVar3 = (float *)&stack0xfffffde0;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          *pfVar3 = pCVar4->m[0].w;
          pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
          pfVar3 = pfVar3 + (uint)bVar6 * -2 + 1;
        }
        afStack_90[4] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        afStack_90[3] = 0.0;
        uStack_7c = 0;
        fStack_20 = afStack_90[4];
        fStack_14 = afStack_90[4];
        core_xform_cpp_FUN_00591530(afStack_b0 + 0xb,puVar12);
        pfVar3 = afStack_11c + 0x17;
        uStack_c0 = 0;
        uStack_bc = 0x40a00000;
        uStack_b8 = 0;
        afStack_5c[2] = fStack_b4;
        afStack_5c[(uint)bVar6 * -2 + 3] = afStack_b0[(uint)bVar6 * -2];
        afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        uVar13 = 0;
        pfVar5 = &fStack_78;
        fStack_9c = afStack_5c[2] + fStack_d8;
        fStack_98 = afStack_5c[3] + fStack_d4;
        fStack_94 = fStack_4c + fStack_d0;
        afStack_b0[2] = afStack_5c[2] + fStack_d8;
        afStack_b0[(uint)bVar6 * -2 + 3] = afStack_b0[(uint)bVar6 * -2 + 6];
        afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        pfVar11 = afStack_b0 + 2;
        uVar10 = 0;
        max_value = 0.2;
        afStack_74[5] = afStack_b0[2] - fStack_d8;
        afStack_5c[0] = afStack_b0[3] - fStack_d4;
        afStack_5c[1] = fStack_a0 - fStack_d0;
        fVar9 = 0.0;
        fStack_78 = afStack_b0[2] - fStack_d8;
        afStack_74[(uint)bVar6 * -2] = afStack_5c[(uint)bVar6 * -2];
        afStack_74[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_5c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        fVar9 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar9,max_value);
        fStack_14 = fVar9;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.3,0.6);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (pCStack_18,0x3f800000,0x3f800000,0,0x3f333333,0,fStack_14,fVar9,uVar10,pfVar11,
                   pfVar5,pfVar3,uVar13);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0x14);
  }
  if (*(float *)(param_1 + 0x2a8) <= 0.0) {
    iVar1 = core_bwspart_cpp_CSimpleParticleSystem_isActive_FUN_005a8130
                      ((CSimpleParticleSystem *)(param_1 + 0x198));
    if (iVar1 != 0) {
      iVar1 = 0;
      *(uint *)(param_1 + 0x2a8) = 0x3d4ccccd;
      do {
        fVar9 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
        fVar7 = (float10)fcos((float10)fVar9);
        fVar8 = (float10)fsin((float10)fVar9);
        afStack_3c[1] = 0.0;
        afStack_3c[2] = (float)(fVar7 * (float10)_DAT_005f06ae);
        afStack_3c[0] = (float)(fVar8 * (float10)_DAT_005f06ae);
        fStack_14 = afStack_3c[2];
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
        if ((float)_DAT_005f06b6 < fStack_14) {
          afStack_90[1] = 0.5;
          afStack_90[2] = 0.0;
          afStack_90[0] = 0.0;
          if (afStack_5c + 5 != afStack_b0 + 8) {
            uStack_44 = 0x3f000000;
            uStack_40 = 0;
            fStack_48 = 0.0;
          }
        }
        else if ((CDemonActorType *)&stack0x00000000 != &g_CCryptVesselClassInfo) {
          fStack_48 = (float)_DAT_0265370c;
          uStack_44 = _DAT_02653710;
          uStack_40 = _DAT_02653714;
        }
        afStack_74[3] = 1.5;
        iVar1 = iVar1 + 1;
        afStack_74[2] = 0.0;
        afStack_74[4] = 0.0;
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  ((CSimpleParticleSystem *)(param_1 + 0x198),0x3f800000,0x3f800000,0,0x3f000000,0,
                   0x3f07ae14,0x3f800000,0x3eeb851f,afStack_5c + 8,afStack_5c + 5,afStack_74 + 2,1);
      } while (iVar1 < 0x14);
    }
  }
  return;
}
