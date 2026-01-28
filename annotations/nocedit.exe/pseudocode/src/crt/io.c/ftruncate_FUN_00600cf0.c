// Name: crt_io.c_ftruncate_FUN_00600cf0
// Address: 00600cf0
// Address Range: [[00600cf0, 00600e0b]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c_ftruncate_FUN_00600cf0(int file_handle,long new_size)

#include "nocturne.h"

int __cdecl crt_io_c_ftruncate_FUN_00600cf0(int file_handle,long new_size)

{
  int iVar1;
  DWORD DVar2;
  BOOL BVar3;
  HANDLE unaff_EBP;
  int unaff_EDI;
  
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
    DVar2 = (*g_SetFilePointerFunc)(unaff_EBP,new_size,(PLONG)0x0,0);
    if (DVar2 == 0xffffffff) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle);
      DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar2;
    }
    BVar3 = (*g_SetEndOfFileFunc)(unaff_EBP);
    if (BVar3 == 0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle);
      DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar2;
    }
    if ((0x7fff < g_WindowsPlatformVersion) && (unaff_EDI < new_size)) {
      crt_unknown_c_FUN_00600c80();
    }
    if (new_size < iVar1) {
      iVar1 = new_size;
    }
    iVar1 = crt_stdio_c_lseek_FUN_00606690(file_handle,iVar1,0);
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle);
    if (iVar1 == -1) {
      DVar2 = crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
      return DVar2;
    }
    iVar1 = 0;
  }
  return iVar1;
}
