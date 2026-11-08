// Name: FUN_005b2cf0
// Address: 005b2cf0
// Address Range: [[005b2cf0, 005b2d8d]]
// Convention: unknown
// Signature: void FUN_005b2cf0(void)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005b2d67) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005b2cf0(void)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  tagMSG local_28;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (*(int *)(iVar3 + 0x2c9be80) == 1) {
      (&DAT_01c50950)[iVar1] = 0;
    }
    iVar1 = iVar1 + 1;
    *(uint *)(iVar3 + 0x2c9be80) = 0;
    iVar3 = iVar3 + 4;
  } while (iVar1 < 600);
  while( true ) {
    while (BVar2 = PeekMessageA(&local_28,(HWND)0x0,0,0,1), BVar2 != 0) {
      TranslateMessage(&local_28);
      DispatchMessageA(&local_28);
    }
    if ((DAT_006260e4 != 0) || (_DAT_02c9be70 != 0)) break;
    Sleep(0x14);
    if (DAT_006260e8 == 0) {
      return;
    }
  }
  return;
}
