// Name: FUN_00574ee0
// Address: 00574ee0
// Address Range: [[00574ee0, 005750d2]]
// Convention: unknown
// Signature: undefined4 FUN_00574ee0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00574ee0(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = FUN_00575540();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_005735f0();
  if (iVar2 != 0) {
    uVar3 = FUN_005750e0();
    return uVar3;
  }
  iVar2 = FUN_00575550();
  if (iVar2 != 0) {
    return 1;
  }
  FUN_00575d20();
  iVar2 = FUN_00575120(DAT_006232e8,DAT_006232ec,DAT_006232f0);
  if (iVar2 != 0) {
    if ((0 < _DAT_02c8066c) && (iVar2 = 0, 0 < DAT_006232ec)) {
      iVar4 = 0;
      do {
        puVar1 = (uint *)(iVar4 + 0x2c80698);
        iVar4 = iVar4 + 4;
        iVar2 = iVar2 + 1;
        FUN_005bfb70(*puVar1,0,_DAT_02c80668 * _DAT_02c8066c * 4);
      } while (iVar2 < DAT_006232ec);
    }
    _DAT_02c80660 = 0;
    _DAT_02c80664 = 0;
    (**(code **)(*_DAT_02c80650 + 0x1c))
              (_DAT_02c80650,*(uint *)(&DAT_02c7fbf8 + _DAT_02c7fc88 * 8),
               *(uint *)(_DAT_02c7fc88 * 8 + 0x2c7fbfc),
               *(uint *)(&DAT_02c7fc08 + _DAT_02c7fc88 * 8),
               *(uint *)(_DAT_02c7fc88 * 8 + 0x2c7fc0c),
               *(uint *)(&DAT_02c7fc18 + _DAT_02c7fc88 * 8),
               *(uint *)(_DAT_02c7fc88 * 8 + 0x2c7fc1c));
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
    (**(code **)(*_DAT_02c80650 + 0x24))
              (_DAT_02c80650,*(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc28),
               *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc30),
               *(uint *)(_DAT_02c7fc88 * 4 + 0x2c7fc38));
    (**(code **)(*_DAT_02c80650 + 0x28))(_DAT_02c80650,DAT_00623304);
    (**(code **)(*_DAT_02c80650 + 0x2c))(_DAT_02c80650,_DAT_02c807d0,_DAT_02c807d4,_DAT_02c807d8);
    _DAT_02c807f0 = FUN_005b2420();
    iVar2 = (**(code **)(*_DAT_02c80650 + 4))(_DAT_02c80650);
    if (iVar2 != 0) {
      _DAT_02c80654 = 1;
      FUN_00573e70();
      return 1;
    }
  }
  FUN_00573e70();
  return 0;
}
