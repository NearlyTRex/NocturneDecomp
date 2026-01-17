// Name: core_zombie.cpp_FUN_005f8da0
// Address: 005f8da0
// Address Range: [[005f8da0, 005f8e4a]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_FUN_005f8da0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * core_zombie_cpp_FUN_005f8da0(void)

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
  
  (*in_stack_00000008->vtable->getBoundingBox)(in_stack_00000008,(CBoundingBox3D *)&stack0xffffffc0)
  ;
  core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)&fStack_14);
  fStack_14 = fStack_38 + fStack_2c;
  fStack_10 = fStack_34 + fStack_28;
  core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_20);
  CStack_20.x = fStack_14 * _DAT_0065844d;
  CStack_20.y = fStack_10 * _DAT_0065844d;
  CStack_20.z = fStack_30 + (float)_DAT_00658455;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000008,in_stack_00000004,&CStack_20);
  return in_stack_00000004;
}
