// Name: core_necklace.cpp_CNecklace_process_FUN_005adad0
// Address: 005adad0
// Address Range: [[005adad0, 005add25]]
// Convention: __cdecl
// Signature: void __cdecl core_necklace_cpp_CNecklace_process_FUN_005adad0(CNecklace *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_necklace_cpp_CNecklace_process_FUN_005adad0(CNecklace *this_ptr,float delta_time)

{
  CDemonActor_vtable *pCVar1;
  float fVar2;
  int iVar3;
  uint *puVar4;
  float *pfVar5;
  float *pfVar6;
  uint *puVar7;
  CMatrix3x4f *pCVar8;
  byte bVar9;
  float afStackY_18b0 [1482];
  CBoundingBox3D *in_stack_fffffea4;
  CMatrix3x4f *matrix;
  CMatrix3x4f CStack_134;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float afStack_ec [6];
  CQuaternion4f CStack_d4;
  CQuaternion4f CStack_c4;
  CVector3f CStack_b4;
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [2];
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [2];
  CVector3f CStack_78;
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  CVector3f CStack_48;
  float fStack_3c;
  float afStack_38 [4];
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar9 = 0;
  core_boxactor_cpp_CBoxActor_process_FUN_0041c090(&this_ptr->base,delta_time);
  fVar2 = *(float *)&(this_ptr->base).base.field_0x2a8 - delta_time;
  *(float *)&(this_ptr->base).base.field_0x2a8 = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  pCVar1 = (this_ptr->base).base.vtable._ub;
  *(uint *)&(this_ptr->base).base.field_0x2a8 = 0x3dcccccd;
  (*pCVar1->getBoundingBox)((CDemonActor *)this_ptr,in_stack_fffffea4);
  pfVar5 = afStack_ec;
  pfVar6 = &fStack_104;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar6 = *pfVar5;
    pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
    pfVar6 = pfVar6 + (uint)bVar9 * -2 + 1;
  }
  afStack_38[2] = fStack_104 + fStack_f8;
  afStack_38[3] = fStack_100 + fStack_f4;
  fStack_28 = fStack_fc + fStack_f0;
  fStack_3c = fStack_104 + fStack_f8;
  afStack_38[(uint)bVar9 * -2] = afStack_38[(uint)bVar9 * -2 + 3];
  afStack_38[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_38[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  fStack_60 = fStack_3c * 0.5f;
  afStack_5c[0] = afStack_38[0] * 0.5f;
  afStack_5c[1] = afStack_38[1] * 0.5f;
  fStack_24 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_14 = fStack_24;
  fStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_14 = fStack_20;
  fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  CStack_a8.x = fStack_24;
  fStack_18 = fStack_14;
  CStack_a8.y = fStack_20;
  CStack_a8.z = fStack_14;
  fStack_84 = fStack_60;
  afStack_80[(uint)bVar9 * -2] = afStack_5c[(uint)bVar9 * -2];
  afStack_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
  core_xform_cpp_eulerToQuaternion_FUN_00594380(&CStack_a8,&CStack_c4);
  CStack_d4.w = CStack_c4.w;
  puVar7 = (uint *)((int)&CStack_d4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  puVar4 = (uint *)((int)&CStack_c4 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  *(uint *)((int)&CStack_d4 + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&CStack_c4 + (uint)bVar9 * -8 + 4);
  *puVar7 = *puVar4;
  puVar7[(uint)bVar9 * -2 + 1] = puVar4[(uint)bVar9 * -2 + 1];
  core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_d4,(CMatrix3x4f *)&stack0xfffffe9c);
  matrix = &CStack_134;
  pfVar5 = (float *)&stack0xfffffe9c;
  pCVar8 = &CStack_134;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar8->m[0].w = *pfVar5;
    pfVar5 = pfVar5 + (uint)bVar9 * -2 + 1;
    pCVar8 = (CMatrix3x4f *)((int)pCVar8 + ((uint)bVar9 * -2 + 1) * 4);
  }
  CStack_90.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.0);
  CStack_90.x = 0.0;
  CStack_90.y = 0.0;
  fStack_1c = CStack_90.z;
  fStack_14 = CStack_90.z;
  core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_90,matrix,&CStack_78);
  fStack_9c = CStack_78.x;
  afStack_98[(uint)bVar9 * -2] = *(float *)((int)&CStack_78 + (uint)bVar9 * -8 + 4);
  afStack_98[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       *(float *)((int)&CStack_78 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
  afStack_5c[2] = fStack_9c + fStack_84;
  afStack_5c[3] = afStack_98[0] + afStack_80[0];
  fStack_4c = afStack_98[1] + afStack_80[1];
  CStack_48.x = fStack_9c + fStack_84;
  *(float *)((int)&CStack_48 + (uint)bVar9 * -8 + 4) = afStack_5c[(uint)bVar9 * -2 + 3];
  *(float *)((int)&CStack_48 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       afStack_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
  CStack_6c.x = g_CVector3f_0265370c.x;
  *(uint *)((int)&CStack_6c + (uint)bVar9 * -8 + 4) =
       *(uint *)((int)&g_CVector3f_0265370c + (uint)bVar9 * -8 + 4);
  *(uint *)((int)&CStack_6c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
       *(uint *)((uint)bVar9 * -8 + 0x2653714 + (uint)bVar9 * -8);
  CStack_b4.x = 0.0;
  CStack_b4.y = 1.0;
  CStack_b4.z = 0.0;
  CStack_48.x = CStack_48.x + (this_ptr->base).base.location.position.x;
  CStack_48.y = CStack_48.y + (this_ptr->base).base.location.position.y;
  CStack_48.z = CStack_48.z + (this_ptr->base).base.location.position.z;
  core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
            (g_CSimpleParticleSystemPtr,1.0,1.0,0.0,0.4,0.0,0.411,0.45,1.0,&CStack_48,&CStack_6c,
             &CStack_b4,0);
  return;
}
