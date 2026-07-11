// Name: FUN_004d9780
// Address: 004d9780
// Address Range: [[004d9780, 004d98b3]]
// Convention: unknown
// Signature: undefined4 FUN_004d9780(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004d9780(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (_DAT_01cae0d4 < 1) {
    FUN_0046fcd0(0x01BCD074,"Can't run mission - no heros");
    return 0;
  }
  if (*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) != 0) {
    FUN_004d8db0(param_1);
    *(uint *)(param_1 + 0x528) = 0xffffffff;
    uVar1 = 0x01C03A10;
    *(uint *)(param_1 + 0x524) = 0;
    *(uint *)(param_1 + 0x520) = *(uint *)(param_1 + 0x524);
    *(uint *)(param_1 + 0x51c) = *(uint *)(param_1 + 0x520);
    FUN_0047aa00(uVar1);
    *(uint *)(0x01C775EC + 0x228) = 0;
    FUN_004d9020(param_1,*(uint *)(*(int *)(_DAT_01cae0e8 * 4 + 0x1cae0d8) + 0x2c));
    uVar1 = FUN_004ee370("Loading script",0);
    FUN_004c59e0(0x01CC3160,uVar1);
    iVar2 = FUN_004d86d0(param_1,*(uint *)(0x01C775EC + 0x234));
    if (iVar2 == 0) {
      return 0;
    }
    FUN_004feff0(0x01E56DA0);
    FUN_004ff170(0x01E56DA0);
    FUN_005135f0(0x01E57284);
    return 1;
  }
  FUN_0046fcd0(0x01BCD074,"Can't run mission - no local hero");
  return 0;
}
