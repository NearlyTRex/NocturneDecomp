// Name: FUN_00455020
// Address: 00455020
// Address Range: [[00455020, 0045503b]]
// Convention: unknown
// Signature: void FUN_00455020(void)

#include "nocturne.h"

void FUN_00455020(void)

{
  int iVar1;
  
  iVar1 = FUN_0056497c(0x9d8);
  if (iVar1 == 0) {
    return;
  }
  core_door_cpp_CDoor_ctor_FUN_00455050(iVar1);
  return;
}
