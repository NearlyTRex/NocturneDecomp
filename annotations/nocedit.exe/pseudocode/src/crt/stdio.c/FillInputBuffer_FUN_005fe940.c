// Name: crt_stdio.c_FillInputBuffer_FUN_005fe940
// Address: 005fe940
// Address Range: [[005fe940, 005fea06]]
// Convention: __watcallStack
// Signature: int crt_stdio.c_FillInputBuffer_FUN_005fe940(FILE * file)

#include "nocturne.h"

int __watcallStack crt_stdio_c_FillInputBuffer_FUN_005fe940(FILE *file)

{
  int iVar1;
  uint bytes_to_read;
  
  if (file->_link->__reserve_end == (char *)0x0) {
    crt_stdio_c_InitializeFileBuffer_FUN_006027e0(file);
  }
  if (((file->_flag & 0x2000) != 0) && ((file->_flag & 0x600) != 0)) {
    crt_stdio_c_FlushFilesByMask_FUN_0060595c(0x2000);
  }
  *(byte *)&file->_flag = (byte)file->_flag & 0xfb;
  file->_ptr = file->_link->__reserve_end;
  if (((file->_flag & 0x2400) == 0x2400) && (file->_handle == 0)) {
    file->_cnt = 0;
    iVar1 = crt_stdio_c_SetupConsoleInputMode_FUN_006059b0();
    if (iVar1 != -1) {
      *file->_ptr = (char)iVar1;
      file->_cnt = 1;
      goto LAB_005fe9ff;
    }
  }
  else {
    if ((file->_flag & 0x400) == 0) {
      bytes_to_read = file->_bufsize;
    }
    else {
      bytes_to_read = 1;
    }
    iVar1 = crt_stdio_c_ReadFileWithDeviceAbstraction_FUN_00602880
                      (file->_handle,file->_ptr,bytes_to_read);
    file->_cnt = iVar1;
  }
  if (file->_cnt < 1) {
    if (file->_cnt == 0) {
      *(byte *)&file->_flag = (byte)file->_flag | 0x10;
      return file->_cnt;
    }
    file->_cnt = 0;
    *(byte *)&file->_flag = (byte)file->_flag | 0x20;
  }
LAB_005fe9ff:
  return file->_cnt;
}
