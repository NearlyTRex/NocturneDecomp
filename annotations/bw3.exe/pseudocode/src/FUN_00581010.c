// Name: FUN_00581010
// Address: 00581010
// Address Range: [[00581010, 00581058]]
// Convention: unknown
// Signature: void FUN_00581010(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00581010(void)

{
  _DAT_02d21b78 =
       CreateWindowExA(0x40000,PTR_s_Blair_Witch_3_00607280,PTR_s_Blair_Witch_3_00607284,0x80000000,
                       0,0,0,0,(HWND)0x0,(HMENU)0x0,_DAT_02d21b7c,(LPVOID)0x0);
  if (_DAT_02d21b78 != (HWND)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
