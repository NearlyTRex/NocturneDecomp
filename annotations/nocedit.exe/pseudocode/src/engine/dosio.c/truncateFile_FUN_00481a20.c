// Name: engine_dosio.c_truncateFile_FUN_00481a20
// Address: 00481a20
// Address Range: [[00481a20, 00481a46]]
// Convention: __cdecl
// Signature: int __cdecl engine_dosio_c_truncateFile_FUN_00481a20(FILE *file_handle,long new_size_bytes)

#include "nocturne.h"

int __cdecl engine_dosio_c_truncateFile_FUN_00481a20(FILE *file_handle,long new_size_bytes)

{
  int iVar1;
  
  if (file_handle->_handle != -1) {
    iVar1 = crt_io_c_ftruncate_FUN_00600cf0(file_handle->_handle,new_size_bytes);
    if (iVar1 == 0) {
      return 1;
    }
  }
  return 0;
}
