// Name: crt_io.c_getFileTypeFlags_FUN_006088b0
// Address: 006088b0
// Address Range: [[006088b0, 00608907]]
// Convention: __watcallStack
// Signature: uint __watcallStack crt_io_c_getFileTypeFlags_FUN_006088b0(int file_handle_index)

#include "nocturne.h"

uint __watcallStack getFileTypeFlags(int file_handle_index)

{
  int iVar1;
  
  if (g_MaxHandleCount <= (uint)file_handle_index) {
    return 0;
  }
  if (file_handle_index < 3) {
    if ((PTR_g_FileDescriptorTable_00685268[file_handle_index].device_flags & 0x40) == 0) {
      PTR_g_FileDescriptorTable_00685268[file_handle_index].device_flags =
           PTR_g_FileDescriptorTable_00685268[file_handle_index].device_flags | 0x40;
      iVar1 = IsSpecialDevice(file_handle_index);
      if (iVar1 != 0) {
        PTR_g_FileDescriptorTable_00685268[file_handle_index].device_flags =
             PTR_g_FileDescriptorTable_00685268[file_handle_index].device_flags | 0x20;
      }
    }
  }
  return (uint)PTR_g_FileDescriptorTable_00685268[file_handle_index];
}
