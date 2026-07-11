// Name: shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004a35b0
// Address: 004a35b0
// Address Range: [[004a35b0, 004a37a4]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0(CStrList *this_ptr,char *directory_path,char *file_pattern)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004a35b0(CStrList *this_ptr,char *directory_path,char *file_pattern)

{
  char cVar2;
  uint uVar2;
  char *pcVar4;
  char *pcVar3;
  byte bVar4;
  CPodSearchContext local_844;
  CFileFinder local_528;
  char local_414 [260];
  char local_310 [256];
  char local_210;
  byte local_20f [255];
  char local_110 [256];
  char cVar1;
  
  bVar4 = 0;
  if ((directory_path == (char *)0x0) || (*directory_path == '\0')) {
    pcVar3 = local_310;
    do {
      cVar2 = *file_pattern;
      *pcVar3 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = file_pattern[1];
      file_pattern = file_pattern + 2;
      pcVar3[1] = cVar2;
      pcVar3 = pcVar3 + 2;
    } while (cVar2 != '\0');
  }
  else {
    _sprintf(local_310,"%s\\%s",directory_path,file_pattern);
  }
  if (g_CDemonPodPtr != (CDemonPod *)0x0) {
    engine_pod_cpp_CPod_initSearch_FUN_00550ea0((CPod *)g_CDemonPodPtr,local_310,&local_844);
    while (local_844.current_file_info.found_path[0] != '\0') {
      engine_dosio_cpp_splitPath_FUN_00481f20
                ((char *)&local_844,(char *)0x0,(char *)0x0,local_110,&local_210);
      if (local_210 == '.') {
        uVar2 = 0xffffffff;
        pcVar4 = &local_210;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar4 * -2 + 1;
        } while (cVar1 != '\0');
        memmove(&local_210,local_20f,~uVar2 - 1);
      }
      engine_dosio_cpp_makePath_FUN_00481f50(local_414,(char *)0x0,(char *)0x0,local_110,&local_210)
      ;
      shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_004a3360
                (this_ptr,local_414,local_844.current_file_info.target_path,
                 local_844.current_file_info.file_size,local_844.current_file_info.timestamp);
      engine_pod_cpp_CPod_getNextSearchResult_FUN_00550ef0((CPod *)g_CDemonPodPtr,&local_844);
    }
  }
  engine_dosio_cpp_CFileFinder_ctor_FUN_00481c30(&local_528);
  engine_dosio_cpp_CFileFinder_openSearch_FUN_00481c70(&local_528,local_310);
  while (local_528.filename[0] != '\0') {
    shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_004a3360
              (this_ptr,local_528.filename,(char *)0x0,local_528.file_size,local_528.timestamp);
    engine_dosio_cpp_CFileFinder_findNext_FUN_00481cf0(&local_528);
  }
  engine_dosio_cpp_CFileFinder_closeSearch_FUN_00481d70(&local_528);
  engine_dosio_cpp_CFileFinder_dtor_FUN_00481c50(&local_528,0);
  return;
}
