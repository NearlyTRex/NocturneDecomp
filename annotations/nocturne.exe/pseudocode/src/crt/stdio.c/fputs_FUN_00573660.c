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
  byte *pbVar3;
  int iVar4;
  bool bVar5;
  
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac0)(file->_handle);
  if (file->_link->__reserve_end == (char *)0x0) {
    FUN_00568ed0(file);
  }
  bVar2 = *(byte *)((int)&file->_flag + 1);
  bVar5 = (bVar2 & 4) != 0;
  if (bVar5) {
    bVar2 = bVar2 & 0xf9;
    *(byte *)((int)&file->_flag + 1) = bVar2;
    *(byte *)((int)&file->_flag + 1) = bVar2 | 2;
  }
  iVar4 = 0;
  pbVar3 = (byte *)str;
  do {
    bVar2 = *pbVar3;
    if (bVar2 == 0) goto LAB_005736cd;
    pbVar3 = pbVar3 + 1;
    iVar1 = _fputc((uint)bVar2,file);
  } while (iVar1 != -1);
  iVar4 = -1;
LAB_005736cd:
  if (bVar5) {
    bVar2 = *(byte *)((int)&file->_flag + 1) & 0xf9;
    *(byte *)((int)&file->_flag + 1) = bVar2;
    *(byte *)((int)&file->_flag + 1) = bVar2 | 4;
    if (iVar4 == 0) {
      iVar4 = FUN_00568890(file);
    }
  }
  if (iVar4 == 0) {
    iVar4 = (int)pbVar3 - (int)str;
  }
  (*(code *)PTR_crt_sync_c_CriticalSectionStub_FUN_005671e4_005c1ac4)(file->_handle);
  return iVar4;
}
