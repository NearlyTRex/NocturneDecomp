// Name: core_skeledit.cpp_FUN_0058afe0
// Address: 0058afe0
// Address Range: [[0058afe0, 0058b158]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_FUN_0058afe0(void *ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_FUN_0058afe0(void *ptr)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  void *pvVar6;
  uint in_stack_00000008;
  CPickList local_484;
  char local_dc [200];
  int local_14;
  
  __STK();
  iVar4 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_484);
  if (0 < *(int *)ptr) {
    iVar5 = (int)ptr + 4;
    pvVar6 = ptr;
    local_14 = iVar5;
    do {
      iVar1 = *(int *)((int)pvVar6 + 0x24);
      pcVar3 = "(no parent)";
      if (-1 < iVar1) {
        pcVar3 = (char *)(iVar1 * 0x84 + local_14);
      }
      _sprintf(local_dc,"%2d. %s\t%d. %s",iVar4,iVar5,iVar1,pcVar3);
      pvVar6 = (void *)((int)pvVar6 + 0x84);
      iVar5 = iVar5 + 0x84;
      iVar4 = iVar4 + 1;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_484.base,local_dc);
    } while (iVar4 < *(int *)ptr);
  }
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_484.base,"(Dump to the clipboard)");
  _sprintf(local_dc,"Viewing bone heirarchy for %s.",in_stack_00000008);
  iVar4 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_484,local_dc,-1,0);
  if (iVar4 == local_484.base.item_count + -1) {
    iVar5 = 0;
    iVar4 = _sprintf
                      (g_SkeleditClipboardBuffer,"Heirarchy for %s\r\n\r\n",in_stack_00000008);
    pcVar3 = g_SkeleditClipboardBuffer + iVar4;
    if (0 < *(int *)ptr) {
      do {
        pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_484.base,iVar5);
        iVar5 = iVar5 + 1;
        iVar4 = _sprintf(pcVar3,"%s\r\n",pcVar2);
        pcVar3 = pcVar3 + iVar4;
      } while (iVar5 < *(int *)ptr);
    }
    shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0
              (g_CEditorToolsPtr,g_SkeleditClipboardBuffer);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_484,0);
  return;
}
