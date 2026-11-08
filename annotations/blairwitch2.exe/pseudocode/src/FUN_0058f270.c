// Name: FUN_0058f270
// Address: 0058f270
// Address Range: [[0058f270, 0058f300]]
// Convention: unknown
// Signature: void FUN_0058f270(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0058f270(void)

{
  int iVar1;
  BOOL BVar2;
  int iVar3;
  tagMSG local_28;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (*(int *)(iVar3 + 0x2664640) == 1) {
      (&DAT_01c37790)[iVar1] = 0;
    }
    iVar1 = iVar1 + 1;
    *(uint *)(iVar3 + 0x2664640) = 0;
    iVar3 = iVar3 + 4;
  } while (iVar1 < 600);
  while( true ) {
    while (BVar2 = PeekMessageA(&local_28,(HWND)0x0,0,0,1), BVar2 != 0) {
      TranslateMessage(&local_28);
      DispatchMessageA(&local_28);
    }
    if (((DAT_0061e98c != 0) || (_DAT_02664630 != 0)) || (DAT_0061e990 == 0)) break;
    Sleep(0x14);
  }
  return;
}
