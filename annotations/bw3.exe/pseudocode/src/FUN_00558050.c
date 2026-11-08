// Name: FUN_00558050
// Address: 00558050
// Address Range: [[00558050, 00558242]]
// Convention: unknown
// Signature: undefined4 FUN_00558050(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00558050(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = FUN_005586b0();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_00556750();
  if (iVar2 != 0) {
    uVar3 = FUN_00558250();
    return uVar3;
  }
  iVar2 = FUN_005586c0();
  if (iVar2 != 0) {
    return 1;
  }
  FUN_00558e90();
  iVar2 = FUN_00558290(DAT_00604228,DAT_0060422c,DAT_00604230);
  if (iVar2 != 0) {
    if ((0 < _DAT_02cf32a0) && (iVar2 = 0, 0 < DAT_0060422c)) {
      iVar4 = 0;
      do {
        puVar1 = (uint *)(iVar4 + 0x2cf32cc);
        iVar4 = iVar4 + 4;
        iVar2 = iVar2 + 1;
        FUN_005a28f0(*puVar1,0,_DAT_02cf329c * _DAT_02cf32a0 * 4);
      } while (iVar2 < DAT_0060422c);
    }
    _DAT_02cf3294 = 0;
    _DAT_02cf3298 = 0;
    (**(code **)(*_DAT_02cf3280 + 0x1c))
              (_DAT_02cf3280,*(uint *)(&DAT_02cf2828 + _DAT_02cf28b8 * 8),
               *(uint *)(_DAT_02cf28b8 * 8 + 0x2cf282c),
               *(uint *)(&DAT_02cf2838 + _DAT_02cf28b8 * 8),
               *(uint *)(_DAT_02cf28b8 * 8 + 0x2cf283c),
               *(uint *)(&DAT_02cf2848 + _DAT_02cf28b8 * 8),
               *(uint *)(_DAT_02cf28b8 * 8 + 0x2cf284c));
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
    (**(code **)(*_DAT_02cf3280 + 0x24))
              (_DAT_02cf3280,*(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2858),
               *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2860),
               *(uint *)(_DAT_02cf28b8 * 4 + 0x2cf2868));
    (**(code **)(*_DAT_02cf3280 + 0x28))(_DAT_02cf3280,DAT_00604240);
    (**(code **)(*_DAT_02cf3280 + 0x2c))(_DAT_02cf3280,_DAT_02cf3400,_DAT_02cf3404,_DAT_02cf3408);
    _DAT_02cf3420 = FUN_005806a0();
    iVar2 = (**(code **)(*_DAT_02cf3280 + 4))(_DAT_02cf3280);
    if (iVar2 != 0) {
      _DAT_02cf3284 = 1;
      FUN_00556fd0();
      return 1;
    }
  }
  FUN_00556fd0();
  return 0;
}
