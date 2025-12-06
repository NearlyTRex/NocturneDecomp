// Name: crt_io.c_IsSpecialDevice_FUN_0060c270
// Address: 0060c270
// Address Range: [[0060c270, 0060c2db]]
// Convention: __cdecl
// Signature: int crt_io.c_IsSpecialDevice_FUN_0060c270(int handle_index)

#include "nocturne.h"

int __cdecl crt_io_c_IsSpecialDevice_FUN_0060c270(int handle_index)

{
  int iVar1;
  DWORD DVar2;
  uint uStack0000000c;
  uint uStack00000014;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(handle_index);
  if (g_IsSpecialDeviceFuncPtr != (IS_SPECIAL_DEVICE_FUNC *)0x0) {
    iVar1 = (*g_IsSpecialDeviceFuncPtr)(handle_index);
    if (iVar1 != 0) {
      uStack0000000c = 0x60c29e;
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(handle_index);
      return 1;
    }
  }
  uStack0000000c = 0x60c2b8;
  DVar2 = (*PTR_GetFileType_0061159c)(g_IOControlBlock->standard_handles[handle_index]);
  if (DVar2 == 2) {
    uStack00000014 = 0x60c2c4;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(handle_index);
    return 1;
  }
  uStack00000014 = 0x60c2d5;
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(handle_index);
  return 0;
}
