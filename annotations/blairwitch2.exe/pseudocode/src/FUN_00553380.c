// Name: FUN_00553380
// Address: 00553380
// Address Range: [[00553380, 00553540]]
// Convention: unknown
// Signature: void FUN_00553380(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00553380(void)

{
  int iVar1;
  byte *puVar2;
  
  if (_DAT_02648e80 != (int *)0x0) {
    iVar1 = FUN_00552b30();
    if (0 < iVar1) {
      puVar2 = (byte *)0x263cf1c;
      do {
        if (*(int *)(puVar2 + 0x60) != 0) {
          if (_DAT_02648e88 == 1) {
            *(uint *)(puVar2 + 0x118) = *(uint *)(puVar2 + 0x118) | _DAT_02649024;
          }
          if ((puVar2[0x4c] & 1) != 0) {
            *(uint *)(puVar2 + 0x118) = *(uint *)(puVar2 + 0x118) & 0xdffffff9;
          }
          if (*(int *)(puVar2 + 0x118) != 0) {
            FUN_0054e8c0(puVar2,0);
            iVar1 = (**(code **)(*_DAT_02648e80 + 0x44))
                              (_DAT_02648e80,puVar2,*(uint *)(puVar2 + 0x118));
            if (iVar1 == 0) {
LAB_00553533:
              FUN_0054f700(puVar2);
            }
            else if ((puVar2[0x11b] & 0x40) != 0) {
              iVar1 = (**(code **)(*_DAT_02648e80 + 0x4c))(_DAT_02648e80,puVar2);
              if (iVar1 == 0) goto LAB_00553533;
              puVar2[0x11b] = puVar2[0x11b] & 0xbf;
            }
          }
        }
        puVar2 = puVar2 + 0x11c;
        if (puVar2 == &DAT_0264161c) {
          if ((_DAT_02649024 & 2) != 0) {
            (**(code **)(*_DAT_02648e80 + 0x1c))
                      (_DAT_02648e80,*(uint *)(&DAT_02648428 + _DAT_026484b8 * 8),
                       *(uint *)(_DAT_026484b8 * 8 + 0x264842c),
                       *(uint *)(&DAT_02648438 + _DAT_026484b8 * 8),
                       *(uint *)(_DAT_026484b8 * 8 + 0x264843c),
                       *(uint *)(&DAT_02648448 + _DAT_026484b8 * 8),
                       *(uint *)(_DAT_026484b8 * 8 + 0x264844c));
          }
          if ((_DAT_02649024 & 0x20000000) != 0) {
            (**(code **)(*_DAT_02648e80 + 0x20))
                      (_DAT_02648e80,*(uint *)(_DAT_026484b8 * 4 + 0x2648470),
                       *(uint *)(_DAT_026484b8 * 4 + 0x2648478),
                       *(uint *)(_DAT_026484b8 * 4 + 0x2648480),
                       *(uint *)(_DAT_026484b8 * 4 + 0x2648488),
                       *(uint *)(_DAT_026484b8 * 4 + 0x2648490),
                       *(uint *)(_DAT_026484b8 * 4 + 0x2648498),
                       *(uint *)(_DAT_026484b8 * 4 + 0x26484a0),
                       *(uint *)(_DAT_026484b8 * 4 + 0x26484a8),
                       *(uint *)(_DAT_026484b8 * 4 + 0x26484b0));
          }
          if ((_DAT_02649024 & 4) != 0) {
            (**(code **)(*_DAT_02648e80 + 0x24))
                      (_DAT_02648e80,*(uint *)(_DAT_026484b8 * 4 + 0x2648458),
                       *(uint *)(_DAT_026484b8 * 4 + 0x2648460),
                       *(uint *)(_DAT_026484b8 * 4 + 0x2648468));
          }
          _DAT_02649024 = 0;
          (**(code **)(*_DAT_02648e80 + 0x18))(_DAT_02648e80);
          return;
        }
      } while( true );
    }
  }
  return;
}
