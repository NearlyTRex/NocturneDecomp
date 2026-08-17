// Name: shape_edittool.cpp_CEditorTools_getClipboardText_FUN_00472c90
// Address: 00472c90
// Address Range: [[00472c90, 00472d0f]]
// Convention: __cdecl
// Signature: char * __cdecl shape_edittool_cpp_CEditorTools_getClipboardText_FUN_00472c90(CEditorTools *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * __cdecl shape_edittool_cpp_CEditorTools_getClipboardText_FUN_00472c90(CEditorTools *this_ptr)

{
  char cVar1;
  BOOL BVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  byte bVar7;
  
  bVar7 = 0;
  BVar2 = OpenClipboard(g_HWND_02de2098);
  if (BVar2 != 0) {
    pcVar3 = GetClipboardData(1);
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
      _DAT_01bcd078 = realloc(_DAT_01bcd078,uVar4);
      if (_DAT_01bcd078 != (char *)0x0) {
        pcVar6 = _DAT_01bcd078;
        for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
          *(uint *)pcVar6 = *(uint *)pcVar3;
          pcVar3 = pcVar3 + (uint)bVar7 * -8 + 4;
          pcVar6 = pcVar6 + (uint)bVar7 * -8 + 4;
        }
        for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
          *pcVar6 = *pcVar3;
          pcVar3 = pcVar3 + (uint)bVar7 * -2 + 1;
          pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
        }
      }
    }
    CloseClipboard();
  }
  if (_DAT_01bcd078 != (char *)0x0) {
    return _DAT_01bcd078;
  }
  return &CHAR_00h_0057ea91;
}
