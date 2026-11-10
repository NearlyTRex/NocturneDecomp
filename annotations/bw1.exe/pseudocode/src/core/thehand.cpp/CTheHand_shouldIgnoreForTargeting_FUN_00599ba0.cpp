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
                   ((CMotionController *)&this_ptr->field_0x158);
  iVar1 = _stricmp((char *)str1,str2);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0((CDemonActor *)this_ptr);
  return iVar1;
}
