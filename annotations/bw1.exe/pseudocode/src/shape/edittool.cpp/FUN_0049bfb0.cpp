// Name: shape_edittool.cpp_FUN_0049bfb0
// Address: 0049bfb0
// Address Range: [[0049bfb0, 0049c02a]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_FUN_0049bfb0(CPickList *this_ptr,int mouse_x,int mouse_y)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl shape_edittool_cpp_FUN_0049bfb0(CPickList *this_ptr,int mouse_x,int mouse_y)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < mouse_x - _DAT_01c4f008) && (-1 < mouse_y - _DAT_01c4f00c)) {
    iVar1 = (mouse_y - _DAT_01c4f00c) / *(int *)&this_ptr->field_0x18c;
    iVar2 = (mouse_x - _DAT_01c4f008) / *(int *)&this_ptr->field_0x1a4;
    if (((-1 < iVar1) &&
        (((iVar1 < *(int *)&this_ptr->field_0x1a0 && (-1 < iVar2)) &&
         (iVar2 < *(int *)&this_ptr->field_0x1a8)))) &&
       ((iVar1 = iVar2 * *(int *)&this_ptr->field_0x1a0 + *(int *)&this_ptr->field_0x198 + iVar1,
        -1 < iVar1 && (iVar1 < *(int *)this_ptr)))) {
      return iVar1;
    }
  }
  return -1;
}
