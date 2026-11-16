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
  uint *puVar3;
  CMatrix3x4f *pCVar4;
  uint *puVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  float afStackY_1908 [1490];
  CVector3f *position_offset;
  CVector3f *velocity;
  CQuaternion4f *quat2_in;
  float fVar8;
  CVector3f *acceleration;
  CQuaternion4f *quat2_in_00;
  float fVar9;
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
  CVector3f CStack_50;
  CVector3f CStack_44;
  CVector3f CStack_38;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CSimpleParticleSystem *pCStack_20;
  CSimpleParticleSystem *pCStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  pCStack_20 = (this_ptr->base).base.base.particle_systems;
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180(pCStack_20,delta_time);
  fVar8 = *(float *)&(this_ptr->base).base.base.field_0x2a8 - delta_time;
  *(float *)&(this_ptr->base).base.base.field_0x2a8 = fVar8;
  if ((fVar8 <= 0.0) &&
     (iVar1 = core_bwspart_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(pCStack_20),
     pCStack_1c = pCStack_20, iVar1 != 0)) {
    fStack_8c = _DAT_0265370c;
    afStack_88[(uint)bVar7 * -2] = *(float *)(&DAT_02653710 + (uint)bVar7 * -8);
    afStack_88[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
         *(float *)(&DAT_02653714 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
    *(uint *)&(this_ptr->base).base.base.field_0x2a8 = 0x3dcccccd;
    iVar1 = 0;
    do {
      fStack_2c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
      fStack_14 = fStack_2c;
      fStack_28 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
      fStack_14 = fStack_28;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
      core_xform_cpp_quaternionFromAngleZ_FUN_00594020(fStack_14,&CStack_fc);
      CStack_bc.w = CStack_fc.w;
      puVar5 = (uint *)((int)&CStack_bc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      puVar3 = (uint *)((int)&CStack_fc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *(uint *)((int)&CStack_bc + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_fc + (uint)bVar7 * -8 + 4);
      *puVar5 = *puVar3;
      puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
      quat2_in_00 = &CStack_bc;
      core_xform_cpp_quaternionFromAngleY_FUN_00593fe0(fStack_28,&CStack_11c);
      CStack_dc.w = CStack_11c.w;
      puVar5 = (uint *)((int)&CStack_dc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      puVar3 = (uint *)((int)&CStack_11c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *(uint *)((int)&CStack_dc + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_11c + (uint)bVar7 * -8 + 4);
      *puVar5 = *puVar3;
      puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
      quat2_in = &CStack_dc;
      core_xform_cpp_quaternionFromAngleX_FUN_00593fa0(fStack_2c,&CStack_10c);
      CStack_ec.w = CStack_10c.w;
      puVar5 = (uint *)((int)&CStack_ec + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      puVar3 = (uint *)((int)&CStack_10c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *(uint *)((int)&CStack_ec + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_10c + (uint)bVar7 * -8 + 4);
      *puVar5 = *puVar3;
      puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00593c60(&CStack_ec,quat2_in,&CStack_9c);
      CStack_cc.w = CStack_9c.w;
      puVar5 = (uint *)((int)&CStack_cc + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      puVar3 = (uint *)((int)&CStack_9c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *(uint *)((int)&CStack_cc + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_9c + (uint)bVar7 * -8 + 4);
      *puVar5 = *puVar3;
      puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_00593c60(&CStack_cc,quat2_in_00,&CStack_ac);
      CStack_12c.w = CStack_ac.w;
      puVar5 = (uint *)((int)&CStack_12c + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      puVar3 = (uint *)((int)&CStack_ac + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      *(uint *)((int)&CStack_12c + (uint)bVar7 * -8 + 4) =
           *(uint *)((int)&CStack_ac + (uint)bVar7 * -8 + 4);
      *puVar5 = *puVar3;
      puVar5[(uint)bVar7 * -2 + 1] = puVar3[(uint)bVar7 * -2 + 1];
      core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_12c,&CStack_18c);
      pCVar4 = &CStack_18c;
      pCVar6 = &CStack_15c;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        pCVar6->m[0].w = pCVar4->m[0].w;
        pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar7 * -2 + 1) * 4);
        pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
      }
      pCVar4 = &CStack_15c;
      CStack_74.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,2.0);
      CStack_74.x = 0.0;
      CStack_74.z = 0.0;
      fStack_24 = CStack_74.y;
      fStack_14 = CStack_74.y;
      core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_74,pCVar4,&CStack_44);
      afStack_88[2] = CStack_44.x;
      afStack_88[(uint)bVar7 * -2 + 3] = *(float *)((int)&CStack_44 + (uint)bVar7 * -8 + 4);
      afStack_88[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
           *(float *)((int)&CStack_44 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
      fVar9 = 1.0;
      fStack_68 = afStack_88[2] + fStack_8c;
      afStack_64[0] = afStack_88[3] + afStack_88[0];
      afStack_64[1] = fStack_78 + afStack_88[1];
      CStack_50.x = afStack_88[2] + fStack_8c;
      *(float *)((int)&CStack_50 + (uint)bVar7 * -8 + 4) = afStack_64[(uint)bVar7 * -2];
      *(float *)((int)&CStack_50 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
      fVar8 = 0.5;
      afStack_64[2] = CStack_50.x - fStack_8c;
      afStack_64[3] = CStack_50.y - afStack_88[0];
      fStack_54 = CStack_50.z - afStack_88[1];
      CStack_38.x = CStack_50.x - fStack_8c;
      *(float *)((int)&CStack_38 + (uint)bVar7 * -8 + 4) = afStack_64[(uint)bVar7 * -2 + 3];
      *(float *)((int)&CStack_38 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8) =
           afStack_64[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
      fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar8,fVar9);
      CStack_38.x = CStack_38.x * fStack_18;
      CStack_38.y = CStack_38.y * fStack_18;
      CStack_38.z = CStack_38.z * fStack_18;
      fStack_14 = fStack_18;
      core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,0.0);
      core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,0.2);
      core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.3,0.6);
      iVar2 = 0;
      acceleration = (CVector3f *)0x0;
      velocity = &CStack_38;
      position_offset = &CStack_50;
      fVar9 = 0.0;
      fVar8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,0.2);
      fStack_14 = fVar8;
      fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.3,0.6);
      iVar1 = iVar1 + 1;
      core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                (pCStack_1c,1.5,1.0,0.0,0.7,0.0,fStack_14,fVar8,fVar9,position_offset,velocity,
                 acceleration,iVar2);
    } while (iVar1 < 0x14);
  }
  return;
}
