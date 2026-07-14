// Name: FUN_1000e780
// Address: 1000e780
// Address Range: [[1000e780, 1000e80d]]
// Convention: unknown
// Signature: bool FUN_1000e780(ushort *param_1,ushort *param_2)

#include "nocturne.h"

bool FUN_1000e780(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  uint uVar2;
  ushort *puVar3;
  uint uVar4;
  
  uVar2 = (uint)*param_1 % 100;
  if (0x5a < (ushort)uVar2) {
    return false;
  }
  uVar4 = 0;
  puVar3 = (ushort *)(&DAT_10017f38 + uVar2 * 6);
  do {
    uVar1 = *puVar3;
    if (uVar1 == 0) break;
    if (((uVar1 ^ *param_2) & 0x3ff) == 0) {
      if ((*param_2 & 0xfc00) == 0) {
        *param_2 = uVar1;
      }
      *param_1 = uVar1;
      return true;
    }
    puVar3 = puVar3 + 1;
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  uVar1 = *(ushort *)(&DAT_10017f38 + uVar2 * 6);
  *param_1 = uVar1;
  return uVar1 != 0;
}
