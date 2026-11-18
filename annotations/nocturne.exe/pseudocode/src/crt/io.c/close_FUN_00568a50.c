// Name: crt_io.c_close_FUN_00568a50
// Address: 00568a50
// Address Range: [[00568a50, 00568af3]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c_close_FUN_00568a50(int fd)

#include "nocturne.h"

int __cdecl close(int fd)

{
  HANDLE hObject;
  int iVar1;
  int iVar2;
  BOOL BVar3;
  
  if ((fd < 0) || (g_MaxHandleCount < (uint)fd)) {
    setErrno(4);
    iVar1 = -1;
  }
  else {
    hObject = g_IOControlBlock->standard_handles[fd];
    iVar1 = 0;
    if ((g_SpecialDeviceCloseFunc == (byte *)0x0) ||
       (iVar2 = (*(code *)g_IsSpecialDeviceFuncPtr)(fd), iVar2 == 0)) {
      BVar3 = CloseHandle(hObject);
      if (BVar3 == 0) {
        setErrno(4);
        return -1;
      }
    }
    else {
      (*(code *)g_SpecialDeviceCleanupFunc)(fd);
      (*(code *)g_SpecialDeviceCloseFunc)(iVar2);
    }
    FUN_0056f278(fd,0);
  }
  return iVar1;
}
