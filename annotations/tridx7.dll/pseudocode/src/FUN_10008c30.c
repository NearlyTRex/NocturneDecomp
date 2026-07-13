// Name: FUN_10008c30
// Address: 10008c30
// Address Range: [[10008c30, 10008cc0]]
// Convention: unknown
// Signature: undefined4 FUN_10008c30(uint param_1)

#include "nocturne.h"

uint FUN_10008c30(uint param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  DWORD nStdHandle;
  
  if (param_1 < DAT_10241970) {
    piVar1 = (int *)((int)&DAT_10241870 + ((int)(param_1 & 0xffffffe7) >> 3));
    iVar2 = (param_1 & 0x1f) * 0x24;
    piVar3 = (int *)(*piVar1 + iVar2);
    if (((*(byte *)(piVar3 + 1) & 1) != 0) && (*piVar3 != -1)) {
      if (DAT_10016c74 == 1) {
        if (param_1 == 0) {
          nStdHandle = 0xfffffff6;
        }
        else if (param_1 == 1) {
          nStdHandle = 0xfffffff5;
        }
        else {
          if (param_1 != 2) goto LAB_10008c95;
          nStdHandle = 0xfffffff4;
        }
        SetStdHandle(nStdHandle,(HANDLE)0x0);
      }
LAB_10008c95:
      *(uint *)(*piVar1 + iVar2) = 0xffffffff;
      return 0;
    }
  }
  puVar4 = (uint *)FUN_10008a20();
  *puVar4 = 9;
  puVar4 = (uint *)FUN_10008a30();
  *puVar4 = 0;
  return 0xffffffff;
}
