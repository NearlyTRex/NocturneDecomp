// Name: core_hpatrol.cpp_CPatrolPoint_process_FUN_0059c680
// Address: 0059c680
// Address Range: [[0059c680, 0059c975]]
// Convention: __cdecl
// Signature: void __cdecl core_hpatrol_cpp_CPatrolPoint_process_FUN_0059c680(CPatrolPoint *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hpatrol_cpp_CPatrolPoint_process_FUN_0059c680(CPatrolPoint *this_ptr,float delta_time)

{
  int iVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  uint *puVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  float afStackY_1908 [1490];
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  CQuaternion4f *quat2_in;
  float fVar10;
  uint *puVar11;
  CQuaternion4f *quat2_in_00;
  float max_value;
  uint uVar12;
  CMatrix3x4f CStack_18c;
  CMatrix3x4f CStack_15c;
  CQuaternion4f CStack_12c;
  CQuaternion4f CStack_11c;
  CQuaternion4f CStack_10c;
  CQuaternion4f CStack_fc;
  CQuaternion4f CStack_ec;
  CQuaternion4f CStack_dc;
  CQuaternion4f CStack_cc;
  CQuaternion4f CStack_bc;
  CQuaternion4f CStack_ac;
  CQuaternion4f CStack_9c;
  float fStack_8c;
  float afStack_88 [4];
  float fStack_78;
  CVector3f CStack_74;
  float fStack_68;
  float afStack_64 [4];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  CVector3f CStack_44;
  float fStack_38;
  float afStack_34 [4];
  float fStack_24;
  CSimpleParticleSystem *pCStack_20;
  CSimpleParticleSystem *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  pCStack_20 = (this_ptr->base).base.base.particle_systems;
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180(pCStack_20,delta_time);
  fVar10 = *(float *)&(this_ptr->base).base.base.field_0x2a8 - delta_time;
  *(float *)&(this_ptr->base).base.base.field_0x2a8 = fVar10;
  if ((fVar10 <= 0.0) &&
     (iVar1 = core_bwspart_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(pCStack_20),
     pCStack_1c = pCStack_20, iVar1 != 0)) {
    fStack_8c = _DAT_0265370c;
    afStack_88[(uint)bVar6 * -2] = *(float *)(&DAT_02653710 + (uint)bVar6 * -8);
    afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         *(float *)(&DAT_02653714 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    *(uint *)&(this_ptr->base).base.base.field_0x2a8 = 0x3dcccccd;
    iVar1 = 0;
    do {
      afStack_34[2] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
      fStack_14 = afStack_34[2];
      afStack_34[3] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
      fStack_14 = afStack_34[3];
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
      core_xform_cpp_quaternionFromAngleZ_FUN_00594020(fStack_14,&CStack_fc);
      CStack_bc.w = CStack_fc.w;
      puVar4 = (uint *)((int)&CStack_bc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar11 = (uint *)((int)&CStack_fc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&CStack_bc + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_fc + (uint)bVar6 * -8 + 4);
      *puVar4 = *puVar11;
      puVar4[(uint)bVar6 * -2 + 1] = puVar11[(uint)bVar6 * -2 + 1];
      quat2_in_00 = &CStack_bc;
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(afStack_34[3],&CStack_11c);
      CStack_dc.w = CStack_11c.w;
      puVar4 = (uint *)((int)&CStack_dc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar11 = (uint *)((int)&CStack_11c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&CStack_dc + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_11c + (uint)bVar6 * -8 + 4);
      *puVar4 = *puVar11;
      puVar4[(uint)bVar6 * -2 + 1] = puVar11[(uint)bVar6 * -2 + 1];
      quat2_in = &CStack_dc;
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(afStack_34[2],&CStack_10c);
      CStack_ec.w = CStack_10c.w;
      puVar4 = (uint *)((int)&CStack_ec + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar11 = (uint *)((int)&CStack_10c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&CStack_ec + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_10c + (uint)bVar6 * -8 + 4);
      *puVar4 = *puVar11;
      puVar4[(uint)bVar6 * -2 + 1] = puVar11[(uint)bVar6 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00593c60(&CStack_ec,quat2_in,&CStack_9c);
      CStack_cc.w = CStack_9c.w;
      puVar4 = (uint *)((int)&CStack_cc + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar11 = (uint *)((int)&CStack_9c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&CStack_cc + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_9c + (uint)bVar6 * -8 + 4);
      *puVar4 = *puVar11;
      puVar4[(uint)bVar6 * -2 + 1] = puVar11[(uint)bVar6 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00593c60(&CStack_cc,quat2_in_00,&CStack_ac);
      CStack_12c.w = CStack_ac.w;
      puVar4 = (uint *)((int)&CStack_12c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      puVar11 = (uint *)((int)&CStack_ac + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&CStack_12c + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_ac + (uint)bVar6 * -8 + 4);
      *puVar4 = *puVar11;
      puVar4[(uint)bVar6 * -2 + 1] = puVar11[(uint)bVar6 * -2 + 1];
      core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_12c,&CStack_18c);
      pCVar3 = &CStack_18c;
      pCVar5 = &CStack_15c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar5->m[0].w = pCVar3->m[0].w;
        pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
        pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
      }
      pCVar3 = &CStack_15c;
      CStack_74.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
      CStack_74.x = 0.0;
      CStack_74.z = 0.0;
      fStack_24 = CStack_74.y;
      fStack_14 = CStack_74.y;
      core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_74,pCVar3,&CStack_44);
      afStack_88[2] = CStack_44.x;
      afStack_88[(uint)bVar6 * -2 + 3] = *(float *)((int)&CStack_44 + (uint)bVar6 * -8 + 4);
      afStack_88[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
           *(float *)((int)&CStack_44 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      max_value = 1.0;
      fStack_68 = afStack_88[2] + fStack_8c;
      afStack_64[0] = afStack_88[3] + afStack_88[0];
      afStack_64[1] = fStack_78 + afStack_88[1];
      fStack_50 = afStack_88[2] + fStack_8c;
      afStack_64[(uint)bVar6 * -2 + 6] = afStack_64[(uint)bVar6 * -2];
      afStack_64[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
           afStack_64[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      fVar10 = 0.5;
      afStack_64[2] = fStack_50 - fStack_8c;
      afStack_64[3] = fStack_4c - afStack_88[0];
      fStack_54 = fStack_48 - afStack_88[1];
      fStack_38 = fStack_50 - fStack_8c;
      afStack_34[(uint)bVar6 * -2] = afStack_64[(uint)bVar6 * -2 + 3];
      afStack_34[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
           afStack_64[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar10,max_value);
      fStack_38 = fStack_38 * fStack_18;
      afStack_34[0] = afStack_34[0] * fStack_18;
      afStack_34[1] = afStack_34[1] * fStack_18;
      fStack_14 = fStack_18;
      core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,0.0);
      core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,0.2);
      core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.3,0.6);
      uVar12 = 0;
      puVar11 = (uint *)0x0;
      pfVar9 = &fStack_38;
      pfVar8 = afStack_64 + 5;
      uVar7 = 0;
      fVar10 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,0.2);
      fStack_14 = fVar10;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.3,0.6);
      iVar1 = iVar1 + 1;
      core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                (pCStack_1c,0x3fc00000,0x3f800000,0,0x3f333333,0,fStack_14,fVar10,uVar7,pfVar8,
                 pfVar9,puVar11,uVar12);
    } while (iVar1 < 0x14);
  }
  return;
}
