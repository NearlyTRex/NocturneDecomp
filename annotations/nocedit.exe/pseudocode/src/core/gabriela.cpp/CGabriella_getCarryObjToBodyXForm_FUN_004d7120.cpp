// Name: core_gabriela.cpp_CGabriella_getCarryObjToBodyXForm_FUN_004d7120
// Address: 004d7120
// Address Range: [[004d7120, 004d7589]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_gabriela_cpp_CGabriella_getCarryObjToBodyXForm_FUN_004d7120(CGabriella *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __stack2_esi core_gabriela_cpp_CGabriella_getCarryObjToBodyXForm_FUN_004d7120(CGabriella *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  CDemonActor *actor_ptr;
  ELightActorType EVar1;
  CLightActor *pCVar1;
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
  pCVar1 = (CLightActor *)
           core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CLightActorClassInfo.name_hash);
  if (pCVar1 == (CLightActor *)0x0) goto LAB_004d719a;
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
  EVar1 = pCVar1->light_actor_type;
  if (EVar1 == LIGHT_TYPE_LANTERN) {
    local_1c.y = local_a0.max.y;
    goto LAB_004d719a;
  }
  if (EVar1 != LIGHT_TYPE_FLASHLIGHT) {
    if (EVar1 == LIGHT_TYPE_GLOBE) {
      local_1c.y = local_a0.max.y;
    }
    else {
      g_CurrentFilename = "..\\core\\gabriela.cpp";
      g_CurrentLineNumber = 0x945;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Don't know how to carry light %s",pCVar1);
    }
    goto LAB_004d719a;
  }
  if (hand_index == 0) {
    core_xform_cpp_buildRotationY_FUN_005f6cc0(-1.5707964,&CStack_190);
    pCVar4 = &CStack_190;
LAB_004d73e5:
    pCVar5 = &CStack_d0;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      pCVar5->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
  }
  else {
    if (hand_index == 1) {
      core_xform_cpp_buildRotationY_FUN_005f6cc0(1.5707964,&CStack_100);
      pCVar4 = &CStack_100;
      goto LAB_004d73e5;
    }
    core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(&CStack_d0);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&CStack_d0,(this_ptr->base).base.model.bone_transform.bone_world_matrices + local_10,
             &CStack_130);
  pCVar4 = &CStack_130;
  pCVar5 = &CStack_d0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar5->m[0].w = pCVar4->m[0].w;
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690((CMatrix3x3f *)&CStack_d0,&CStack_4c);
  if (&local_58 != pCVar2) {
    local_58.x = pCVar2->x;
    local_58.y = pCVar2->y;
    local_58.z = pCVar2->z;
  }
  local_1c.z = local_a0.max.z * (float)0.29999999999999999 + local_a0.min.z * (float)0.69999999999999996;
LAB_004d719a:
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
  core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
            (&local_34,(this_ptr->base).base.model.bone_transform.bone_world_matrices + local_10);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&local_160,&local_34,&local_58);
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_70,&local_1c,&local_160);
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
