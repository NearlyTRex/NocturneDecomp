// Name: shape_edittool.cpp_CStrList_copyToClipboard_FUN_00474380
// Address: 00474380
// Address Range: [[00474380, 00474459]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_00474380(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_00474380(int *param_1)

{
  char cVar1;
  char *pcVar2;
  byte *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte *puVar8;
  byte bVar9;
  
  bVar9 = 0;
  iVar7 = 0;
  iVar6 = 0;
  if (0 < *param_1) {
    do {
      pcVar2 = (char *)shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(param_1,iVar7);
      uVar5 = 0xffffffff;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + (uint)bVar9 * -2 + 1;
      } while (cVar1 != '\0');
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + ~uVar5;
    } while (iVar7 < *param_1);
  }
  puVar3 = (byte *)shape_memdbg_cpp_malloc_FUN_00564c18(iVar6 + 1);
  if (puVar3 == (byte *)0x0) {
    _DAT_01cc4800 = "..\\shape\\edittool.cpp";
    _DAT_01cc4804 = 0xad9;
    FUN_004c8440("CStrList::copyToClipboard - out of memory for %d items, %d bytes",*param_1,iVar6 + 1);
  }
  iVar6 = 0;
  puVar8 = puVar3;
  if (0 < *param_1) {
    do {
      uVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(param_1,iVar6);
      iVar6 = iVar6 + 1;
      iVar7 = _sprintf(puVar8,&DAT_0057eddf,uVar4);
      puVar8 = puVar8 + iVar7;
    } while (iVar6 < *param_1);
  }
  uVar4 = 0x01BCD074;
  *puVar8 = 0;
  shape_edittool_cpp_CEditorTools_setClipboardText_FUN_00472d10(uVar4,puVar3);
  shape_memdbg_cpp_free_FUN_00564486(puVar3);
  return;
}
