// Name: shape_edittool.cpp_CStrList_copyToClipboard_FUN_00474380
// Address: 00474380
// Address Range: [[00474380, 00474459]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_00474380(CStrList *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_00474380(CStrList *this_ptr)

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
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(this_ptr,iVar5);
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
  pcVar2 = shape_memdbg_cpp_malloc_FUN_00564c18(iVar4 + 1U);
  if (pcVar2 == (char *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\shape\\edittool.cpp";
    g_INT_01cc4804 = 0xad9;
    core_main_c_FUN_004c8440("CStrList::copyToClipboard - out of memory for %d items, %d bytes",this_ptr->item_count,iVar4 + 1U);
  }
  iVar4 = 0;
  buffer = pcVar2;
  if (0 < this_ptr->item_count) {
    do {
      shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(this_ptr,iVar4);
      iVar4 = iVar4 + 1;
      iVar5 = _sprintf(buffer,"%s\n");
      buffer = buffer + iVar5;
    } while (iVar4 < this_ptr->item_count);
  }
  this_ptr_00 = g_CEditorTools_PTR_005b6d50;
  *buffer = '\0';
  shape_edittool_cpp_CEditorTools_setClipboardText_FUN_00472d10(this_ptr_00,pcVar2);
  shape_memdbg_cpp_free_FUN_00564486(pcVar2);
  return;
}
