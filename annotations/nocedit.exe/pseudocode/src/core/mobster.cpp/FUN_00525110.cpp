// Name: core_mobster.cpp_FUN_00525110
// Address: 00525110
// Address Range: [[00525110, 005251ba]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00525110()

#include "nocturne.h"

CVector3f * core_mobster_cpp_FUN_00525110(void)

{
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  float fStack_34;
  
  (*in_stack_00000008->vtable->getBoundingBox)(in_stack_00000008,(CBoundingBox3D *)&stack0xffffffc0)
  ;
  fStack_34 = 7.55965e-39;
  core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xfffffff8);
  core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&stack0xfffffff0);
  fStack_34 = 7.559815e-39;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000008,in_stack_00000004,(CVector3f *)&stack0xfffffff4);
  return in_stack_00000004;
}
