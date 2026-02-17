// Name: core_boxactor.cpp_CBoxActor_FUN_004218d0
// Address: 004218d0
// Address Range: [[004218d0, 004219d6]]
// Convention: __cdecl
// Signature: void __cdecl core_boxactor_cpp_CBoxActor_FUN_004218d0(CBoxActor *this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_FUN_004218d0(CBoxActor *this_ptr)

{
  float fVar1;
  CBoundingBox3D CStack_4c;
  CVector3f CStack_34;
  CVector3f CStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  CVector3f CStack_10;
  
  fVar1 = this_ptr->weight_in_pounds;
  (this_ptr->physics_box).is_valid = 0;
  if ((0.0 < fVar1) && ((int *)(this_ptr->base).validation_magic == &g_ActorMagicNumber)) {
    if ((this_ptr->model).model_ptr != (CKeyFramedModel *)0x0) {
      (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_4c);
      fStack_1c = CStack_4c.min.x + CStack_4c.max.x;
      fStack_18 = CStack_4c.min.y + CStack_4c.max.y;
      CStack_28.x = fStack_1c * 0.5f;
      CStack_28.y = fStack_18 * 0.5f;
      fStack_14 = CStack_4c.min.z + CStack_4c.max.z;
      CStack_28.z = fStack_14 * 0.5f;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base,&CStack_34,&CStack_28);
      CStack_10.x = CStack_4c.max.x - CStack_4c.min.x;
      CStack_10.y = CStack_4c.max.y - CStack_4c.min.y;
      CStack_10.z = CStack_4c.max.z - CStack_4c.min.z;
      core_box_cpp_CBox_setupCorners_FUN_0041dd20
                (&this_ptr->physics_box,&CStack_34,&(this_ptr->base).orient.vec,&CStack_10,
                 this_ptr->weight_in_pounds);
      return;
    }
    (this_ptr->physics_box).is_valid = -1;
  }
  return;
}
