// Name: unkafter_winrun.cpp_FUN_0058282c
// Address: 0058282c
// Address Range: [[0058282c, 005829ab]]
// Convention: unknown
// Signature: void unkafter_winrun_cpp_FUN_0058282c(undefined4 param_1)

#include "nocturne.h"

void unkafter_winrun_cpp_FUN_0058282c(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char acStack_124 [256];
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar3 = 0;
  iStack_1c = 0x2d22ee4;
  do {
    uStack_24 = 0;
    _sprintf(acStack_124,"Controller_%d_type");
    engine_ini_cpp_FUN_004d8c30(param_1,acStack_124,&uStack_24);
    iStack_20 = iVar3;
    _sprintf(acStack_124,"Controller_%d_pc_port");
    engine_ini_cpp_FUN_004d8c30(param_1,acStack_124,&iStack_20);
    unkafter_winrun_cpp_FUN_005823a0(iVar3,uStack_24,iStack_20);
    iVar1 = 0;
    iStack_18 = iStack_1c;
    iStack_14 = iStack_1c + 8;
    iVar2 = iStack_1c + 4;
    do {
      _sprintf(acStack_124,"Controller_%d_axis_%d_min");
      engine_ini_cpp_FUN_004d8c30(param_1,acStack_124,iVar1 * 0xc + iStack_18);
      _sprintf(acStack_124,"Controller_%d_axis_%d_max");
      engine_ini_cpp_FUN_004d8c30(param_1,acStack_124,iVar2);
      _sprintf(acStack_124,"Controller_%d_axis_%d_center");
      engine_ini_cpp_FUN_004d8c30(param_1,acStack_124,iStack_14);
      iVar2 = iVar2 + 0xc;
      iStack_14 = iStack_14 + 0xc;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
    iStack_1c = iStack_1c + 0x30;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}
