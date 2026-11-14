// Name: crt_stdio.c_ftell_FUN_005c2e90
// Address: 005c2e90
// Address Range: [[005c2e90, 005c2ef6]]
// Convention: __cdecl
// Signature: long __cdecl crt_stdio_c_ftell_FUN_005c2e90(_FILE *file_handle)

#include "nocturne.h"

long __cdecl _ftell(_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  
  if (((file_handle->_flag & 0x80) != 0) && ((file_handle->_flag & 0x1000) != 0)) {
    FUN_005c9e80(file_handle);
  }
  iVar2 = FUN_005c7510(file_handle->_handle);
  if (iVar2 != -1) {
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626600)(file_handle->_handle);
    iVar1 = file_handle->_cnt;
    if (iVar1 != 0) {
      if ((file_handle->_flag & 0x1000) == 0) {
        iVar2 = iVar2 - iVar1;
      }
      else {
        iVar2 = iVar2 + iVar1;
      }
    }
    (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(file_handle->_handle);
  }
  return iVar2;
}
