// Name: core_skeledit.cpp_FUN_0058afe0
// Address: 0058afe0
// Address Range: [[0058afe0, 0058b158]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_FUN_0058afe0(void)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_FUN_0058afe0(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *in_stack_00000004;
  uint in_stack_00000008;
  CPickList local_484;
  char local_dc [200];
  int *local_14;
  
  __STK(0x4a0);
  iVar3 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_484);
  if (0 < *in_stack_00000004) {
    piVar5 = in_stack_00000004 + 1;
    piVar6 = in_stack_00000004;
    local_14 = piVar5;
    do {
      iVar4 = piVar6[9];
      pcVar2 = "(no parent)";
      if (-1 < iVar4) {
        pcVar2 = (char *)(local_14 + iVar4 * 0x21);
      }
      _sprintf(local_dc,"%2d. %s\t%d. %s",iVar3,piVar5,iVar4,pcVar2);
      piVar6 = piVar6 + 0x21;
      piVar5 = piVar5 + 0x21;
      iVar3 = iVar3 + 1;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_484.base,local_dc);
    } while (iVar3 < *in_stack_00000004);
  }
  shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_484.base,"(Dump to the clipboard)");
  _sprintf(local_dc,"Viewing bone heirarchy for %s.",in_stack_00000008);
  iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    (&local_484,local_dc,-1,0);
  if (iVar3 == local_484.base.item_count + -1) {
    iVar4 = 0;
    iVar3 = _sprintf
                      (&DAT_0366b650,"Heirarchy for %s\r\n\r\n",in_stack_00000008);
    pcVar2 = &DAT_0366b650 + iVar3;
    if (0 < *in_stack_00000004) {
      do {
        pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_484.base,iVar4);
        iVar4 = iVar4 + 1;
        iVar3 = _sprintf(pcVar2,"%s\r\n",pcVar1);
        pcVar2 = pcVar2 + iVar3;
      } while (iVar4 < *in_stack_00000004);
    }
    shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0(g_CEditorToolsPtr,&DAT_0366b650);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_484,0);
  return;
}
