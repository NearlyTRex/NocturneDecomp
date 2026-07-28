// Name: crt_io.c_tell_FUN_0056bc10
// Address: 0056bc10
// Address Range: [[0056bc10, 0056bc6f]]
// Convention: __watcallStack
// Signature: long __watcallStack crt_io_c_tell_FUN_0056bc10(int file_handle_index)

#include "nocturne.h"

long __watcallStack tell(int file_handle_index)

{
  HANDLE hFile;
  DWORD DVar1;
  
  if ((-1 < file_handle_index) && ((uint)file_handle_index <= 0x00000014)) {
    hFile = *(HANDLE *)(DAT_005c1f54 + file_handle_index * 4);
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(file_handle_index);
    DVar1 = SetFilePointer(hFile,0,(PLONG)0x0,1);
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file_handle_index);
    if (DVar1 == 0xffffffff) {
      __set_errno();
    }
    return DVar1;
  }
  setErrno(4);
  return -1;
}
