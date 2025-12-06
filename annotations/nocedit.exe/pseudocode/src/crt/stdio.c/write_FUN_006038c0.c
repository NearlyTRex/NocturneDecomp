// Name: crt_stdio.c_write_FUN_006038c0
// Address: 006038c0
// Address Range: [[006038c0, 006039c9]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_write_FUN_006038c0(int file_handle_index, void * buffer, int bytes_to_write)

#include "nocturne.h"

int __watcallStack
crt_stdio_c_write_FUN_006038c0(int file_handle_index,void *buffer,int bytes_to_write)

{
  HANDLE hFile;
  uint uVar1;
  DWORD DVar2;
  int iVar3;
  BOOL BVar4;
  BADSPACEBASE *in_ESP;
  uint uStack00000018;
  uint in_stack_00000020;
  int in_stack_00000028;
  void *in_stack_0000002c;
  uint uStack00000030;
  int in_stack_00000038;
  
  if ((file_handle_index < 0) || (g_MaxHandleCount < (uint)file_handle_index)) {
    crt_errno_c_setErrno_FUN_00602790(SYSTEM_WATCOM_EBADF);
    in_stack_00000038 = -1;
  }
  else {
    hFile = g_IOControlBlock->standard_handles[file_handle_index];
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle_index);
    uVar1 = crt_io_c_getFileTypeFlags_FUN_006088b0(file_handle_index);
    if ((uVar1 & 0x80) != 0) {
      DVar2 = (*SetFilePointer)(hFile,0,(PLONG)0x0,2);
      if (DVar2 == 0xffffffff) {
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index);
        uStack00000018 = 0x603931;
        DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
        return DVar2;
      }
    }
    if (g_SpecialDeviceWriteFuncPtr != (SPECIAL_DEVICE_WRITE_FUNC *)0x0) {
      iVar3 = (*g_IsSpecialDeviceFuncPtr)(file_handle_index);
      if (iVar3 != 0) {
        iVar3 = (*g_SpecialDeviceWriteFuncPtr)(iVar3,in_stack_0000002c,bytes_to_write);
        (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index);
        return iVar3;
      }
    }
    BVar4 = (*PTR_WriteFile_00611678)
                      (hFile,in_stack_0000002c,bytes_to_write,(LPDWORD)&stack0x00000010,
                       (LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      in_stack_00000020 = 0x603996;
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index);
      uStack00000030 = 0x60399e;
      DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar2;
    }
    if (bytes_to_write != in_stack_00000028) {
      in_stack_00000020 = 0x6039b2;
      crt_errno_c_setErrno_FUN_00602790(SYSTEM_WATCOM_ENOMEM);
    }
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index);
  }
  return in_stack_00000038;
}
