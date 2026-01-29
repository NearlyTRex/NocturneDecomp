// Name: crt_stdio.c_InitializeFileBuffer_FUN_006027e0
// Address: 006027e0
// Address Range: [[006027e0, 00602870]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c_InitializeFileBuffer_FUN_006027e0(_FILE *file)

#include "nocturne.h"

void __cdecl InitializeFileBuffer(_FILE *file)

{
  streambuf *psVar1;
  char *pcVar2;
  byte bVar3;
  
  DetectDeviceAndSetBuffering(file);
  if (file->_bufsize == 0) {
    if ((file->_flag & 0x200) == 0) {
      if ((file->_flag & 0x400) == 0) {
        file->_bufsize = 0x1000;
      }
      else {
        file->_bufsize = 1;
      }
    }
    else {
      file->_bufsize = 0x86;
    }
  }
  pcVar2 = malloc(file->_bufsize);
  file->_link->__reserve_end = pcVar2;
  if (file->_link->__reserve_end == (char *)0x0) {
    bVar3 = *(byte *)((int)&file->_flag + 1) & 0xf8;
    *(byte *)((int)&file->_flag + 1) = bVar3;
    psVar1 = file->_link;
    *(byte *)((int)&file->_flag + 1) = bVar3 | 4;
    psVar1->__reserve_end = (char *)&file->_ungotten;
    file->_bufsize = 1;
  }
  else {
    *(byte *)&file->_flag = (byte)file->_flag | 8;
  }
  pcVar2 = file->_link->__reserve_end;
  file->_cnt = 0;
  file->_ptr = pcVar2;
  return;
}
