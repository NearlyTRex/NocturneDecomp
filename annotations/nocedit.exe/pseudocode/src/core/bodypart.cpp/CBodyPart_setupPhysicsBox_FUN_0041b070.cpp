// Name: core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_0041b070
// Address: 0041b070
// Address Range: [[0041b070, 0041b1a9]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_0041b070(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_0041b070(CBodyPart *this_ptr)

{
  CVector3f *pCVar1;
  CBoundingBox3D CStack_4c;
  CVector3f CStack_34;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CVector3f CStack_1c;
  CVector3f CStack_10;
  
  if ((2 < this_ptr->vertex_count) && (0 < this_ptr->tri_count)) {
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_4c);
    fStack_28 = CStack_4c.min.x + CStack_4c.max.x;
    fStack_24 = CStack_4c.min.y + CStack_4c.max.y;
    CStack_34.x = fStack_28 * 0.5f;
    CStack_34.y = fStack_24 * 0.5f;
    fStack_20 = CStack_4c.min.z + CStack_4c.max.z;
    CStack_34.z = fStack_20 * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(&this_ptr->base,&CStack_1c,&CStack_34)
    ;
    CStack_10.x = CStack_4c.max.x - CStack_4c.min.x;
    CStack_10.y = CStack_4c.max.y - CStack_4c.min.y;
    CStack_10.z = CStack_4c.max.z - CStack_4c.min.z;
    core_box_cpp_CBox_setupCorners_FUN_0041dd20
              (&this_ptr->physics_box,&CStack_1c,&(this_ptr->base).orient.vec,&CStack_10,5.0);
    return;
  }
  (this_ptr->base).was_created = 2;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(this_ptr,0,0);
  pCVar1 = &(this_ptr->bounding_box).max;
  if ((UVector3 *)pCVar1 != &g_ZeroVector) {
    pCVar1->x = g_ZeroVector.f.x;
    (this_ptr->bounding_box).max.y = g_ZeroVector.f.y;
    (this_ptr->bounding_box).max.z = g_ZeroVector.f.z;
  }
  if (&this_ptr->bounding_box == (CBoundingBox3D *)pCVar1) {
    return;
  }
  (this_ptr->bounding_box).min.x = pCVar1->x;
  (this_ptr->bounding_box).min.y = (this_ptr->bounding_box).max.y;
  (this_ptr->bounding_box).min.z = (this_ptr->bounding_box).max.z;
  return;
}
