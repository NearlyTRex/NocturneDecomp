// Name: crt_stdio.c_fseek_FUN_005a457c
// Address: 005a457c
// Address Range: [[005a457c, 005a4762]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fseek_FUN_005a457c(_FILE *file,long offset,int whence)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005a4648) */

int __cdecl _fseek(_FILE *file,long offset,int whence)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a4)(file->_handle);
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
      iVar3 = FUN_005a9bc0(file);
      if (iVar3 != 0) {
        if ((whence == 0) && (offset < 0)) {
          setErrno(9);
        }
        (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(file->_handle);
        return -1;
      }
    }
    *(byte *)&file->_flag = (byte)file->_flag & 0xeb;
    iVar3 = FUN_005a9cf0(file->_handle,offset,whence);
    if (iVar3 == -1) {
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(file->_handle);
      return -1;
    }
    goto LAB_005a474f;
  }
  if (whence == 0) {
    iVar3 = FUN_005aa380(file->_handle);
    iVar3 = FUN_005a4520(offset - (iVar3 - file->_cnt),file);
    if (iVar3 == 0) goto LAB_005a474f;
    iVar3 = FUN_005a9cf0(file->_handle,offset,0);
    if (iVar3 == -1) {
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(file->_handle);
      return -1;
    }
  }
  else {
    if (1 < (uint)whence) {
      if (whence != 2) {
        setErrno(9);
        (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(file->_handle);
        return -1;
      }
      *(byte *)&file->_flag = bVar1 & 0xef;
      pcVar2 = file->_link->__reserve_end;
      file->_cnt = 0;
      file->_ptr = pcVar2;
      iVar3 = FUN_005a9cf0(file->_handle,offset,2);
      if (iVar3 == -1) {
        (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(file->_handle);
        return -1;
      }
      goto LAB_005a474f;
    }
    iVar3 = file->_cnt;
    iVar4 = FUN_005a4520(offset,file);
    if (iVar4 == 0) goto LAB_005a474f;
    iVar3 = FUN_005a9cf0(file->_handle,offset - iVar3,whence);
    if (iVar3 == -1) {
      (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(file->_handle);
      return -1;
    }
  }
  FUN_005a4564(file);
LAB_005a474f:
  (*(code *)PTR_crt_unknown_c_FUN_005a7f44_006079a8)(file->_handle);
  return 0;
}
