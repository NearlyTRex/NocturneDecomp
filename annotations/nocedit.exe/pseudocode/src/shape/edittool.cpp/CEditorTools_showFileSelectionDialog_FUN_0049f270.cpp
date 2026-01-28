// Name: shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
// Address: 0049f270
// Address Range: [[0049f270, 0049f41a]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270 (CEditorTools *this_ptr,char *search_pattern,char *directory,char *target_filename, int auto_select_flag)

#include "nocturne.h"

int __cdecl
shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
          (CEditorTools *this_ptr,char *search_pattern,char *directory,char *target_filename,
          int auto_select_flag)

{
  int iVar1;
  char *pcVar2;
  char *output_buffer;
  char *pcVar3;
  byte in_stack_00000018;
  uint in_stack_fffff744;
  uint in_stack_fffff748;
  char **in_stack_fffff74c;
  CStrList_vtable *in_stack_fffff750;
  uint in_stack_fffff754;
  char local_514 [512];
  char local_314 [512];
  char local_114 [260];
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff744);
  shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
            ((CStrList *)&stack0xfffff744,directory,target_filename);
  if ((int)in_stack_fffff744 < 1) {
    pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("No files found");
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(this_ptr,pcVar2);
    iVar1 = 0;
  }
  else {
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xfffff744);
    pcVar3 = (char *)0xffffffff;
    pcVar2 = pcVar3;
    if (((in_stack_00000018 & 1) != 0) && (output_buffer = (char *)0x0, 0 < (int)in_stack_fffff744))
    {
      do {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  ((CStrList *)&stack0xfffff744,(int)local_314,output_buffer,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  ((CStrList *)&stack0xfffff744,(int)local_514,output_buffer,1);
        engine_dosio_c_makePath_FUN_00481f50(local_114,(char *)0x0,(char *)0x0,local_314,local_514);
        iVar1 = crt_string_c_stricmp_FUN_005fe7f0(local_114,(char *)auto_select_flag);
        pcVar2 = output_buffer;
        if (iVar1 == 0) break;
        output_buffer = output_buffer + 1;
        pcVar2 = pcVar3;
      } while ((int)output_buffer < (int)in_stack_fffff744);
    }
    pcVar2 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               ((CPickList *)&stack0xfffff744,search_pattern,(int)pcVar2,0);
    if ((int)pcVar2 < 0) {
      iVar1 = 0;
    }
    else {
      shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                ((CStrList *)&stack0xfffff744,(int)local_314,pcVar2,0);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                ((CStrList *)&stack0xfffff744,(int)local_514,pcVar2,1);
      engine_dosio_c_makePath_FUN_00481f50
                ((char *)auto_select_flag,(char *)0x0,(char *)0x0,local_314,local_514);
      iVar1 = 1;
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffff744,0,in_stack_fffff744,in_stack_fffff748,
             (uint)in_stack_fffff74c,(uint)in_stack_fffff750,in_stack_fffff754);
  return iVar1;
}
