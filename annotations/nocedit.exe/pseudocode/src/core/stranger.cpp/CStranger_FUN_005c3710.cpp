// Name: core_stranger.cpp_CStranger_FUN_005c3710
// Address: 005c3710
// Address Range: [[005c3710, 005c3744]]
// Convention: __cdecl
// Signature: int core_stranger.cpp_CStranger_FUN_005c3710(CStranger * this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_CStranger_FUN_005c3710(CStranger *this_ptr)

{
  core_charactr_cpp_CCharacter_FUN_0042b0e0((CCharacter *)this_ptr);
  if (*(int *)(this_ptr->field2_0x1fbd8 + 0x54) == 0) {
    return 1;
  }
  (**(code **)(*(int *)(*(int *)(this_ptr->field2_0x1fbd8 + 0x54) + 0x154) + 0xc))();
  return 1;
}
