// Name: core_moon.cpp_freeAlphaBitmaps_FUN_0052a470
// Address: 0052a470
// Address Range: [[0052a470, 0052a484]]
// Convention: __cdecl
// Signature: void core_moon.cpp_freeAlphaBitmaps_FUN_0052a470(CAlphaBitmap * * array)

#include "nocturne.h"

void __cdecl core_moon_cpp_freeAlphaBitmaps_FUN_0052a470(CAlphaBitmap **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x1e,&g_CAlphaBitmapTypeInfo);
  return;
}
