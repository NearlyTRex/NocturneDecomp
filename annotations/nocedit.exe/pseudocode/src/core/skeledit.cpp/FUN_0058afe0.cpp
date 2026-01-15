// Name: core_skeledit.cpp_FUN_0058afe0
// Address: 0058afe0
// Address Range: [[0058afe0, 0058b158]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058afe0()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058afe0(void)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *in_stack_00000004;
  uint in_stack_00000008;
  uint in_stack_fffffb7c;
  uint in_stack_fffffb80;
  char **in_stack_fffffb84;
  CStrList_vtable *in_stack_fffffb88;
  uint in_stack_fffffb8c;
  char local_dc [200];
  int *local_14;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x4a0);
  iVar3 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffb7c);
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
      crt_stdio_c_sprintf_FUN_005fdbd0(local_dc,"%2d. %s\t%d. %s",iVar3,piVar5,iVar4,pcVar2);
      piVar6 = piVar6 + 0x21;
      piVar5 = piVar5 + 0x21;
      iVar3 = iVar3 + 1;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffb7c,local_dc);
    } while (iVar3 < *in_stack_00000004);
  }
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffb7c,"(Dump to the clipboard)");
  crt_stdio_c_sprintf_FUN_005fdbd0(local_dc,"Viewing bone heirarchy for %s.",in_stack_00000008);
  iVar4 = in_stack_fffffb7c - 1;
  iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffb7c,local_dc,-1,0);
  if (iVar3 == iVar4) {
    iVar4 = 0;
    iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0
                      (&DAT_0366b650,"Heirarchy for %s\r\n\r\n",in_stack_00000008);
    pcVar2 = &DAT_0366b650 + iVar3;
    if (0 < *in_stack_00000004) {
      do {
        pcVar1 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                           ((CStrList *)&stack0xfffffb7c,iVar4);
        iVar4 = iVar4 + 1;
        iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar2,"%s\r\n",pcVar1);
        pcVar2 = pcVar2 + iVar3;
      } while (iVar4 < *in_stack_00000004);
    }
    shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0(g_CEditorToolsPtr,&DAT_0366b650);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffb7c,0,in_stack_fffffb7c,in_stack_fffffb80,
             (uint)in_stack_fffffb84,(uint)in_stack_fffffb88,in_stack_fffffb8c);
  return;
}
