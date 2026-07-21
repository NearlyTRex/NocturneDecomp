// Name: shape_edittool.cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0
// Address: 004748b0
// Address Range: [[004748b0, 00474ade]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0(int *param_1,char *param_2,char *param_3)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CStrList_populateFromFilesNoDuplicates_FUN_004748b0(int *param_1,char *param_2,char *param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  char local_844 [796];
  char local_528 [276];
  byte local_414 [260];
  char local_310;
  byte local_30f [255];
  byte local_210 [256];
  char local_110 [256];
  
  bVar8 = 0;
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    pcVar7 = local_110;
    do {
      cVar1 = *param_3;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = param_3[1];
      param_3 = param_3 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
  }
  else {
    _sprintf(local_110,"%s\\%s",param_2,param_3);
  }
  if (0x01E528D0 != 0) {
    engine_pod_cpp_CPod_initSearch_FUN_004f8d50(0x01E528D0,local_110,local_844);
    while (local_844[0] != '\0') {
      splitpath(local_844,0,0,local_210,&local_310);
      if (local_310 == '.') {
        uVar5 = 0xffffffff;
        pcVar7 = &local_310;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
        } while (cVar1 != '\0');
        memmove(&local_310,local_30f,~uVar5 - 1);
      }
      makepath(local_414,0,0,local_210,&local_310);
      iVar2 = shape_edittool_cpp_CStrList_findString_FUN_00474140(param_1,local_414);
      if (iVar2 < 0) {
        shape_edittool_cpp_CStrList_add_FUN_00473cb0(param_1,local_414);
      }
      engine_pod_cpp_CPod_getNextSearchResult_FUN_004f8da0(0x01E528D0,local_844);
    }
  }
  iVar2 = *param_1;
  engine_dosio_cpp_CFileFinder_ctor_FUN_00456c00(local_528);
  engine_dosio_cpp_CFileFinder_openSearch_FUN_00456c40(local_528,local_110);
  do {
    if (local_528[0] == '\0') {
      engine_dosio_cpp_CFileFinder_closeSearch_FUN_00456d40(local_528);
      engine_dosio_cpp_CFileFinder_dtor_FUN_00456c20(local_528,0);
      return;
    }
    iVar6 = 0;
    if (0 < iVar2) {
      do {
        uVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_00474080(param_1,iVar6,local_528);
        iVar4 = _stricmp(uVar3);
        if (iVar4 == 0) goto LAB_00474a35;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar2);
    }
    shape_edittool_cpp_CStrList_add_FUN_00473cb0(param_1,local_528);
LAB_00474a35:
    engine_dosio_cpp_CFileFinder_findNext_FUN_00456cc0(local_528);
  } while( true );
}
