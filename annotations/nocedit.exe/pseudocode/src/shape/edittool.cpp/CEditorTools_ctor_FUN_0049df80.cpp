// Name: shape_edittool.cpp_CEditorTools_ctor_FUN_0049df80
// Address: 0049df80
// Address Range: [[0049df80, 0049dfac]]
// Convention: __cdecl
// Signature: CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_ctor_FUN_0049df80(CEditorTools *this_ptr)

#include "nocturne.h"

CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_ctor_FUN_0049df80(CEditorTools *this_ptr)

{
  g_WindowStackCount = 0;
  crt_memory_c_memset_FUN_005fde40(g_WindowStack,0,0x988);
  shape_edittool_cpp_CEditorTools_init_FUN_0049e020(this_ptr);
  return this_ptr;
}
