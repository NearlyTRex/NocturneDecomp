// Name: cockpit_drawsurf.cpp_FUN_0045d6d0
// Address: 0045d6d0
// Address Range: [[0045d6d0, 0045d713]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0045d6d0(undefined4 param_1,int param_2,undefined4 *param_3)

#include "nocturne.h"

void cockpit_drawsurf_cpp_FUN_0045d6d0(uint param_1,int param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  
  iVar1 = param_2 + -1;
  iVar2 = 0;
  puVar4 = param_3;
  if (0 < param_2) {
    do {
      cockpit_drawsurf_cpp_FUN_0045bfb0
                (param_1,param_3[iVar1 * 2],param_3[iVar1 * 2 + 1],*puVar4,puVar4[1]);
      iVar3 = iVar2 + 1;
      iVar1 = iVar2;
      iVar2 = iVar3;
      puVar4 = puVar4 + 2;
    } while (iVar3 < param_2);
  }
  return;
}
