// Name: crt_stdio.c_vfprintf_FUN_00604850
// Address: 00604850
// Address Range: [[00604850, 0060492d]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_vfprintf_FUN_00604850(_FILE *file,char *format,va_list_t args)

#include "nocturne.h"

int __watcallStack vfprintf(_FILE *file,char *format,va_list_t args)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  bool bVar5;
  
  (*PTR_crt_sync_c_EnterCriticalSection_FUN_00602434_00684ee8)(file->_handle);
  pcVar1 = file->_link->__get_base;
  if (pcVar1 != (char *)0x1) {
    if (pcVar1 != (char *)0x0) {
      (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
      return 0;
    }
    file->_link->__get_base = (char *)0x1;
  }
  uVar2 = file->_flag;
  *(byte *)&file->_flag = (byte)file->_flag & 0xcf;
  if (file->_link->__reserve_end == (char *)0x0) {
    InitializeFileBuffer(file);
  }
  bVar4 = *(byte *)((int)&file->_flag + 1);
  bVar5 = (bVar4 & 4) != 0;
  if (bVar5) {
    bVar4 = bVar4 & 0xfa;
    *(byte *)((int)&file->_flag + 1) = bVar4;
    *(byte *)((int)&file->_flag + 1) = bVar4 | 1;
  }
  iVar3 = FormatEngine
                    (file,format,args,OutputCallback);
  if (bVar5) {
    bVar4 = *(byte *)((int)&file->_flag + 1) & 0xfa;
    *(byte *)((int)&file->_flag + 1) = bVar4;
    *(byte *)((int)&file->_flag + 1) = bVar4 | 4;
    fflushInternal(file);
  }
  if ((file->_flag & 0x20) != 0) {
    iVar3 = -1;
  }
  file->_flag = file->_flag | uVar2 & 0x30;
  (*PTR_crt_sync_c_ExitCriticalSection_FUN_00602434_00684eec)(file->_handle);
  return iVar3;
}
