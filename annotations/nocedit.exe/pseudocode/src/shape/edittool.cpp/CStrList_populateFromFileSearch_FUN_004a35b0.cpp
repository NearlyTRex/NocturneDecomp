// Name: shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0
// Address: 004a35b0
// Address Range: [[004a35b0, 004a37a4]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0(CStrList * this_ptr, char * directory_path, char * file_pattern)

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0
          (CStrList *this_ptr,char *directory_path,char *file_pattern)

{
  char cVar1;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  char *pcVar3;
  byte bVar4;
  char in_stack_fffff7c0;
  byte auStack_830 [784];
  byte auStack_520 [8];
  CFileFinder CStack_518;
  char acStack_404 [244];
  char local_310 [8];
  char acStack_308 [252];
  char acStack_20c [4];
  char cStack_208;
  byte auStack_207 [3];
  char acStack_204 [248];
  char acStack_10c [8];
  char acStack_104 [244];
  
  bVar4 = 0;
  if ((directory_path == (char *)0x0) || (*directory_path == '\0')) {
    pcVar3 = local_310;
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
    crt_stdio_c_sprintf_FUN_005fdbd0(local_310,"%s\\%s",directory_path,file_pattern);
  }
  if (g_CDemonPodPtr != (CDemonPod *)0x0) {
    engine_pod_cpp_CPod_initSearch_FUN_00550ea0
              ((CPod *)g_CDemonPodPtr,local_310 + 4,(CPodSearchContext *)&stack0xfffff7c0);
    while (in_stack_fffff7c0 != '\0') {
      engine_dosio_c_splitPath_FUN_00481f20
                (&stack0xfffff7c0,(char *)0x0,(char *)0x0,acStack_10c,acStack_20c);
      if (cStack_208 == '.') {
        uVar2 = 0xffffffff;
        pcVar3 = &cStack_208;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
        } while (cVar1 != '\0');
        crt_string_c_memmove_FUN_005fe5e0(&cStack_208,auStack_207,~uVar2 - 1);
      }
      engine_dosio_c_makePath_FUN_00481f50
                ((char *)&CStack_518.search_handle,(char *)0x0,(char *)0x0,acStack_104,acStack_204);
      pcVar3 = auStack_830 + 0xfc;
      shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_004a3360
                (this_ptr,acStack_404,pcVar3,auStack_830._512_4_);
      in_stack_fffff7c0 = (char)pcVar3;
      engine_pod_cpp_CPod_getNextSearchResult_FUN_00550ef0
                ((CPod *)g_CDemonPodPtr,(CPodSearchContext *)auStack_830);
    }
  }
  engine_dosio_c_CFileFinder_ctor_FUN_00481c30((CFileFinder *)(auStack_830 + 0x30c));
  engine_dosio_c_CFileFinder_openSearch_FUN_00481c70((CFileFinder *)auStack_520,acStack_308);
  while (auStack_520[4] != '\0') {
    shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_004a3360
              (this_ptr,auStack_520 + 4,(char *)0x0,CStack_518.file_size);
    engine_dosio_c_CFileFinder_findNext_FUN_00481cf0((CFileFinder *)auStack_520);
  }
  engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70((CFileFinder *)(auStack_520 + 4));
  engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&CStack_518,0);
  return;
}
