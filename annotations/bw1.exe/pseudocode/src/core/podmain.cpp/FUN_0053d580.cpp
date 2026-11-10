// Name: core_podmain.cpp_FUN_0053d580
// Address: 0053d580
// Address Range: [[0053d580, 0053d703]]
// Convention: unknown
// Signature: void core_podmain_cpp_FUN_0053d580(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_podmain_cpp_FUN_0053d580(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CFileFinder CStack_328;
  byte auStack_214 [256];
  byte auStack_114 [256];
  int iStack_14;
  
  iVar1 = _fopen("pod.ini",&DAT_005edb98);
  if (iVar1 == 0) {
    engine_dosio_cpp_CFileFinder_ctor_FUN_00479320(&CStack_328);
    engine_dosio_cpp_CFileFinder_openSearch_FUN_00479360(&CStack_328,"*.pod");
    while (CStack_328.filename[0] != '\0') {
      iVar1 = (**(code **)(*(int *)(param_1 + 0x194) + 0xc))(param_1,&CStack_328,auStack_114);
      if (iVar1 == 0) {
        _DAT_01d1d400 = "..\\core\\podmain.cpp";
        _DAT_01d1d404 = 0x39;
        core_main_c_FUN_005030e0("Can't mount %s: %s",&CStack_328,auStack_114);
      }
      engine_dosio_cpp_CFileFinder_findNext_FUN_004793e0(&CStack_328);
    }
    engine_dosio_cpp_CFileFinder_closeSearch_FUN_00479460(&CStack_328);
    engine_dosio_cpp_CFileFinder_dtor_FUN_00479340(&CStack_328,0);
    return;
  }
  _fscanf(iVar1,&DAT_005edbd0,&iStack_14);
  iVar3 = 0;
  if (0 < iStack_14) {
    do {
      _fscanf(iVar1,&DAT_005edbd4,auStack_214);
      iVar2 = (**(code **)(*(int *)(param_1 + 0x194) + 0xc))(param_1,auStack_214,auStack_114);
      if (iVar2 == 0) {
        _DAT_01d1d404 = 0x45;
        _DAT_01d1d400 = "..\\core\\podmain.cpp";
        core_main_c_FUN_005030e0("Can't mount %s: %s",auStack_214,auStack_114);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iStack_14);
  }
  _fclose(iVar1);
  return;
}
