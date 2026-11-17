// Name: crt_unknown.c_FUN_00568f70
// Address: 00568f70
// Address Range: [[00568f70, 00569038]]
// Convention: unknown
// Signature: DWORD crt_unknown_c_FUN_00568f70(uint param_1,LPVOID param_2,DWORD param_3)

#include "nocturne.h"

DWORD FUN_00568f70(uint param_1,LPVOID param_2,DWORD param_3)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  DWORD DStack_14;
  
  if (((int)param_1 < 0) || (g_MaxHandleCount < param_1)) {
    setErrno(4);
    DStack_14 = 0xffffffff;
  }
  else {
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(param_1);
    if (g_SpecialDeviceReadFuncPtr != (byte *)0x0) {
      iVar1 = (*(code *)g_IsSpecialDeviceFuncPtr)(param_1);
      if (iVar1 != 0) {
        DVar2 = (*(code *)g_SpecialDeviceReadFuncPtr)(iVar1,param_2,param_3);
        (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(param_1);
        return DVar2;
      }
    }
    BVar3 = ReadFile(g_IOControlBlock->standard_handles[param_1],param_2,param_3,&DStack_14,
                     (LPOVERLAPPED)0x0);
    if (BVar3 == 0) {
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(param_1);
      DVar2 = __set_errno();
      return DVar2;
    }
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(param_1);
  }
  return DStack_14;
}
