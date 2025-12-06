// Name: core_skeledit.cpp_FUN_0058afe0
// Address: 0058afe0
// Address Range: [[0058afe0, 0058b158]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058afe0()

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058afe0(void)

{
  byte *puVar1;
  int iVar2;
  int index;
  BADSPACEBASE *in_ESP;
  int *piVar3;
  char *buffer;
  int *piVar4;
  int *in_stack_0000000c;
  CStrList_vtable *in_stack_fffffb90;
  CStrList_vtable *in_stack_fffffb9c;
  char **in_stack_fffffba0;
  CStrList_vtable *in_stack_fffffba4;
  CStrList_vtable *in_stack_fffffba8;
  uint in_stack_fffffbac;
  char acStack_d4 [4];
  char acStack_d0 [4];
  char acStack_cc [4];
  char acStack_c8 [192];
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x4a0);
  iVar2 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffb84);
  if (0 < *in_stack_0000000c) {
    piVar3 = in_stack_0000000c + 1;
    piVar4 = in_stack_0000000c;
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_d0,"%2d. %s\t%d. %s",acStack_d0,"%2d. %s\t%d. %s",iVar2,piVar3,
                 piVar4[9]);
      piVar4 = piVar4 + 0x21;
      piVar3 = piVar3 + 0x21;
      iVar2 = iVar2 + 1;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffffb84,acStack_d4);
    } while (iVar2 < *in_stack_0000000c);
  }
  shape_edittool_cpp_CStrList_add_FUN_004a2b80
            ((CStrList *)&stack0xfffffb88,"(Dump to the clipboard)");
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_cc,"Viewing bone heirarchy for %s.");
  puVar1 = (byte *)
           shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                     ((CPickList *)&stack0xfffffb90,acStack_c8,-1,0);
  if (puVar1 == (byte *)((int)&in_stack_fffffb90[-1].handleInput + 3)) {
    index = 0;
    iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0366b650,"Heirarchy for %s\r\n\r\n");
    buffer = &DAT_0366b650 + iVar2;
    if (0 < *in_stack_0000000c) {
      do {
        shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70((CStrList *)&stack0xfffffb98,index);
        index = index + 1;
        iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0(buffer,"%s\r\n");
        buffer = buffer + iVar2;
      } while (index < *in_stack_0000000c);
    }
    shape_edittool_cpp_CEditorTools_setClipboardText_FUN_004a1bc0(g_CEditorToolsPtr,&DAT_0366b650);
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffb9c,0,(uint)in_stack_fffffb9c,(uint)in_stack_fffffba0,
             (uint)in_stack_fffffba4,(uint)in_stack_fffffba8,in_stack_fffffbac);
  return;
}
