// Name: crt_unknown.c_FUN_005c6f10
// Address: 005c6f10
// Address Range: [[005c6f10, 005c6fb3]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005c6f10(uint param_1)

#include "nocturne.h"

uint FUN_005c6f10(uint param_1)

{
  HANDLE hObject;
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  
  if (((int)param_1 < 0) || (g_UINT_006267e0 < param_1)) {
    setErrno(4);
    uVar1 = 0xffffffff;
  }
  else {
    hObject = *(HANDLE *)(DAT_00626838 + param_1 * 4);
    uVar1 = 0;
    if ((g_PTR_00626780 == (byte *)0x0) ||
       (iVar2 = (*(code *)g_PTR_00626774)(param_1), iVar2 == 0)) {
      BVar3 = CloseHandle(hObject);
      if (BVar3 == 0) {
        setErrno(4);
        return 0xffffffff;
      }
    }
    else {
      (*(code *)g_PTR_00626778)(param_1);
      (*(code *)g_PTR_00626780)(iVar2);
    }
    FUN_005c8b38(param_1,0);
  }
  return uVar1;
}
