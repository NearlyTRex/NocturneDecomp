// Name: shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270
// Address: 004a3270
// Address Range: [[004a3270, 004a335f]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_004a3270(CStrList *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_004a3270(CStrList *this_ptr)

{
  char cVar1;
  CEditorTools *this_ptr_00;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *buffer;
  byte bVar7;
  
  bVar7 = 0;
  iVar6 = 0;
  iVar5 = 0;
  if (0 < this_ptr->item_count) {
    do {
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,iVar6);
      uVar4 = 0xffffffff;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + ~uVar4;
    } while (iVar6 < this_ptr->item_count);
  }
  pcVar2 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0(iVar5 + 1,"..\\shape\\edittool.cpp",0xc50);
  if (pcVar2 == (char *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xc51;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CStrList::copyToClipboard - out of memory for %d items, %d bytes",this_ptr->item_count,iVar5 + 1);
  }
  iVar5 = 0;
  buffer = pcVar2;
  if (0 < this_ptr->item_count) {
    do {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,iVar5);
      iVar5 = iVar5 + 1;
      iVar6 = sprintf(buffer,"%s\n",pcVar3);
      buffer = buffer + iVar6;
    } while (iVar5 < this_ptr->item_count);
  }
  this_ptr_00 = g_CEditorToolsPtr;
  *buffer = '\0';
  shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0(this_ptr_00,pcVar2);
  g_CurrentDebugFilename = "..\\shape\\edittool.cpp";
  g_CurrentDebugLine = 0xc61;
  shape_memdbg_cpp_free_FUN_005fe659(pcVar2);
  return;
}
