// Name: FUN_005c6f10
// Address: 005c6f10
// Address Range: [[005c6f10, 005c6fb3]]
// Convention: unknown
// Signature: undefined4 FUN_005c6f10(uint param_1)

#include "nocturne.h"

uint FUN_005c6f10(uint param_1)

{
  HANDLE hObject;
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  
  if (((int)param_1 < 0) || (0x00000014 < param_1)) {
    FUN_005c6450(4);
    uVar1 = 0xffffffff;
  }
  else {
    hObject = *(HANDLE *)(DAT_00626838 + param_1 * 4);
    uVar1 = 0;
    if ((DAT_00626780 == (code *)0x0) || (iVar2 = (*DAT_00626774)(param_1), iVar2 == 0)) {
      BVar3 = CloseHandle(hObject);
      if (BVar3 == 0) {
        FUN_005c6450(4);
        return 0xffffffff;
      }
    }
    else {
      (*DAT_00626778)(param_1);
      (*DAT_00626780)(iVar2);
    }
    FUN_005c8b38(param_1,0);
  }
  return uVar1;
}
