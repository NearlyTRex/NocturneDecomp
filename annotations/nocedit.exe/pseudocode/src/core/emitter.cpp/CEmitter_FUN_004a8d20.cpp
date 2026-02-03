// Name: core_emitter.cpp_CEmitter_FUN_004a8d20
// Address: 004a8d20
// Address Range: [[004a8d20, 004a8d49]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_emitter_cpp_CEmitter_FUN_004a8d20(CEmitter *this_ptr)

#include "nocturne.h"

CVector3f * __cdecl core_emitter_cpp_CEmitter_FUN_004a8d20(CEmitter *this_ptr)

{
  CVector3f *in_stack_00000008;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  (*((this_ptr->base).vtable._ub)->getBoundingBox)
            (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffd0);
  fStack_10 = core_actor_cpp_getRandomFloat_FUN_0040cc10(fStack_28,fStack_1c);
  fStack_c = core_actor_cpp_getRandomFloat_FUN_0040cc10(fStack_24,fStack_18);
  core_actor_cpp_getRandomFloat_FUN_0040cc10(fStack_20,fStack_14);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&this_ptr->base,in_stack_00000008,(CVector3f *)&fStack_10);
  return in_stack_00000008;
}
