// Name: FUN_005be300
// Address: 005be300
// Address Range: [[005be300, 005be3c8]]
// Convention: unknown
// Signature: DWORD FUN_005be300(uint param_1,LPVOID param_2,DWORD param_3)

#include "nocturne.h"

DWORD FUN_005be300(uint param_1,LPVOID param_2,DWORD param_3)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  DWORD DStack_14;
  
  if (((int)param_1 < 0) || (0x00000014 < param_1)) {
    FUN_005be180(4);
    DStack_14 = 0xffffffff;
  }
  else {
    (*(code *)PTR_FUN_0061f2a8)(param_1);
    if (DAT_0061f43c != (code *)0x0) {
      iVar1 = (*DAT_0061f414)(param_1);
      if (iVar1 != 0) {
        uVar2 = (*DAT_0061f43c)(iVar1,param_2,param_3);
        (*(code *)PTR_FUN_0061f2ac)(param_1);
        return uVar2;
      }
    }
    BVar3 = ReadFile(*(HANDLE *)(DAT_0061f4d8 + param_1 * 4),param_2,param_3,&DStack_14,
                     (LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      (*(code *)PTR_FUN_0061f2ac)(param_1);
      uVar2 = FUN_005c036c();
      return uVar2;
    }
    (*(code *)PTR_FUN_0061f2ac)(param_1);
  }
  return DStack_14;
}
