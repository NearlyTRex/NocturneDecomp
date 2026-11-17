// Name: shape_edittool.cpp_CEditorTools_ctor_FUN_0047b660
// Address: 0047b660
// Address Range: [[0047b660, 0047b68c]]
// Convention: __cdecl
// Signature: CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_ctor_FUN_0047b660(CEditorTools *this_ptr)

#include "nocturne.h"

CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_ctor_FUN_0047b660(CEditorTools *this_ptr)

{
  g_WindowStackCount = 0;
  memset(g_SWindow_ARRAY_01c255a0,0,0x9d8);
  shape_edittool_cpp_CEditorTools_init_FUN_0047b6f0(this_ptr);
  return this_ptr;
}
