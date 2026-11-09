// Name: shape_edittool.cpp_FUN_0049a480
// Address: 0049a480
// Address Range: [[0049a480, 0049a61d]]
// Convention: unknown
// Signature: void shape_edittool_cpp_FUN_0049a480(CStrList *param_1,char *param_2,char *param_3)

#include "nocturne.h"

void shape_edittool_cpp_FUN_0049a480(CStrList *param_1,char *param_2,char *param_3)

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
  
  engine_dosio_cpp_FUN_00479580(param_2,acStack_8,acStack_108,acStack_308,acStack_408);
  engine_dosio_cpp_FUN_004795b0(acStack_208,(char *)0x0,acStack_108,acStack_308,acStack_408);
  engine_dosio_cpp_FUN_00479580(param_3,(char *)0x0,(char *)0x0,acStack_308,acStack_408);
  engine_dosio_cpp_FUN_004795b0(acStack_50c,acStack_8,acStack_208,acStack_308,acStack_408);
  engine_dosio_cpp_CFileFinder_ctor_FUN_00479320(&CStack_828);
  engine_dosio_cpp_CFileFinder_openSearch_FUN_00479360(&CStack_828,acStack_50c);
  while (CStack_828._0_1_ != '\0') {
    if ((CStack_828._256_1_ & 4) == 0) {
      engine_dosio_cpp_FUN_00479580
                ((char *)&CStack_828,(char *)0x0,(char *)0x0,acStack_308,acStack_408);
      engine_dosio_cpp_FUN_004795b0(acStack_714,acStack_8,acStack_208,acStack_308,acStack_408);
      engine_dosio_cpp_getFullPath_FUN_00479720(acStack_610,acStack_714);
      shape_edittool_cpp_CStrList_add_FUN_004994d0(param_1,acStack_610);
    }
    engine_dosio_cpp_CFileFinder_findNext_FUN_004793e0(&CStack_828);
  }
  engine_dosio_cpp_CFileFinder_closeSearch_FUN_00479460(&CStack_828);
  engine_dosio_cpp_CFileFinder_dtor_FUN_00479340(&CStack_828,0);
  return;
}
