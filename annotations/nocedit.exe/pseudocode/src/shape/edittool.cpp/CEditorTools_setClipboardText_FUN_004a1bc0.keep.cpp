// Name: shape_edittool.cpp_CEditorTools_setClipboardText_FUN_004a1bc0
// Address: 004a1bc0
// MANUAL RECONSTRUCTION
// Address Range: [[004a1bc0, 004a1c94]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0(CEditorTools *this_ptr,char *text_data)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0(CEditorTools *this_ptr,char *text_data)

{
  char cVar1;
  BOOL BVar2;
  HGLOBAL hMem;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  if (text_data == (char *)0x0) {
    text_data = &s_EmptyChar_00623594;
  }
  uVar4 = 0xffffffff;
  pcVar3 = text_data;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4;
  BVar2 = (*g_OpenClipboardFunc)(g_MainWindowHandle);
  if (BVar2 != 0) {
    hMem = (*g_GlobalAllocFunc)(0x2002,uVar4);
    if (hMem != (HGLOBAL)0x0) {
      pcVar3 = (char *)(*g_GlobalLockFunc)(hMem);
      if (pcVar3 == (char *)0x0) {
        (*g_GlobalFreeFunc)(hMem);
      }
      else {
        pcVar6 = text_data;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(uint *)pcVar3 = *(uint *)pcVar6;
          pcVar6 = pcVar6 + (uint)bVar7 * -8 + 4;
          pcVar3 = pcVar3 + (uint)bVar7 * -8 + 4;
        }
        for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
          *pcVar3 = *pcVar6;
          pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
          pcVar3 = pcVar3 + (uint)bVar7 * -2 + 1;
        }
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
  pcVar3 = g_ClipboardBackupText;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(uint *)pcVar3 = *(uint *)text_data;
    text_data = text_data + (uint)bVar7 * -8 + 4;
    pcVar3 = pcVar3 + (uint)bVar7 * -8 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar3 = *text_data;
    text_data = text_data + (uint)bVar7 * -2 + 1;
    pcVar3 = pcVar3 + (uint)bVar7 * -2 + 1;
  }
  return;
}
