// Name: core_boneguy.cpp_FUN_0041b770
// Address: 0041b770
// Address Range: [[0041b770, 0041b81a]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041b770()

#include "nocturne.h"

CVector3f * core_boneguy_cpp_FUN_0041b770(void)

{
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  float fStack_34;
  
  (*in_stack_00000008->vtable->getBoundingBox)(in_stack_00000008,(CBoundingBox3D *)&stack0xffffffc0)
  ;
  fStack_34 = 6.035172e-39;
  core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xfffffff8);
  core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xfffffff0);
  fStack_34 = 6.035336e-39;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000008,in_stack_00000004,(CVector3f *)&stack0xfffffff4);
  return in_stack_00000004;
}
