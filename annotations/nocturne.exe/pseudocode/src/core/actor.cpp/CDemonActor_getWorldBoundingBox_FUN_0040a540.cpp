// Name: core_actor.cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540
// Address: 0040a540
// Address Range: [[0040a540, 0040a6be]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540(CDemonActor *this_ptr,CBoundingBox3D *output_bbox,SCollisionInfo *collision_info,int bounding_box_type)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_actor_cpp_CDemonActor_getWorldBoundingBox_FUN_0040a540(CDemonActor *this_ptr,CBoundingBox3D *output_bbox,SCollisionInfo *collision_info,int bounding_box_type)

{
  CVector3f *pCVar1;
  CBoundingBox3D *pCVar2;
  uint corner_index;
  CBoundingBox3D CStack_54;
  CVector3f CStack_3c;
  CVector3f CStack_30;
  CVector3f CStack_24;
  CVector3f CStack_18;
  
  if ((uint)bounding_box_type < 2) {
    if (bounding_box_type != 1) {
LAB_0040a68d:
      (output_bbox->min).z = 1e+08;
      (output_bbox->min).y = (output_bbox->min).z;
      (output_bbox->min).x = (output_bbox->min).y;
      if ((CBoundingBox3D *)&output_bbox->max == output_bbox) {
        return output_bbox;
      }
      (output_bbox->max).x = (output_bbox->min).x;
      (output_bbox->max).y = (output_bbox->min).y;
      (output_bbox->max).z = (output_bbox->min).z;
      return output_bbox;
    }
  }
  else {
    if ((uint)bounding_box_type < 3) {
      (output_bbox->min).x = (this_ptr->location).position.x - collision_info->cylinder_radius;
      (output_bbox->min).y = (this_ptr->location).position.y + collision_info->cylinder_bottom_y;
      (output_bbox->min).z = (this_ptr->location).position.z - collision_info->cylinder_radius;
      (output_bbox->max).x = (this_ptr->location).position.x + collision_info->cylinder_radius;
      (output_bbox->max).y = (this_ptr->location).position.y + collision_info->cylinder_top_y;
      (output_bbox->max).z = (this_ptr->location).position.z + collision_info->cylinder_radius;
      return output_bbox;
    }
    if (bounding_box_type != 3) goto LAB_0040a68d;
  }
  (*((this_ptr->vtable)._ub)->getBoundingBox)(this_ptr,&CStack_54);
  pCVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(&CStack_54,&CStack_3c,0);
  pCVar2 = (CBoundingBox3D *)
           core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(this_ptr,&CStack_18,pCVar1);
  if (output_bbox != pCVar2) {
    (output_bbox->min).x = (pCVar2->min).x;
    (output_bbox->min).y = (pCVar2->min).y;
    (output_bbox->min).z = (pCVar2->min).z;
  }
  if ((CBoundingBox3D *)&output_bbox->max != pCVar2) {
    (output_bbox->max).x = (pCVar2->min).x;
    (output_bbox->max).y = (pCVar2->min).y;
    (output_bbox->max).z = (pCVar2->min).z;
  }
  corner_index = 1;
  do {
    pCVar1 = core_box_cpp_CBoundingBox3D_getCorner_FUN_0041cc70(&CStack_54,&CStack_30,corner_index);
    pCVar1 = core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(this_ptr,&CStack_24,pCVar1);
    corner_index = corner_index + 1;
    core_box_cpp_CBoundingBox3D_expand_FUN_0041cc00(output_bbox,pCVar1);
  } while ((int)corner_index < 8);
  (output_bbox->min).x = (this_ptr->location).position.x + (output_bbox->min).x;
  (output_bbox->min).y = (this_ptr->location).position.y + (output_bbox->min).y;
  (output_bbox->min).z = (this_ptr->location).position.z + (output_bbox->min).z;
  (output_bbox->max).x = (this_ptr->location).position.x + (output_bbox->max).x;
  (output_bbox->max).y = (this_ptr->location).position.y + (output_bbox->max).y;
  (output_bbox->max).z = (this_ptr->location).position.z + (output_bbox->max).z;
  return output_bbox;
}
