// Name: crt_time.c__localtime_FUN_005ba358
// Address: 005ba358
// Address Range: [[005ba358, 005ba36f]]
// Convention: __cdecl
// Signature: void __cdecl crt_time_c__localtime_FUN_005ba358(undefined4 param_1)

#include "nocturne.h"

void __cdecl _localtime(uint param_1)

{
  int iVar1;
  
  iVar1 = (*(code *)PTR_crt_unknown_c_FUN_005bcdfc_0061f2a4)();
  FUN_005ba300(param_1,iVar1 + 0x14);
  return;
}
