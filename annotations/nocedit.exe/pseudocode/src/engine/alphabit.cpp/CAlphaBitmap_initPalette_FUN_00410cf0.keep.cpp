// Name: engine_alphabit.cpp_CAlphaBitmap_initPalette_FUN_00410cf0
// Address: 00410cf0
// MANUAL RECONSTRUCTION
// Address Range: [[00410cf0, 00410d15]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(CAlphaBitmap *this_ptr)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0(CAlphaBitmap *this_ptr)

{
  memcpy(g_Hardware32BitPalette,this_ptr->act,0x400);
  return;
}
