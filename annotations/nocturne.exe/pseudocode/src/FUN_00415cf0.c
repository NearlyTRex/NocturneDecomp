// Name: FUN_00415cf0
// Address: 00415cf0
// Address Range: [[00415cf0, 00415d0b]]
// Convention: unknown
// Signature: void FUN_00415cf0(void)

#include "nocturne.h"

void FUN_00415cf0(void)

{
  int iVar1;
  
  iVar1 = FUN_0056497c(0xf18);
  if (iVar1 == 0) {
    return;
  }
  core_bodypart_cpp_CBodyPart_ctor_FUN_00415d20(iVar1);
  return;
}
