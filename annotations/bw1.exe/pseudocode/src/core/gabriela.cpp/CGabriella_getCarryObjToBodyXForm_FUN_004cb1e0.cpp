// Name: core_gabriela.cpp_CGabriella_getCarryObjToBodyXForm_FUN_004cb1e0
// Address: 004cb1e0
// Address Range: [[004cb1e0, 004cb705]]
// Convention: __stack2_esi
// Signature: CMatrix3x4f * __stack2_esi core_gabriela_cpp_CGabriella_getCarryObjToBodyXForm_FUN_004cb1e0(CGabriella *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

CMatrix3x4f * __stack2_esi core_gabriela_cpp_CGabriella_getCarryObjToBodyXForm_FUN_004cb1e0(CGabriella *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  CDemonActor *actor_ptr;
  int iVar1;
  int unaff_EBP;
  uint *puVar2;
  CMatrix3x4f *pCVar3;
  int unaff_EDI;
  uint *puVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  float afStackY_109c [939];
  CBoundingBox3D *in_stack_fffffe18;
  CVector3f *in_stack_fffffe20;
  CMatrix3x4f CStack_1b0;
  CMatrix3x4f CStack_180;
  CMatrix3x4f CStack_150;
  CMatrix3x4f CStack_120;
  uint auStack_f0 [4];
  uint auStack_e0 [2];
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [2];
  CVector3f CStack_a8;
  CVector3f CStack_9c;
  float fStack_90;
  float afStack_8c [4];
  float fStack_7c;
  CVector3f CStack_78;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  CVector3f CStack_48;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  float fStack_24;
  float afStack_20 [2];
  CVector3f CStack_18;
  
  bVar6 = 0;
  actor_ptr = (this_ptr->base).base.carry_hands[hand_index].carry_actor;
  CStack_18.y = (float)(this_ptr->base).base.carry_hands[hand_index].bone_index;
  CStack_c0.x = 0.0;
  fStack_c4 = 0.0;
  fStack_c8 = 0.0;
  CStack_a8.x = 0.0;
  afStack_b0[1] = 0.0;
  afStack_b0[0] = 0.0;
  CStack_18.z = (float)core_actor_cpp_castToClassHash_FUN_0040c600
                                 (actor_ptr,g_CLightActorClassInfo.name_hash);
  if ((CDemonActor *)CStack_18.z == (CDemonActor *)0x0) goto LAB_004cb25f;
  (*((actor_ptr->vtable)._ub)->getBoundingBox)(actor_ptr,in_stack_fffffe18);
  puVar2 = auStack_f0;
  puVar4 = auStack_e0;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
  }
  fStack_54 = fStack_d8 + fStack_cc;
  fStack_50 = fStack_d4 + fStack_c8;
  fStack_4c = fStack_d0 + fStack_c4;
  fStack_60 = fStack_d8 + fStack_cc;
  afStack_8c[(uint)bVar6 * -2 + 0xc] = afStack_8c[(uint)bVar6 * -2 + 0xf];
  afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
       afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
  fStack_6c = fStack_60 * 0.5f;
  fStack_68 = fStack_5c * 0.5f;
  fStack_64 = fStack_58 * 0.5f;
  CStack_48.x = fStack_60 * 0.5f;
  afStack_8c[(uint)bVar6 * -2 + 0x12] = afStack_8c[(uint)bVar6 * -2 + 9];
  afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x13] =
       afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
  if (&CStack_a8 != (CVector3f *)(afStack_8c + 0x11)) {
    CStack_a8.x = CStack_48.x;
    CStack_a8.y = CStack_48.y;
    CStack_a8.z = CStack_48.z;
  }
  iVar1 = *(int *)(unaff_EDI + 0x678);
  if (iVar1 == 2) {
    CStack_a8.y = fStack_c8;
    goto LAB_004cb25f;
  }
  if (iVar1 != 1) {
    if (iVar1 == 3) {
      CStack_a8.y = fStack_c8;
    }
    else {
      g_CurrentFilename = "..\\core\\gabriela.cpp";
      g_CurrentLineNumber = 2372;
      core_main_c_displayErrorAndQuit_FUN_005030e0("Don't know how to carry light %s");
    }
    goto LAB_004cb25f;
  }
  if (hand_index == 0) {
    core_xform_cpp_buildRotationY_FUN_005b6e10(-1.5707964,&CStack_1b0);
    pCVar3 = &CStack_1b0;
LAB_004cb547:
    pCVar5 = &CStack_180;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar5->m[0].w = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
  }
  else {
    if (hand_index == 1) {
      core_xform_cpp_buildRotationY_FUN_005b6e10(1.5707964,(CMatrix3x4f *)&stack0xfffffe20);
      pCVar3 = (CMatrix3x4f *)&stack0xfffffe20;
      goto LAB_004cb547;
    }
    core_xform_cpp_setIdentityMatrix3x4_FUN_005b53f0(&CStack_180);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005b5200
            (&CStack_180,
             (CMatrix3x4f *)
             (this_ptr->base).base.model.bone_transform.bone_model_matrices[unaff_EBP].m,&CStack_120
            );
  pCVar3 = &CStack_120;
  pCVar5 = &CStack_180;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar5->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  core_xform_cpp_matrixToEulerAngles_FUN_005b5930(&CStack_180,in_stack_fffffe20);
  CStack_78.x = fStack_b4;
  afStack_8c[(uint)bVar6 * -2 + 6] = afStack_b0[(uint)bVar6 * -2];
  afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7] =
       afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  if (&CStack_c0 != (CVector3f *)(afStack_8c + 5)) {
    CStack_c0.x = CStack_78.x;
    CStack_c0.y = CStack_78.y;
    CStack_c0.z = CStack_78.z;
  }
  CStack_a8.z = fStack_c4 * (float)0.29999999999999999 + fStack_d0 * (float)0.69999999999999996;
