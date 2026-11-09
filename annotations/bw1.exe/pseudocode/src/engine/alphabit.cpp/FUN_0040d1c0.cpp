// Name: engine_alphabit.cpp_FUN_0040d1c0
// Address: 0040d1c0
// Address Range: [[0040d1c0, 0040d213]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_FUN_0040d1c0(CAlphaBitmap *this_ptr)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_FUN_0040d1c0(CAlphaBitmap *this_ptr)

{
  if (*(int *)this_ptr != 0) {
    FUN_005c09f0(*(int *)this_ptr);
    *(uint *)this_ptr = 0;
  }
  if (*(int *)&this_ptr->field_0x4 != 0) {
    FUN_005c09f0(*(int *)&this_ptr->field_0x4);
    *(uint *)&this_ptr->field_0x4 = 0;
  }
  if (*(int *)&this_ptr->field_0x8 == 0) {
    return;
  }
  FUN_005c09f0(*(int *)&this_ptr->field_0x8);
  *(uint *)&this_ptr->field_0x8 = 0;
  return;
}
