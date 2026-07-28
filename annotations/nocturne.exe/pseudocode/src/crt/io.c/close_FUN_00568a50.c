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
  
  if ((fd < 0) || (0x00000014 < (uint)fd)) {
    setErrno(4);
    iVar1 = -1;
  }
  else {
    hObject = *(HANDLE *)(DAT_005c1f54 + fd * 4);
    iVar1 = 0;
    if ((DAT_005c1d60 == (code *)0x0) || (iVar2 = (*DAT_005c1d54)(fd), iVar2 == 0)) {
      BVar3 = CloseHandle(hObject);
      if (BVar3 == 0) {
        setErrno(4);
        return -1;
      }
    }
    else {
      (*DAT_005c1d58)(fd);
      (*DAT_005c1d60)(iVar2);
    }
    FUN_0056f278(fd,0);
  }
  return iVar1;
}
