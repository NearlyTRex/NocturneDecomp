// Name: crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880
// Address: 00602880
// Address Range: [[00602880, 00602948]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_ReadFileWithDeviceAbstraction_FUN_00602880(int file_handle_index,void *buffer,int bytes_to_read)

#include "nocturne.h"

int __watcallStack ReadFileWithDeviceAbstraction(int file_handle_index,void *buffer,int bytes_to_read)

{
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  int unaff_ESI;
  void *in_stack_00000010;
  DWORD in_stack_00000014;
  
  if ((file_handle_index < 0) || (g_MaxHandleCount < (uint)file_handle_index)) {
    setErrno(4);
    unaff_ESI = -1;
  }
  else {
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle_index);
    if (g_SpecialDeviceReadFuncPtr != (SPECIAL_DEVICE_READ_FUNC *)0x0) {
      iVar1 = (*g_IsSpecialDeviceFuncPtr)(file_handle_index);
      if (iVar1 != 0) {
        iVar1 = (*g_SpecialDeviceReadFuncPtr)(iVar1,in_stack_00000010,in_stack_00000014);
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index);
        return iVar1;
      }
    }
    BVar2 = (*g_ReadFileFunc)(g_IOControlBlock->standard_handles[file_handle_index],
                              in_stack_00000010,in_stack_00000014,(LPDWORD)&stack0xfffffff4,
                              (LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index);
      DVar3 = __set_errno();
      return DVar3;
    }
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index);
  }
  return unaff_ESI;
}
