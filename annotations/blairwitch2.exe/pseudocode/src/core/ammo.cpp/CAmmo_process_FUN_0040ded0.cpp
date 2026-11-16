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
  uint *puVar5;
  CMatrix3x4f *pCVar6;
  float *pfVar7;
  uint *puVar8;
  byte bVar9;
  float afStackY_18a0 [1480];
  float red;
  float green;
  float blue;
  CVector3f *position_offset;
  CVector3f *velocity;
  CBoundingBox3D *in_stack_fffffeac;
  CVector3f *acceleration;
  CMatrix3x4f *matrix;
  float texture_index;
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
  float afStack_a0 [2];
  CVector3f CStack_98;
  float fStack_8c;
  float afStack_88 [2];
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  float fStack_5c;
  float afStack_58 [4];
  float fStack_48;
  CVector3f CStack_44;
  float fStack_38;
  float afStack_34 [4];
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar9 = 0;
  fVar2 = this_ptr->check_timer - delta_time;
  this_ptr->check_timer = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  pCVar1 = (this_ptr->base).vtable._ub;
  this_ptr->check_timer = 0.1;
  (*pCVar1->getBoundingBox)(&this_ptr->base,in_stack_fffffeac);
  pfVar4 = afStack_dc;
  pfVar7 = &fStack_f4;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar9 * -2 + 1;
    pfVar7 = pfVar7 + (uint)bVar9 * -2 + 1;
  }
  fStack_a4 = fStack_f4 + fStack_e8;
  afStack_a0[0] = fStack_f0 + fStack_e4;
  afStack_a0[1] = fStack_ec + fStack_e0;
  afStack_58[2] = fStack_f4 + fStack_e8;
  afStack_58[(uint)bVar9 * -2 + 3] = afStack_a0[(uint)bVar9 * -2];
  afStack_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       afStack_a0[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  fStack_8c = afStack_58[2] * _DAT_005cb0da;
  afStack_88[0] = afStack_58[3] * _DAT_005cb0da;
  afStack_88[1] = fStack_48 * _DAT_005cb0da;
  fStack_1c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_14 = fStack_1c;
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  afStack_34[2] = fStack_8c;
  afStack_34[(uint)bVar9 * -2 + 3] = afStack_88[(uint)bVar9 * -2];
  afStack_34[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
       afStack_88[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  fStack_20 = fVar2;
  fStack_14 = fVar2;
  CStack_80.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  CStack_80.x = fStack_1c;
  CStack_80.y = fStack_20;
  fStack_18 = CStack_80.z;
  fStack_14 = CStack_80.z;
  core_xform_cpp_eulerToQuaternion_FUN_00594380(&CStack_80,&CStack_c4);
  CStack_b4.w = CStack_c4.w;
  puVar8 = (uint *)((int)&CStack_b4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar5 = (uint *)((int)&CStack_c4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&CStack_b4 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&CStack_c4 + (uint)bVar9 * -8 + 4);
  *puVar8 = *puVar5;
  puVar8[(uint)bVar9 * -2 + 1] = puVar5[(uint)bVar9 * -2 + 1];
  core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_b4,&CStack_124);
  matrix = (CMatrix3x4f *)&stack0xfffffeac;
  CStack_74.x = 0.0;
  pCVar6 = &CStack_124;
  pfVar4 = (float *)&stack0xfffffeac;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = pCVar6->m[0].w;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar9 * -2 + 1) * 4);
    pfVar4 = pfVar4 + (uint)bVar9 * -2 + 1;
  }
  CStack_74.y = 0.0;
  CStack_74.z = 0.25;
  core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_74,matrix,&CStack_44);
  velocity = &CStack_98;
  fStack_38 = CStack_44.x;
  afStack_34[(uint)bVar9 * -2] = *(float *)((int)&CStack_44 + (uint)bVar9 * -8 + 4);
  afStack_34[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       *(float *)((int)&CStack_44 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  texture_index = 0.0;
  acceleration = (CVector3f *)0x0;
  fStack_5c = fStack_38 + afStack_34[2];
  afStack_58[0] = afStack_34[0] + afStack_34[3];
  afStack_58[1] = afStack_34[1] + fStack_24;
  CStack_68.x = fStack_38 + afStack_34[2];
  *(float *)((int)&CStack_68 + (uint)bVar9 * -8 + 4) = afStack_58[(uint)bVar9 * -2];
  *(float *)((int)&CStack_68 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       afStack_58[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  position_offset = &CStack_68;
  blue = 1.0;
  green = 1.0;
  red = 1.0;
  fVar2 = 0.0;
  CStack_98.x = _DAT_0265370c;
  *(uint *)((int)&CStack_98 + (uint)bVar9 * -8 + 4) =
       *(uint *)(&DAT_02653710 + (uint)bVar9 * -8);
  *(uint *)((int)&CStack_98 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       *(uint *)(&DAT_02653714 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  CStack_68.x = CStack_68.x + (this_ptr->base).location.position.x;
  CStack_68.y = CStack_68.y + (this_ptr->base).location.position.y;
  CStack_68.z = CStack_68.z + (this_ptr->base).location.position.z;
  core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
            (g_CSimpleParticleSystemPtr,0.5,1.0,0.0,0.2,fVar2,red,green,blue,position_offset,
             velocity,acceleration,(int)texture_index);
  return;
}
