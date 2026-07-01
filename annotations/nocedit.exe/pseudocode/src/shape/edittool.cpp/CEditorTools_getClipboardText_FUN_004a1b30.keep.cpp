// Name: shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30
// Address: 004a1b30
// MANUAL RECONSTRUCTION
// Address Range: [[004a1b30, 004a1bb9]]
// Convention: __cdecl
// Signature: char * __cdecl shape_edittool_cpp_CEditorTools_getClipboardText_FUN_004a1b30(CEditorTools *this_ptr)

#include "nocturne.h"

char * __cdecl shape_edittool_cpp_CEditorTools_getClipboardText_FUN_004a1b30(CEditorTools *this_ptr)

{
  BOOL BVar2;
  char *pcVar3;
  uint uVar4;

  BVar2 = (*g_OpenClipboardFunc)(g_MainWindowHandle);
  if (BVar2 != 0) {
    pcVar3 = (char *)(*g_GetClipboardDataFunc)(1);
    if (pcVar3 != (char *)0x0) {
      uVar4 = strlen(pcVar3) + 1;
      g_ClipboardBackupText = (char *)
           shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (g_ClipboardBackupText,uVar4,"..\\shape\\edittool.cpp",2382);
      if (g_ClipboardBackupText != (char *)0x0) {
        memcpy(g_ClipboardBackupText,pcVar3,uVar4);
      }
    }
    (*g_CloseClipboardFunc)();
  }
  if (g_ClipboardBackupText != (char *)0x0) {
    return g_ClipboardBackupText;
  }
  return &s_EmptyChar_00623593;
}
