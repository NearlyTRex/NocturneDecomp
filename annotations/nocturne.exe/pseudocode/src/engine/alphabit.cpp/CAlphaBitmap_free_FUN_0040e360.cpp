// Name: engine_alphabit.cpp_CAlphaBitmap_free_FUN_0040e360
// Address: 0040e360
// Address Range: [[0040e360, 0040e3b3]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360(CAlphaBitmap *this_ptr)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360(CAlphaBitmap *this_ptr)

{
  if (this_ptr->raw != (char *)0x0) {
    FUN_005638d0(this_ptr->raw);
    this_ptr->raw = (char *)0x0;
  }
  if (this_ptr->opa != (char *)0x0) {
    FUN_005638d0(this_ptr->opa);
    this_ptr->opa = (char *)0x0;
  }
  if (this_ptr->act == (uint *)0x0) {
    return;
  }
  FUN_005638d0(this_ptr->act);
  this_ptr->act = (uint *)0x0;
  return;
}
