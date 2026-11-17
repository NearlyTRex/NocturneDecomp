// Name: shape_edittool.cpp_CEditorTools_dtor_FUN_0047c770
// Address: 0047c770
// Address Range: [[0047c770, 0047c7c6]]
// Convention: __cdecl
// Signature: CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_0047c770(CEditorTools *this_ptr,uint flags)

#include "nocturne.h"

CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_0047c770(CEditorTools *this_ptr,uint flags)

{
  while (0 < g_WindowStackCount) {
    shape_edittool_cpp_CEditorTools_popWindowState_FUN_0047f990(this_ptr);
  }
  if (g_ClipboardBackupText == (char *)0x0) {
    return this_ptr;
  }
  debugFree(g_ClipboardBackupText);
  g_ClipboardBackupText = (char *)0x0;
  return this_ptr;
}
