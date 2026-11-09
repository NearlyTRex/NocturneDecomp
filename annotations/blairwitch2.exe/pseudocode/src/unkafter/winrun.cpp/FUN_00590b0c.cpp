// Name: unkafter_winrun.cpp_FUN_00590b0c
// Address: 00590b0c
// Address Range: [[00590b0c, 00590c8b]]
// Convention: unknown
// Signature: void unkafter_winrun_cpp_FUN_00590b0c(undefined4 param_1)

#include "nocturne.h"

void unkafter_winrun_cpp_FUN_00590b0c(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte auStack_124 [256];
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar3 = 0;
  iStack_1c = 0x2665984;
  do {
    uStack_24 = 0;
    FUN_005b7790(auStack_124,"Controller_%d_type",iVar3);
    engine_ini_cpp_FUN_004d8b20(param_1,auStack_124,&uStack_24);
    iStack_20 = iVar3;
    FUN_005b7790(auStack_124,"Controller_%d_pc_port",iVar3);
    engine_ini_cpp_FUN_004d8b20(param_1,auStack_124,&iStack_20);
    unkafter_winrun_cpp_FUN_00590680(iVar3,uStack_24,iStack_20);
    iVar1 = 0;
    iStack_18 = iStack_1c;
    iStack_14 = iStack_1c + 8;
    iVar2 = iStack_1c + 4;
    do {
      FUN_005b7790(auStack_124,"Controller_%d_axis_%d_min",iVar3,iVar1);
      engine_ini_cpp_FUN_004d8b20(param_1,auStack_124,iVar1 * 0xc + iStack_18);
      FUN_005b7790(auStack_124,"Controller_%d_axis_%d_max",iVar3,iVar1);
      engine_ini_cpp_FUN_004d8b20(param_1,auStack_124,iVar2);
      FUN_005b7790(auStack_124,"Controller_%d_axis_%d_center",iVar3,iVar1);
      engine_ini_cpp_FUN_004d8b20(param_1,auStack_124,iStack_14);
      iVar2 = iVar2 + 0xc;
      iStack_14 = iStack_14 + 0xc;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    iStack_1c = iStack_1c + 0x30;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}
