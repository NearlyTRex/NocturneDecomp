// Name: shape_edittool.cpp_FUN_00481e20
// Address: 00481e20
// Address Range: [[00481e20, 00481fbd]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_00481e20(CStrList *param_1,char *param_2,char *param_3)

#include "nocturne.h"

void shape_edittool_cpp_FUN_00481e20(CStrList *param_1,char *param_2,char *param_3)

{
  CFileFinder CStack_828;
  char acStack_714 [260];
  char acStack_610 [260];
  char acStack_50c [260];
  char acStack_408 [256];
  char acStack_308 [256];
  char acStack_208 [256];
  char acStack_108 [256];
  char acStack_8 [4];
  
  engine_dosio_cpp_FUN_00461070(param_2,acStack_8,acStack_108,acStack_308,acStack_408);
  engine_dosio_cpp_FUN_004610a0(acStack_208,(char *)0x0,acStack_108,acStack_308,acStack_408);
  engine_dosio_cpp_FUN_00461070(param_3,(char *)0x0,(char *)0x0,acStack_308,acStack_408);
  engine_dosio_cpp_FUN_004610a0(acStack_50c,acStack_8,acStack_208,acStack_308,acStack_408);
  engine_dosio_cpp_CFileFinder_ctor_FUN_00460e10(&CStack_828);
  engine_dosio_cpp_CFileFinder_openSearch_FUN_00460e50(&CStack_828,acStack_50c);
  while (CStack_828._0_1_ != '\0') {
    if ((CStack_828._256_1_ & 4) == 0) {
      engine_dosio_cpp_FUN_00461070
                ((char *)&CStack_828,(char *)0x0,(char *)0x0,acStack_308,acStack_408);
      engine_dosio_cpp_FUN_004610a0(acStack_714,acStack_8,acStack_208,acStack_308,acStack_408);
      engine_dosio_cpp_getFullPath_FUN_00461210(acStack_610,acStack_714);
      shape_edittool_cpp_CStrList_add_FUN_00480e70(param_1,acStack_610);
    }
    engine_dosio_cpp_CFileFinder_findNext_FUN_00460ed0(&CStack_828);
  }
  engine_dosio_cpp_CFileFinder_closeSearch_FUN_00460f50(&CStack_828);
  engine_dosio_cpp_CFileFinder_dtor_FUN_00460e30(&CStack_828,0);
  return;
}
