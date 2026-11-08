// Name: FUN_005b8590
// Address: 005b8590
// Address Range: [[005b8590, 005b869d]]
// Convention: unknown
// Signature: int FUN_005b8590(uint param_1)

#include "nocturne.h"

int FUN_005b8590(uint param_1)

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
  (*(code *)PTR_FUN_0061f2c0)();
  iStack_28 = 0;
  bVar2 = false;
  while( true ) {
    while( true ) {
      if (DAT_0061eea8 < local_24) {
        uVar4 = DAT_0061eea4;
        if (DAT_0061eea4 == 0) {
          DAT_0061eea8 = DAT_0061eea4;
          uVar4 = DAT_0061eea0;
        }
      }
      else {
        DAT_0061eea8 = 0;
        uVar4 = DAT_0061eea0;
      }
      for (; uVar4 != 0; uVar4 = *(uint *)(uVar4 + 8)) {
        uVar1 = *(uint *)(uVar4 + 0x14);
        DAT_0061eea4 = uVar4;
        if ((param_1 <= uVar1) && (iStack_28 = FUN_005be3d0(), iStack_28 != 0)) goto LAB_005b8680;
        if (DAT_0061eea8 < uVar1) {
          DAT_0061eea8 = uVar1;
        }
      }
      if ((bVar2) || (iVar3 = FUN_005be6d8(param_1), iVar3 == 0)) break;
      bVar2 = true;
    }
    iVar3 = FUN_005be740(param_1);
    if (iVar3 == 0) break;
    bVar2 = false;
  }
LAB_005b8680:
  DAT_026807a0 = 0;
  (*(code *)PTR_FUN_0061f2c8)();
  return iStack_28;
}
