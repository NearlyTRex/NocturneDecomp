// Name: core_podmain.cpp_FUN_0051c000
// Address: 0051c000
// Address Range: [[0051c000, 0051c102]]
// Convention: unknown
// Signature: void core_podmain_cpp_FUN_0051c000(int param_1)

#include "nocturne.h"

void core_podmain_cpp_FUN_0051c000(int param_1)

{
  int iVar1;
  int iVar2;
  CFileFinder CStack_170;
  byte auStack_5c [80];
  int iStack_c;
  
  iVar1 = _fopen("pod.ini",&DAT_005e2992);
  if (iVar1 == 0) {
    engine_dosio_cpp_CFileFinder_ctor_FUN_00460e10(&CStack_170);
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00460e50(&CStack_170,"*.pod");
    while (CStack_170._0_1_ != '\0') {
      (**(code **)(*(int *)(param_1 + 0x194) + 0xc))(param_1,&CStack_170);
      engine_dosio_cpp_CFileFinder_findNext_FUN_00460ed0(&CStack_170);
    }
    engine_dosio_cpp_CFileFinder_closeSearch_FUN_00460f50(&CStack_170);
    engine_dosio_cpp_CFileFinder_dtor_FUN_00460e30(&CStack_170,0);
    return;
  }
  _fscanf(iVar1,&DAT_005e29a3,&iStack_c);
  iVar2 = 0;
  if (0 < iStack_c) {
    do {
      _fscanf(iVar1,&DAT_005e29a7,auStack_5c);
      (**(code **)(*(int *)(param_1 + 0x194) + 0xc))(param_1,auStack_5c);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iStack_c);
  }
  _fclose(iVar1);
  return;
}
