// Name: engine_special.cpp_FUN_00532ba0
// Address: 00532ba0
// Address Range: [[00532ba0, 00532c66]]
// Convention: unknown
// Signature: undefined4 engine_special_cpp_FUN_00532ba0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_special_cpp_FUN_00532ba0(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  int local_8;
  
  puVar5 = _DAT_01bd2fa0;
  bVar8 = 0;
  if (_DAT_01c02594 == 0) {
    return 0;
  }
  if (_DAT_02dc9e24 == 0) {
    iVar4 = DAT_005b761c * DAT_005b7624 >> 0x1f;
    uVar1 = (int)((DAT_005b761c * DAT_005b7624 + iVar4 * -8) - (uint)(iVar4 << 2 < 0)) >> 3;
    wincore_wddvmem_cpp_openScreenDevice_FUN_00553470();
    engine_special_cpp_lockFrame_FUN_005322e0();
    local_8 = 0;
    if (0 < DAT_005b7620) {
      iVar4 = 0;
      do {
        puVar6 = puVar5;
        puVar7 = *(uint **)(&DAT_01bd2fa0 + iVar4);
        for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
          *puVar7 = *puVar6;
          puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
          puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
        }
        for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
          *(byte *)puVar7 = *(byte *)puVar6;
          puVar6 = (uint *)((int)puVar6 + (uint)bVar8 * -2 + 1);
          puVar7 = (uint *)((int)puVar7 + (uint)bVar8 * -2 + 1);
        }
        iVar4 = iVar4 + 4;
        local_8 = local_8 + 1;
        puVar5 = (uint *)((int)puVar5 + uVar1);
      } while (local_8 < DAT_005b7620);
    }
    engine_special_cpp_FUN_00532320();
    wincore_wddvmem_cpp_closeScreenDevice_FUN_00553520();
  }
  _DAT_02dc9e24 = 0;
  uVar2 = (*_DAT_02dc9d7c)();
  return uVar2;
}
