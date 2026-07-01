// Name: engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
// Address: 00410560
// Address Range: [[00410560, 004105c8]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap *this_ptr)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap *this_ptr)

{
  if (this_ptr->raw != (char *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->raw,"..\\engine\\alphabit.cpp",47);
    this_ptr->raw = (char *)0x0;
  }
  if (this_ptr->opa != (char *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->opa,"..\\engine\\alphabit.cpp",51);
    this_ptr->opa = (char *)0x0;
  }
  if (this_ptr->act == (uint *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->act,"..\\engine\\alphabit.cpp",55);
  this_ptr->act = (uint *)0x0;
  return;
}
