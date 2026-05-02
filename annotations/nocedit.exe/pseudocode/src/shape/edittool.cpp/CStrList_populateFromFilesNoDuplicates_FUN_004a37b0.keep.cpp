// Name: shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0
// Address: 004a37b0
// MANUAL RECONSTRUCTION
// Address Range: [[004a37b0, 004a39de]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0(CStrList *this_ptr,char *directory_path,char *file_pattern)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004a37b0(CStrList *this_ptr,char *directory_path,char *file_pattern)

{
  char cVar2;
  int iVar3;
  int iVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int index;
  char *pcVar4;
  byte bVar6;
  CFileFinder *str2_00;
  CPodSearchContext local_844;
  CFileFinder local_528;
  char local_414 [260];
  char local_310 [256];
  char local_210 [256];
  char local_110 [256];
  char cVar1;
  
  bVar6 = 0;
  if ((directory_path == (char *)0x0) || (*directory_path == '\0')) {
    pcVar4 = local_110;
    do {
      cVar2 = *file_pattern;
      *pcVar4 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = file_pattern[1];
      file_pattern = file_pattern + 2;
      pcVar4[1] = cVar2;
      pcVar4 = pcVar4 + 2;
    } while (cVar2 != '\0');
  }
  else {
    _sprintf(local_110,"%s\\%s",directory_path,file_pattern);
  }
  if (g_CDemonPodPtr != (CDemonPod *)0x0) {
    engine_pod_cpp_CPod_initSearch_FUN_00550ea0((CPod *)g_CDemonPodPtr,local_110,&local_844);
    while (local_844.current_file_info.found_path[0] != '\0') {
      engine_dosio_c_splitPath_FUN_00481f20
                ((char *)&local_844,(char *)0x0,(char *)0x0,local_210,local_310);
      if (local_310[0] == '.') {
        uVar5 = 0xffffffff;
        pcVar4 = local_310;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
        } while (cVar1 != '\0');
        memmove(local_310,local_310 + 1,~uVar5 - 1);
      }
      engine_dosio_c_makePath_FUN_00481f50(local_414,(char *)0x0,(char *)0x0,local_210,local_310);
      iVar2 = shape_edittool_cpp_CStrList_findString_FUN_004a3030(this_ptr,local_414);
      if (iVar2 < 0) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(this_ptr,local_414);
      }
      engine_pod_cpp_CPod_getNextSearchResult_FUN_00550ef0((CPod *)g_CDemonPodPtr,&local_844);
    }
  }
  iVar3 = this_ptr->item_count;
  engine_dosio_c_CFileFinder_ctor_FUN_00481c30(&local_528);
  engine_dosio_c_CFileFinder_openSearch_FUN_00481c70(&local_528,local_110);
  do {
    if (local_528.filename[0] == '\0') {
      engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70(&local_528);
      engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&local_528,0);
      return;
    }
    index = 0;
    if (0 < iVar3) {
      do {
        str2_00 = &local_528;
        pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(this_ptr,index);
        iVar4 = _stricmp(pcVar3,str2_00->filename);
        if (iVar4 == 0) goto LAB_004a3935;
        index = index + 1;
      } while (index < iVar3);
    }
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(this_ptr,local_528.filename);
LAB_004a3935:
    engine_dosio_c_CFileFinder_findNext_FUN_00481cf0(&local_528);
  } while( true );
}
