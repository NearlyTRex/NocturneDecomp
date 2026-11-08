// Name: FUN_005a9440
// Address: 005a9440
// Address Range: [[005a9440, 005a9508]]
// Convention: unknown
// Signature: DWORD FUN_005a9440(uint param_1,LPVOID param_2,DWORD param_3)

#include "nocturne.h"

DWORD FUN_005a9440(uint param_1,LPVOID param_2,DWORD param_3)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  DWORD DStack_14;
  
  if (((int)param_1 < 0) || (0x00000014 < param_1)) {
    FUN_005a92c0(4);
    DStack_14 = 0xffffffff;
  }
  else {
    (*(code *)PTR_FUN_006079a4)(param_1);
    if (DAT_00607b40 != (code *)0x0) {
      iVar1 = (*DAT_00607b18)(param_1);
      if (iVar1 != 0) {
        uVar2 = (*DAT_00607b40)(iVar1,param_2,param_3);
        (*(code *)PTR_FUN_006079a8)(param_1);
        return uVar2;
      }
    }
    BVar3 = ReadFile(*(HANDLE *)(DAT_00607bdc + param_1 * 4),param_2,param_3,&DStack_14,
                     (LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      (*(code *)PTR_FUN_006079a8)(param_1);
      uVar2 = FUN_005ab46c();
      return uVar2;
    }
    (*(code *)PTR_FUN_006079a8)(param_1);
  }
  return DStack_14;
}
