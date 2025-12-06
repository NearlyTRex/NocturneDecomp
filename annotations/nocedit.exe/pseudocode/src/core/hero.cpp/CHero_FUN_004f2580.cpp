// Name: core_hero.cpp_CHero_FUN_004f2580
// Address: 004f2580
// Address Range: [[004f2580, 004f25b5]]
// Convention: __cdecl
// Signature: int core_hero.cpp_CHero_FUN_004f2580(CHero * this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f2580(CHero *this_ptr)

{
  int iVar1;
  SCollisionReturnInfo *in_stack_00000008;
  float in_stack_0000000c;
  
  if ((g_CGamePtr->field53_0x1d0 == 0) && ((this_ptr->field1_0xbe24 & 0x7fffffffU) == 0)) {
    iVar1 = core_actor_cpp_CDemonActor_testPointInCylinder_FUN_004090c0
                      ((CDemonActor *)this_ptr,in_stack_00000008,in_stack_0000000c);
    return iVar1;
  }
  return 0;
}
