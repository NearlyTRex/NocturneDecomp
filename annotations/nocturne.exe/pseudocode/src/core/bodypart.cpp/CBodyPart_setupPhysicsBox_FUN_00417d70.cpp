// Name: core_bodypart.cpp_CBodyPart_setupPhysicsBox_FUN_00417d70
// Address: 00417d70
// Address Range: [[00417d70, 00417ea9]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_00417d70(CBodyPart *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_bodypart_cpp_CBodyPart_setupPhysicsBox_FUN_00417d70(CBodyPart *this_ptr)

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
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(&this_ptr->base,&CStack_1c,&CStack_34)
    ;
    CStack_10.x = CStack_4c.max.x - CStack_4c.min.x;
    CStack_10.y = CStack_4c.max.y - CStack_4c.min.y;
    CStack_10.z = CStack_4c.max.z - CStack_4c.min.z;
    core_box_cpp_CBox_setupCorners_FUN_0041a6e0
              (&this_ptr->physics_box,&CStack_1c,&(this_ptr->base).orient.vec,&CStack_10,5.0);
    return;
  }
  (this_ptr->base).lifecycle_state = ACTOR_DESTROYED;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0(this_ptr,0,0);
  pCVar1 = &(this_ptr->bounding_box).max;
  if (pCVar1 != (CVector3f *)&DAT_02dd1184) {
    pCVar1->x = _DAT_02dd1184;
    (this_ptr->bounding_box).max.y = _DAT_02dd1188;
    (this_ptr->bounding_box).max.z = _DAT_02dd118c;
  }
  if (&this_ptr->bounding_box == (CBoundingBox3D *)pCVar1) {
    return;
  }
  (this_ptr->bounding_box).min.x = pCVar1->x;
  (this_ptr->bounding_box).min.y = (this_ptr->bounding_box).max.y;
  (this_ptr->bounding_box).min.z = (this_ptr->bounding_box).max.z;
  return;
}
