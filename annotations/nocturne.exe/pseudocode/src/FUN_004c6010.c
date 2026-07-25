// Name: FUN_004c6010
// Address: 004c6010
// Address Range: [[004c6010, 004c602b]]
// Convention: unknown
// Signature: void FUN_004c6010(void)

#include "nocturne.h"

void FUN_004c6010(void)

{
  int iVar1;
  
  iVar1 = FUN_0056497c(0x80c);
  if (iVar1 == 0) {
    return;
  }
  core_lever_cpp_CLever_ctor_FUN_004c6040(iVar1);
  return;
}
