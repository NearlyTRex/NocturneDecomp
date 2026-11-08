// Name: FUN_005cbb70
// Address: 005cbb70
// Address Range: [[005cbb70, 005cbbcc]]
// Convention: unknown
// Signature: undefined4 FUN_005cbb70(uint param_1)

#include "nocturne.h"

uint FUN_005cbb70(uint param_1)

{
  BOOL BVar1;
  uint uVar2;
  
  uVar2 = 0;
  if ((-1 < (int)param_1) && (param_1 <= 0x00000014)) {
    (*(code *)PTR_FUN_00626600)(param_1);
    BVar1 = FlushFileBuffers(*(HANDLE *)(DAT_00626838 + param_1 * 4));
    if (BVar1 == 0) {
      FUN_005c862c();
      uVar2 = 0xffffffff;
    }
    (*(code *)PTR_FUN_00626604)(param_1);
    return uVar2;
  }
  FUN_005c6450(4);
  return 0xffffffff;
}
