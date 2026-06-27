// Name: shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
// Address: 0049f270
// MANUAL RECONSTRUCTION
// Address Range: [[0049f270, 0049f41a]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools *this_ptr,char *dialog_title,char *search_directory,char *file_pattern,char *output_filename,uint flags)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270(CEditorTools *this_ptr,char *dialog_title,char *search_directory,char *file_pattern,char *output_filename,uint flags)

{
  int iVar1;
  int chosen_index;
  int default_index;
  int file_index;
  int iVar2;
  int no_selection;
  CPickList local_8bc;
  char local_514 [512];
  char local_314 [512];
  char local_114 [260];
  
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_8bc);
  shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
            (&local_8bc.base,search_directory,file_pattern);
  if (local_8bc.base.item_count < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (this_ptr,support_newmsg_cpp_getLocalizedString_FUN_005441f0("No files found"));
    iVar2 = 0;
  }
  else {
    shape_edittool_cpp_CStrList_sortAll_FUN_004a2ec0(&local_8bc.base);
    no_selection = -1;
    default_index = no_selection;
    if (((flags & 1) != 0) && (file_index = 0, 0 < local_8bc.base.item_count)) {
      do {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_8bc.base,local_314,file_index,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                  (&local_8bc.base,local_514,file_index,1);
        engine_dosio_cpp_makePath_FUN_00481f50
                  (local_114,(char *)0x0,(char *)0x0,local_314,local_514);
        iVar1 = _stricmp(local_114,output_filename);
        default_index = file_index;
        if (iVar1 == 0) break;
        file_index = file_index + 1;
        default_index = no_selection;
      } while (file_index < local_8bc.base.item_count);
    }
    chosen_index = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               (&local_8bc,dialog_title,default_index,0);
    if (chosen_index < 0) {
      iVar2 = 0;
    }
    else {
      shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_8bc.base,local_314,chosen_index,0);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80(&local_8bc.base,local_514,chosen_index,1);
      engine_dosio_cpp_makePath_FUN_00481f50
                (output_filename,(char *)0x0,(char *)0x0,local_314,local_514);
      iVar2 = 1;
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_8bc,0);
  return iVar2;
}
