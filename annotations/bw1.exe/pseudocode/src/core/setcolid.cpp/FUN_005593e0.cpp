// Name: core_setcolid.cpp_FUN_005593e0
// Address: 005593e0
// Address Range: [[005593e0, 00559432]]
// Convention: __cdecl
// Signature: void __cdecl core_setcolid_cpp_FUN_005593e0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setcolid_cpp_FUN_005593e0(CDemonSet *this_ptr)

{
  CDemonSet *pCVar1;
  int iVar2;
  
  *(uint *)&this_ptr->field_0x156db8 = 0;
  iVar2 = 0;
  pCVar1 = this_ptr;
  if (0 < *(int *)&this_ptr->field_0x14d164) {
    do {
      if (*(int *)(*(int *)&pCVar1->field_0x14d168 + 0x100) == 0) {
        *(int *)(&this_ptr->field_0x156dbc + *(int *)&this_ptr->field_0x156db8 * 4) =
             *(int *)&pCVar1->field_0x14d168;
        *(int *)&this_ptr->field_0x156db8 = *(int *)&this_ptr->field_0x156db8 + 1;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = (CDemonSet *)&pCVar1->field_0x4;
    } while (iVar2 < *(int *)&this_ptr->field_0x14d164);
  }
  return;
}
