// Name: crt_stdio.c_fputs_FUN_00573660
// Address: 00573660
// Address Range: [[00573660, 00573712]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_fputs_FUN_00573660(char *str,_FILE *file)

#include "nocturne.h"

int __cdecl _fputs(char *str,_FILE *file)

{
  int iVar1;
  byte bVar2;
  int unaff_EBP;
  SIZE_T unaff_EDI;
  int iVar3;
  bool bVar4;
  char *in_stack_ffffffec;
  char *pcVar5;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(file->_handle);
  if (file->_link->__reserve_end == (char *)0x0) {
    _setvbuf(file,in_stack_ffffffec,unaff_EBP,unaff_EDI);
  }
  bVar2 = *(byte *)((int)&file->_flag + 1);
  bVar4 = (bVar2 & 4) != 0;
  if (bVar4) {
    bVar2 = bVar2 & 0xf9;
    *(byte *)((int)&file->_flag + 1) = bVar2;
    *(byte *)((int)&file->_flag + 1) = bVar2 | 2;
  }
  iVar3 = 0;
  pcVar5 = str;
  do {
    bVar2 = *str;
    if (bVar2 == 0) goto LAB_005736cd;
    str = str + 1;
    iVar1 = _fputc((uint)bVar2,file);
  } while (iVar1 != -1);
  iVar3 = -1;
LAB_005736cd:
  if (bVar4) {
    bVar2 = *(byte *)((int)&file->_flag + 1) & 0xf9;
    *(byte *)((int)&file->_flag + 1) = bVar2;
    *(byte *)((int)&file->_flag + 1) = bVar2 | 4;
    if (iVar3 == 0) {
      iVar3 = FUN_00568890(file);
    }
  }
  if (iVar3 == 0) {
    iVar3 = (int)str - (int)pcVar5;
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
  return iVar3;
}
