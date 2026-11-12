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
  uint *puVar4;
  float *pfVar5;
  uint *puVar6;
  byte bVar7;
  float afStackY_18ac [1480];
  CBoundingBox3D *in_stack_fffffea0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  CQuaternion4f CStack_d0;
  float fStack_c0;
  float afStack_bc [7];
  float afStack_a0 [5];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  float fStack_5c;
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
  puVar4 = (uint *)&stack0xffffff00;
  puVar6 = &stack0xffffff18;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
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
  fStack_80 = fStack_2c;
  afStack_a0[(uint)bVar7 * -2 + 9] = afStack_40[(uint)bVar7 * -2 + 6];
  afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       afStack_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  core_xform_cpp_FUN_00594380();
  CStack_d0.w = fStack_c0;
  pfVar5 = (float *)((int)&CStack_d0 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(float *)((int)&CStack_d0 + (uint)bVar7 * -8 + 4) = afStack_bc[(uint)bVar7 * -2];
  *pfVar5 = afStack_bc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  pfVar5[(uint)bVar7 * -2 + 1] =
       (afStack_bc + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_d0,(CMatrix3x4f *)&stack0xfffffea0);
  uStack_68 = 0;
  puVar4 = (uint *)&stack0xfffffea0;
  puVar6 = (uint *)&stack0xfffffed0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar4;
    puVar4 = puVar4 + (uint)bVar7 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
  }
  uStack_64 = 0;
  uStack_60 = 0x3f000000;
  core_xform_cpp_FUN_00591530();
  fStack_8c = afStack_a0[2];
  afStack_a0[(uint)bVar7 * -2 + 6] = afStack_a0[(uint)bVar7 * -2 + 3];
  afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7] =
       afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  afStack_40[2] = fStack_8c + fStack_80;
  afStack_40[3] = fStack_88 + fStack_7c;
  fStack_30 = fStack_84 + fStack_78;
  fStack_74 = fStack_8c + fStack_80;
  afStack_a0[(uint)bVar7 * -2 + 0xc] = afStack_40[(uint)bVar7 * -2 + 3];
  afStack_a0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       afStack_40[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  fStack_5c = (float)_DAT_0265370c;
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
             afStack_a0 + 0xb,afStack_a0 + 0x11,afStack_bc + 3,0);
  return;
}
