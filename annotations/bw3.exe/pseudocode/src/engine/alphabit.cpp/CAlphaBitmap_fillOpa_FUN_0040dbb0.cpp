// Name: engine_alphabit.cpp_CAlphaBitmap_fillOpa_FUN_0040dbb0
// Address: 0040dbb0
// Address Range: [[0040dbb0, 0040dbd1]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_fillOpa_FUN_0040dbb0(CAlphaBitmap *this_ptr,int value)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_fillOpa_FUN_0040dbb0(CAlphaBitmap *this_ptr,int value)

{
  memset(this_ptr->opa,value,this_ptr->width * this_ptr->height);
  return;
}
