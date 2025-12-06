// Name: shape_edittool.cpp_CEditorTools_dtor_FUN_0049dfb0
// Address: 0049dfb0
// Address Range: [[0049dfb0, 0049e010]]
// Convention: __cdecl
// Signature: CEditorTools * shape_edittool.cpp_CEditorTools_dtor_FUN_0049dfb0(CEditorTools * this_ptr)

#include "nocturne.h"

CEditorTools * __cdecl shape_edittool_cpp_CEditorTools_dtor_FUN_0049dfb0(CEditorTools *this_ptr)

{
  if (0 < g_WindowStackCount) {
    do {
      shape_edittool_cpp_CEditorTools_popWindowState_FUN_004a0ea0(this_ptr);
    } while (0 < g_WindowStackCount);
  }
  if (g_ClipboardBackupText != (char *)0x0) {
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (g_ClipboardBackupText,"..\\shape\\edittool.cpp",0x2bd);
    g_ClipboardBackupText = (char *)0x0;
    return this_ptr;
  }
  return this_ptr;
}
