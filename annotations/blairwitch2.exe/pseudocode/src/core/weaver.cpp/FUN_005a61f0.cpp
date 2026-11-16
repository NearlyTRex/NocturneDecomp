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
  float blue;
  CVector3f *position_offset;
  CVector3f *velocity;
  CQuaternion4f *quat2_in;
  CVector3f *acceleration;
  CQuaternion4f *quat2_in_00;
  CMatrix3x4f *matrix;
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
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [2];
  CVector3f CStack_90;
  CVector3f CStack_84;
  CVector3f CStack_78;
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  CVector3f CStack_48;
  CVector3f CStack_3c;
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
        acceleration = &CStack_c0;
        CStack_c0.x = 0.0;
        CStack_c0.y = 5.0;
        CStack_c0.z = 0.0;
        afStack_5c[2] = CStack_b4.x;
        afStack_5c[(uint)bVar9 * -2 + 3] = *(float *)((int)&CStack_b4 + (uint)bVar9 * -8 + 4);
        afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             *(float *)((int)&CStack_b4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
        iVar2 = 0;
        velocity = &CStack_78;
        fStack_9c = afStack_5c[2] + fStack_d8;
        afStack_98[0] = afStack_5c[3] + fStack_d4;
        afStack_98[1] = fStack_4c + fStack_d0;
        CStack_a8.x = afStack_5c[2] + fStack_d8;
        *(float *)((int)&CStack_a8 + (uint)bVar9 * -8 + 4) = afStack_98[(uint)bVar9 * -2];
        *(float *)((int)&CStack_a8 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_98[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        position_offset = &CStack_a8;
        blue = 0.0;
        max_value = 0.2;
        fStack_60 = CStack_a8.x - fStack_d8;
        afStack_5c[0] = CStack_a8.y - fStack_d4;
        afStack_5c[1] = CStack_a8.z - fStack_d0;
        fVar12 = 0.0;
        CStack_78.x = CStack_a8.x - fStack_d8;
        *(float *)((int)&CStack_78 + (uint)bVar9 * -8 + 4) = afStack_5c[(uint)bVar9 * -2];
        *(float *)((int)&CStack_78 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
             afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        fVar12 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar12,max_value);
        fStack_14 = fVar12;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.3,0.6);
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  (pCStack_18,1.0,1.0,0.0,0.7,0.0,fStack_14,fVar12,blue,position_offset,velocity,
                   acceleration,iVar2);
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
        CStack_3c.y = 0.0;
        CStack_3c.z = (float)(fVar10 * (float10)_DAT_005f06ae);
        CStack_3c.x = (float)(fVar11 * (float10)_DAT_005f06ae);
        fStack_14 = CStack_3c.z;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
        if ((float)_DAT_005f06b6 < fStack_14) {
          CStack_90.y = 0.5;
          CStack_90.z = 0.0;
          CStack_90.x = 0.0;
          if (&CStack_48 != (CVector3f *)(afStack_98 + 2)) {
            CStack_48.y = 0.5;
            CStack_48.z = 0.0;
            CStack_48.x = 0.0;
          }
        }
        else if ((CDemonActorType *)&stack0x00000000 != &g_CCryptVesselClassInfo) {
          CStack_48.x = _DAT_0265370c;
          CStack_48.y = _DAT_02653710;
          CStack_48.z = _DAT_02653714;
        }
        CStack_6c.y = 1.5;
        iVar1 = iVar1 + 1;
        CStack_6c.x = 0.0;
        CStack_6c.z = 0.0;
        core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                  ((CSimpleParticleSystem *)(param_1 + 0x198),1.0,1.0,0.0,0.5,0.0,0.53,1.0,0.46,
                   &CStack_3c,&CStack_48,&CStack_6c,1);
      } while (iVar1 < 0x14);
    }
  }
  return;
}
