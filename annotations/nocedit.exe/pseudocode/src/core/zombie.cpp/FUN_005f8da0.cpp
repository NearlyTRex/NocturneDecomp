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
  CBoundingBox3D CStack_3c;
  CVector3f CStack_24;
  CVector3f CStack_18;
  
  (*in_stack_00000008->vtable->getBoundingBox)(in_stack_00000008,&CStack_3c);
  core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_18);
  CStack_18.x = CStack_3c.min.x + CStack_3c.max.x;
  CStack_18.y = CStack_3c.min.y + CStack_3c.max.y;
  CStack_18.z = CStack_3c.min.z + CStack_3c.max.z;
  core_actor_cpp_CVector_ctor_FUN_00410340(&CStack_24);
  CStack_24.x = CStack_18.x * _DAT_0065844d;
  CStack_24.y = CStack_18.y * _DAT_0065844d;
  CStack_24.z = CStack_3c.min.z + (float)_DAT_00658455;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000008,in_stack_00000004,&CStack_24);
  return in_stack_00000004;
}
