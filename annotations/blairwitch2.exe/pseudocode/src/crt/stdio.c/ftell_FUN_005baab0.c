// Name: crt_stdio.c_ftell_FUN_005baab0
// Address: 005baab0
// Address Range: [[005baab0, 005bab16]]
// Convention: __cdecl
// Signature: long __cdecl crt_stdio_c_ftell_FUN_005baab0(_FILE *file_handle)

#include "nocturne.h"

long __cdecl _ftell(_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  
  if (((file_handle->_flag & 0x80) != 0) && ((file_handle->_flag & 0x1000) != 0)) {
    FUN_005c1b30(file_handle);
  }
  iVar2 = FUN_005bf250(file_handle->_handle);
  if (iVar2 != -1) {
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2a8)(file_handle->_handle);
    iVar1 = file_handle->_cnt;
    if (iVar1 != 0) {
      if ((file_handle->_flag & 0x1000) == 0) {
        iVar2 = iVar2 - iVar1;
      }
      else {
        iVar2 = iVar2 + iVar1;
      }
    }
    (*(code *)PTR_crt_unknown_c_FUN_005bce04_0061f2ac)(file_handle->_handle);
  }
  return iVar2;
}
