// Name: crt_stdio.c_ftell_FUN_00566e70
// Address: 00566e70
// Address Range: [[00566e70, 00566ed6]]
// Convention: __cdecl
// Signature: long __cdecl crt_stdio_c_ftell_FUN_00566e70(_FILE *file_handle)

#include "nocturne.h"

long __cdecl _ftell(_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  
  if (((file_handle->_flag & 0x80) != 0) && ((file_handle->_flag & 0x1000) != 0)) {
    _fflush(file_handle);
  }
  iVar2 = tell(file_handle->_handle);
  if (iVar2 != -1) {
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(file_handle->_handle);
    iVar1 = file_handle->_cnt;
    if (iVar1 != 0) {
      if ((file_handle->_flag & 0x1000) == 0) {
        iVar2 = iVar2 - iVar1;
      }
      else {
        iVar2 = iVar2 + iVar1;
      }
    }
    (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file_handle->_handle);
  }
  return iVar2;
}
