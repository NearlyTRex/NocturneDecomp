// Name: crt_io.c_close_FUN_00609bd0
// Address: 00609bd0
// Address Range: [[00609bd0, 00609c73]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c_close_FUN_00609bd0(int fd)

#include "nocturne.h"

int __cdecl close(int fd)

{
  int iVar1;
  int cleanup_result;
  BOOL BVar2;
  HANDLE unaff_ESI;
  
  if ((fd < 0) || (g_MaxHandleCount < (uint)fd)) {
    setErrno(4);
    iVar1 = -1;
  }
  else {
    iVar1 = 0;
    if ((g_SpecialDeviceCloseFunc == (SPECIAL_DEVICE_CLOSE_FUNC *)0x0) ||
       (cleanup_result = (*g_IsSpecialDeviceFuncPtr)(fd), cleanup_result == 0)) {
      BVar2 = (*g_CloseHandleFunc)(unaff_ESI);
      if (BVar2 == 0) {
        setErrno(4);
        return -1;
      }
    }
    else {
      (*g_SpecialDeviceCleanupFunc)(fd);
      (*g_SpecialDeviceCloseFunc)(cleanup_result);
    }
    func_0x00608908(fd,0);
  }
  return iVar1;
}
