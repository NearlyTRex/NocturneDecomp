// Name: shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
// Address: 0049f270
// Address Range: [[0049f270, 0049f41a]]
// Convention: __cdecl
// Signature: int shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools * this_ptr, char * search_pattern, char * directory, char * target_filename, bool auto_select_flag)

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
          (CEditorTools *this_ptr,char *search_pattern,char *directory,char *target_filename,
          bool auto_select_flag)

{
  int iVar1;
  char *pcVar2;
  char *output_buffer;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  undefined3 in_stack_00000015;
  byte in_stack_00000024;
  char **in_stack_fffff74c;
  CPickList *this_ptr_00;
  CStrList_vtable *in_stack_fffff750;
  CStrList_vtable *pCVar4;
  CStrList_vtable *in_stack_fffff754;
  CStrList_vtable *in_stack_fffff758;
  CStrList_vtable *in_stack_fffff75c;
  CStrList_vtable *in_stack_fffff760;
  CStrList_vtable *in_stack_fffff764;
  byte auStack_504 [4];
  char acStack_500 [4];
  CStrList_vtable aCStack_4fc [17];
  byte auStack_308 [4];
  byte auStack_304 [4];
  char acStack_300 [4];
  CStrList_vtable aCStack_2fc [18];
  char acStack_100 [4];
  CStrList_vtable aCStack_fc [8];
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff744);
  shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
            ((CStrList *)&stack0xfffff748,target_filename,(char *)_auto_select_flag);
  if ((int)in_stack_fffff74c < 1) {
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("No files found");
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740((CEditorTools *)target_filename,pcVar2);
    this_ptr_00 = (CPickList *)&stack0xfffff754;
    iVar1 = 0;
    pCVar4 = (CStrList_vtable *)0x0;
  }
  else {
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xfffff74c);
    pcVar3 = (char *)0xffffffff;
    pcVar2 = pcVar3;
    if (((in_stack_00000024 & 1) != 0) && (output_buffer = (char *)0x0, 0 < (int)in_stack_fffff750))
    {
      do {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  ((CStrList *)&stack0xfffff750,(int)auStack_308,output_buffer,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  ((CStrList *)&stack0xfffff754,(int)auStack_504,output_buffer,1);
        engine_dosio_c_makePath_FUN_00481f50
                  (acStack_100,(char *)0x0,(char *)0x0,acStack_300,acStack_500);
        in_stack_fffff754 = aCStack_fc;
        pCVar4 = (CStrList_vtable *)0x49f33a;
        in_stack_fffff758 = _auto_select_flag;
        iVar1 = crt_string_c_stricmp_FUN_005fe7f0
                          ((char *)in_stack_fffff754,(char *)_auto_select_flag);
        pcVar2 = output_buffer;
        if (iVar1 == 0) break;
        output_buffer = output_buffer + 1;
        pcVar2 = pcVar3;
      } while ((int)output_buffer < (int)pCVar4);
    }
    pcVar2 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               ((CPickList *)&stack0xfffff750,(char *)_auto_select_flag,(int)pcVar2,
                                0);
    this_ptr_00 = (CPickList *)&stack0xfffff754;
    if ((int)pcVar2 < 0) {
      pCVar4 = (CStrList_vtable *)0x0;
      iVar1 = 0;
    }
    else {
      shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                ((CStrList *)&stack0xfffff754,(int)auStack_304,pcVar2,0);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                ((CStrList *)&stack0xfffff758,(int)acStack_500,pcVar2,1);
      in_stack_fffff758 = aCStack_4fc;
      in_stack_fffff754 = aCStack_2fc;
      pCVar4 = (CStrList_vtable *)0x0;
      engine_dosio_c_makePath_FUN_00481f50
                ((char *)_auto_select_flag,(char *)0x0,(char *)0x0,(char *)in_stack_fffff754,
                 (char *)in_stack_fffff758);
      this_ptr_00 = (CPickList *)&stack0xfffff760;
      in_stack_fffff75c = (CStrList_vtable *)0x0;
      iVar1 = 1;
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (this_ptr_00,(uint)pCVar4,(uint)in_stack_fffff754,(uint)in_stack_fffff758,
             (uint)in_stack_fffff75c,(uint)in_stack_fffff760,(uint)in_stack_fffff764);
  return iVar1;
}
