// Name: FUN_00516b70
// Address: 00516b70
// Address Range: [[00516b70, 00516b8b]]
// Convention: unknown
// Signature: void FUN_00516b70(void)

#include "nocturne.h"

void FUN_00516b70(void)

{
  int iVar1;
  
  iVar1 = FUN_0056497c(0x5c4);
  if (iVar1 == 0) {
    return;
  }
  core_simbox_cpp_CSimBox_ctor_FUN_00516ba0(iVar1);
  return;
}
