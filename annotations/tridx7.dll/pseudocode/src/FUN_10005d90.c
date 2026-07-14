// Name: FUN_10005d90
// Address: 10005d90
// Address Range: [[10005d90, 10005e5a]]
// Convention: unknown
// Signature: int FUN_10005d90(int param_1)

#include "nocturne.h"

int FUN_10005d90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  iVar2 = 0;
  iVar4 = 0;
  local_4 = 0;
  __lock(2);
  if (0 < DAT_10241860) {
    iVar3 = 0;
    do {
      iVar1 = *(int *)(DAT_1024085c + iVar3);
      if ((iVar1 != 0) && ((*(byte *)(iVar1 + 0xc) & 0x83) != 0)) {
        FUN_10005a70(iVar4,iVar1);
        iVar1 = *(int *)(DAT_1024085c + iVar3);
        if ((*(uint *)(iVar1 + 0xc) & 0x83) != 0) {
          if (param_1 == 1) {
            iVar1 = FUN_10005cd0(iVar1);
            if (iVar1 != -1) {
              iVar2 = iVar2 + 1;
            }
          }
          else if (((param_1 == 0) && ((*(uint *)(iVar1 + 0xc) & 2) != 0)) &&
                  (iVar1 = FUN_10005cd0(iVar1), iVar1 == -1)) {
            local_4 = -1;
          }
        }
        FUN_10005ae0(iVar4,*(uint *)(DAT_1024085c + iVar3));
      }
      iVar3 = iVar3 + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < DAT_10241860);
  }
  FUN_10005a10(2);
  if (param_1 != 1) {
    iVar2 = local_4;
  }
  return iVar2;
}
