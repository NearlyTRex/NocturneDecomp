// Name: crt_stdio.c_vsprintf_FUN_005b7768
// Address: 005b7768
// Address Range: [[005b7768, 005b778e]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c_vsprintf_FUN_005b7768(int param_1,undefined4 param_2,undefined4 param_3)

#include "nocturne.h"

void __cdecl _vsprintf(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = FUN_005bb050(param_1,param_2,param_3,FUN_005b7750);
  *(byte *)(param_1 + iVar1) = 0;
  return;
}
