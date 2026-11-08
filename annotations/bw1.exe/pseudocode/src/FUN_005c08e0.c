// Name: FUN_005c08e0
// Address: 005c08e0
// Address Range: [[005c08e0, 005c09ed]]
// Convention: unknown
// Signature: int FUN_005c08e0(uint param_1)

#include "nocturne.h"

int FUN_005c08e0(uint param_1)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iStack_28;
  uint local_24;
  
  if ((param_1 == 0) || (0xffffffd4 < param_1)) {
    return 0;
  }
  local_24 = param_1 + 0xb & 0xfffffff8;
  if (local_24 < 0x10) {
    local_24 = 0x10;
  }
  (*(code *)PTR_FUN_00626618)();
  iStack_28 = 0;
  bVar2 = false;
  while( true ) {
    while( true ) {
      if (DAT_00626228 < local_24) {
        uVar4 = DAT_00626224;
        if (DAT_00626224 == 0) {
          DAT_00626228 = DAT_00626224;
          uVar4 = DAT_00626220;
        }
      }
      else {
        DAT_00626228 = 0;
        uVar4 = DAT_00626220;
      }
      for (; uVar4 != 0; uVar4 = *(uint *)(uVar4 + 8)) {
        uVar1 = *(uint *)(uVar4 + 0x14);
        DAT_00626224 = uVar4;
        if ((param_1 <= uVar1) && (iStack_28 = FUN_005c66a0(), iStack_28 != 0)) goto LAB_005c09d0;
        if (DAT_00626228 < uVar1) {
          DAT_00626228 = uVar1;
        }
      }
      if ((bVar2) || (iVar3 = FUN_005c69a8(param_1), iVar3 == 0)) break;
      bVar2 = true;
    }
    iVar3 = FUN_005c6a10(param_1);
    if (iVar3 == 0) break;
    bVar2 = false;
  }
LAB_005c09d0:
  DAT_02c9f690 = 0;
  (*(code *)PTR_FUN_00626620)();
  return iStack_28;
}
