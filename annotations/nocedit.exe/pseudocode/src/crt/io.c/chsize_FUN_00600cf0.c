// Name: crt_io.c_chsize_FUN_00600cf0
// Address: 00600cf0
// Address Range: [[00600cf0, 00600e0b]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c_chsize_FUN_00600cf0(int file_handle,long new_size)

#include "nocturne.h"

int __cdecl chsize(int file_handle,long new_size)

{
  int iVar1;
  int iVar2;
  DWORD DVar2;
  DWORD DVar3;
  BOOL BVar3;
  HANDLE unaff_EBP;
  int unaff_EDI;
  
  if ((file_handle < 0) || (g_MaxHandleCount < (uint)file_handle)) {
    setErrno(4);
    iVar1 = -1;
  }
  else {
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle);
    iVar2 = lseek(file_handle,0,1);
    if (0x7fff < g_WindowsPlatformVersion) {
      unaff_EDI = lseek(file_handle,0,2);
    }
    DVar2 = (*g_SetFilePointerFunc)(unaff_EBP,new_size,(PLONG)0x0,0);
    if (DVar2 == 0xffffffff) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle);
      DVar3 = __set_errno();
      return DVar3;
    }
    BVar3 = (*g_SetEndOfFileFunc)(unaff_EBP);
    if (BVar3 == 0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle);
      DVar3 = __set_errno();
      return DVar3;
    }
    if ((0x7fff < g_WindowsPlatformVersion) && (unaff_EDI < new_size)) {
      FUN_00600c80(file_handle,unaff_EDI,new_size - unaff_EDI);
    }
    if (new_size < iVar2) {
      iVar2 = new_size;
    }
    iVar2 = lseek(file_handle,iVar2,0);
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle);
    if (iVar2 == -1) {
      DVar3 = __set_errno();
      return DVar3;
    }
    iVar1 = 0;
  }
  return iVar1;
}
