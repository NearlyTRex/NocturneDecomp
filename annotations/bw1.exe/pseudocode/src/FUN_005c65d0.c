// Name: FUN_005c65d0
// Address: 005c65d0
// Address Range: [[005c65d0, 005c6698]]
// Convention: unknown
// Signature: DWORD FUN_005c65d0(uint param_1,LPVOID param_2,DWORD param_3)

#include "nocturne.h"

DWORD FUN_005c65d0(uint param_1,LPVOID param_2,DWORD param_3)

{
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  DWORD DStack_14;
  
  if (((int)param_1 < 0) || (0x00000014 < param_1)) {
    FUN_005c6450(4);
    DStack_14 = 0xffffffff;
  }
  else {
    (*(code *)PTR_FUN_00626600)(param_1);
    if (DAT_0062679c != (code *)0x0) {
      iVar1 = (*DAT_00626774)(param_1);
      if (iVar1 != 0) {
        uVar2 = (*DAT_0062679c)(iVar1,param_2,param_3);
        (*(code *)PTR_FUN_00626604)(param_1);
        return uVar2;
      }
    }
    BVar3 = ReadFile(*(HANDLE *)(DAT_00626838 + param_1 * 4),param_2,param_3,&DStack_14,
                     (LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      (*(code *)PTR_FUN_00626604)(param_1);
      uVar2 = FUN_005c862c();
      return uVar2;
    }
    (*(code *)PTR_FUN_00626604)(param_1);
  }
  return DStack_14;
}
