// Name: core_gabriela.cpp_CGabriella_getCarryObjToBodyXForm_FUN_00499ca0
// Address: 00499ca0
// Address Range: [[00499ca0, 0049a109]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_gabriela_cpp_CGabriella_getCarryObjToBodyXForm_FUN_00499ca0(CGabriella *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __stack2_esi core_gabriela_cpp_CGabriella_getCarryObjToBodyXForm_FUN_00499ca0(CGabriella *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  CDemonActor *actor_ptr;
  CDemonActor *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  CMatrix3x4f CStack_190;
  CMatrix3x4f local_160;
  CMatrix3x4f CStack_130;
  CMatrix3x4f CStack_100;
  CMatrix3x4f CStack_d0;
  CBoundingBox3D local_a0;
  CVector3f CStack_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f CStack_4c;
  float local_40;
  float local_3c;
  float local_38;
  CVector3f local_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CVector3f local_1c;
  int local_10;
  
  bVar6 = 0;
  actor_ptr = (this_ptr->base).base.carry_hands[hand_index].carry_actor;
  local_10 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  local_58.z = 0.0;
  local_58.y = 0.0;
  local_58.x = 0.0;
  local_1c.z = 0.0;
  local_1c.y = 0.0;
  local_1c.x = 0.0;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (actor_ptr,g_CLightActorActorType_00764a9c.name_hash);
  if (pCVar1 == (CDemonActor *)0x0) goto LAB_00499d1a;
  (*((actor_ptr->vtable)._ub)->getBoundingBox)(actor_ptr,&local_a0);
  fStack_28 = local_a0.min.x + local_a0.max.x;
  CStack_88.x = fStack_28 * 0.5f;
  fStack_24 = local_a0.min.y + local_a0.max.y;
  fStack_20 = local_a0.min.z + local_a0.max.z;
  CStack_88.y = fStack_24 * 0.5f;
  CStack_88.z = fStack_20 * 0.5f;
  if (&local_1c != &CStack_88) {
    local_1c.x = CStack_88.x;
    local_1c.y = CStack_88.y;
    local_1c.z = CStack_88.z;
  }
  iVar3 = pCVar1[4].dead2;
  if (iVar3 == 2) {
    local_1c.y = local_a0.max.y;
    goto LAB_00499d1a;
  }
  if (iVar3 != 1) {
    if (iVar3 == 3) {
      local_1c.y = local_a0.max.y;
    }
    else {
      g_CurrentFilename = "..\\core\\gabriela.cpp";
      g_CurrentLineNumber = 2373;
      core_main_c_displayErrorAndQuit_FUN_004c8440("Don't know how to carry light %s",pCVar1);
    }
    goto LAB_00499d1a;
  }
  if (hand_index == 0) {
    core_xform_cpp_buildRotationY_FUN_0055c7b0(-1.5707964,&CStack_190);
    pCVar4 = &CStack_190;
LAB_00499f65:
    pCVar5 = &CStack_d0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar5->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
  }
  else {
    if (hand_index == 1) {
      core_xform_cpp_buildRotationY_FUN_0055c7b0(1.5707964,&CStack_100);
      pCVar4 = &CStack_100;
      goto LAB_00499f65;
    }
    core_xform_cpp_setIdentityMatrix3x4_FUN_0055abf0(&CStack_d0);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00
            (&CStack_d0,(this_ptr->base).base.model.bone_transform.bone_world_matrices + local_10,
             &CStack_130);
  pCVar4 = &CStack_130;
  pCVar5 = &CStack_d0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar5->m[0].w = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_0055b180(&CStack_d0,&CStack_4c);
  if (&local_58 != pCVar2) {
    local_58.x = pCVar2->x;
    local_58.y = pCVar2->y;
    local_58.z = pCVar2->z;
  }
  local_1c.z = local_a0.max.z * (float)0.29999999999999999 + local_a0.min.z * (float)0.69999999999999996;
LAB_00499d1a:
  if (hand_index == 0) {
    local_64.y = (float)hand_index;
    local_64.x = -0.4;
    local_64.z = (float)hand_index;
    if (&local_34 != &local_64) {
      local_34.y = (float)hand_index;
      local_34.z = (float)hand_index;
      local_34.x = -0.4;
    }
  }
  else if (hand_index == 1) {
    local_7c.y = 0.0;
    local_7c.z = 0.0;
    local_7c.x = 0.4;
    if (&local_34 != &local_7c) {
      local_34.x = 0.4;
      local_34.y = 0.0;
      local_34.z = 0.0;
    }
  }
  else {
    local_34.y = 0.0;
    local_34.x = 0.0;
    local_34.z = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_0055a910
            (&local_34,(this_ptr->base).base.model.bone_transform.bone_world_matrices + local_10);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(&local_160,&local_34,&local_58);
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_0055a8b0(&local_70,&local_1c,&local_160);
  local_40 = local_34.x - pCVar2->x;
  local_3c = local_34.y - pCVar2->y;
  local_38 = local_34.z - pCVar2->z;
  local_160.m[0].z = local_160.m[0].z + local_40;
  local_160.m[1].z = local_160.m[1].z + local_3c;
  local_160.m[2].z = local_160.m[2].z + local_38;
  pCVar4 = &local_160;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    out_matrix->m[0].w = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    out_matrix = (CMatrix3x4f *)((int)out_matrix + ((uint)bVar6 * -2 + 1) * 4);
  }
  return;
}
