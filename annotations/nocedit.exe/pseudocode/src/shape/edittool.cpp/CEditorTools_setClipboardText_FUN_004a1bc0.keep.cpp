// Name: shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
// Address: 004a1bc0
// MANUAL RECONSTRUCTION
// Address Range: [[004a1bc0, 004a1c94]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0(CEditorTools *this_ptr,char *text_data)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0(CEditorTools *this_ptr,char *text_data)

{
  BOOL BVar2;
  HGLOBAL hMem;
  char *pcVar3;
  uint uVar4;

  if (text_data == (char *)0x0) {
    text_data = &s_EmptyChar_00623594;
  }
  uVar4 = (uint)strlen(text_data) + 1;
  BVar2 = (*g_OpenClipboardFunc)(g_MainWindowHandle);
  if (BVar2 != 0) {
    hMem = (*g_GlobalAllocFunc)(0x2002,uVar4);
    if (hMem != (HGLOBAL)0x0) {
      pcVar3 = (char *)(*g_GlobalLockFunc)(hMem);
      if (pcVar3 == (char *)0x0) {
        (*g_GlobalFreeFunc)(hMem);
      }
      else {
        memcpy(pcVar3,text_data,uVar4);
        (*g_GlobalUnlockFunc)(hMem);
        (*g_SetClipboardDataFunc)(1,hMem);
      }
    }
    (*g_CloseClipboardFunc)();
  }
  g_ClipboardBackupText = (char *)
       shape_memdbg_cpp_debugRealloc_FUN_0050f540
                 (g_ClipboardBackupText,uVar4,"..\\shape\\edittool.cpp",0x99f);
  if (g_ClipboardBackupText == (char *)0x0) {
    return;
  }
  memcpy(g_ClipboardBackupText,text_data,uVar4);
  return;
}
