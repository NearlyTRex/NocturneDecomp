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
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  char **in_stack_fffff64c;
  CStrList_vtable *in_stack_fffff650;
  char **in_stack_fffff654;
  CStrList_vtable *in_stack_fffff658;
  CStrList_vtable *in_stack_fffff65c;
  CStrList_vtable *in_stack_fffff660;
  uint in_stack_fffff664;
  byte auStack_61c [16];
  char cStack_60c;
  char acStack_2fc [4];
  char acStack_2f8 [496];
  char local_108 [8];
  char acStack_100 [20];
  char acStack_ec [228];
  
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
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff638);
  engine_pod_cpp_CPod_initSearch_FUN_00550ea0
            ((CPod *)g_CDemonPodPtr,acStack_100,(CPodSearchContext *)auStack_61c);
  while (auStack_61c[4] != '\0') {
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_2fc,"%s\t%s",auStack_61c + 4);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff644,acStack_2f8);
    engine_pod_cpp_CPod_getNextSearchResult_FUN_00550ef0
              ((CPod *)g_CDemonPodPtr,(CPodSearchContext *)(auStack_61c + 0xc));
    auStack_61c[4] = cStack_60c;
  }
  if ((int)in_stack_fffff64c < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"No files found matching %s");
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffff650,0,(uint)in_stack_fffff650,(uint)in_stack_fffff654,
               (uint)in_stack_fffff658,(uint)in_stack_fffff65c,(uint)in_stack_fffff660);
    return;
  }
  shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xfffff64c);
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            ((CPickList *)&stack0xfffff650,acStack_ec,-1,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffff654,0,(uint)in_stack_fffff654,(uint)in_stack_fffff658,
             (uint)in_stack_fffff65c,(uint)in_stack_fffff660,in_stack_fffff664);
  return;
}
