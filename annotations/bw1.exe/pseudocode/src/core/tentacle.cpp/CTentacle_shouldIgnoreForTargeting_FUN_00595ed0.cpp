// Name: core_tentacle.cpp_CTentacle_shouldIgnoreForTargeting_FUN_00595ed0
// Address: 00595ed0
// Address Range: [[00595ed0, 00595f0a]]
// Convention: __cdecl
// Signature: int __cdecl core_tentacle_cpp_CTentacle_shouldIgnoreForTargeting_FUN_00595ed0(CTentacle *this_ptr)

#include "nocturne.h"

int __cdecl core_tentacle_cpp_CTentacle_shouldIgnoreForTargeting_FUN_00595ed0(CTentacle *this_ptr)

{
  SMotion *str1;
  int iVar1;
  char *str2;
  
  str2 = &DAT_005f77b6;
  str1 = core_motion_cpp_CMotionController_getCurrentMotion_FUN_00524770
                   ((CMotionController *)&this_ptr->field_0x158);
  iVar1 = _stricmp((char *)str1,str2);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = core_actor_cpp_CDemonActor_shouldIgnoreForTargeting_FUN_0040c5a0((CDemonActor *)this_ptr);
  return iVar1;
}
