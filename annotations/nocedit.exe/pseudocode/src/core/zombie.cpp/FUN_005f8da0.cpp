// Name: core_zombie.cpp_FUN_005f8da0
// Address: 005f8da0
// Address Range: [[005f8da0, 005f8e4a]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_FUN_005f8da0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * core_zombie_cpp_FUN_005f8da0(void)

{
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000004;
  CDemonActor *in_stack_00000008;
  float in_stack_ffffffc8;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  byte auStack_20 [8];
  CVector3f CStack_18;
  
  (*in_stack_00000008->vtable->getBoundingBox)(in_stack_00000008,(CBoundingBox3D *)&stack0xffffffc0)
  ;
  core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_18);
  CStack_18.y = in_stack_ffffffc8 + fStack_2c;
  CStack_18.z = fStack_34 + fStack_28;
  core_actor_cpp_CVector_ctor_FUN_00410340((CVector3f *)auStack_20);
  auStack_20._4_4_ = CStack_18.z * _DAT_0065844d;
  CStack_18.x = (fStack_30 + fStack_24) * _DAT_0065844d;
  CStack_18.y = fStack_2c + (float)_DAT_00658455;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000008,in_stack_00000004,(CVector3f *)(auStack_20 + 4));
  return in_stack_00000004;
}
