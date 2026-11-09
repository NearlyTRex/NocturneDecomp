// Name: core_charactr.cpp_FUN_00432060
// Address: 00432060
// Address Range: [[00432060, 0043208f]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_FUN_00432060(CCharacter *this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_FUN_00432060(CCharacter *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)&this_ptr->field_0x25b0;
  iVar2 = 0;
  while( true ) {
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    if (1 < iVar2) break;
    iVar1 = *(int *)&this_ptr->field_0x2628;
    this_ptr = (CCharacter *)&this_ptr->field_0x78;
  }
  return 0;
}
