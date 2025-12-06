// Name: crt_stdio.c_lseek_FUN_00606690
// Address: 00606690
// Address Range: [[00606690, 00606719]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_lseek_FUN_00606690(int file_handle_index, long distance_to_move, int move_method)

#include "nocturne.h"

int __watcallStack
crt_stdio_c_lseek_FUN_00606690(int file_handle_index,long distance_to_move,int move_method)

{
  uint uVar1;
  DWORD DVar2;
  uint uStack00000014;
  int in_stack_00000018;
  long in_stack_0000001c;
  DWORD in_stack_00000020;
  uint uStack00000024;
  
  if ((-1 < file_handle_index) && ((uint)file_handle_index <= g_MaxHandleCount)) {
    (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file_handle_index);
    uVar1 = crt_io_c_getFileTypeFlags_FUN_006088b0(file_handle_index);
    if ((0 < in_stack_00000018) && ((uVar1 & 0x80) == 0)) {
      crt_io_c_setFileDescriptorFlags_FUN_00608908(file_handle_index,uVar1 | 0x8000);
    }
    DVar2 = (*SetFilePointer)(g_IOControlBlock->standard_handles[file_handle_index],
                              in_stack_0000001c,(PLONG)0x0,in_stack_00000020);
    uStack00000014 = 0x606707;
    (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file_handle_index);
    if (DVar2 == 0xffffffff) {
      uStack00000024 = 0x606714;
      crt_errno_c_getLastErrorAndSetErrno_FUN_006083fc();
    }
    return DVar2;
  }
  crt_errno_c_setErrno_FUN_00602790(4);
  return -1;
}
