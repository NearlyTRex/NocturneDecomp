// Name: crt_io.c__alloc_piob_FUN_100088b0
// Address: 100088b0
// Address Range: [[100088b0, 10008976]]
// Convention: __cdecl
// Signature: void __cdecl crt_io_c__alloc_piob_FUN_100088b0(void)

#include "nocturne.h"

void __cdecl _alloc_piob(void)

{
  int iVar1;
  int iVar2;
  byte **ppuVar3;
  uint *puVar4;
  uint uVar5;
  
  if (DAT_10241860 == 0) {
    DAT_10241860 = 0x200;
  }
  else if ((int)DAT_10241860 < 0x14) {
    DAT_10241860 = 0x14;
  }
  DAT_1024085c = calloc(DAT_10241860,4);
  if (DAT_1024085c == (void *)0x0) {
    DAT_10241860 = 0x14;
    DAT_1024085c = calloc(0x14,4);
    if (DAT_1024085c == (void *)0x0) {
      _amsg_exit(0x1a);
    }
  }
  ppuVar3 = &PTR_DAT_10017088;
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 4;
    *(byte ***)((int)DAT_1024085c + iVar1) = ppuVar3;
    ppuVar3 = ppuVar3 + 8;
    iVar1 = iVar2;
  } while (iVar2 < 0x50);
  uVar5 = 0;
  puVar4 = &DAT_10017098;
  do {
    iVar1 = *(int *)(*(int *)((int)&DAT_10241870 + ((int)(uVar5 & 0xffffffe7) >> 3)) +
                    (uVar5 & 0x1f) * 0x24);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar5 = uVar5 + 1;
  } while (puVar4 < &DAT_100170f8);
  return;
}
