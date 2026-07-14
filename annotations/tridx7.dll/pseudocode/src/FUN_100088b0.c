// Name: FUN_100088b0
// Address: 100088b0
// Address Range: [[100088b0, 10008976]]
// Convention: unknown
// Signature: void FUN_100088b0(void)

#include "nocturne.h"

void FUN_100088b0(void)

{
  int iVar1;
  byte **ppuVar2;
  uint *puVar3;
  uint uVar4;
  
  if (DAT_10241860 == 0) {
    DAT_10241860 = 0x200;
  }
  else if (DAT_10241860 < 0x14) {
    DAT_10241860 = 0x14;
  }
  DAT_1024085c = FUN_1000a750(DAT_10241860,4);
  if (DAT_1024085c == 0) {
    DAT_10241860 = 0x14;
    DAT_1024085c = FUN_1000a750(0x14,4);
    if (DAT_1024085c == 0) {
      __amsg_exit(0x1a);
    }
  }
  ppuVar2 = &PTR_DAT_10017088;
  iVar1 = 0;
  do {
    iVar1 = iVar1 + 4;
    *(byte ***)(DAT_1024085c + -4 + iVar1) = ppuVar2;
    ppuVar2 = ppuVar2 + 8;
  } while (iVar1 < 0x50);
  uVar4 = 0;
  puVar3 = &DAT_10017098;
  do {
    iVar1 = *(int *)(*(int *)((int)&DAT_10241870 + ((int)(uVar4 & 0xffffffe7) >> 3)) +
                    (uVar4 & 0x1f) * 0x24);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar3 = 0xffffffff;
    }
    puVar3 = puVar3 + 8;
    uVar4 = uVar4 + 1;
  } while (puVar3 < &DAT_100170f8);
  return;
}
