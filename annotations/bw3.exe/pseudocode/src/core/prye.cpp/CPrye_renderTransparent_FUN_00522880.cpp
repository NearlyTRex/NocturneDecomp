// Name: core_prye.cpp_CPrye_renderTransparent_FUN_00522880
// Address: 00522880
// Address Range: [[00522880, 005228b4]]
// Convention: __cdecl
// Signature: int __cdecl core_prye_cpp_CPrye_renderTransparent_FUN_00522880(CPrye *this_ptr)

#include "nocturne.h"

int __cdecl core_prye_cpp_CPrye_renderTransparent_FUN_00522880(CPrye *this_ptr)

{
  int iVar1;
  
  core_charactr_cpp_CCharacter_renderTransparent_FUN_0042f510((CCharacter *)this_ptr);
  iVar1 = *(int *)&this_ptr->field_0x20c24;
  if (iVar1 == 0) {
    return 1;
  }
  (**(code **)(*(int *)(iVar1 + 0x154) + 0x14))(iVar1);
  return 1;
}
