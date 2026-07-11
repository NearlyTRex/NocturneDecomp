// Name: FUN_00567458
// Address: 00567458
// Address Range: [[00567458, 005674ae]]
// Convention: unknown
// Signature: void FUN_00567458(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_00567458(uint param_1,uint param_2)

{
  HMODULE pHVar1;
  uint uVar2;
  
  pHVar1 = GetModuleHandleA((LPCSTR)0x0);
  FUN_0056720c(0,param_2,pHVar1);
  uVar2 = (*(code *)PTR_FUN_005c1abc)(&DAT_005c1cec);
  FUN_0056e9d0(uVar2);
  FUN_0056eed8(param_1);
  FUN_0056ef60();
  (*(code *)PTR_FUN_005c1afc)();
  FUN_0056ef60();
  return;
}
