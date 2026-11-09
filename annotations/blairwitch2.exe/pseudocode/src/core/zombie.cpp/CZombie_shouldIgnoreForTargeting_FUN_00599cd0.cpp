// Name: core_zombie.cpp_CZombie_shouldIgnoreForTargeting_FUN_00599cd0
// Address: 00599cd0
// Address Range: [[00599cd0, 00599cfd]]
// Convention: __cdecl
// Signature: int __cdecl core_zombie_cpp_CZombie_shouldIgnoreForTargeting_FUN_00599cd0(CZombie *this_ptr)

#include "nocturne.h"

int __cdecl core_zombie_cpp_CZombie_shouldIgnoreForTargeting_FUN_00599cd0(CZombie *this_ptr)

{
  int iVar1;
  
  iVar1 = core_motion_cpp_FUN_005035c0(&this_ptr->field_0x2b4);
  if (*(int *)(iVar1 + 0x24) == 0xe) {
    return 1;
  }
  iVar1 = core_actor_cpp_FUN_0040c890((CDemonActor *)this_ptr);
  return iVar1;
}
