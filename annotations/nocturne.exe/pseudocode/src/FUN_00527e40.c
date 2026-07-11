// Name: FUN_00527e40
// Address: 00527e40
// Address Range: [[00527e40, 00528074]]
// Convention: unknown
// Signature: undefined4 FUN_00527e40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00527e40(void)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar2 = FUN_00528480();
  if (iVar2 == 0) {
    return 0;
  }
  iVar2 = FUN_00526ca0();
  if (iVar2 != 0) {
    uVar3 = FUN_00528080();
    return uVar3;
  }
  iVar2 = FUN_00528490();
  if (iVar2 != 0) {
    return 1;
  }
  FUN_00528800();
  iVar2 = FUN_005280c0(DAT_005bea64,DAT_005bea68,DAT_005bea6c);
  if (iVar2 != 0) {
    if ((0 < _DAT_02dc8334) && (iVar2 = 0, 0 < DAT_005bea68)) {
      iVar4 = 0;
      do {
        puVar1 = (uint *)(iVar4 + 0x2dc8360);
        iVar4 = iVar4 + 4;
        iVar2 = iVar2 + 1;
        FUN_00563cc0(*puVar1,0,_DAT_02dc8330 * _DAT_02dc8334 * 4);
      } while (iVar2 < DAT_005bea68);
    }
    _DAT_02dc8328 = 0;
    _DAT_02dc832c = 0;
    (**(code **)(*_DAT_02dc8318 + 0x18))
              (_DAT_02dc8318,_DAT_02dc78e0,_DAT_02dc78e4,_DAT_02dc78e8,_DAT_02dc78ec,_DAT_02dc78f0,
               _DAT_02dc78f4);
    (**(code **)(*_DAT_02dc8318 + 0x1c))
              (_DAT_02dc8318,_DAT_02dc7910,_DAT_02dc7914,_DAT_02dc7918,_DAT_02dc791c,_DAT_02dc7920,
               _DAT_02dc7924,_DAT_02dc7928,_DAT_02dc792c,_DAT_02dc7930,_DAT_02dc7934,_DAT_02dc7938,
               _DAT_02dc793c,_DAT_02dc7940,_DAT_02dc7944,_DAT_02dc7948,_DAT_02dc794c,_DAT_02dc7950,
               _DAT_02dc7954);
    (**(code **)(*_DAT_02dc8318 + 0x20))
              (_DAT_02dc8318,_DAT_02dc78f8,_DAT_02dc78fc,_DAT_02dc7900,_DAT_02dc7904,_DAT_02dc7908,
               _DAT_02dc790c);
    (**(code **)(*_DAT_02dc8318 + 0x24))(_DAT_02dc8318,DAT_005bea80,0x3FF00000);
    (**(code **)(*_DAT_02dc8318 + 0x28))(_DAT_02dc8318,_DAT_02dc8498,_DAT_02dc849c,_DAT_02dc84a0);
    _DAT_02dc84c0 = FUN_00558a30();
    iVar2 = (**(code **)(*_DAT_02dc8318 + 4))(_DAT_02dc8318);
    if (iVar2 != 0) {
      _DAT_02dc831c = 1;
      FUN_00528890();
      return 1;
    }
  }
  FUN_00528890();
  return 0;
}
