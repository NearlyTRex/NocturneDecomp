// Name: FUN_10010870
// Address: 10010870
// Address Range: [[10010870, 100108e2]]
// Convention: unknown
// Signature: ushort FUN_10010870(uint param_1,ushort param_2)

#include "nocturne.h"

ushort FUN_10010870(uint param_1,ushort param_2)

{
  int iVar1;
  ushort local_2;
  
  if ((ushort)param_1 == 0xffff) {
    return 0;
  }
  if ((ushort)param_1 < 0x100) {
    local_2 = *(ushort *)(PTR_DAT_10017484 + (param_1 & 0xffff) * 2);
LAB_100108cc:
    return local_2 & param_2;
  }
  if (DAT_10017760 != 0) {
    iVar1 = FUN_1000be00(1,&param_1,1,&local_2,0,0);
    if (iVar1 != 0) goto LAB_100108cc;
  }
  return 0;
}
