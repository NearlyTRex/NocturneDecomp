// Name: shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550
// Address: 00470550
// Address Range: [[00470550, 00470721]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_00470550(CEditorTools *this_ptr,char *dialog_title,char *search_directory,char *file_pattern,char *output_filename,uint flags)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_00470550(CEditorTools *this_ptr,char *dialog_title,char *search_directory,char *file_pattern,char *output_filename,uint flags)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int string_index;
  int iVar4;
  char local_684 [512];
  char local_484 [512];
  CStrList local_284 [23];
  char local_114 [260];
  
  shape_edittool_cpp_FUN_00474c90(local_284);
  shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004746b0
            (local_284,search_directory,file_pattern);
  if (local_284[0].item_count < 1) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("No files found");
    shape_edittool_cpp_FUN_0046fcd0(this_ptr,pcVar3);
    iVar2 = 0;
  }
  else {
    shape_edittool_cpp_CStrList_sortAll_FUN_00473fd0(local_284);
    iVar4 = -1;
    iVar2 = iVar4;
    if (((flags & 1) != 0) && (string_index = 0, 0 < local_284[0].item_count)) {
      do {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(local_284,local_684,string_index,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(local_284,local_484,string_index,1);
        makepath(local_114,(char *)0x0,(char *)0x0,local_684,local_484);
        iVar1 = _stricmp(local_114,output_filename);
        iVar2 = string_index;
        if (iVar1 == 0) break;
        string_index = string_index + 1;
        iVar2 = iVar4;
      } while (string_index < local_284[0].item_count);
    }
    iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                      (local_284,dialog_title,iVar2);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else {
      shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(local_284,local_684,iVar2,0);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(local_284,local_484,iVar2,1);
      makepath(output_filename,(char *)0x0,(char *)0x0,local_684,local_484);
      iVar2 = 1;
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_00474cf0((CPickList *)local_284,0);
  return iVar2;
}
