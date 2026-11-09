// Name: unkafter_winrun.cpp_FUN_00582680
// Address: 00582680
// Address Range: [[00582680, 00582825]]
// Convention: unknown
// Signature: void unkafter_winrun_cpp_FUN_00582680(undefined4 param_1)

#include "nocturne.h"

void unkafter_winrun_cpp_FUN_00582680(uint param_1)

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
    FUN_005a28c0(auStack_120,"7Controller_%d_type" + 1,iVar3);
    engine_ini_cpp_FUN_004d8c90(param_1,auStack_120,*(uint *)(iStack_18 + 0x2d22c24));
    if (*(int *)(iStack_18 + 0x2d22c24) != 0) {
      FUN_005a28c0(auStack_120,"Controller_%d_pc_stick",iVar3);
      engine_ini_cpp_FUN_004d8c90(param_1,auStack_120,*(uint *)(iStack_1c + 0x2d22ed4));
      iVar1 = 0;
      iStack_14 = iStack_18;
      iVar2 = iStack_20;
      do {
        while ((*(int *)(iStack_14 + 0x2d22c24) == 0 || (*(int *)(iStack_14 + 0x2d22c24) == 4))) {
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + 0xc;
          if (3 < iVar1) goto LAB_005826e7;
        }
        FUN_005a28c0(auStack_120,"Controller_%d_axis_%d_min",iVar3,iVar1);
        engine_ini_cpp_FUN_004d8c90(param_1,auStack_120,*(uint *)(iVar2 + 0x2d22ee4));
        FUN_005a28c0(auStack_120,"Controller_%d_axis_%d_max",iVar3,iVar1);
        engine_ini_cpp_FUN_004d8c90(param_1,auStack_120,*(uint *)(iVar2 + 0x2d22ee8));
        FUN_005a28c0(auStack_120,"Controller_%d_axis_%d_center",iVar3,iVar1);
        engine_ini_cpp_FUN_004d8c90(param_1,auStack_120,*(uint *)(iVar2 + 0x2d22eec));
        iVar1 = iVar1 + 1;
        iVar2 = iVar2 + 0xc;
      } while (iVar1 < 4);
    }
LAB_005826e7:
    iVar3 = iVar3 + 1;
    iStack_20 = iStack_20 + 0x30;
    iStack_1c = iStack_1c + 4;
    iStack_18 = iStack_18 + 0xac;
    if (3 < iVar3) {
      return;
    }
  } while( true );
}
