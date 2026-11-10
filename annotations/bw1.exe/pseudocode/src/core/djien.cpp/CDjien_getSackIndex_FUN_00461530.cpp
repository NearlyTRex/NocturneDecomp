// Name: core_djien.cpp_CDjien_getSackIndex_FUN_00461530
// Address: 00461530
// Address Range: [[00461530, 0046158c]]
// Convention: __cdecl
// Signature: int __cdecl core_djien_cpp_CDjien_getSackIndex_FUN_00461530(CDjien *this_ptr,int part_id)

#include "nocturne.h"

int __cdecl core_djien_cpp_CDjien_getSackIndex_FUN_00461530(CDjien *this_ptr,int part_id)

{
  int iVar1;
  
  iVar1 = -1;
  if (part_id == *(int *)&this_ptr->field_0xc2b0) {
    iVar1 = 0;
  }
  if (part_id == *(int *)&this_ptr->field_0xc2b4) {
    iVar1 = 1;
  }
  if (part_id == *(int *)&this_ptr->field_0xc2b8) {
    iVar1 = 2;
  }
  if (part_id == *(int *)&this_ptr->field_0xc2bc) {
    iVar1 = 3;
  }
  if (part_id == *(int *)&this_ptr->field_0xc2c0) {
    iVar1 = 4;
  }
  if (part_id == *(int *)&this_ptr->field_0xc2c4) {
    iVar1 = 5;
  }
  return iVar1;
}
