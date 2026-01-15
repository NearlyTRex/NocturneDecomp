// Name: engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70
// Address: 004bcb70
// Address Range: [[004bcb70, 004bcce1]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_searchMountedPods_FUN_004bcb70(CFileManager * this_ptr, char * default_wildcard)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_searchMountedPods_FUN_004bcb70
          (CFileManager *this_ptr,char *default_wildcard)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint in_stack_fffff634;
  uint in_stack_fffff638;
  char **in_stack_fffff63c;
  CStrList_vtable *in_stack_fffff640;
  uint in_stack_fffff644;
  CPodSearchContext local_624;
  char local_308 [512];
  char local_108 [256];
  
  if (default_wildcard == (char *)0x0) {
    default_wildcard = "*";
  }
  pcVar3 = local_108;
  do {
    cVar1 = *default_wildcard;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = default_wildcard[1];
    default_wildcard = default_wildcard + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  iVar2 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                    (g_CEditorToolsPtr,"Enter filename wildcard",local_108,0x100,1);
  if (iVar2 == 0) {
    return;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff634);
  engine_pod_cpp_CPod_initSearch_FUN_00550ea0((CPod *)g_CDemonPodPtr,local_108,&local_624);
  while (local_624.current_file_info.found_path[0] != '\0') {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (local_308,"%s\t%s",&local_624,local_624.current_file_info.target_path);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff634,local_308);
    engine_pod_cpp_CPod_getNextSearchResult_FUN_00550ef0((CPod *)g_CDemonPodPtr,&local_624);
  }
  if ((int)in_stack_fffff634 < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"No files found matching %s",local_108);
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffff634,0,in_stack_fffff634,in_stack_fffff638,
               (uint)in_stack_fffff63c,(uint)in_stack_fffff640,in_stack_fffff644);
    return;
  }
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xfffff634);
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            ((CPickList *)&stack0xfffff634,local_108,-1,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffff634,0,in_stack_fffff634,in_stack_fffff638,
             (uint)in_stack_fffff63c,(uint)in_stack_fffff640,in_stack_fffff644);
  return;
}
