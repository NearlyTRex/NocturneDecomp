// Name: shape_edittool.cpp_CStrList_clear_FUN_00499470
// Address: 00499470
// Address Range: [[00499470, 004994ca]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_clear_FUN_00499470(CStrList *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_clear_FUN_00499470(CStrList *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)&this_ptr->field_0x8 != 0) {
    iVar2 = 0;
    if (0 < *(int *)this_ptr) {
      iVar3 = 0;
      do {
        iVar1 = *(int *)(*(int *)&this_ptr->field_0x8 + iVar3);
        if (iVar1 != 0) {
          FUN_005c09f0(iVar1);
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < *(int *)this_ptr);
    }
    FUN_005c09f0(*(uint *)&this_ptr->field_0x8);
  }
  *(uint *)&this_ptr->field_0x8 = 0;
  *(uint *)&this_ptr->field_0x4 = 0;
  *(uint *)this_ptr = 0;
  return;
}
