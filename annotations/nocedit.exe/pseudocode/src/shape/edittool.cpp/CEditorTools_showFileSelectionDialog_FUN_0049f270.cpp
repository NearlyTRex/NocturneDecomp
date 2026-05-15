// Name: shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
// Address: 0049f270
// Address Range: [[0049f270, 0049f41a]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools *this_ptr,char *dialog_title,char *search_directory,char *file_pattern,char *output_filename,uint flags)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools *this_ptr,char *dialog_title,char *search_directory,char *file_pattern,char *output_filename,uint flags)

{
  int iVar1;
  char *pcVar2;
  char *pcVar1;
  char *output_buffer;
  int iVar2;
  char *pcVar3;
  CPickList local_8bc;
  char local_514 [512];
  char local_314 [512];
  char local_114 [260];
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_8bc);
  shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
            (&local_8bc.base,search_directory,file_pattern);
  if (local_8bc.base.item_count < 1) {
    pcVar1 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("No files found");
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740(this_ptr,pcVar1);
    iVar2 = 0;
  }
  else {
    shape_edittool_cpp_CStrList_sortAll_FUN_004a2ec0(&local_8bc.base);
    pcVar3 = (char *)0xffffffff;
    pcVar1 = pcVar3;
    if (((flags & 1) != 0) && (output_buffer = (char *)0x0, 0 < local_8bc.base.item_count)) {
      do {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_8bc.base,local_314,(int)output_buffer,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_8bc.base,local_514,(int)output_buffer,1);
        engine_dosio_cpp_makePath_FUN_00481f50
                  (local_114,(char *)0x0,(char *)0x0,local_314,local_514);
        iVar1 = _stricmp(local_114,output_filename);
        pcVar1 = output_buffer;
        if (iVar1 == 0) break;
        output_buffer = output_buffer + 1;
        pcVar1 = pcVar3;
      } while ((int)output_buffer < local_8bc.base.item_count);
    }
    pcVar2 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               (&local_8bc,dialog_title,(int)pcVar1,0);
    if ((int)pcVar2 < 0) {
      iVar2 = 0;
    }
    else {
      shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_8bc.base,local_314,(int)pcVar2,0);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_8bc.base,local_514,(int)pcVar2,1);
      engine_dosio_cpp_makePath_FUN_00481f50
                (output_filename,(char *)0x0,(char *)0x0,local_314,local_514);
      iVar2 = 1;
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_8bc,0);
  return iVar2;
}
