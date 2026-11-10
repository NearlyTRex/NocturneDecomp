// Name: shape_edittool.cpp_FUN_0049a300
// Address: 0049a300
// Address Range: [[0049a300, 0049a458]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0049a300(CStrList *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

#include "nocturne.h"

void shape_edittool_cpp_FUN_0049a300(CStrList *param_1,uint param_2,uint param_3,char *param_4)

{
  int iVar1;
  CFileFinder CStack_534;
  byte auStack_420 [260];
  char acStack_31c [260];
  byte auStack_218 [260];
  char acStack_114 [260];
  
  unkafter_dosio_cpp_FUN_00479770(param_3,0x5dc5fd,auStack_218);
  unkafter_dosio_cpp_FUN_00479770(param_2,auStack_218,acStack_114);
  engine_dosio_cpp_CFileFinder_ctor_FUN_00479320(&CStack_534);
  engine_dosio_cpp_CFileFinder_openSearch_FUN_00479360(&CStack_534,acStack_114);
  while (CStack_534.filename[0] != '\0') {
    iVar1 = _strcmp(CStack_534.filename,(char *)0x5dc5ff);
    if ((iVar1 != 0) &&
       (iVar1 = _strcmp(CStack_534.filename,(char *)0x5dc601), iVar1 != 0)
       ) {
      if (((byte)CStack_534.attributes & 4) == 0) {
        iVar1 = shape_edittool_cpp_wildcardStringMatch_FUN_0049dea0(param_4,CStack_534.filename,0);
        if (iVar1 != 0) {
          unkafter_dosio_cpp_FUN_00479770(param_3,&CStack_534,acStack_31c);
          shape_edittool_cpp_CStrList_add_FUN_004994d0(param_1,acStack_31c);
        }
      }
      else {
        unkafter_dosio_cpp_FUN_00479770(param_3,&CStack_534,auStack_420);
        shape_edittool_cpp_FUN_0049a300(param_1,param_2,auStack_420,param_4);
      }
    }
    engine_dosio_cpp_CFileFinder_findNext_FUN_004793e0(&CStack_534);
  }
  engine_dosio_cpp_CFileFinder_closeSearch_FUN_00479460(&CStack_534);
  engine_dosio_cpp_CFileFinder_dtor_FUN_00479340(&CStack_534,0);
  return;
}
