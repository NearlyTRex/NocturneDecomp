// Name: core_bodypart.cpp_CBodyPart_FUN_0041b070
// Address: 0041b070
// Address Range: [[0041b070, 0041b1a9]]
// Convention: __cdecl
// Signature: void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041b070(CBodyPart *this_ptr)

#include "nocturne.h"

void __cdecl core_bodypart_cpp_CBodyPart_FUN_0041b070(CBodyPart *this_ptr)

{
  CVector3f *pCVar1;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CVector3f CStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  CVector3f CStack_14;
  float fStack_8;
  
  if ((2 < this_ptr->vertex_count) && (0 < this_ptr->tri_count)) {
    (*((this_ptr->base).vtable._ub)->getBoundingBox)
              (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffb4);
    fStack_20 = fStack_44 + fStack_38;
    fStack_1c = fStack_40 + fStack_34;
    CStack_2c.x = fStack_20 * 0.5f;
    CStack_2c.y = fStack_1c * 0.5f;
    fStack_18 = fStack_3c + fStack_30;
    CStack_2c.z = fStack_18 * 0.5f;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(&this_ptr->base,&CStack_14,&CStack_2c)
    ;
    fStack_8 = fStack_38 - fStack_44;
    core_box_cpp_CBox_setupCorners_FUN_0041dd20
              (&this_ptr->sim_box,&CStack_14,&(this_ptr->base).orient.vec,(CVector3f *)&fStack_8,5.0
              );
    return;
  }
  (this_ptr->base).was_created = 2;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_004191d0(this_ptr);
  pCVar1 = &(this_ptr->bounding_box).max;
  if (pCVar1 != &g_ZeroVector) {
    pCVar1->x = g_ZeroVector.x;
    (this_ptr->bounding_box).max.y = g_ZeroVector.y;
    (this_ptr->bounding_box).max.z = g_ZeroVector.z;
  }
  if (&this_ptr->bounding_box == (CBoundingBox3D *)pCVar1) {
    return;
  }
  (this_ptr->bounding_box).min.x = pCVar1->x;
  (this_ptr->bounding_box).min.y = (this_ptr->bounding_box).max.y;
  (this_ptr->bounding_box).min.z = (this_ptr->bounding_box).max.z;
  return;
}
