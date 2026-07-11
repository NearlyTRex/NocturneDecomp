// Name: FUN_0056b1a4
// Address: 0056b1a4
// Address Range: [[0056b1a4, 0056b1ed]]
// Convention: unknown
// Signature: undefined4 FUN_0056b1a4(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint FUN_0056b1a4(uint param_1,uint param_2)

{
  int iVar1;
  ushort in_DS;
  byte auStack_8 [4];
  
  (*(code *)PTR_FUN_005c1ad8)();
  iVar1 = FUN_0056afe8(in_DS,param_1,param_2,auStack_8);
  if (iVar1 == 0) {
    (*(code *)PTR_FUN_005c1ae0)();
    return param_1;
  }
  (*(code *)PTR_FUN_005c1ae0)();
  return 0;
}
