// Name: crt_unknown.c_FUN_005c0900
// Address: 005c0900
// Address Range: [[005c0900, 005c098a]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_005c0900(int param_1)

#include "nocturne.h"

int FUN_005c0900(int param_1)

{
  int iVar1;
  int iVar2;
  
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2d8)();
  iVar2 = 0;
  if (0 < DAT_0061f4dc) {
    iVar1 = 0;
    do {
      if (*(int *)((int)DAT_0061f4d8 + iVar1) == 0) {
        *(int *)((int)DAT_0061f4d8 + iVar1) = param_1;
        (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2dc)();
        return iVar2;
      }
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar1 < DAT_0061f4dc * 4);
  }
  DAT_0061f4d8 = realloc(DAT_0061f4d8,(DAT_0061f4dc + 1) * 4);
  iVar2 = DAT_0061f4dc * 4;
  DAT_0061f4dc = DAT_0061f4dc + 1;
  *(int *)((int)DAT_0061f4d8 + iVar2) = param_1;
  (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2dc)();
  return DAT_0061f4dc + -1;
}
