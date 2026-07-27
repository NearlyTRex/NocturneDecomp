// Name: cockpit_drawsurf.cpp_FUN_0045cc70
// Address: 0045cc70
// Address Range: [[0045cc70, 0045ccdc]]
// Convention: unknown
// Signature: void cockpit_drawsurf_cpp_FUN_0045cc70(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

#include "nocturne.h"

void cockpit_drawsurf_cpp_FUN_0045cc70(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  float10 fVar3;
  
  uVar2 = DAT_005ae6f8;
  iVar1 = DAT_005ae6f4;
  DAT_005ae6f4 = 1;
  DAT_005ae6f8 = 0;
  cockpit_drawsurf_cpp_FUN_0045cde0(param_1,param_2,param_3,param_4,param_5);
  fVar3 = (float10)round((float10)iVar1);
  DAT_005ae6f4 = (int)ROUND(fVar3);
  DAT_005ae6f8 = uVar2;
  return;
}
