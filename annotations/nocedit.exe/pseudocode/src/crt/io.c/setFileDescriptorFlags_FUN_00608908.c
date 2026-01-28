// Name: crt_io.c_setFileDescriptorFlags_FUN_00608908
// Address: 00608908
// Address Range: [[00608908, 00608930]]
// Convention: __watcallStack
// Signature: void __watcallStack crt_io_c_setFileDescriptorFlags_FUN_00608908(int file_handle_index,uint flags)

#include "nocturne.h"

void __watcallStack crt_io_c_setFileDescriptorFlags_FUN_00608908(int file_handle_index,uint flags)

{
  FileDescriptor *pFVar1;
  
  if (flags != 0) {
    PTR_g_FileDescriptorTable_00685268[file_handle_index] = (FileDescriptor)(flags | 0x4000);
    return;
  }
  pFVar1 = PTR_g_FileDescriptorTable_00685268 + file_handle_index;
  pFVar1->file_type = 0;
  pFVar1->device_flags = 0;
  pFVar1->access_flags = 0;
  pFVar1->extended_flags = 0;
  return;
}
