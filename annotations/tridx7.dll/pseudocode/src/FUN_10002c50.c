// Name: FUN_10002c50
// Address: 10002c50
// Address Range: [[10002c50, 10002ca2]]
// Convention: unknown
// Signature: undefined4 FUN_10002c50(void)

#include "nocturne.h"

uint FUN_10002c50(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  
  if (DAT_100141f4 == 0) {
    return 1;
  }
  if (0 < DAT_10014178) {
    puVar2 = &DAT_10225848;
    puVar3 = DAT_10138fb4;
    for (iVar1 = DAT_10014178; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  iVar1 = FUN_10002cb0(DAT_10014180);
  if (iVar1 == 0) {
    return 0;
  }
  DAT_100141f4 = 0;
  return 1;
}
