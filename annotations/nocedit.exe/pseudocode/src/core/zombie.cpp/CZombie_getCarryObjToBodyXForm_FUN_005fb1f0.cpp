// Name: core_zombie.cpp_CZombie_getCarryObjToBodyXForm_FUN_005fb1f0
// Address: 005fb1f0
// Address Range: [[005fb1f0, 005fb521]]
// Convention: __stack2_esi
// Signature: void __stack2_esi core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_005fb1f0(CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __stack2_esi core_zombie_cpp_CZombie_getCarryObjToBodyXForm_FUN_005fb1f0(CZombie *this_ptr,int hand_index,CMatrix3x4f *out_matrix)

{
  CDemonActor *this_ptr_00;
  uint uVar1;
  int iVar2;
  CVector3f *pCVar3;
  CBoundingBox3D *pCVar4;
  CMatrix3x4f *pCVar5;
  CMatrix3x4f *pCVar6;
  byte bVar7;
  CVector3f *output_vector;
  CMatrix3x4f local_16c;
  CMatrix3x4f local_13c;
  CMatrix3x4f local_10c;
  CBoundingBox3D local_dc;
  CBoundingBox3D local_c4;
  CVector3f local_ac;
  float local_a0;
  float local_9c;
  float local_98;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  float local_34;
  float local_30;
  float local_2c;
  CVector3f local_28;
  CVector3f local_1c;
  int local_10;
  
  bVar7 = 0;
  this_ptr_00 = (this_ptr->base).base.carry_hands[hand_index].carry_actor;
  local_10 = (this_ptr->base).base.carry_hands[hand_index].bone_index;
  uVar1 = this_ptr->object_shape_class;
  if ((uVar1 == 0) || ((1 < uVar1 && (uVar1 != 3)))) {
    pCVar4 = (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,&local_c4);
    local_34 = (pCVar4->min).x + (pCVar4->max).x;
    local_30 = (pCVar4->min).y + (pCVar4->max).y;
    local_4c.x = local_34 * 0.5f;
    local_2c = (pCVar4->min).z + (pCVar4->max).z;
    local_4c.y = local_30 * 0.5f;
    local_4c.z = local_2c * 0.5f;
    if (&local_64 != &local_4c) {
      local_64.x = local_4c.x;
      local_64.y = local_4c.y;
      local_64.z = local_4c.z;
    }
    pCVar5 = &(this_ptr->base).base.carry_hands[hand_index].initial_carry_transform;
    pCVar6 = &local_16c;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      pCVar6->m[0].w = pCVar5->m[0].w;
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
      pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
    }
  }
  else {
    iVar2 = strnicmp
                      ((this_ptr->base).base.model.model_name,"new",3);
    if (iVar2 == 0) {
      local_94.z = -0.986001;
      local_94.y = 0.950253;
      local_94.x = -1.15383;
    }
    else {
      local_94.z = 0.0;
      local_94.y = 0.904;
      local_94.x = 0.155;
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_16c,&g_ZeroVector,&local_94);
    (*((this_ptr_00->vtable)._ub)->getBoundingBox)(this_ptr_00,&local_dc);
    core_actor_cpp_CVector_ctor_FUN_00410340(&local_1c);
    local_1c.x = local_dc.min.x + local_dc.max.x;
    local_1c.y = local_dc.min.y + local_dc.max.y;
    local_1c.z = local_dc.min.z + local_dc.max.z;
    core_actor_cpp_CVector_ctor_FUN_00410340(&local_7c);
    local_7c.x = local_1c.x * 0.5f;
    local_7c.y = local_1c.y * 0.5f;
    local_7c.z = local_dc.min.z + (float)0.40000000000000002;
    if (&local_64 != &local_7c) {
      local_64.x = local_7c.x;
      local_64.y = local_7c.y;
      local_64.z = local_7c.z;
    }
  }
  if (local_10 == this_ptr->bone_l_hand) {
    pCVar3 = &local_70;
    output_vector = &local_88;
    local_70.x = -0.4;
    local_70.y = 0.0;
    local_70.z = 0.0;
  }
  else {
    pCVar3 = &local_58;
    output_vector = &local_28;
    local_58.x = 0.4;
    local_58.y = 0.0;
    local_58.z = 0.0;
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (output_vector,pCVar3,
                      (this_ptr->base).base.model.bone_transform.bone_world_matrices + local_10);
  if (&local_40 != pCVar3) {
    local_40.x = pCVar3->x;
    local_40.y = pCVar3->y;
    local_40.z = pCVar3->z;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&local_16c,(this_ptr->base).base.model.bone_transform.bone_world_matrices + local_10,
             &local_13c);
  pCVar5 = &local_13c;
  pCVar6 = &local_10c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar6->m[0].w = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
    pCVar6 = (CMatrix3x4f *)((int)pCVar6 + ((uint)bVar7 * -2 + 1) * 4);
  }
  pCVar3 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_ac,&local_64,&local_10c);
  local_a0 = local_40.x - pCVar3->x;
  local_9c = local_40.y - pCVar3->y;
  local_98 = local_40.z - pCVar3->z;
  local_10c.m[0].z = local_10c.m[0].z + local_a0;
  local_10c.m[1].z = local_10c.m[1].z + local_9c;
  local_10c.m[2].z = local_10c.m[2].z + local_98;
  pCVar5 = &local_10c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    out_matrix->m[0].w = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar7 * -2 + 1) * 4);
    out_matrix = (CMatrix3x4f *)((int)out_matrix + ((uint)bVar7 * -2 + 1) * 4);
  }
  return;
}
