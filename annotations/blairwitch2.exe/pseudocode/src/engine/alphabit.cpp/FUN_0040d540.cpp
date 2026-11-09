// Name: engine_alphabit.cpp_FUN_0040d540
// Address: 0040d540
// Address Range: [[0040d540, 0040d593]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_FUN_0040d540(CAlphaBitmap *this_ptr)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_FUN_0040d540(CAlphaBitmap *this_ptr)

{
  if (*(int *)this_ptr != 0) {
    FUN_005b86a0(*(int *)this_ptr);
    *(uint *)this_ptr = 0;
  }
  if (*(int *)&this_ptr->field_0x4 != 0) {
    FUN_005b86a0(*(int *)&this_ptr->field_0x4);
    *(uint *)&this_ptr->field_0x4 = 0;
  }
  if (*(int *)&this_ptr->field_0x8 == 0) {
    return;
  }
  FUN_005b86a0(*(int *)&this_ptr->field_0x8);
  *(uint *)&this_ptr->field_0x8 = 0;
  return;
}
