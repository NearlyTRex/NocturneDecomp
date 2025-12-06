// Name: shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270
// Address: 004a3270
// Address Range: [[004a3270, 004a335f]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_copyToClipboard_FUN_004a3270(CStrList * this_ptr)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_004a3270(CStrList *this_ptr)

{
  char cVar1;
  CEditorTools *this_ptr_00;
  char *pcVar2;
  void *pvVar3;
  char *pcVar4;
  uint uVar5;
  int iVar6;
  void *unaff_ESI;
  int iVar7;
  char *unaff_EDI;
  byte bVar8;
  
  bVar8 = 0;
  iVar7 = 0;
  iVar6 = 0;
  if (0 < this_ptr->item_count) {
    do {
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,iVar7);
      uVar5 = 0xffffffff;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + (uint)bVar8 * -2 + 1;
      } while (cVar1 != '\0');
      iVar7 = iVar7 + 1;
      iVar6 = iVar6 + ~uVar5;
    } while (iVar7 < this_ptr->item_count);
  }
  pvVar3 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0(iVar6 + 1,"..\\shape\\edittool.cpp",0xc50);
  if (pvVar3 == (void *)0x0) {
    g_CurrentFilename = "..\\shape\\edittool.cpp";
    g_CurrentLineNumber = 0xc51;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CStrList::copyToClipboard - out of memory for %d items, %d bytes",this_ptr->item_count,iVar6 + 1,0);
  }
  iVar6 = 0;
  pcVar2 = unaff_EDI;
  if (0 < this_ptr->item_count) {
    do {
      pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,iVar6);
      iVar6 = iVar6 + 1;
      iVar7 = crt_stdio_c_sprintf_FUN_005fdbd0(unaff_EDI,"%s\n",pcVar4);
      unaff_EDI = unaff_EDI + iVar7;
    } while (iVar6 < this_ptr->item_count);
  }
  this_ptr_00 = g_CEditorToolsPtr;
  *unaff_EDI = '\0';
  shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0(this_ptr_00,pcVar2);
  g_CurrentDebugFilename = "..\\shape\\edittool.cpp";
  g_CurrentDebugLine = 0xc61;
  crt_memory_c_free_FUN_005fe659(unaff_ESI);
  return;
}
