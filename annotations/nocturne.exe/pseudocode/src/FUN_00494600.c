// Name: FUN_00494600
// Address: 00494600
// Address Range: [[00494600, 0049461b]]
// Convention: unknown
// Signature: void FUN_00494600(void)

#include "nocturne.h"

void FUN_00494600(void)

{
  int iVar1;
  
  iVar1 = FUN_0056497c(0x494);
  if (iVar1 == 0) {
    return;
  }
  core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_00494630(iVar1);
  return;
}
