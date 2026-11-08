// Name: FUN_00558f20
// Address: 00558f20
// Address Range: [[00558f20, 005590e0]]
// Convention: unknown
// Signature: void FUN_00558f20(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00558f20(void)

{
  int iVar1;
  byte *puVar2;
  
  if (_DAT_02cf3280 != (int *)0x0) {
    iVar1 = FUN_005586d0();
    if (0 < iVar1) {
      puVar2 = (byte *)0x2ce721c;
      do {
        if (*(int *)(puVar2 + 0x60) != 0) {
          if (_DAT_02cf3288 == 1) {
            *(uint *)(puVar2 + 0x118) = *(uint *)(puVar2 + 0x118) | _DAT_02cf3424;
          }
          if ((puVar2[0x4c] & 1) != 0) {
            *(uint *)(puVar2 + 0x118) = *(uint *)(puVar2 + 0x118) & 0xdffffff9;
          }
          if (*(int *)(puVar2 + 0x118) != 0) {
            FUN_00554430(puVar2,0);
            iVar1 = (**(code **)(*_DAT_02cf3280 + 0x44))
                              (_DAT_02cf3280,puVar2,*(uint *)(puVar2 + 0x118));
            if (iVar1 == 0) {
LAB_005590d3:
              FUN_00555270(puVar2);
            }
            else if ((puVar2[0x11b] & 0x40) != 0) {
              iVar1 = (**(code **)(*_DAT_02cf3280 + 0x4c))(_DAT_02cf3280,puVar2);
              if (iVar1 == 0) goto LAB_005590d3;
              puVar2[0x11b] = puVar2[0x11b] & 0xbf;
            }
          }
        }
        puVar2 = puVar2 + 0x11c;
        if (puVar2 == &DAT_02ceb91c) {
          if ((_DAT_02cf3424 & 2) != 0) {
            (**(code **)(*_DAT_02cf3280 + 0x1c))
                      (_DAT_02cf3280,*(uint *)(&DAT_02cf2828 + _DAT_02cf28b8 * 8),
                       *(uint *)(_DAT_02cf28b8 * 8 + 0x2cf282c),
                       *(uint *)(&DAT_02cf2838 + _DAT_02cf28b8 * 8),
                       *(uint *)(_DAT_02cf28b8 * 8 + 0x2cf283c),
                       *(uint *)(&DAT_02cf2848 + _DAT_02cf28b8 * 8),
                       *(uint *)(_DAT_02cf28b8 * 8 + 0x2cf284c));
          }
          if ((_DAT_02cf3424 & 0x20000000) != 0) {
            (**(code **)(*_DAT_02cf3280 + 0x20))
                      (_DAT_02cf3280,*(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2870),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2878),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2880),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2888),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2890),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2898),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf28a0),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf28a8),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf28b0));
          }
          if ((_DAT_02cf3424 & 4) != 0) {
            (**(code **)(*_DAT_02cf3280 + 0x24))
                      (_DAT_02cf3280,*(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2858),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2860),
                       *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2868));
          }
          _DAT_02cf3424 = 0;
          (**(code **)(*_DAT_02cf3280 + 0x18))(_DAT_02cf3280);
          return;
        }
      } while( true );
    }
  }
  return;
}
