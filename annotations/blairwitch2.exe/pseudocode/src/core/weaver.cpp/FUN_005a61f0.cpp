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
  uint *puVar4;
  CMatrix3x4f *pCVar5;
  float *pfVar6;
  uint *puVar7;
  CMatrix3x4f *pCVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  float afStackY_196c [1478];
  float fVar12;
  float max_value;
  uint uVar13;
  float *pfVar14;
  CQuaternion4f *quat2_in;
  CQuaternion4f *quat2_in_00;
  CMatrix3x4f *matrix;
  uint uVar15;
  CMatrix3x4f CStack_220;
  CMatrix3x4f CStack_1f0;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float afStack_1a8 [6];
  CQuaternion4f CStack_190;
  CQuaternion4f CStack_180;
  CQuaternion4f CStack_170;
  CQuaternion4f CStack_160;
  CQuaternion4f CStack_150;
  CQuaternion4f CStack_140;
  CQuaternion4f CStack_130;
  CQuaternion4f CStack_120;
  CQuaternion4f CStack_110;
  CQuaternion4f CStack_100;
  float fStack_f0;
  float afStack_ec [4];
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float afStack_c0 [3];
  CVector3f CStack_b4;
  float fStack_a8;
  float afStack_a4 [4];
  float fStack_94;
  float afStack_90 [3];
  CVector3f CStack_84;
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
  
  bVar9 = 0;
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
    pfVar6 = &fStack_1c0;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar6 = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar9 * -2 + 1;
      pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
    }
    afStack_ec[2] = fStack_1c0 + fStack_1b4;
    afStack_ec[3] = fStack_1bc + fStack_1b0;
    fStack_dc = fStack_1b8 + fStack_1ac;
    fStack_f0 = fStack_1c0 + fStack_1b4;
    afStack_ec[(uint)bVar9 * -2] = afStack_ec[(uint)bVar9 * -2 + 3];
    afStack_ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    fStack_cc = fStack_f0 * _DAT_005f06a6;
    fStack_c8 = afStack_ec[0] * _DAT_005f06a6;
    fStack_c4 = afStack_ec[1] * _DAT_005f06a6;
    fStack_d8 = fStack_f0 * _DAT_005f06a6;
    afStack_ec[(uint)bVar9 * -2 + 6] = afStack_ec[(uint)bVar9 * -2 + 9];
    afStack_ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
         afStack_ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10];
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
        core_xform_cpp_quaternionFromAngleZ_FUN_00594020(fStack_14,&CStack_120);
        quat2_in_00 = &CStack_170;
        CStack_170.w = CStack_120.w;
        puVar7 = (uint *)((int)&CStack_170 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        puVar4 = (uint *)((int)&CStack_120 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        *(uint *)((int)&CStack_170 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_120 + (uint)bVar9 * -8 + 4);
        *puVar7 = *puVar4;
        puVar7[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
        core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(fStack_24,&CStack_160);
        quat2_in = &CStack_110;
        CStack_110.w = CStack_160.w;
        puVar7 = (uint *)((int)&CStack_110 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        puVar4 = (uint *)((int)&CStack_160 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        *(uint *)((int)&CStack_110 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_160 + (uint)bVar9 * -8 + 4);
        *puVar7 = *puVar4;
        puVar7[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
        core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(fStack_28,&CStack_190);
        CStack_140.w = CStack_190.w;
        puVar7 = (uint *)((int)&CStack_140 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        puVar4 = (uint *)((int)&CStack_190 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        *(uint *)((int)&CStack_140 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_190 + (uint)bVar9 * -8 + 4);
        *puVar7 = *puVar4;
        puVar7[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
        core_xform_cpp_multiplyQuaternion_FUN_00593c60(&CStack_140,quat2_in,&CStack_150);
        CStack_100.w = CStack_150.w;
        puVar7 = (uint *)((int)&CStack_100 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        puVar4 = (uint *)((int)&CStack_150 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        *(uint *)((int)&CStack_100 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_150 + (uint)bVar9 * -8 + 4);
        *puVar7 = *puVar4;
        puVar7[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
        core_xform_cpp_multiplyQuaternion_FUN_00593c60(&CStack_100,quat2_in_00,&CStack_180);
        CStack_130.w = CStack_180.w;
        puVar7 = (uint *)((int)&CStack_130 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        puVar4 = (uint *)((int)&CStack_180 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        *(uint *)((int)&CStack_130 + (uint)bVar9 * -8 + 4) =
             *(uint *)((int)&CStack_180 + (uint)bVar9 * -8 + 4);
        *puVar7 = *puVar4;
        puVar7[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
        core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_130,&CStack_1f0);
        matrix = &CStack_220;
        pCVar5 = &CStack_1f0;
        pCVar8 = &CStack_220;
        for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
          pCVar8->m[0].w = pCVar5->m[0].w;
          pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar9 * -2 + 1) * 4);
          pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
        }
        CStack_84.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        CStack_84.x = 0.0;
        CStack_84.z = 0.0;
        fStack_20 = CStack_84.y;
        fStack_14 = CStack_84.y;
        core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_84,matrix,&CStack_b4);
        pfVar3 = afStack_ec + 0xb;
        afStack_c0[0] = 0.0;
        afStack_c0[1] = 5.0;
        afStack_c0[2] = 0.0;
        afStack_5c[2] = CStack_b4.x;
        afStack_5c[(uint)bVar9 * -2 + 3] = *(float *)((int)&CStack_b4 + (uint)bVar9 * -8 + 4);
        afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             *(float *)((int)&CStack_b4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        uVar15 = 0;
        pfVar6 = &fStack_78;
        afStack_a4[2] = afStack_5c[2] + fStack_d8;
        afStack_a4[3] = afStack_5c[3] + fStack_d4;
        fStack_94 = fStack_4c + fStack_d0;
        fStack_a8 = afStack_5c[2] + fStack_d8;
        afStack_a4[(uint)bVar9 * -2] = afStack_a4[(uint)bVar9 * -2 + 3];
        afStack_a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        pfVar14 = &fStack_a8;
        uVar13 = 0;
        max_value = 0.2;
        afStack_74[5] = fStack_a8 - fStack_d8;
        afStack_5c[0] = afStack_a4[0] - fStack_d4;
        afStack_5c[1] = afStack_a4[1] - fStack_d0;
        fVar12 = 0.0;
        fStack_78 = fStack_a8 - fStack_d8;
        afStack_74[(uint)bVar9 * -2] = afStack_5c[(uint)bVar9 * -2];
        afStack_74[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        fVar12 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar12,max_value);
        fStack_14 = fVar12;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.3,0.6);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (pCStack_18,0x3f800000,0x3f800000,0,0x3f333333,0,fStack_14,fVar12,uVar13,pfVar14,
                   pfVar6,pfVar3,uVar15);
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
        fVar12 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
        fVar10 = (float10)fcos((float10)fVar12);
        fVar11 = (float10)fsin((float10)fVar12);
        afStack_3c[1] = 0.0;
        afStack_3c[2] = (float)(fVar10 * (float10)_DAT_005f06ae);
        afStack_3c[0] = (float)(fVar11 * (float10)_DAT_005f06ae);
        fStack_14 = afStack_3c[2];
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
        if ((float)_DAT_005f06b6 < fStack_14) {
          afStack_90[1] = 0.5;
          afStack_90[2] = 0.0;
          afStack_90[0] = 0.0;
          if (afStack_5c + 5 != afStack_a4 + 5) {
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
