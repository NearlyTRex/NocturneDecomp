// Name: shape_edittool.cpp_CStrList_populateFromFileSearch_FUN_004746b0
// Address: 004746b0
// Address Range: [[004746b0, 004748a4]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004746b0(CStrList *this_ptr,char *directory_path,char *file_pattern)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004746b0(CStrList *this_ptr,char *directory_path,char *file_pattern)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  byte bVar4;
  CPodSearchContext local_844;
  CFileFinder local_528;
  char local_414 [260];
  char local_310 [256];
  char local_210;
  byte local_20f [255];
  char local_110 [256];
  
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
    _sprintf(local_310,"%s\\%s");
  }
  if (g_CPod_PTR_005be1cc != (CPod *)0x0) {
    engine_pod_cpp_CPod_initSearch_FUN_004f8d50(g_CPod_PTR_005be1cc,local_310,&local_844);
    while (local_844.current_file_info.found_path[0] != '\0') {
      splitpath
                ((char *)&local_844,(char *)0x0,(char *)0x0,local_110,&local_210);
      if (local_210 == '.') {
        uVar2 = 0xffffffff;
        pcVar3 = &local_210;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + (uint)bVar4 * -2 + 1;
        } while (cVar1 != '\0');
        memmove(&local_210,local_20f,~uVar2 - 1);
      }
      makepath(local_414,(char *)0x0,(char *)0x0,local_110,&local_210);
      shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_00474460
                (this_ptr,local_414,local_844.current_file_info.target_path,
                 local_844.current_file_info.file_size,local_844.current_file_info.timestamp);
      engine_pod_cpp_CPod_getNextSearchResult_FUN_004f8da0(g_CPod_PTR_005be1cc,&local_844);
    }
  }
  engine_dosio_cpp_CFileFinder_ctor_FUN_00456c00(&local_528);
  engine_dosio_cpp_CFileFinder_openSearch_FUN_00456c40(&local_528,local_310);
  while (local_528.filename[0] != '\0') {
    shape_edittool_cpp_CStrList_insertSortedFileRecord_FUN_00474460
              (this_ptr,local_528.filename,(char *)0x0,local_528.file_size,local_528.timestamp);
    engine_dosio_cpp_CFileFinder_findNext_FUN_00456cc0(&local_528);
  }
  engine_dosio_cpp_CFileFinder_closeSearch_FUN_00456d40(&local_528);
  engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(&local_528,0);
  return;
}
