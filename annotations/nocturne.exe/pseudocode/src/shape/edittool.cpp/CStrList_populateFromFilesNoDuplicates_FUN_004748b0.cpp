// Name: shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0
// Address: 004748b0
// Address Range: [[004748b0, 00474ade]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0(CStrList *this_ptr,char *directory_path,char *file_pattern)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0(CStrList *this_ptr,char *directory_path,char *file_pattern)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int index;
  byte bVar6;
  CFileFinder *str2;
  CPodSearchContext local_844;
  CFileFinder local_528;
  char local_414 [260];
  char local_310;
  byte local_30f [255];
  char local_210 [256];
  char local_110 [256];
  
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
    _sprintf(local_110,"%s\\%s");
  }
  if (g_CPod_PTR_005be1cc != (CPod *)0x0) {
    engine_pod_cpp_CPod_initSearch_FUN_004f8d50(g_CPod_PTR_005be1cc,local_110,&local_844);
    while (local_844.current_file_info.found_path[0] != '\0') {
      splitpath
                ((char *)&local_844,(char *)0x0,(char *)0x0,local_210,&local_310);
      if (local_310 == '.') {
        uVar5 = 0xffffffff;
        pcVar3 = &local_310;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar3;
          pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
        } while (cVar1 != '\0');
        memmove(&local_310,local_30f,~uVar5 - 1);
      }
      makepath(local_414,(char *)0x0,(char *)0x0,local_210,&local_310);
      iVar2 = shape_edittool_cpp_CStrList_findString_FUN_00474140(this_ptr,local_414);
      if (iVar2 < 0) {
        shape_edittool_cpp_CStrList_add_FUN_00473cb0(this_ptr,local_414);
      }
      engine_pod_cpp_CPod_getNextSearchResult_FUN_004f8da0(g_CPod_PTR_005be1cc,&local_844);
    }
  }
  iVar2 = this_ptr->item_count;
  engine_dosio_cpp_CFileFinder_ctor_FUN_00456c00(&local_528);
  engine_dosio_cpp_CFileFinder_openSearch_FUN_00456c40(&local_528,local_110);
  do {
    if (local_528.filename[0] == '\0') {
      engine_dosio_cpp_CFileFinder_closeSearch_FUN_00456d40(&local_528);
      engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(&local_528,0);
      return;
    }
    index = 0;
    if (0 < iVar2) {
      do {
        str2 = &local_528;
        pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(this_ptr,index);
        iVar4 = _stricmp(pcVar3,str2->filename);
        if (iVar4 == 0) goto LAB_00474a35;
        index = index + 1;
      } while (index < iVar2);
    }
    shape_edittool_cpp_CStrList_add_FUN_00473cb0(this_ptr,local_528.filename);
LAB_00474a35:
    engine_dosio_cpp_CFileFinder_findNext_FUN_00456cc0(&local_528);
  } while( true );
}
