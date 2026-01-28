// Name: core_menu.cpp_freeBitmaps_FUN_00514f50
// Address: 00514f50
// Address Range: [[00514f50, 00514f64]]
// Convention: __cdecl
// Signature: void __cdecl core_menu_cpp_freeBitmaps_FUN_00514f50(CAlphaBitmap **array)

#include "nocturne.h"

void __cdecl core_menu_cpp_freeBitmaps_FUN_00514f50(CAlphaBitmap **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,8,&g_CAlphaBitmapTypeInfo);
  return;
}
