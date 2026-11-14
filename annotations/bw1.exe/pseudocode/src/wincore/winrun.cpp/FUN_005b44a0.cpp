// Name: wincore_winrun.cpp_FUN_005b44a0
// Address: 005b44a0
// Address Range: [[005b44a0, 005b4645]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_FUN_005b44a0(undefined4 param_1)

#include "nocturne.h"

void wincore_winrun_cpp_FUN_005b44a0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char acStack_120 [256];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar3 = 0;
  iStack_18 = 0;
  iStack_20 = 0;
  iStack_1c = 0;
  do {
    _sprintf(acStack_120,"7Controller_%d_type" + 1);
    engine_ini_cpp_FUN_004f4d70(param_1,acStack_120,*(uint *)(iStack_18 + 0x2c9cf14));
    if (*(int *)(iStack_18 + 0x2c9cf14) != 0) {
      _sprintf(acStack_120,"Controller_%d_pc_stick");
      engine_ini_cpp_FUN_004f4d70(param_1,acStack_120,*(uint *)(iStack_1c + 0x2c9d1c4));
      iVar1 = 0;
      iStack_14 = iStack_18;
      iVar2 = iStack_20;
      do {
        while ((*(int *)(iStack_14 + 0x2c9cf14) == 0 || (*(int *)(iStack_14 + 0x2c9cf14) == 4))) {
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + 0xc;
          if (3 < iVar1) goto LAB_005b4507;
        }
        _sprintf(acStack_120,"Controller_%d_axis_%d_min");
        engine_ini_cpp_FUN_004f4d70(param_1,acStack_120,*(uint *)(iVar2 + 0x2c9d1d4));
        _sprintf(acStack_120,"Controller_%d_axis_%d_max");
        engine_ini_cpp_FUN_004f4d70(param_1,acStack_120,*(uint *)(iVar2 + 0x2c9d1d8));
        _sprintf(acStack_120,"Controller_%d_axis_%d_center");
        engine_ini_cpp_FUN_004f4d70(param_1,acStack_120,*(uint *)(iVar2 + 0x2c9d1dc));
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0xc;
      } while (iVar1 < 4);
    }
LAB_005b4507:
    iVar3 = iVar3 + 1;
    iStack_20 = iStack_20 + 0x30;
    iStack_1c = iStack_1c + 4;
    iStack_18 = iStack_18 + 0xac;
    if (3 < iVar3) {
      return;
    }
  } while( true );
}
