// Name: crt_stdio.c_lseek_FUN_005689c0
// Address: 005689c0
// Address Range: [[005689c0, 00568a49]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_lseek_FUN_005689c0(int file_handle_index,long distance_to_move,int move_method)

#include "nocturne.h"

int __watcallStack lseek(int file_handle_index,long distance_to_move,int move_method)

{
  uint uVar1;
  DWORD DVar2;
  
  if ((-1 < file_handle_index) && ((uint)file_handle_index <= 0x00000014)) {
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(file_handle_index);
    uVar1 = FUN_0056f220(file_handle_index);
    if ((0 < distance_to_move) && ((uVar1 & 0x80) == 0)) {
      FUN_0056f278(file_handle_index,uVar1 | 0x8000);
    }
    DVar2 = SetFilePointer(*(HANDLE *)(DAT_005c1f54 + file_handle_index * 4),distance_to_move,
                           (PLONG)0x0,move_method);
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file_handle_index);
    if (DVar2 == 0xffffffff) {
      __set_errno();
    }
    return DVar2;
  }
  setErrno(4);
  return -1;
}
