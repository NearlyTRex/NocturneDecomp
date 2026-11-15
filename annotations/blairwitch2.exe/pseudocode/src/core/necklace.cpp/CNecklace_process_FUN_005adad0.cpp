// Name: core_necklace.cpp_CNecklace_process_FUN_005adad0
// Address: 005adad0
// Address Range: [[005adad0, 005add25]]
// Convention: __cdecl
// Signature: void __cdecl core_necklace_cpp_CNecklace_process_FUN_005adad0(CNecklace *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [2];
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [2];
  CVector3f CStack_78;
  uint uStack_6c;
  float afStack_68 [4];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
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
  fStack_30 = fStack_104 + fStack_f8;
  fStack_2c = fStack_100 + fStack_f4;
  fStack_28 = fStack_fc + fStack_f0;
  fStack_3c = fStack_104 + fStack_f8;
  afStack_68[(uint)bVar9 * -2 + 0xc] = afStack_68[(uint)bVar9 * -2 + 0xf];
  afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0xd] =
       afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 0x10];
  afStack_68[2] = fStack_3c * _DAT_005f0f37;
  afStack_68[3] = fStack_38 * _DAT_005f0f37;
  fStack_58 = fStack_34 * _DAT_005f0f37;
  fStack_24 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_14 = fStack_24;
  fStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_14 = fStack_20;
  fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  CStack_a8.x = fStack_24;
  fStack_18 = fStack_14;
  CStack_a8.y = fStack_20;
  CStack_a8.z = fStack_14;
  fStack_84 = afStack_68[2];
  afStack_80[(uint)bVar9 * -2] = afStack_68[(uint)bVar9 * -2 + 3];
  afStack_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
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
  fStack_54 = fStack_9c + fStack_84;
  fStack_50 = afStack_98[0] + afStack_80[0];
  fStack_4c = afStack_98[1] + afStack_80[1];
  fStack_48 = fStack_9c + fStack_84;
  afStack_68[(uint)bVar9 * -2 + 9] = afStack_68[(uint)bVar9 * -2 + 6];
  afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 10] =
       afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7];
  uStack_6c = _DAT_0265370c;
  afStack_68[(uint)bVar9 * -2] = *(float *)(&DAT_02653710 + (uint)bVar9 * -8);
  afStack_68[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
       *(float *)(&DAT_02653714 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
  uStack_b4 = 0;
  uStack_b0 = 0x3f800000;
  uStack_ac = 0;
  fStack_48 = fStack_48 + (this_ptr->base).base.location.position.x;
  fStack_44 = fStack_44 + (this_ptr->base).base.location.position.y;
  fStack_40 = fStack_40 + (this_ptr->base).base.location.position.z;
  core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
            (g_CSimpleParticleSystemPtr,0x3f800000,0x3f800000,0,0x3ecccccd,0,0x3ed26e98,0x3ee66666,
             0x3f800000,afStack_68 + 8,&uStack_6c,&uStack_b4,0);
  return;
}
