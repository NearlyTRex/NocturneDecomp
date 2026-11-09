// Name: engine_alphabit.cpp_FUN_0040d400
// Address: 0040d400
// Address Range: [[0040d400, 0040d453]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_FUN_0040d400(CAlphaBitmap *this_ptr)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_FUN_0040d400(CAlphaBitmap *this_ptr)

{
  if (*(int *)this_ptr != 0) {
    FUN_005a3770(*(int *)this_ptr);
    *(uint *)this_ptr = 0;
  }
  if (*(int *)&this_ptr->field_0x4 != 0) {
    FUN_005a3770(*(int *)&this_ptr->field_0x4);
    *(uint *)&this_ptr->field_0x4 = 0;
  }
  if (*(int *)&this_ptr->field_0x8 == 0) {
    return;
  }
  FUN_005a3770(*(int *)&this_ptr->field_0x8);
  *(uint *)&this_ptr->field_0x8 = 0;
  return;
}
