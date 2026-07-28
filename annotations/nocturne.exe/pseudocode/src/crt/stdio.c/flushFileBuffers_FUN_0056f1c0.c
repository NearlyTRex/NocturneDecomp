// Name: crt_stdio.c_flushFileBuffers_FUN_0056f1c0
// Address: 0056f1c0
// Address Range: [[0056f1c0, 0056f21c]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_flushFileBuffers_FUN_0056f1c0(int file_handle_index)

#include "nocturne.h"

int __watcallStack flushFileBuffers(int file_handle_index)

{
  BOOL BVar1;
  int iVar2;
  
  iVar2 = 0;
  if ((-1 < file_handle_index) && ((uint)file_handle_index <= 0x00000014)) {
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(file_handle_index);
    BVar1 = FlushFileBuffers(*(HANDLE *)(DAT_005c1f54 + file_handle_index * 4));
    if (BVar1 == 0) {
      __set_errno();
      iVar2 = -1;
    }
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file_handle_index);
    return iVar2;
  }
  setErrno(4);
  return -1;
}
