// Name: core_thehand.cpp_CTheHand_shouldIgnoreForTargeting_FUN_00599ba0
// Address: 00599ba0
// Address Range: [[00599ba0, 00599bda]]
// Convention: __cdecl
// Signature: int __cdecl core_thehand_cpp_CTheHand_shouldIgnoreForTargeting_FUN_00599ba0(CTheHand *this_ptr)

#include "nocturne.h"

int __cdecl core_thehand_cpp_CTheHand_shouldIgnoreForTargeting_FUN_00599ba0(CTheHand *this_ptr)

{
  SMotion *str1;
  int iVar1;
  char *str2;
  
  str2 = "@stand" + 1;
  str1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                   (&(this_ptr->base).base.model.base);
  iVar1 = _stricmp(str1->motion_name,str2);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0((CDemonActor *)this_ptr);
  return iVar1;
}