LAB_004cb25f:
  if (hand_index == 0) {
    CStack_30.y = (float)hand_index;
    CStack_30.x = -0.4;
    CStack_30.z = (float)hand_index;
    if (&CStack_18 != &CStack_30) {
      CStack_18.y = (float)hand_index;
      CStack_18.z = (float)hand_index;
      CStack_18.x = -0.4;
    }
  }
  else if (hand_index == 1) {
    CStack_9c.y = 0.0;
    CStack_9c.z = 0.0;
    CStack_9c.x = 0.4;
    if (&CStack_18 != &CStack_9c) {
      CStack_18.x = 0.4;
      CStack_18.y = 0.0;
      CStack_18.z = 0.0;
    }
  }
  else {
    CStack_18.y = 0.0;
    CStack_18.x = 0.0;
    CStack_18.z = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005b5100
            (&CStack_18,
             (CMatrix3x4f *)
             (this_ptr->base).base.model.bone_transform.bone_model_matrices[unaff_EBP].m);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005b5760
            (&CStack_150,&CStack_18,&CStack_c0);
  core_xform_cpp_transformVector3x4_FUN_005b5080(&CStack_a8,&CStack_150,&CStack_3c);
  fStack_90 = CStack_3c.x;
  afStack_8c[(uint)bVar6 * -2] = *(float *)((int)&CStack_3c + (uint)bVar6 * -8 + 4);
  afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       *(float *)((int)&CStack_3c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  fStack_24 = CStack_18.x - fStack_90;
  afStack_20[0] = CStack_18.y - afStack_8c[0];
  afStack_20[1] = CStack_18.z - afStack_8c[1];
  afStack_8c[2] = CStack_18.x - fStack_90;
  afStack_8c[(uint)bVar6 * -2 + 3] = afStack_20[(uint)bVar6 * -2];
  afStack_8c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
       afStack_20[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  CStack_150.m[0].z = CStack_150.m[0].z + afStack_8c[2];
  CStack_150.m[1].z = CStack_150.m[1].z + afStack_8c[3];
  CStack_150.m[2].z = CStack_150.m[2].z + fStack_7c;
  pCVar3 = &CStack_150;
  pCVar5 = out_matrix;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar5->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  return out_matrix;
}
