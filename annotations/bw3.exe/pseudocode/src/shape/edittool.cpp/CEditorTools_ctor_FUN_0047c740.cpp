// Name: shape_edittool.cpp_CEditorTools_ctor_FUN_0047c740
// Address: 0047c740
// Address Range: [[0047c740, 0047c76c]]
// Convention: __cdecl
// Signature: CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_ctor_FUN_0047c740(CEditorTools *this_ptr)

#include "nocturne.h"

CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_ctor_FUN_0047c740(CEditorTools *this_ptr)

{
  g_WindowStackCount = 0;
  memset(g_SWindow_ARRAY_01c5b108,0,0x9d8);
  shape_edittool_cpp_CEditorTools_init_FUN_0047c7d0(this_ptr);
  return this_ptr;
}
