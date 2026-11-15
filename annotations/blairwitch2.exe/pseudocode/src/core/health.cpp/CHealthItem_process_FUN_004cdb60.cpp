// Name: core_health.cpp_CHealthItem_process_FUN_004cdb60
// Address: 004cdb60
// Address Range: [[004cdb60, 004cdd9c]]
// Convention: __cdecl
// Signature: void __cdecl core_health_cpp_CHealthItem_process_FUN_004cdb60(CHealthItem *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_health_cpp_CHealthItem_process_FUN_004cdb60(CHealthItem *this_ptr,float delta_time)

{
  CDemonActor_vtable *pCVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  float afStackY_18ac [1480];
  CBoundingBox3D *in_stack_fffffea0;
  CMatrix3x4f CStack_130;
  float afStack_100 [6];
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  CQuaternion4f CStack_d0;
  float fStack_c0;
  float afStack_bc [7];
  float afStack_a0 [2];
  CVector3f CStack_98;
  float fStack_8c;
  float afStack_88 [4];
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  CVector3f CStack_68;
  uint uStack_5c;
  float afStack_58 [4];
  float fStack_48;
  float fStack_44;
  float afStack_40 [4];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((this_ptr->base).particle_systems,delta_time);
  fVar2 = this_ptr->check_timer - delta_time;
  this_ptr->check_timer = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  pCVar1 = (this_ptr->base).vtable._ub;
  this_ptr->check_timer = 0.2;
  (*pCVar1->getBoundingBox)(&this_ptr->base,in_stack_fffffea0);
  pfVar4 = afStack_100;
  pfVar5 = &fStack_e8;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
  }
  fStack_44 = fStack_e8 + fStack_dc;
  afStack_40[0] = fStack_e4 + fStack_d8;
  afStack_40[1] = fStack_e0 + fStack_d4;
  afStack_bc[6] = fStack_e8 + fStack_dc;
  afStack_a0[(uint)bVar7 * -2] = afStack_40[(uint)bVar7 * -2];
  afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  fStack_2c = afStack_bc[6] * _DAT_005d99bc;
  fStack_28 = afStack_a0[0] * _DAT_005d99bc;
  fStack_24 = afStack_a0[1] * _DAT_005d99bc;
  fStack_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_14 = fStack_1c;
  fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_14 = fStack_18;
  fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  afStack_58[2] = fStack_1c;
  fStack_20 = fStack_14;
  afStack_58[3] = fStack_18;
  fStack_48 = fStack_14;
  afStack_88[2] = fStack_2c;
  afStack_88[(uint)bVar7 * -2 + 3] = afStack_40[(uint)bVar7 * -2 + 6];
  afStack_88[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
       afStack_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  core_xform_cpp_FUN_00594380();
  CStack_d0.w = fStack_c0;
  pfVar4 = (float *)((int)&CStack_d0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(float *)((int)&CStack_d0 + (uint)bVar7 * -8 + 4) = afStack_bc[(uint)bVar7 * -2];
  *pfVar4 = afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  pfVar4[(uint)bVar7 * -2 + 1] =
       (afStack_bc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_d0,(CMatrix3x4f *)&stack0xfffffea0);
  CStack_68.x = 0.0;
  pfVar4 = (float *)&stack0xfffffea0;
  pCVar6 = &CStack_130;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar6->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  CStack_68.y = 0.0;
  CStack_68.z = 0.5;
  core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_68,&CStack_130,&CStack_98);
  fStack_8c = CStack_98.x;
  afStack_88[(uint)bVar7 * -2] = *(float *)((int)&CStack_98 + (uint)bVar7 * -8 + 4);
  afStack_88[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       *(float *)((int)&CStack_98 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  afStack_40[2] = fStack_8c + afStack_88[2];
  afStack_40[3] = afStack_88[0] + afStack_88[3];
  fStack_30 = afStack_88[1] + fStack_78;
  fStack_74 = fStack_8c + afStack_88[2];
  afStack_88[(uint)bVar7 * -2 + 6] = afStack_40[(uint)bVar7 * -2 + 3];
  afStack_88[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  uStack_5c = _DAT_0265370c;
  afStack_58[(uint)bVar7 * -2] = *(float *)(&DAT_02653710 + (uint)bVar7 * -8);
  afStack_58[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       *(float *)(&DAT_02653714 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  afStack_bc[4] = 1.0;
  afStack_bc[3] = 0.0;
  afStack_bc[5] = 0.0;
  fStack_74 = fStack_74 + (this_ptr->base).location.position.x;
  fStack_70 = fStack_70 + (this_ptr->base).location.position.y;
  fStack_6c = fStack_6c + (this_ptr->base).location.position.z;
  core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
            (g_CSimpleParticleSystemPtr,0x3f800000,0x3f800000,0,0x3ecccccd,0,0x3f800000,0,0,
             afStack_88 + 5,&uStack_5c,afStack_bc + 3,0);
  return;
}
