// Name: shape_edittool.cpp_FUN_004837f0
// Address: 004837f0
// Address Range: [[004837f0, 0048394b]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_FUN_004837f0(CPickList *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_FUN_004837f0(CPickList *this_ptr)

{
  int iVar1;
  
  if (*(int *)this_ptr <= *(int *)&this_ptr->field_0x194) {
    *(int *)&this_ptr->field_0x194 = *(int *)this_ptr + -1;
  }
  if (*(int *)&this_ptr->field_0x194 < 0) {
    *(uint *)&this_ptr->field_0x194 = 0;
  }
  while (*(int *)&this_ptr->field_0x198 < 0) {
    *(int *)&this_ptr->field_0x198 = *(int *)&this_ptr->field_0x198 + *(int *)&this_ptr->field_0x1a0
    ;
  }
  while (*(int *)this_ptr <= *(int *)&this_ptr->field_0x198) {
    *(int *)&this_ptr->field_0x198 = *(int *)&this_ptr->field_0x198 - *(int *)&this_ptr->field_0x1a0
    ;
  }
  if (*(int *)&this_ptr->field_0x198 < 0) {
    *(uint *)&this_ptr->field_0x198 = 0;
  }
  if (*(int *)&this_ptr->field_0x194 < *(int *)this_ptr) {
    while (iVar1 = *(int *)&this_ptr->field_0x198, *(int *)&this_ptr->field_0x194 < iVar1) {
      if (*(int *)&this_ptr->field_0x1a8 == 1) {
        *(int *)&this_ptr->field_0x198 = iVar1 + -1;
      }
      else {
        *(int *)&this_ptr->field_0x198 = iVar1 - *(int *)&this_ptr->field_0x1a0;
      }
      if (*(int *)&this_ptr->field_0x198 < 0) {
        *(uint *)&this_ptr->field_0x198 = 0;
      }
    }
    while (*(int *)&this_ptr->field_0x198 + *(int *)&this_ptr->field_0x19c <=
           *(int *)&this_ptr->field_0x194) {
      if (*(int *)&this_ptr->field_0x1a8 == 1) {
        *(int *)&this_ptr->field_0x198 = *(int *)&this_ptr->field_0x198 + 1;
      }
      else {
        *(int *)&this_ptr->field_0x198 =
             *(int *)&this_ptr->field_0x198 + *(int *)&this_ptr->field_0x1a0;
      }
    }
  }
  if ((*(int *)&this_ptr->field_0x1a8 == 1) &&
     (iVar1 = *(int *)this_ptr - *(int *)&this_ptr->field_0x1a0,
     iVar1 < *(int *)&this_ptr->field_0x198)) {
    *(int *)&this_ptr->field_0x198 = iVar1;
  }
  if (*(int *)&this_ptr->field_0x198 < 0) {
    *(uint *)&this_ptr->field_0x198 = 0;
    return;
  }
  return;
}
