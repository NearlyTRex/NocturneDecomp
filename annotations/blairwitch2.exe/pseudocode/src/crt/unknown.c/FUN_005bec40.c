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
  
  if (((int)param_1 < 0) || (g_UINT_0061f480 < param_1)) {
    setErrno(4);
    uVar1 = 0xffffffff;
  }
  else {
    hObject = g_SIOControlBlock_PTR_0061f4d8->standard_handles[param_1];
    uVar1 = 0;
    if ((g_PTR_0061f420 == (byte *)0x0) ||
       (iVar2 = (*(code *)g_PTR_0061f414)(param_1), iVar2 == 0)) {
      BVar3 = CloseHandle(hObject);
      if (BVar3 == 0) {
        setErrno(4);
        return 0xffffffff;
      }
    }
    else {
      (*(code *)g_PTR_0061f418)(param_1);
      (*(code *)g_PTR_0061f420)(iVar2);
    }
    FUN_005c0878(param_1,0);
  }
  return uVar1;
}
