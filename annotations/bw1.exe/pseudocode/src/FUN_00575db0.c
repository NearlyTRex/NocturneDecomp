// Name: FUN_00575db0
// Address: 00575db0
// Address Range: [[00575db0, 00575f70]]
// Convention: unknown
// Signature: void FUN_00575db0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00575db0(void)

{
  int iVar1;
  byte *puVar2;
  
  if (_DAT_02c80650 != (int *)0x0) {
    iVar1 = FUN_00575560();
    if (0 < iVar1) {
      puVar2 = (byte *)0x2c745ec;
      do {
        if (*(int *)(puVar2 + 0x60) != 0) {
          if (_DAT_02c80658 == 1) {
            *(uint *)(puVar2 + 0x118) = *(uint *)(puVar2 + 0x118) | _DAT_02c807f4;
          }
          if ((puVar2[0x4c] & 1) != 0) {
            *(uint *)(puVar2 + 0x118) = *(uint *)(puVar2 + 0x118) & 0xdffffff9;
          }
          if (*(int *)(puVar2 + 0x118) != 0) {
            FUN_00570f30(puVar2,0);
            iVar1 = (**(code **)(*_DAT_02c80650 + 0x44))
                              (_DAT_02c80650,puVar2,*(uint *)(puVar2 + 0x118));
            if (iVar1 == 0) {
LAB_00575f63:
              FUN_00571d70(puVar2);
            }
            else if ((puVar2[0x11b] & 0x40) != 0) {
              iVar1 = (**(code **)(*_DAT_02c80650 + 0x4c))(_DAT_02c80650,puVar2);
              if (iVar1 == 0) goto LAB_00575f63;
              puVar2[0x11b] = puVar2[0x11b] & 0xbf;
            }
          }
        }
        puVar2 = puVar2 + 0x11c;
        if (puVar2 == &DAT_02c78cec) {
          if ((_DAT_02c807f4 & 2) != 0) {
            (**(code **)(*_DAT_02c80650 + 0x1c))
                      (_DAT_02c80650,*(uint *)(&DAT_02c7fbf8 + _DAT_02c7fc88 * 8),
                       *(uint *)(_DAT_02c7fc88 * 8 + 0x2c7fbfc),
                       *(uint *)(&DAT_02c7fc08 + _DAT_02c7fc88 * 8),
                       *(uint *)(_DAT_02c7fc88 * 8 + 0x2c7fc0c),
                       *(uint *)(&DAT_02c7fc18 + _DAT_02c7fc88 * 8),
                       *(uint *)(_DAT_02c7fc88 * 8 + 0x2c7fc1c));
          }
          if ((_DAT_02c807f4 & 0x20000000) != 0) {
            (**(code **)(*_DAT_02c80650 + 0x20))
                      (_DAT_02c80650,*(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc40),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc48),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc50),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc58),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc60),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc68),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc70),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc78),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc80));
          }
          if ((_DAT_02c807f4 & 4) != 0) {
            (**(code **)(*_DAT_02c80650 + 0x24))
                      (_DAT_02c80650,*(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc28),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc30),
                       *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc38));
          }
          _DAT_02c807f4 = 0;
          (**(code **)(*_DAT_02c80650 + 0x18))(_DAT_02c80650);
          return;
        }
      } while( true );
    }
  }
  return;
}
