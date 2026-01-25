// Name: core_boneguy.cpp_FUN_0041b770
// Address: 0041b770
// Address Range: [[0041b770, 0041b81a]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041b770()

#include "nocturne.h"

CVector3f * core_boneguy_cpp_FUN_0041b770(void)

{
  CVector3f *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CVector3f CStack_20;
  float fStack_14;
  float fStack_10;
  
  (*((in_stack_00000008->vtable)._ub)->getBoundingBox)
            (in_stack_00000008,(CBoundingBox3D *)&stack0xffffffc0);
  core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&fStack_14);
  fStack_14 = fStack_38 + fStack_2c;
  fStack_10 = fStack_34 + fStack_28;
  core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_20);
  CStack_20.x = fStack_14 * 0.5f;
  CStack_20.y = fStack_10 * 0.5f;
  CStack_20.z = fStack_30 + (float)0.40000000000000002;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000008,in_stack_00000004,&CStack_20);
  return in_stack_00000004;
}
