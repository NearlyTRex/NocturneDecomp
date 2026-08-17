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
  char *format;
  int string_index;
  int iVar3;
  uint in_stack_fffff97c;
  char local_484 [512];
  CPickList local_284;
  char local_114 [260];
  
  shape_edittool_cpp_CPickList_ctor_FUN_00474c90(&local_284);
  shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004746b0
            (&local_284.base,search_directory,file_pattern);
  if (local_284.base.item_count < 1) {
    format = support_newmsg_cpp_getLocalizedString_FUN_004ee370("No files found");
    shape_edittool_cpp_CEditorTools_showError_FUN_0046fcd0(this_ptr,format);
    iVar2 = 0;
  }
  else {
    shape_edittool_cpp_CStrList_sortAll_FUN_00473fd0(&local_284.base);
    iVar3 = -1;
    iVar2 = iVar3;
    if (((flags & 1) != 0) && (string_index = 0, 0 < local_284.base.item_count)) {
      do {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090
                  (&local_284.base,&stack0xfffff97c,string_index,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090
                  (&local_284.base,local_484,string_index,1);
        makepath
                  (local_114,(char *)0x0,(char *)0x0,&stack0xfffff97c,local_484);
        iVar1 = _stricmp(local_114,output_filename);
        iVar2 = string_index;
        if (iVar1 == 0) break;
        string_index = string_index + 1;
        iVar2 = iVar3;
      } while (string_index < local_284.base.item_count);
    }
    iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                      (&local_284,dialog_title,iVar2,in_stack_fffff97c);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else {
      shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(&local_284.base,&stack0xfffff97c,iVar2,0);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(&local_284.base,local_484,iVar2,1);
      makepath
                (output_filename,(char *)0x0,(char *)0x0,&stack0xfffff97c,local_484);
      iVar2 = 1;
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(&local_284,0);
  return iVar2;
}
