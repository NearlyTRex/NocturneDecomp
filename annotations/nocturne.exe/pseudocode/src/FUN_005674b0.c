// Name: FUN_005674b0
// Address: 005674b0
// Address Range: [[005674b0, 005674f5]]
// Convention: unknown
// Signature: void FUN_005674b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005674b0(void)

{
  UINT unaff_retaddr;
  
  if (_DAT_02de4e30 == 0) {
    FUN_0056ef24();
    FUN_0056efb8();
    (*(code *)PTR_FUN_005c1af8)();
  }
  else if (DAT_005c1b04 != (code *)0x0) {
    (*DAT_005c1b04)(0,0xff);
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(unaff_retaddr);
}
