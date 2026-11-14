// Name: wincore_winrun.cpp_FUN_00590b10
// Address: 00590b10
// Address Range: [[00590b10, 00590c8b]]
// Convention: unknown
// Signature: void wincore_winrun_cpp_FUN_00590b10(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void wincore_winrun_cpp_FUN_00590b10(void)

{
  int iVar1;
  int iVar2;
  char acStack_124 [256];
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar2 = 0;
  iStack_1c = 0x2665984;
  do {
    uStack_24 = 0;
    _sprintf(acStack_124,"Controller_%d_type");
    engine_ini_cpp_FUN_004d8b20();
    iStack_20 = iVar2;
    _sprintf(acStack_124,"Controller_%d_pc_port");
    engine_ini_cpp_FUN_004d8b20();
    wincore_winrun_cpp_FUN_00590680(iVar2,uStack_24,iStack_20);
    iVar1 = 0;
    iStack_18 = iStack_1c;
    iStack_14 = iStack_1c + 8;
    do {
      _sprintf(acStack_124,"Controller_%d_axis_%d_min");
      engine_ini_cpp_FUN_004d8b20();
      _sprintf(acStack_124,"Controller_%d_axis_%d_max");
      engine_ini_cpp_FUN_004d8b20();
      _sprintf(acStack_124,"Controller_%d_axis_%d_center");
      engine_ini_cpp_FUN_004d8b20();
      iStack_14 = iStack_14 + 0xc;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    iStack_1c = iStack_1c + 0x30;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}
