// Name: crt_unknown.c_FillInputBuffer_FUN_00564670
// Address: 00564670
// Address Range: [[00564670, 00564736]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_unknown_c_FillInputBuffer_FUN_00564670(_FILE *file)

#include "nocturne.h"

int __watcallStack FillInputBuffer(_FILE *file)

{
  int iVar1;
  uint uVar2;
  char *unaff_EBP;
  SIZE_T unaff_ESI;
  int unaff_EDI;
  
  if (file->_link->__reserve_end == (char *)0x0) {
    _setvbuf(file,unaff_EBP,unaff_EDI,unaff_ESI);
  }
  if (((file->_flag & 0x2000) != 0) && ((file->_flag & 0x600) != 0)) {
    FUN_0056aefc(0x2000);
  }
  *(byte *)&file->_flag = (byte)file->_flag & 0xfb;
  file->_ptr = file->_link->__reserve_end;
  if (((file->_flag & 0x2400) == 0x2400) && (file->_handle == 0)) {
    file->_cnt = 0;
    iVar1 = FUN_0056af50();
    if (iVar1 != -1) {
      *file->_ptr = (char)iVar1;
      file->_cnt = 1;
      goto LAB_0056472f;
    }
  }
  else {
    if ((file->_flag & 0x400) == 0) {
      uVar2 = file->_bufsize;
    }
    else {
      uVar2 = 1;
    }
    iVar1 = FUN_00568f70(file->_handle,file->_ptr,uVar2);
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
LAB_0056472f:
  return file->_cnt;
}
