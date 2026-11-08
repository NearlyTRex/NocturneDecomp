// Name: FUN_0040c480
// Address: 0040c480
// Address Range: [[0040c480, 0040c4ec]]
// Convention: unknown
// Signature: int FUN_0040c480(char *param_1)

#include "nocturne.h"

int FUN_0040c480(char *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  while( true ) {
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    if (cVar1 == '\0') break;
    if (((&DAT_006074b8)[(byte)(cVar1 + 1)] & 0xe0) != 0) {
      iVar2 = FUN_005a35a0(cVar1);
      uVar3 = iVar2 * 0x20001 + uVar3 * 0x80 + (uVar3 >> 0x19);
    }
  }
  if (0 < DAT_007df9c4) {
    iVar2 = 0;
    do {
      if (uVar3 == *(uint *)(*(int *)((int)&DAT_007df9c8 + iVar2) + 0x38)) {
        return *(int *)((int)&DAT_007df9c8 + iVar2);
      }
      iVar2 = iVar2 + 4;
    } while (iVar2 < DAT_007df9c4 * 4);
  }
  return 0;
}
