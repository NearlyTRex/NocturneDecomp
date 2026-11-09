// Name: core_script.cpp_FUN_00528da0
// Address: 00528da0
// Address Range: [[00528da0, 00528df7]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_00528da0(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_FUN_00528da0(CScript *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)&this_ptr->field_0x30 != 0) {
    iVar2 = 0;
    if (0 < *(int *)&this_ptr->field_0x2c) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(*(int *)&this_ptr->field_0x30 + iVar3 + 4);
        if (iVar1 != 0) {
          FUN_005a3770(iVar1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 8;
      } while (iVar2 < *(int *)&this_ptr->field_0x2c);
    }
    FUN_005a3770(*(uint *)&this_ptr->field_0x30);
    *(uint *)&this_ptr->field_0x30 = 0;
  }
  *(uint *)&this_ptr->field_0x2c = 0;
  return;
}
