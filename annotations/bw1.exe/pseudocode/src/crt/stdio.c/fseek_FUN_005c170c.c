// Name: crt_stdio.c_fseek_FUN_005c170c
// Address: 005c170c
// Address Range: [[005c170c, 005c18f2]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fseek_FUN_005c170c(_FILE *file,long offset,int whence)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005c17d8) */

int __cdecl _fseek(_FILE *file,long offset,int whence)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626600)(file->_handle);
  bVar1 = (byte)file->_flag;
  if ((bVar1 & 6) != 0) {
    if ((file->_flag & 0x1000) == 0) {
      if (whence == 1) {
        offset = offset - file->_cnt;
      }
      pcVar2 = file->_link->__reserve_end;
      file->_cnt = 0;
      file->_ptr = pcVar2;
    }
    else {
      iVar3 = FUN_005c6d50(file);
      if (iVar3 != 0) {
        if ((whence == 0) && (offset < 0)) {
          setErrno(9);
        }
        (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(file->_handle);
        return -1;
      }
    }
    *(byte *)&file->_flag = (byte)file->_flag & 0xeb;
    iVar3 = FUN_005c6e80(file->_handle,offset,whence);
    if (iVar3 == -1) {
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(file->_handle);
      return -1;
    }
    goto LAB_005c18df;
  }
  if (whence == 0) {
    iVar3 = FUN_005c7510(file->_handle);
    iVar3 = FUN_005c16b0(offset - (iVar3 - file->_cnt),file);
    if (iVar3 == 0) goto LAB_005c18df;
    iVar3 = FUN_005c6e80(file->_handle,offset,0);
    if (iVar3 == -1) {
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(file->_handle);
      return -1;
    }
  }
  else {
    if (1 < (uint)whence) {
      if (whence != 2) {
        setErrno(9);
        (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(file->_handle);
        return -1;
      }
      *(byte *)&file->_flag = bVar1 & 0xef;
      pcVar2 = file->_link->__reserve_end;
      file->_cnt = 0;
      file->_ptr = pcVar2;
      iVar3 = FUN_005c6e80(file->_handle,offset,2);
      if (iVar3 == -1) {
        (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(file->_handle);
        return -1;
      }
      goto LAB_005c18df;
    }
    iVar3 = file->_cnt;
    iVar4 = FUN_005c16b0(offset,file);
    if (iVar4 == 0) goto LAB_005c18df;
    iVar3 = FUN_005c6e80(file->_handle,offset - iVar3,whence);
    if (iVar3 == -1) {
      (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(file->_handle);
      return -1;
    }
  }
  FUN_005c16f4(file);
LAB_005c18df:
  (*(code *)PTR_crt_unknown_c_FUN_005c50d4_00626604)(file->_handle);
  return 0;
}
