// Name: core_boneguy.cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_0041ca40
// Address: 0041ca40
// Address Range: [[0041ca40, 0041cc36]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_boneguy_cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_0041ca40(CBoneGuy *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __stack2_esi core_boneguy_cpp_CBoneGuy_getCarryObjToBodyXForm_FUN_0041ca40(CBoneGuy *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  CDemonActor *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  CMatrix3x4f local_120;
  CMatrix3x4f local_f0;
  CMatrix3x4f local_c0;
  CBoundingBox3D local_90;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  float local_3c;
  float local_38;
  float local_34;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar5 = 0;
  this_ptr_00 = (this_ptr->base).base.carry_hands[hand_index].carry_actor;
  iVar2 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  local_60.z = 2.536;
  local_60.x = -0.771;
  local_60.y = -2.536;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            (&local_120,&g_ZeroVector.f,&local_60);
  (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,&local_90);
  core_actor_cpp_CVector_ctor_FUN_00410340(&local_54);
  local_54.x = local_90.min.x + local_90.max.x;
  local_54.y = local_90.min.y + local_90.max.y;
  local_54.z = local_90.min.z + local_90.max.z;
  core_actor_cpp_CVector_ctor_FUN_00410340(&local_30);
  local_30.x = local_54.x * 0.5f;
  local_30.y = local_54.y * 0.5f;
  local_30.z = local_90.min.z + (float)0.40000000000000002;
  if (&local_48 != &local_30) {
    local_48.x = local_30.x;
    local_48.y = local_30.y;
    local_48.z = local_30.z;
  }
  local_6c.z = -0.082;
  local_6c.x = 0.032;
  local_6c.y = 0.209;
  pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_78,&local_6c,
                      (this_ptr->base).base.model.bone_transform.bone_world_matrices + iVar2);
  if (&local_18 != pCVar1) {
    local_18.x = pCVar1->x;
    local_18.y = pCVar1->y;
    local_18.z = pCVar1->z;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&local_120,(this_ptr->base).base.model.bone_transform.bone_world_matrices + iVar2,
             &local_c0);
  pCVar3 = &local_c0;
  pCVar4 = &local_f0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar4->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
  }
  pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_24,&local_48,&local_f0);
  local_3c = local_18.x - pCVar1->x;
  local_38 = local_18.y - pCVar1->y;
  local_34 = local_18.z - pCVar1->z;
  local_f0.m[0].z = local_f0.m[0].z + local_3c;
  local_f0.m[1].z = local_f0.m[1].z + local_38;
  local_f0.m[2].z = local_f0.m[2].z + local_34;
  pCVar3 = &local_f0;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    out_matrix->m[0].w = pCVar3->m[0].w;
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    out_matrix = (CMatrix3x4f *)((int)out_matrix + ((uint)bVar5 * -2 + 1) * 4);
  }
  return;
}
