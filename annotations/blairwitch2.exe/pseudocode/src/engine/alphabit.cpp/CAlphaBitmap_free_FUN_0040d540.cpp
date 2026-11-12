// Name: engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040d540
// Address: 0040d540
// Address Range: [[0040d540, 0040d593]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(CAlphaBitmap *this_ptr)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(CAlphaBitmap *this_ptr)

{
  if (this_ptr->raw != (char *)0x0) {
    FUN_005b86a0(this_ptr->raw);
    this_ptr->raw = (char *)0x0;
  }
  if (this_ptr->opa != (char *)0x0) {
    FUN_005b86a0(this_ptr->opa);
    this_ptr->opa = (char *)0x0;
  }
  if (this_ptr->act == (uint *)0x0) {
    return;
  }
  FUN_005b86a0(this_ptr->act);
  this_ptr->act = (uint *)0x0;
  return;
}
