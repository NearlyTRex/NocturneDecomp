// Name: crt_io.c_IsSpecialDevice_FUN_005705c0
// Address: 005705c0
// Address Range: [[005705c0, 0057062b]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c_IsSpecialDevice_FUN_005705c0(int handle_index)

#include "nocturne.h"

int __cdecl IsSpecialDevice(int handle_index)

{
  int iVar1;
  DWORD DVar2;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(handle_index);
  if (g_IsSpecialDeviceFuncPtr != (byte *)0x0) {
    iVar1 = (*(code *)g_IsSpecialDeviceFuncPtr)(handle_index);
    if (iVar1 != 0) {
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(handle_index);
      return 1;
    }
  }
  DVar2 = GetFileType(g_IOControlBlock->standard_handles[handle_index]);
  if (DVar2 == 2) {
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(handle_index);
    return 1;
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(handle_index);
  return 0;
}
