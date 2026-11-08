// Name: FUN_005c53a0
// Address: 005c53a0
// Address Range: [[005c53a0, 005c53e5]]
// Convention: unknown
// Signature: void FUN_005c53a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005c53a0(void)

{
  UINT unaff_retaddr;
  
  if (_DAT_02c9f060 == 0) {
    FUN_005cb5f4();
    FUN_005cb688();
    (*(code *)PTR_FUN_00626638)();
  }
  else if (DAT_00626644 != (code *)0x0) {
    (*DAT_00626644)(0,0xff);
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(unaff_retaddr);
}
