// Name: FUN_005a9d80
// Address: 005a9d80
// Address Range: [[005a9d80, 005a9e23]]
// Convention: unknown
// Signature: undefined4 FUN_005a9d80(uint param_1)

#include "nocturne.h"

uint FUN_005a9d80(uint param_1)

{
  HANDLE hObject;
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  
  if (((int)param_1 < 0) || (0x00000014 < param_1)) {
    FUN_005a92c0(4);
    uVar1 = 0xffffffff;
  }
  else {
    hObject = *(HANDLE *)(DAT_00607bdc + param_1 * 4);
    uVar1 = 0;
    if ((DAT_00607b24 == (code *)0x0) || (iVar2 = (*DAT_00607b18)(param_1), iVar2 == 0)) {
      BVar3 = CloseHandle(hObject);
      if (BVar3 == 0) {
        FUN_005a92c0(4);
        return 0xffffffff;
      }
    }
    else {
      (*DAT_00607b1c)(param_1);
      (*DAT_00607b24)(iVar2);
    }
    FUN_005ab978(param_1,0);
  }
  return uVar1;
}
