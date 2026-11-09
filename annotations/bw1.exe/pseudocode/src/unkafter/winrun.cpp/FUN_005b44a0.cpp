// Name: unkafter_winrun.cpp_FUN_005b44a0
// Address: 005b44a0
// Address Range: [[005b44a0, 005b4645]]
// Convention: unknown
// Signature: void unkafter_winrun_cpp_FUN_005b44a0(undefined4 param_1)

#include "nocturne.h"

void unkafter_winrun_cpp_FUN_005b44a0(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte auStack_120 [256];
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar3 = 0;
  iStack_18 = 0;
  iStack_20 = 0;
  iStack_1c = 0;
  do {
    FUN_005bfb40(auStack_120,"7Controller_%d_type" + 1,iVar3);
    engine_ini_cpp_FUN_004f4d70(param_1,auStack_120,*(uint *)(iStack_18 + 0x2c9cf14));
    if (*(int *)(iStack_18 + 0x2c9cf14) != 0) {
      FUN_005bfb40(auStack_120,"Controller_%d_pc_stick",iVar3);
      engine_ini_cpp_FUN_004f4d70(param_1,auStack_120,*(uint *)(iStack_1c + 0x2c9d1c4));
      iVar1 = 0;
      iStack_14 = iStack_18;
      iVar2 = iStack_20;
      do {
        while ((*(int *)(iStack_14 + 0x2c9cf14) == 0 || (*(int *)(iStack_14 + 0x2c9cf14) == 4))) {
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + 0xc;
          if (3 < iVar1) goto LAB_005b4507;
        }
        FUN_005bfb40(auStack_120,"Controller_%d_axis_%d_min",iVar3,iVar1);
        engine_ini_cpp_FUN_004f4d70(param_1,auStack_120,*(uint *)(iVar2 + 0x2c9d1d4));
        FUN_005bfb40(auStack_120,"Controller_%d_axis_%d_max",iVar3,iVar1);
        engine_ini_cpp_FUN_004f4d70(param_1,auStack_120,*(uint *)(iVar2 + 0x2c9d1d8));
        FUN_005bfb40(auStack_120,"Controller_%d_axis_%d_center",iVar3,iVar1);
        engine_ini_cpp_FUN_004f4d70(param_1,auStack_120,*(uint *)(iVar2 + 0x2c9d1dc));
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
