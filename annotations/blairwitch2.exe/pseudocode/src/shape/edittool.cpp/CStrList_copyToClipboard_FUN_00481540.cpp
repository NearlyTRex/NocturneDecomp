// Name: shape_edittool.cpp_CStrList_copyToClipboard_FUN_00481540
// Address: 00481540
// Address Range: [[00481540, 00481619]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_00481540(CStrList *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_00481540(CStrList *this_ptr)

{
  char cVar1;
  CEditorTools *this_ptr_00;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *buffer;
  byte bVar6;
  
  bVar6 = 0;
  iVar5 = 0;
  iVar4 = 0;
  if (0 < this_ptr->item_count) {
    do {
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_00481240(this_ptr,iVar5);
      uVar3 = 0xffffffff;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + (uint)bVar6 * -2 + 1;
      } while (cVar1 != '\0');
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + ~uVar3;
    } while (iVar5 < this_ptr->item_count);
  }
  pcVar2 = (char *)operator_new_array(iVar4 + 1);
  if (pcVar2 == (char *)0x0) {
    _DAT_01d046a0 = "..\\shape\\edittool.cpp";
    _DAT_01d046a4 = 0xcd1;
    core_main_c_FUN_004e4500("CStrList::copyToClipboard - out of memory for %d items, %d bytes",this_ptr->item_count,iVar4 + 1);
  }
  iVar4 = 0;
  buffer = pcVar2;
  if (0 < this_ptr->item_count) {
    do {
      shape_edittool_cpp_CStrList_getStringAt_FUN_00481240(this_ptr,iVar4);
      iVar4 = iVar4 + 1;
      iVar5 = _sprintf(buffer,&DAT_005d2824);
      buffer = buffer + iVar5;
    } while (iVar4 < this_ptr->item_count);
  }
  this_ptr_00 = g_CEditorToolsPtr;
  *buffer = '\0';
  shape_edittool_cpp_CEditorTools_setClipboardText_FUN_0047fc30(this_ptr_00,pcVar2);
  FUN_005b7fce(pcVar2);
  return;
}
