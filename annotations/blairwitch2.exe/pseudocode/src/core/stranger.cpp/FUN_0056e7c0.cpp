// Name: core_stranger.cpp_FUN_0056e7c0
// Address: 0056e7c0
// Address Range: [[0056e7c0, 0056e820]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_FUN_0056e7c0(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_FUN_0056e7c0(CStranger *this_ptr)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)&this_ptr->field_0x2698;
  if (((iVar1 == 0) ||
      (uVar3 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x7c))(iVar1), (uVar3 & 4) == 0)) &&
     ((*(int *)&this_ptr->field_0x25698 == 0 ||
      (*(int *)(*(int *)&this_ptr->field_0x25698 + 0x43c) != 3)))) {
    return 0;
  }
  uVar2 = 0x41200000;
  *(uint *)&this_ptr->field_0x256a4 = 3;
  *(uint *)&this_ptr->field_0x25650 = uVar2;
  return 1;
}
