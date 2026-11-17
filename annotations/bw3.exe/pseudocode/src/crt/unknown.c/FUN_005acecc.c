// Name: crt_unknown.c_FUN_005acecc
// Address: 005acecc
// Address Range: [[005acecc, 005acf2f]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005acecc(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_005acecc(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  puVar3 = _DAT_02d252a0;
joined_r0x005acef3:
  if (puVar3 == (uint *)0x0) {
    return iVar5;
  }
  puVar1 = (uint *)*puVar3;
  uVar2 = puVar3[1];
  uVar4 = 1;
  puVar3 = puVar1;
  if (((*(byte *)(uVar2 + 0xd) & 0x40) == 0) && ((*(byte *)(uVar2 + 0xd) & 8) == 0))
  goto code_r0x005acf0c;
  goto LAB_005acf19;
code_r0x005acf0c:
  if ((uint)((int)&g_FILE_PTR_00607678 + param_1 * 0x1a) <= uVar2) {
    if (uVar2 < 0x6076c6) {
      uVar4 = 0;
    }
LAB_005acf19:
    iVar5 = iVar5 + 1;
    FUN_005a3ad4(uVar2,uVar4);
  }
  goto joined_r0x005acef3;
}
