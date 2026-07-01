// Name: shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270
// Address: 004a3270
// MANUAL RECONSTRUCTION
// Address Range: [[004a3270, 004a335f]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_004a3270(CStrList *this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_004a3270(CStrList *this_ptr)

{
  char *pcVar2;
  char *text_data;
  char *pcVar3;
  int iVar1;
  int iVar5;
  int iVar6;
  int index;
  char *buffer;
  CEditorTools *this_ptr_00;

  iVar6 = 0;
  iVar5 = 0;
  if (0 < this_ptr->item_count) {
    do {
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,iVar6);
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + strlen(pcVar2) + 1;
    } while (iVar6 < this_ptr->item_count);
  }
  text_data = (char *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                        (iVar5 + 1,"..\\shape\\edittool.cpp",3152);
  if (text_data == (char *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 3153;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CStrList::copyToClipboard - out of memory for %d items, %d bytes",this_ptr->item_count,iVar5 + 1);
  }
  index = 0;
  buffer = text_data;
  if (0 < this_ptr->item_count) {
    do {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,index);
      index = index + 1;
      iVar1 = _sprintf(buffer,"%s\n",pcVar3);
      buffer = buffer + iVar1;
    } while (index < this_ptr->item_count);
  }
  this_ptr_00 = g_CEditorToolsPtr;
  *buffer = '\0';
  shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0(this_ptr_00,text_data);
  g_CurrentDebugFilename = "..\\shape\\edittool.cpp";
  g_CurrentDebugLine = 0xc61;
  shape_memdbg_cpp_free_FUN_005fe659(text_data);
  return;
}
