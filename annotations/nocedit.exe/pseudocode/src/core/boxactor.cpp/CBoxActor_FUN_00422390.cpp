// Name: core_boxactor.cpp_CBoxActor_FUN_00422390
// Address: 00422390
// Address Range: [[00422390, 004224a5]]
// Convention: __cdecl
// Signature: void core_boxactor.cpp_CBoxActor_FUN_00422390(CBoxActor * this_ptr)

#include "nocturne.h"

void __cdecl core_boxactor_cpp_CBoxActor_FUN_00422390(CBoxActor *this_ptr)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  CVector3f *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  double local_60;
  byte auStack_58 [20];
  float local_44;
  CVector3f local_40;
  CVector3f CStack_34;
  float fStack_28;
  byte local_24 [20];
  float fStack_10;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
            (&this_ptr->base,(CVector3f *)(auStack_58 + 0x10),in_stack_00000008);
  core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
            (&this_ptr->base,(CVector3f *)local_24,in_stack_0000000c);
  if ((float)local_24._8_4_ * local_40.x +
      (float)local_24._0_4_ * (float)auStack_58._16_4_ + (float)local_24._4_4_ * local_44 < 0.0) {
    (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,(CBoundingBox3D *)&local_60);
    fStack_10 = core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
                          ((CBoundingBox3D *)auStack_58,&local_40,(CVector3f *)(local_24 + 8),
                           &CStack_34);
    local_60 = (double)fStack_10;
    if ((0.0 <= local_60) && (local_60 < 1.0)) {
      fStack_10 = (float)1.01 - fStack_10;
      fStack_28 = in_stack_0000000c->x * fStack_10;
      local_24._0_4_ = in_stack_0000000c->y * fStack_10;
      local_24._4_4_ = in_stack_0000000c->z * fStack_10;
      pCVar1 = &(this_ptr->base).location;
      fVar2 = (this_ptr->base).location.position.y;
      (pCVar1->position).x = (pCVar1->position).x + fStack_28;
      fVar3 = (this_ptr->base).location.position.z;
      (this_ptr->base).location.position.y = fVar2 + (float)local_24._0_4_;
      (this_ptr->base).location.position.z = fVar3 + (float)local_24._4_4_;
      core_boxactor_cpp_CBoxActor_FUN_004218d0(this_ptr);
      core_boxactor_cpp_CBoxActor_FUN_00422590(this_ptr);
      return;
    }
  }
  return;
}
