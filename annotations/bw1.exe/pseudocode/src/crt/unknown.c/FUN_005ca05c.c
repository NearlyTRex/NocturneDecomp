// Name: crt_unknown.c_FUN_005ca05c
// Address: 005ca05c
// Address Range: [[005ca05c, 005ca0bf]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005ca05c(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005ca05c(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  puVar3 = _DAT_02c9f050;
joined_r0x005ca083:
  if (puVar3 == (uint *)0x0) {
    return iVar5;
  }
  puVar1 = (uint *)*puVar3;
  uVar2 = puVar3[1];
  uVar4 = 1;
  puVar3 = puVar1;
  if (((*(byte *)(uVar2 + 0xd) & 0x40) == 0) && ((*(byte *)(uVar2 + 0xd) & 8) == 0))
  goto code_r0x005ca09c;
  goto LAB_005ca0a9;
code_r0x005ca09c:
  if ((uint)((int)&g_FILE_PTR_006262d4 + param_1 * 0x1a) <= uVar2) {
    if (uVar2 < 0x626322) {
      uVar4 = 0;
    }
LAB_005ca0a9:
    iVar5 = iVar5 + 1;
    FUN_005c0d54(uVar2,uVar4);
  }
  goto joined_r0x005ca083;
}
