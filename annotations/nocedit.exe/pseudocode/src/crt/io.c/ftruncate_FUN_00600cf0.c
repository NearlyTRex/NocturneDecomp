// Name: crt_io.c_ftruncate_FUN_00600cf0
// Address: 00600cf0
// Address Range: [[00600cf0, 00600e0b]]
// Convention: __cdecl
// Signature: int crt_io.c_ftruncate_FUN_00600cf0(int file_handle, long new_size)

#include "nocturne.h"

int __cdecl crt_io_c_ftruncate_FUN_00600cf0(int file_handle,long new_size)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  int unaff_EDI;
  HANDLE unaff_retaddr;
  uint uStack0000000c;
  HANDLE in_stack_00000014;
  uint uStack00000024;
  uint uStack0000002c;
  
  if ((file_handle < 0) || (g_MaxHandleCount < (uint)file_handle)) {
    crt_errno_c_setErrno_FUN_00602790(4);
    iVar1 = -1;
  }
  else {
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle);
    iVar1 = crt_stdio_c_lseek_FUN_00606690(file_handle,0,1);
    if (0x7fff < g_WindowsPlatformVersion) {
      unaff_EDI = crt_stdio_c_lseek_FUN_00606690(file_handle,0,2);
    }
    DVar2 = (*SetFilePointer)(unaff_retaddr,new_size,(PLONG)0x0,0);
    if (DVar2 == 0xffffffff) {
      uStack0000000c = 0x600d7e;
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle);
      DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar2;
    }
    uStack0000000c = 0x600d99;
    BVar3 = (*SetEndOfFile)(in_stack_00000014);
    if (BVar3 == 0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle);
      uStack00000024 = 0x600dac;
      DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar2;
    }
    if ((0x7fff < g_WindowsPlatformVersion) && (unaff_EDI < new_size)) {
      uStack0000000c = 0x600dcf;
      crt_unknown_c_FUN_00600c80();
    }
    if (new_size < iVar1) {
      iVar1 = new_size;
    }
    iVar1 = crt_stdio_c_lseek_FUN_00606690(file_handle,iVar1,0);
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle);
    if (iVar1 == -1) {
      uStack0000002c = 0x600dfa;
      DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar2;
    }
    iVar1 = 0;
  }
  return iVar1;
}
