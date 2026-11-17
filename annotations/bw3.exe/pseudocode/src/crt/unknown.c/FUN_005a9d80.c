// Name: crt_unknown.c_FUN_005a9d80
// Address: 005a9d80
// Address Range: [[005a9d80, 005a9e23]]
// Convention: unknown
// Signature: undefined4 crt_unknown_c_FUN_005a9d80(uint param_1)

#include "nocturne.h"

uint FUN_005a9d80(uint param_1)

{
  HANDLE hObject;
  uint uVar1;
  int iVar2;
  BOOL BVar3;
  
  if (((int)param_1 < 0) || (g_MaxHandleCount < param_1)) {
    setErrno(4);
    uVar1 = 0xffffffff;
  }
  else {
    hObject = g_IOControlBlock->standard_handles[param_1];
    uVar1 = 0;
    if ((g_SpecialDeviceCloseFunc == (byte *)0x0) ||
       (iVar2 = (*(code *)g_IsSpecialDeviceFuncPtr)(param_1), iVar2 == 0)) {
      BVar3 = CloseHandle(hObject);
      if (BVar3 == 0) {
        setErrno(4);
        return 0xffffffff;
      }
    }
    else {
      (*(code *)g_SpecialDeviceCleanupFunc)(param_1);
      (*(code *)g_SpecialDeviceCloseFunc)(iVar2);
    }
    FUN_005ab978(param_1,0);
  }
  return uVar1;
}
