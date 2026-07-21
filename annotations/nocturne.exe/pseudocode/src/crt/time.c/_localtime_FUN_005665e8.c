// Name: crt_time.c__localtime_FUN_005665e8
// Address: 005665e8
// Address Range: [[005665e8, 005665ff]]
// Convention: __cdecl
// Signature: void __cdecl crt_time_c__localtime_FUN_005665e8(undefined4 param_1)

#include "nocturne.h"

void __cdecl _localtime(uint param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_FUN_005c1abc)();
  FUN_00566590(param_1,iVar1 + 0x14);
  return;
}
