// Name: crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880
// Address: 00602880
// Address Range: [[00602880, 00602948]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_ReadFileWithDeviceAbstraction_FUN_00602880(int file_handle_index, void * buffer, int bytes_to_read)

#include "nocturne.h"

int __watcallStack
crt_stdio_c_ReadFileWithDeviceAbstraction_FUN_00602880
          (int file_handle_index,void *buffer,int bytes_to_read)

{
  int file_handle_index_00;
  int iVar1;
  BOOL BVar2;
  DWORD DVar3;
  BADSPACEBASE *in_ESP;
  uint uStack00000014;
  void *in_stack_00000020;
  DWORD in_stack_00000024;
  int in_stack_00000028;
  
  file_handle_index_00 = file_handle_index;
  if ((file_handle_index < 0) || (g_MaxHandleCount < (uint)file_handle_index)) {
    crt_errno_c_setErrno_FUN_00602790(4);
    in_stack_00000028 = -1;
  }
  else {
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle_index);
    if (g_SpecialDeviceReadFuncPtr != (SPECIAL_DEVICE_READ_FUNC *)0x0) {
      iVar1 = (*g_IsSpecialDeviceFuncPtr)(file_handle_index_00);
      if (iVar1 != 0) {
        iVar1 = (*g_SpecialDeviceReadFuncPtr)(iVar1,in_stack_00000020,in_stack_00000024);
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index_00);
        return iVar1;
      }
    }
    BVar2 = (*PTR_ReadFile_00611604)
                      (g_IOControlBlock->standard_handles[file_handle_index_00],in_stack_00000020,
                       in_stack_00000024,(LPDWORD)&file_handle_index,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      uStack00000014 = 0x602924;
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index_00);
      DVar3 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar3;
    }
    uStack00000014 = 0x60293b;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index_00);
  }
  return in_stack_00000028;
}
