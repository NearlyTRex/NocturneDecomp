// Name: FUN_005c8bc0
// Address: 005c8bc0
// Address Range: [[005c8bc0, 005c8c4a]]
// Convention: unknown
// Signature: int FUN_005c8bc0(int param_1)

#include "nocturne.h"

int FUN_005c8bc0(int param_1)

{
  int iVar1;
  int iVar2;
  
  (*(code *)PTR_FUN_00626630)();
  iVar2 = 0;
  if (0 < DAT_0062683c) {
    iVar1 = 0;
    do {
      if (*(int *)(DAT_00626838 + iVar1) == 0) {
        *(int *)(DAT_00626838 + iVar1) = param_1;
        (*(code *)PTR_FUN_00626634)();
        return iVar2;
      }
      iVar1 = iVar1 + 4;
      iVar2 = iVar2 + 1;
    } while (iVar1 < DAT_0062683c * 4);
  }
  DAT_00626838 = FUN_005c10d0(DAT_00626838,(DAT_0062683c + 1) * 4);
  iVar2 = DAT_0062683c * 4;
  DAT_0062683c = DAT_0062683c + 1;
  *(int *)(DAT_00626838 + iVar2) = param_1;
  (*(code *)PTR_FUN_00626634)();
  return DAT_0062683c + -1;
}
