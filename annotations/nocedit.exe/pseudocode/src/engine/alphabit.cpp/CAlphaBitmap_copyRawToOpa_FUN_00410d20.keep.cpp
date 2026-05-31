// Name: engine_alphabit.cpp_CAlphaBitmap_copyRawToOpa_FUN_00410d20
// Address: 00410d20
// MANUAL RECONSTRUCTION
// Address Range: [[00410d20, 00410d44]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_copyRawToOpa_FUN_00410d20(CAlphaBitmap *this_ptr)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_copyRawToOpa_FUN_00410d20(CAlphaBitmap *this_ptr)

{
  memcpy(this_ptr->opa,this_ptr->raw,this_ptr->width * this_ptr->height);
  return;
}
