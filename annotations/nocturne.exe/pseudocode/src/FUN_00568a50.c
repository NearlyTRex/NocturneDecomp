// Name: FUN_00568a50
// Address: 00568a50
// Address Range: [[00568a50, 00568af3]]
// Convention: unknown
// Signature: undefined4 FUN_00568a50(uint param_1)

#include "nocturne.h"

uint FUN_00568a50(uint param_1)

{
  HANDLE hObject;
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  
  if (((int)param_1 < 0) || (0x00000014 < param_1)) {
    FUN_00568e80(4);
    uVar1 = 0xffffffff;
  }
  else {
    hObject = *(HANDLE *)(DAT_005c1f54 + param_1 * 4);
    uVar1 = 0;
    if ((DAT_005c1d60 == (code *)0x0) || (iVar2 = (*DAT_005c1d54)(param_1), iVar2 == 0)) {
      BVar3 = CloseHandle(hObject);
      if (BVar3 == 0) {
        FUN_00568e80(4);
        return 0xffffffff;
      }
    }
    else {
      (*DAT_005c1d58)(param_1);
      (*DAT_005c1d60)(iVar2);
    }
    FUN_0056f278(param_1,0);
  }
  return uVar1;
}
