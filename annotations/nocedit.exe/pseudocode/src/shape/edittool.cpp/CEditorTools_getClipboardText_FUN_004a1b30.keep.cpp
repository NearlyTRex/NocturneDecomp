// Name: shape_edittool.cpp_CEditorTools_getClipboardText_FUN_004a1b30
// Address: 004a1b30
// MANUAL RECONSTRUCTION
// Address Range: [[004a1b30, 004a1bb9]]
// Convention: __cdecl
// Signature: char * __cdecl shape_edittool_cpp_CEditorTools_getClipboardText_FUN_004a1b30(CEditorTools *this_ptr)

#include "nocturne.h"

char * __cdecl shape_edittool_cpp_CEditorTools_getClipboardText_FUN_004a1b30(CEditorTools *this_ptr)

{
  char cVar1;
  BOOL BVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  BVar2 = (*g_OpenClipboardFunc)(g_MainWindowHandle);
  if (BVar2 != 0) {
    pcVar3 = (char *)(*g_GetClipboardDataFunc)(1);
    if (pcVar3 != (char *)0x0) {
      uVar4 = 0xffffffff;
      pcVar6 = pcVar3;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      uVar4 = ~uVar4;
      g_ClipboardBackupText = (char *)
           shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (g_ClipboardBackupText,uVar4,"..\\shape\\edittool.cpp",0x94e);
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
