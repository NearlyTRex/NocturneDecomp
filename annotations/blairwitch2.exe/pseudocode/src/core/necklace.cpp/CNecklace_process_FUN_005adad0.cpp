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
  float *pfVar4;
  float *pfVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
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
  float fStack_c4;
  float afStack_c0 [7];
  float fStack_a4;
  float fStack_a0;
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
  
  bVar7 = 0;
  core_boxactor_cpp_CBoxActor_process_FUN_0041c090(&this_ptr->base,delta_time);
  fVar2 = *(float *)&(this_ptr->base).base.field_0x2a8 - delta_time;
  *(float *)&(this_ptr->base).base.field_0x2a8 = fVar2;
  if (0.0 < fVar2) {
    return;
  }
  pCVar1 = (this_ptr->base).base.vtable._ub;
  *(uint *)&(this_ptr->base).base.field_0x2a8 = 0x3dcccccd;
  (*pCVar1->getBoundingBox)((CDemonActor *)this_ptr,in_stack_fffffea4);
  pfVar4 = afStack_ec;
  pfVar5 = &fStack_104;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
    pfVar5 = pfVar5 + (uint)bVar7 * -2 + 1;
  }
  fStack_30 = fStack_104 + fStack_f8;
  fStack_2c = fStack_100 + fStack_f4;
  fStack_28 = fStack_fc + fStack_f0;
  fStack_3c = fStack_104 + fStack_f8;
  afStack_68[(uint)bVar7 * -2 + 0xc] = afStack_68[(uint)bVar7 * -2 + 0xf];
  afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
       afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
  afStack_68[2] = fStack_3c * _DAT_005f0f37;
  afStack_68[3] = fStack_38 * _DAT_005f0f37;
  fStack_58 = fStack_34 * _DAT_005f0f37;
  fStack_24 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_14 = fStack_24;
  fStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fStack_14 = fStack_20;
  fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  afStack_c0[6] = fStack_24;
  fStack_18 = fStack_14;
  fStack_a4 = fStack_20;
  fStack_a0 = fStack_14;
  fStack_84 = afStack_68[2];
  afStack_80[(uint)bVar7 * -2] = afStack_68[(uint)bVar7 * -2 + 3];
  afStack_80[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
  core_xform_cpp_FUN_00594380();
  CStack_d4.w = fStack_c4;
  pfVar4 = (float *)((int)&CStack_d4 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  *(float *)((int)&CStack_d4 + (uint)bVar7 * -8 + 4) = afStack_c0[(uint)bVar7 * -2];
  *pfVar4 = afStack_c0[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
  pfVar4[(uint)bVar7 * -2 + 1] =
       (afStack_c0 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
  core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(&CStack_d4,(CMatrix3x4f *)&stack0xfffffe9c);
  matrix = &CStack_134;
  pfVar4 = (float *)&stack0xfffffe9c;
  pCVar6 = &CStack_134;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar6->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar7 * -2 + 1;
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  CStack_90.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.0);
  CStack_90.x = 0.0;
  CStack_90.y = 0.0;
  fStack_1c = CStack_90.z;
  fStack_14 = CStack_90.z;
  core_xform_cpp_transformVector3x4_FUN_00591530(&CStack_90,matrix,&CStack_78);
  fStack_9c = CStack_78.x;
  afStack_98[(uint)bVar7 * -2] = *(float *)((int)&CStack_78 + (uint)bVar7 * -8 + 4);
  afStack_98[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       *(float *)((int)&CStack_78 + (uint)bVar7 * -8 + (uint)bVar7 * -8 + 8);
  fStack_54 = fStack_9c + fStack_84;
  fStack_50 = afStack_98[0] + afStack_80[0];
  fStack_4c = afStack_98[1] + afStack_80[1];
  fStack_48 = fStack_9c + fStack_84;
  afStack_68[(uint)bVar7 * -2 + 9] = afStack_68[(uint)bVar7 * -2 + 6];
  afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
       afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
  uStack_6c = _DAT_0265370c;
  afStack_68[(uint)bVar7 * -2] = *(float *)(&DAT_02653710 + (uint)bVar7 * -8);
  afStack_68[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
       *(float *)(&DAT_02653714 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
  afStack_c0[3] = 0.0;
  afStack_c0[4] = 1.0;
  afStack_c0[5] = 0.0;
  fStack_48 = fStack_48 + (this_ptr->base).base.location.position.x;
  fStack_44 = fStack_44 + (this_ptr->base).base.location.position.y;
  fStack_40 = fStack_40 + (this_ptr->base).base.location.position.z;
  core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
            (g_CSimpleParticleSystemPtr,0x3f800000,0x3f800000,0,0x3ecccccd,0,0x3ed26e98,0x3ee66666,
             0x3f800000,afStack_68 + 8,&uStack_6c,afStack_c0 + 3,0);
  return;
}
