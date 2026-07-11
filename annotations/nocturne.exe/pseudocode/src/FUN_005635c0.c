// Name: FUN_005635c0
// Address: 005635c0
// Address Range: [[005635c0, 005636cd]]
// Convention: unknown
// Signature: int FUN_005635c0(uint param_1)

#include "nocturne.h"

int FUN_005635c0(uint param_1)

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
  (*(code *)PTR_FUN_005c1ad8)();
  iStack_28 = 0;
  bVar2 = false;
  while( true ) {
    while( true ) {
      if (DAT_005c1688 < local_24) {
        uVar4 = DAT_005c1684;
        if (DAT_005c1684 == 0) {
          DAT_005c1688 = DAT_005c1684;
          uVar4 = DAT_005c1680;
        }
      }
      else {
        DAT_005c1688 = 0;
        uVar4 = DAT_005c1680;
      }
      for (; uVar4 != 0; uVar4 = *(uint *)(uVar4 + 8)) {
        uVar1 = *(uint *)(uVar4 + 0x14);
        DAT_005c1684 = uVar4;
        if ((param_1 <= uVar1) && (iStack_28 = FUN_00568b00(), iStack_28 != 0)) goto LAB_005636b0;
        if (DAT_005c1688 < uVar1) {
          DAT_005c1688 = uVar1;
        }
      }
      if ((bVar2) || (iVar3 = FUN_00568e08(param_1), iVar3 == 0)) break;
      bVar2 = true;
    }
    iVar3 = FUN_00568e70(param_1);
    if (iVar3 == 0) break;
    bVar2 = false;
  }
LAB_005636b0:
  DAT_02de5460 = 0;
  (*(code *)PTR_FUN_005c1ae0)();
  return iStack_28;
}
