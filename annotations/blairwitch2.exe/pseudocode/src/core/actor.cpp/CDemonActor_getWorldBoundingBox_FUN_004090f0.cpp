// Name: core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_004090f0
// Address: 004090f0
// Address Range: [[004090f0, 0040931a]]
// Convention: __stack3_esi
// Signature: CBoundingBox3D * __stack3_esi core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_004090f0(CDemonActor *this_ptr,SCollisionInfo *collision_info,int bounding_box_type,CBoundingBox3D *output_bbox)

#include "nocturne.h"

CBoundingBox3D * __stack3_esi core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_004090f0(CDemonActor *this_ptr,SCollisionInfo *collision_info,int bounding_box_type,CBoundingBox3D *output_bbox)

{
  int iVar1;
  uint corner_index;
  uint *puVar2;
  CBoundingBox3D *pCVar3;
  CBoundingBox3D *unaff_EDI;
  uint *puVar4;
  CBoundingBox3D *pCVar5;
  byte bVar6;
  float afStackY_1050 [997];
  CBoundingBox3D *in_stack_ffffff48;
  CVector3f *pCVar7;
  CBoundingBox3D local_b0;
  uint auStack_98 [4];
  uint local_88 [2];
  CBoundingBox3D CStack_80;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3f CStack_44;
  CVector3f CStack_38;
  CVector3f CStack_2c;
  float fStack_20;
  float afStack_1c [3];
  CBoundingBox3D *local_10;
  
  bVar6 = 0;
  local_10 = output_bbox;
  if ((uint)bounding_box_type < 2) {
    if (bounding_box_type != 1) {
LAB_004092ec:
      local_b0.min.x = 1e+08;
      if (&local_b0.min.y != (float *)&stack0xffffff48) {
        local_b0.min.z = 1e+08;
        local_b0.max.x = 1e+08;
        local_b0.min.y = 1e+08;
      }
      goto LAB_0040926e;
    }
LAB_00409127:
    (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,in_stack_ffffff48);
    puVar2 = auStack_98;
    puVar4 = local_88;
    for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + (uint)bVar6 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    }
    core_box_cpp_CBoundingBox3D_getCorner_FUN_0041a600(&CStack_80,0,&CStack_68);
    pCVar7 = &CStack_2c;
    CStack_2c.x = CStack_68.x;
    *(uint *)((int)&CStack_2c + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&CStack_68 + (uint)bVar6 * -8 + 4);
    *(uint *)((int)&CStack_2c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         *(uint *)((int)&CStack_68 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
              (this_ptr,pCVar7,(CVector3f *)(afStack_1c + 2));
    fStack_20 = afStack_1c[2];
    afStack_1c[(uint)bVar6 * -2] = (float)(&local_10)[(uint)bVar6 * -2];
    afStack_1c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         *(float *)(&stack0xfffffff4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    if (&local_b0 != (CBoundingBox3D *)&fStack_20) {
      local_b0.min.x = fStack_20;
      local_b0.min.y = afStack_1c[0];
      local_b0.min.z = afStack_1c[1];
    }
    if (&local_b0.max != (CVector3f *)&fStack_20) {
      local_b0.max.x = fStack_20;
      local_b0.max.y = afStack_1c[0];
      local_b0.max.z = afStack_1c[1];
    }
    corner_index = 1;
    do {
      core_box_cpp_CBoundingBox3D_getCorner_FUN_0041a600(&CStack_80,corner_index,&CStack_44);
      pCVar7 = &CStack_5c;
      CStack_5c.x = CStack_44.x;
      *(uint *)((int)&CStack_5c + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_44 + (uint)bVar6 * -8 + 4);
      *(uint *)((int)&CStack_5c + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_44 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0(this_ptr,pCVar7,&CStack_38);
      pCVar7 = &CStack_50;
      corner_index = corner_index + 1;
      CStack_50.x = CStack_38.x;
      *(uint *)((int)&CStack_50 + (uint)bVar6 * -8 + 4) =
           *(uint *)((int)&CStack_38 + (uint)bVar6 * -8 + 4);
      pCVar3 = &local_b0;
      *(uint *)((int)&CStack_50 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           *(uint *)((int)&CStack_38 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(pCVar3,pCVar7);
    } while ((int)corner_index < 8);
    local_b0.min.x = local_b0.min.x + (this_ptr->location).position.x;
    local_b0.min.y = local_b0.min.y + (this_ptr->location).position.y;
    local_b0.min.z = local_b0.min.z + (this_ptr->location).position.z;
    local_b0.max.x = local_b0.max.x + (this_ptr->location).position.x;
    local_b0.max.y = local_b0.max.y + (this_ptr->location).position.y;
    local_b0.max.z = local_b0.max.z + (this_ptr->location).position.z;
  }
  else {
    if (2 < (uint)bounding_box_type) {
      if (bounding_box_type != 3) goto LAB_004092ec;
      goto LAB_00409127;
    }
    local_b0.min.x = (this_ptr->location).position.z - collision_info->cylinder_radius;
    local_b0.min.y = (this_ptr->location).position.x + collision_info->cylinder_radius;
    local_b0.min.z = (this_ptr->location).position.y + collision_info->cylinder_top_y;
    local_b0.max.z = (this_ptr->location).position.z + collision_info->cylinder_radius;
  }
LAB_0040926e:
  pCVar3 = &local_b0;
  pCVar5 = unaff_EDI;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    (pCVar5->min).x = *(float *)pCVar3;
    pCVar3 = (CBoundingBox3D *)((int)pCVar3 + ((uint)bVar6 * -2 + 1) * 4);
    pCVar5 = (CBoundingBox3D *)((int)pCVar5 + (uint)bVar6 * -8 + 4);
  }
  return unaff_EDI;
}
