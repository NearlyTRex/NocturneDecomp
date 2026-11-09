// Name: crt_unknown.c_FUN_005bec40
// Address: 005bec40
// Address Range: [[005bec40, 005bece3]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005bec40(uint param_1)

#include "nocturne.h"

uint FUN_005bec40(uint param_1)

{
  HANDLE hObject;
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  
  if (((int)param_1 < 0) || (0x00000014 < param_1)) {
    setErrno(4);
    uVar1 = 0xffffffff;
  }
  else {
    hObject = *(HANDLE *)(DAT_0061f4d8 + param_1 * 4);
    uVar1 = 0;
    if ((DAT_0061f420 == (code *)0x0) || (iVar2 = (*DAT_0061f414)(param_1), iVar2 == 0)) {
      BVar3 = CloseHandle(hObject);
      if (BVar3 == 0) {
        setErrno(4);
        return 0xffffffff;
      }
    }
    else {
      (*DAT_0061f418)(param_1);
      (*DAT_0061f420)(iVar2);
    }
    FUN_005c0878(param_1,0);
  }
  return uVar1;
}
