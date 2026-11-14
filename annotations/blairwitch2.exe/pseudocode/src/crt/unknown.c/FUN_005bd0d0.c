// Name: crt_unknown.c_FUN_005bd0d0
// Address: 005bd0d0
// Address Range: [[005bd0d0, 005bd115]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005bd0d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005bd0d0(void)

{
  UINT unaff_retaddr;
  
  if (_DAT_02680170 == 0) {
    FUN_005c32f4();
    FUN_005c3388();
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2e0)();
  }
  else if (DAT_0061f2ec != (code *)0x0) {
    (*DAT_0061f2ec)(0,0xff);
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(unaff_retaddr);
}
