// Name: shape_edittool.cpp_FUN_0047c970
// Address: 0047c970
// Address Range: [[0047c970, 0047cb1a]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_FUN_0047c970(CEditorTools *this_ptr,char *dialog_title,char *search_directory,char *file_pattern,char *output_filename,uint flags)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_FUN_0047c970(CEditorTools *this_ptr,char *dialog_title,char *search_directory,char *file_pattern,char *output_filename,uint flags)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  int string_index;
  int iVar4;
  CPickList local_8d4;
  char local_514 [512];
  char local_314 [512];
  char local_114 [260];
  
  shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&local_8d4);
  shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_00481870
            ((CStrList *)&local_8d4,search_directory,file_pattern);
  if ((int)local_8d4._0_4_ < 1) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("No files found");
    shape_edittool_cpp_FUN_0047be40(this_ptr,pcVar3);
    iVar2 = 0;
  }
  else {
    shape_edittool_cpp_CStrList_sortAll_FUN_00481190((CStrList *)&local_8d4);
    iVar4 = -1;
    iVar2 = iVar4;
    if (((flags & 1) != 0) && (string_index = 0, 0 < (int)local_8d4._0_4_)) {
      do {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_00481250
                  ((CStrList *)&local_8d4,local_314,string_index,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_00481250
                  ((CStrList *)&local_8d4,local_514,string_index,1);
        engine_dosio_cpp_FUN_004610a0(local_114,(char *)0x0,(char *)0x0,local_314,local_514);
        iVar1 = _stricmp(local_114,output_filename);
        iVar2 = string_index;
        if (iVar1 == 0) break;
        string_index = string_index + 1;
        iVar2 = iVar4;
      } while (string_index < (int)local_8d4._0_4_);
    }
    iVar2 = shape_edittool_cpp_FUN_00482250(&local_8d4,dialog_title,iVar2,0);
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else {
      shape_edittool_cpp_CStrList_getFieldAt_FUN_00481250((CStrList *)&local_8d4,local_314,iVar2,0);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_00481250((CStrList *)&local_8d4,local_514,iVar2,1);
      engine_dosio_cpp_FUN_004610a0(output_filename,(char *)0x0,(char *)0x0,local_314,local_514);
      iVar2 = 1;
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&local_8d4,0);
  return iVar2;
}
