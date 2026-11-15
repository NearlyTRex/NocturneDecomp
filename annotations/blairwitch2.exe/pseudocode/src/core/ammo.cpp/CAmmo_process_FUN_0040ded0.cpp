// Name: core_ammo.cpp_CAmmo_process_FUN_0040ded0
// Address: 0040ded0
// Address Range: [[0040ded0, 0040e0ea]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_process_FUN_0040ded0(CAmmo *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ammo_cpp_CAmmo_process_FUN_0040ded0(CAmmo *this_ptr,float delta_time)

{
  CDemonActor_vtable *pCVar1;
  float fVar2;
  int iVar3;
  float *pfVar4;
  CMatrix3x4f *pCVar5;
  float *pfVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_18a0 [1480];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  CBoundingBox3D *in_stack_fffffeac;
  uint *puVar13;
  CMatrix3x4f *matrix;
  CMatrix3x4f CStack_124;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float afStack_dc [6];
  CQuaternion4f CStack_c4;
  CQuaternion4f CStack_b4;
  float fStack_a4;
  float afStack_a0 [5];
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  CVector3f CStack_80;
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
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar8 = 0;
  fVar2 = this_ptr->check_timer - delta_time;
  this_ptr->check_timer = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  pCVar1 = (this_ptr->base).vtable._ub;
  this_ptr->check_timer = 0.1;
  (*pCVar1->getBoundingBox)(&this_ptr->base,in_stack_fffffeac);
  pfVar4 = afStack_dc;
  pfVar6 = &fStack_f4;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
    pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
  }
  fStack_a4 = fStack_f4 + fStack_e8;
  afStack_a0[0] = fStack_f0 + fStack_e4;
  afStack_a0[1] = fStack_ec + fStack_e0;
  fStack_50 = fStack_f4 + fStack_e8;
  afStack_64[(uint)bVar8 * -2 + 6] = afStack_a0[(uint)bVar8 * -2];
  afStack_64[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
       afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  fStack_8c = fStack_50 * _DAT_005cb0da;
  fStack_88 = fStack_4c * _DAT_005cb0da;
  fStack_84 = fStack_48 * _DAT_005cb0da;
  fStack_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_14 = fStack_1c;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  afStack_34[2] = fStack_8c;
  afStack_34[(uint)bVar8 * -2 + 3] = afStack_a0[(uint)bVar8 * -2 + 6];
  afStack_34[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
  fStack_20 = fVar2;
  fStack_14 = fVar2;
  CStack_80.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  CStack_80.x = fStack_1c;
  CStack_80.y = fStack_20;
  fStack_18 = CStack_80.z;
  fStack_14 = CStack_80.z;
  core_xform_cpp_eulerToQuaternion_FUN_00594380(&CStack_80,&CStack_c4);
  CStack_b4.w = CStack_c4.w;
  puVar7 = (uint *)((int)&CStack_b4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  puVar13 = (uint *)((int)&CStack_c4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  *(uint *)((int)&CStack_b4 + (uint)bVar8 * -8 + 4) =
       *(uint *)((int)&CStack_c4 + (uint)bVar8 * -8 + 4);
  *puVar7 = *puVar13;
  puVar7[(uint)bVar8 * -2 + 1] = puVar13[(uint)bVar8 * -2 + 1];
  core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_b4,&CStack_124);
  matrix = (CMatrix3x4f *)&stack0xfffffeac;
  CStack_74.x = 0.0;
  pCVar5 = &CStack_124;
  pfVar4 = (float *)&stack0xfffffeac;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar8 * -2 + 1) * 4);
    pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
  }
  CStack_74.y = 0.0;
  CStack_74.z = 0.25;
  core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_74,matrix,&CStack_44);
  pfVar4 = afStack_a0 + 2;
  fStack_38 = CStack_44.x;
  afStack_34[(uint)bVar8 * -2] = *(float *)((int)&CStack_44 + (uint)bVar8 * -8 + 4);
  afStack_34[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       *(float *)((int)&CStack_44 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  fVar2 = 0.0;
  puVar13 = (uint *)0x0;
  afStack_64[2] = fStack_38 + afStack_34[2];
  afStack_64[3] = afStack_34[0] + afStack_34[3];
  fStack_54 = afStack_34[1] + fStack_24;
  fStack_68 = fStack_38 + afStack_34[2];
  afStack_64[(uint)bVar8 * -2] = afStack_64[(uint)bVar8 * -2 + 3];
  afStack_64[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
       afStack_64[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
  pfVar6 = &fStack_68;
  uVar12 = 0x3f800000;
  uVar11 = 0x3f800000;
  uVar10 = 0x3f800000;
  uVar9 = 0;
  afStack_a0[2] = (float)_DAT_0265370c;
  afStack_a0[(uint)bVar8 * -2 + 3] = *(float *)(&DAT_02653710 + (uint)bVar8 * -8);
  afStack_a0[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
       *(float *)(&DAT_02653714 + (uint)bVar8 * -8 + (uint)bVar8 * -8);
  fStack_68 = fStack_68 + (this_ptr->base).location.position.x;
  afStack_64[0] = afStack_64[0] + (this_ptr->base).location.position.y;
  afStack_64[1] = afStack_64[1] + (this_ptr->base).location.position.z;
  core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
            (g_CSimpleParticleSystemPtr,0x3f000000,0x3f800000,0,0x3e4ccccd,uVar9,uVar10,uVar11,
             uVar12,pfVar6,pfVar4,puVar13,fVar2);
  return;
}
