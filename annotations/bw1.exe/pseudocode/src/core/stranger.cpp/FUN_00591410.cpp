// Name: core_stranger.cpp_FUN_00591410
// Address: 00591410
// Address Range: [[00591410, 00591470]]
// Convention: __cdecl
// Signature: int __cdecl core_stranger_cpp_FUN_00591410(CStranger *this_ptr)

#include "nocturne.h"

int __cdecl core_stranger_cpp_FUN_00591410(CStranger *this_ptr)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)&this_ptr->field_0x2628;
  if (((iVar1 == 0) ||
      (uVar3 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x74))(iVar1), (uVar3 & 4) == 0)) &&
     ((*(int *)&this_ptr->field_0x20004 == 0 ||
      (*(int *)(*(int *)&this_ptr->field_0x20004 + 0x2e0) != 3)))) {
    return 0;
  }
  uVar2 = 0x41200000;
  *(uint *)&this_ptr->field_0x1ff5c = 3;
  *(uint *)&this_ptr->field_0x1ffbc = uVar2;
  return 1;
}
