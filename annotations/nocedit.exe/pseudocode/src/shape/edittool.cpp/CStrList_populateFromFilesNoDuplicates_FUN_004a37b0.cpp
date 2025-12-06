// Name: shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
// Address: 004a37b0
// Address Range: [[004a37b0, 004a39de]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0(CStrList * this_ptr, char * directory_path, char * file_pattern)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
          (CStrList *this_ptr,char *directory_path,char *file_pattern)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int index;
  BADSPACEBASE *in_ESP;
  byte bVar6;
  char in_stack_fffff7c0;
  CStrList *in_stack_fffff7c4;
  byte auStack_82c [780];
  byte auStack_520 [8];
  CFileFinder CStack_518;
  char acStack_404 [4];
  char acStack_400 [244];
  char acStack_30c [4];
  char cStack_308;
  byte auStack_307 [3];
  char acStack_304 [248];
  char acStack_20c [8];
  char acStack_204 [244];
  char local_110 [8];
  char acStack_108 [248];
  
  bVar6 = 0;
  if ((directory_path == (char *)0x0) || (*directory_path == '\0')) {
    pcVar3 = local_110;
    do {
      cVar1 = *file_pattern;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = file_pattern[1];
      file_pattern = file_pattern + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
  }
  else {
    crt_stdio_c_sprintf_FUN_005fdbd0(local_110,"%s\\%s",directory_path,file_pattern);
  }
  if (g_CDemonPodPtr != (CDemonPod *)0x0) {
    engine_pod_cpp_CPod_initSearch_FUN_00550ea0
              ((CPod *)g_CDemonPodPtr,local_110 + 4,(CPodSearchContext *)&stack0xfffff7c0);
    while (in_stack_fffff7c0 != '\0') {
      engine_dosio_c_splitPath_FUN_00481f20
                (&stack0xfffff7c0,(char *)0x0,(char *)0x0,acStack_20c,acStack_30c);
      if (cStack_308 == '.') {
        uVar5 = 0xffffffff;
        pcVar3 = &cStack_308;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
        } while (cVar1 != '\0');
        crt_string_c_memmove_FUN_005fe5e0(&cStack_308,auStack_307,~uVar5 - 1);
      }
      engine_dosio_c_makePath_FUN_00481f50
                ((char *)&CStack_518.search_handle,(char *)0x0,(char *)0x0,acStack_204,acStack_304);
      in_stack_fffff7c0 = -0x56;
      in_stack_fffff7c4 = this_ptr;
      iVar2 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(this_ptr,acStack_404);
      if (iVar2 < 0) {
        in_stack_fffff7c4 = (CStrList *)0x4a39b0;
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(this_ptr,acStack_400);
      }
      engine_pod_cpp_CPod_getNextSearchResult_FUN_00550ef0
                ((CPod *)g_CDemonPodPtr,(CPodSearchContext *)auStack_82c);
    }
  }
  iVar2 = this_ptr->item_count;
  engine_dosio_c_CFileFinder_ctor_FUN_00481c30((CFileFinder *)(auStack_82c + 0x308));
  engine_dosio_c_CFileFinder_openSearch_FUN_00481c70((CFileFinder *)auStack_520,acStack_108);
  do {
    if (auStack_520[4] == '\0') {
      engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70((CFileFinder *)(auStack_520 + 4));
      engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&CStack_518,0);
      return;
    }
    index = 0;
    if (0 < iVar2) {
      do {
        pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,index);
        iVar4 = crt_string_c_stricmp_FUN_005fe7f0(pcVar3,(char *)in_stack_fffff7c4);
        if (iVar4 == 0) goto LAB_004a3935;
        index = index + 1;
      } while (index < iVar2);
    }
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(this_ptr,auStack_520);
LAB_004a3935:
    engine_dosio_c_CFileFinder_findNext_FUN_00481cf0((CFileFinder *)auStack_520);
  } while( true );
}
