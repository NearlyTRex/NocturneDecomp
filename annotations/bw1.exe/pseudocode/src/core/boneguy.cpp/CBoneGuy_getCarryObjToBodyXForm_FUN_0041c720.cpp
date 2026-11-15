// Name: core_boneguy.cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_0041c720
// Address: 0041c720
// Address Range: [[0041c720, 0041c991]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_boneguy_cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_0041c720(CBoneGuy *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CMatrix3x4f * __stack2_esi core_boneguy_cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_0041c720(CBoneGuy *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  CDemonActor *this_ptr_00;
  int iVar1;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  float afStackY_10ac [967];
  CBoundingBox3D *in_stack_fffffe7c;
  CVector3f *this_ptr_01;
  CMatrix3x4f CStack_154;
  CMatrix3x4f CStack_124;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float afStack_dc [6];
  CVector3f CStack_c4;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float afStack_a8 [2];
  CVector3f CStack_a0;
  float fStack_94;
  float fStack_8c;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  float fStack_58;
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  int iStack_10;
  
  bVar6 = 0;
  this_ptr_00 = (this_ptr->base).base.carry_hands[hand_index].carry_actor;
  iStack_10 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  CStack_70.y = -2.536;
  CStack_70.x = -0.771;
  CStack_70.z = 2.536;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005b5760
            (&CStack_124,(CVector3f *)&DAT_02c8af28,&CStack_70);
  (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,in_stack_fffffe7c);
  pfVar2 = afStack_dc;
  pfVar4 = &fStack_f4;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar4 = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar6 * -2 + 1;
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
  }
  core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(&CStack_64);
  this_ptr_01 = &CStack_1c;
  CStack_64.x = fStack_f4 + fStack_e8;
  CStack_64.y = fStack_f0 + fStack_e4;
  CStack_64.z = fStack_ec + fStack_e0;
  fStack_40 = fStack_f4 + fStack_e8;
  afStack_54[(uint)bVar6 * -2 + 6] = *(float *)((int)&CStack_64 + (uint)bVar6 * -8 + 4);
  afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
       *(float *)((int)&CStack_64 + ((uint)bVar6 * -2 + (uint)bVar6 * -2) * 4 + 8);
  core_actor_cpp_CVector3f_ctor_FUN_0040cfe0(this_ptr_01);
  CStack_1c.x = fStack_40 * _DAT_005d4769;
  CStack_1c.y = fStack_3c * _DAT_005d4769;
  CStack_1c.z = fStack_38 * _DAT_005d4769;
  fStack_94 = fStack_40 * _DAT_005d4769;
  afStack_a8[(uint)bVar6 * -2 + 6] = *(float *)((int)&CStack_1c + (uint)bVar6 * -8 + 4);
  afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
       *(float *)((int)&CStack_1c + ((uint)bVar6 * -2 + (uint)bVar6 * -2) * 4 + 8);
  fStack_8c = fStack_ec + (float)_DAT_005d4771;
  CStack_a0.x = fStack_94;
  afStack_a8[(uint)bVar6 * -2 + 3] = afStack_a8[(uint)bVar6 * -2 + 6];
  afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
  if (&CStack_88 != (CVector3f *)(afStack_a8 + 2)) {
    CStack_88.x = CStack_a0.x;
    CStack_88.y = CStack_a0.y;
    CStack_88.z = CStack_a0.z;
  }
  CStack_28.y = 0.209;
  CStack_28.z = -0.082;
  CStack_28.x = 0.032;
  core_xform_cpp_transformVector3x4_FUN_005b5080
            (&CStack_28,
             (CMatrix3x4f *)
             (this_ptr->base).base.model.bone_transform.bone_model_matrices[iStack_10].m,&CStack_7c)
  ;
  fStack_58 = CStack_7c.x;
  afStack_54[(uint)bVar6 * -2] = *(float *)((int)&CStack_7c + (uint)bVar6 * -8 + 4);
  afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       *(float *)((int)&CStack_7c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  if (&fStack_b8 != &fStack_58) {
    fStack_b8 = fStack_58;
    fStack_b4 = afStack_54[0];
    fStack_b0 = afStack_54[1];
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
            (&CStack_124,
             (CMatrix3x4f *)
             (this_ptr->base).base.model.bone_transform.bone_model_matrices[iStack_10].m,
             (CMatrix3x4f *)&stack0xfffffe7c);
  pfVar2 = (float *)&stack0xfffffe7c;
  pCVar3 = &CStack_154;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar6 * -2 + 1;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
  }
  core_xform_cpp_transformVector3x4_FUN_005b5080(&CStack_88,&CStack_154,&CStack_c4);
  afStack_54[2] = CStack_c4.x;
  afStack_54[(uint)bVar6 * -2 + 3] = *(float *)((int)&CStack_c4 + (uint)bVar6 * -8 + 4);
  afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       *(float *)((int)&CStack_c4 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  fStack_ac = fStack_b8 - afStack_54[2];
  afStack_a8[0] = fStack_b4 - afStack_54[3];
  afStack_a8[1] = fStack_b0 - fStack_44;
  fStack_34 = fStack_b8 - afStack_54[2];
  afStack_54[(uint)bVar6 * -2 + 9] = afStack_a8[(uint)bVar6 * -2];
  afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
       afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  CStack_154.m[0].z = CStack_154.m[0].z + fStack_34;
  CStack_154.m[1].z = CStack_154.m[1].z + fStack_30;
  CStack_154.m[2].z = CStack_154.m[2].z + fStack_2c;
  pCVar3 = &CStack_154;
  pCVar5 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar5->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  return out_matrix;
}
