// Name: core_emitter.cpp_CEmitter_FUN_004a8d20
// Address: 004a8d20
// Address Range: [[004a8d20, 004a8d49]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_emitter_cpp_CEmitter_FUN_004a8d20(CEmitter *this_ptr)

#include "nocturne.h"

CVector3f * __cdecl core_emitter_cpp_CEmitter_FUN_004a8d20(CEmitter *this_ptr)

{
  CVector3f *in_stack_00000008;
  CBoundingBox3D CStack_30;
  CVector3f CStack_18;
  float fStack_c;
  
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_30);
  CStack_18.x = core_actor_cpp_getRandomFloat_FUN_0040cc10(CStack_30.min.x,CStack_30.max.x);
  fStack_c = CStack_18.x;
  CStack_18.y = core_actor_cpp_getRandomFloat_FUN_0040cc10(CStack_30.min.y,CStack_30.max.y);
  fStack_c = CStack_18.y;
  CStack_18.z = core_actor_cpp_getRandomFloat_FUN_0040cc10(CStack_30.min.z,CStack_30.max.z);
  fStack_c = CStack_18.z;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&this_ptr->base,in_stack_00000008,&CStack_18);
  return in_stack_00000008;
}
