// Name: FUN_10006c40
// Address: 10006c40
// Address Range: [[10006c40, 10006d20]]
// Convention: unknown
// Signature: undefined4 * FUN_10006c40(void)

#include "nocturne.h"

uint * FUN_10006c40(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  iVar4 = 0;
  puVar5 = (uint *)0x0;
  __lock(2);
  if (0 < DAT_10241860) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(DAT_1024085c + iVar3);
      if (iVar1 == 0) {
        uVar2 = FUN_10008830(0x38);
        *(uint *)(DAT_1024085c + iVar4 * 4) = uVar2;
        iVar3 = *(int *)(DAT_1024085c + iVar4 * 4);
        if (iVar3 != 0) {
          InitializeCriticalSection((LPCRITICAL_SECTION)(iVar3 + 0x20));
          EnterCriticalSection((LPCRITICAL_SECTION)(*(int *)(DAT_1024085c + iVar4 * 4) + 0x20));
          puVar5 = *(uint **)(DAT_1024085c + iVar4 * 4);
        }
        break;
      }
      if ((*(uint *)(iVar1 + 0xc) & 0x83) == 0) {
        FUN_10005a70(iVar4,iVar1);
        if ((*(uint *)(*(int *)(DAT_1024085c + iVar3) + 0xc) & 0x83) == 0) {
          puVar5 = *(uint **)(DAT_1024085c + iVar4 * 4);
          break;
        }
        FUN_10005ae0(iVar4,*(int *)(DAT_1024085c + iVar3));
      }
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10241860);
  }
  if (puVar5 != (uint *)0x0) {
    puVar5[1] = 0;
    puVar5[3] = 0;
    puVar5[2] = 0;
    *puVar5 = 0;
    puVar5[7] = 0;
    puVar5[4] = 0xffffffff;
  }
  FUN_10005a10(2);
  return puVar5;
}
