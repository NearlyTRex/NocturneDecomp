// Name: FUN_005b2d90
// Address: 005b2d90
// Address Range: [[005b2d90, 005b2dd8]]
// Convention: unknown
// Signature: void FUN_005b2d90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b2d90(void)

{
  _DAT_02c9be68 =
       CreateWindowExA(0x40000,PTR_s_Nocturne_006260dc,PTR_s_Nocturne_006260e0,0x80000000,0,0,0,0,
                       (HWND)0x0,(HMENU)0x0,_DAT_02c9be6c,(LPVOID)0x0);
  if (_DAT_02c9be68 != (HWND)0x0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ExitProcess(1);
}
