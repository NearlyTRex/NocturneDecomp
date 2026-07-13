// Name: FUN_10008b80
// Address: 10008b80
// Address Range: [[10008b80, 10008c23]]
// Convention: unknown
// Signature: undefined4 FUN_10008b80(uint param_1,HANDLE param_2)

#include "nocturne.h"

uint FUN_10008b80(uint param_1,HANDLE param_2)

{
  int *piVar1;
  int iVar2;
  uint *puVar3;
  
  if (param_1 < DAT_10241970) {
    piVar1 = (int *)((int)&DAT_10241870 + ((int)(param_1 & 0xffffffe7) >> 3));
    iVar2 = (param_1 & 0x1f) * 0x24;
    if (*(int *)(*piVar1 + iVar2) == -1) {
      if (DAT_10016c74 == 1) {
        if (param_1 == 0) {
          SetStdHandle(0xfffffff6,param_2);
        }
        else if (param_1 == 1) {
          SetStdHandle(0xfffffff5,param_2);
        }
        else if (param_1 == 2) {
          SetStdHandle(0xfffffff4,param_2);
        }
      }
      *(HANDLE *)(*piVar1 + iVar2) = param_2;
      return 0;
    }
  }
  puVar3 = (uint *)FUN_10008a20();
  *puVar3 = 9;
  puVar3 = (uint *)FUN_10008a30();
  *puVar3 = 0;
  return 0xffffffff;
}
