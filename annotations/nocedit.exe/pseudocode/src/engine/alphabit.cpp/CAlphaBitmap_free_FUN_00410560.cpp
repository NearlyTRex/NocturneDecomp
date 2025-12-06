// Name: engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560
// Address: 00410560
// Address Range: [[00410560, 004105c8]]
// Convention: __cdecl
// Signature: void engine_alphabit.cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap * this_ptr)

#include "nocturne.h"

void __cdecl engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(CAlphaBitmap *this_ptr)

{
  if (this_ptr->ptrRaw != (char *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->ptrRaw,"..\\engine\\alphabit.cpp",0x2f);
    this_ptr->ptrRaw = (char *)0x0;
  }
  if (this_ptr->ptrOpa != (char *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->ptrOpa,"..\\engine\\alphabit.cpp",0x33);
    this_ptr->ptrOpa = (char *)0x0;
  }
  if (this_ptr->ptrAct == (uint *)0x0) {
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->ptrAct,"..\\engine\\alphabit.cpp",0x37);
  this_ptr->ptrAct = (uint *)0x0;
  return;
}
