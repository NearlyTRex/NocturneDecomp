// Name: crt_stdio.c_fseek_FUN_0056582c
// Address: 0056582c
// Address Range: [[0056582c, 00565a12]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fseek_FUN_0056582c(_FILE *file,long offset,int whence)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005658f8) */

int __cdecl _fseek(_FILE *file,long offset,int whence)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(file->_handle);
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
      iVar3 = FUN_00568890(file);
      if (iVar3 != 0) {
        if ((whence == 0) && (offset < 0)) {
          setErrno(9);
        }
        (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
        return -1;
      }
    }
    *(byte *)&file->_flag = (byte)file->_flag & 0xeb;
    iVar3 = lseek(file->_handle,offset,whence);
    if (iVar3 == -1) {
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
      return -1;
    }
    goto LAB_005659ff;
  }
  if (whence == 0) {
    lVar5 = tell(file->_handle);
    iVar3 = seek_within_buffer(offset - (lVar5 - file->_cnt),file);
    if (iVar3 == 0) goto LAB_005659ff;
    iVar3 = lseek(file->_handle,offset,0);
    if (iVar3 == -1) {
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
      return -1;
    }
  }
  else {
    if (1 < (uint)whence) {
      if (whence != 2) {
        setErrno(9);
        (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
        return -1;
      }
      *(byte *)&file->_flag = bVar1 & 0xef;
      pcVar2 = file->_link->__reserve_end;
      file->_cnt = 0;
      file->_ptr = pcVar2;
      iVar3 = lseek(file->_handle,offset,2);
      if (iVar3 == -1) {
        (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
        return -1;
      }
      goto LAB_005659ff;
    }
    iVar3 = file->_cnt;
    iVar4 = seek_within_buffer(offset,file);
    if (iVar4 == 0) goto LAB_005659ff;
    iVar3 = lseek(file->_handle,offset - iVar3,whence);
    if (iVar3 == -1) {
      (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
      return -1;
    }
  }
  seek_within_buffer(file);
LAB_005659ff:
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
  return 0;
}
