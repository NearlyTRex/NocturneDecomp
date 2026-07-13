// Name: FUN_100093f0
// Address: 100093f0
// Address Range: [[100093f0, 10009806]]
// Convention: unknown
// Signature: uint FUN_100093f0(LPCSTR param_1,uint param_2,undefined4 param_3,uint param_4)

#include "nocturne.h"

uint FUN_100093f0(LPCSTR param_1,uint param_2,uint param_3,uint param_4)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  uint *puVar4;
  HANDLE hFile;
  int iVar5;
  int *piVar6;
  int iVar7;
  byte bVar8;
  DWORD DVar9;
  char local_19;
  DWORD local_18;
  uint local_14;
  DWORD local_10;
  _SECURITY_ATTRIBUTES local_c;
  
  local_c.lpSecurityDescriptor = (LPVOID)0x0;
  local_c.nLength = 0xc;
  local_c.bInheritHandle = (BOOL)((param_2 & 0x80) == 0);
  if ((param_2 & 0x8000) == 0) {
    bVar8 = 0x80;
    if ((param_2 & 0x4000) == 0) {
      bVar8 = (DAT_100178f4 == 0x8000) - 1U & 0x80;
    }
  }
  else {
    bVar8 = 0;
  }
  uVar3 = param_2 & 3;
  if (uVar3 == 0) {
    local_14 = 0x80000000;
  }
  else if (uVar3 == 1) {
    local_14 = 0x40000000;
  }
  else {
    if (uVar3 != 2) {
      puVar4 = (uint *)FUN_10008a20();
      *puVar4 = 0x16;
      puVar4 = (uint *)FUN_10008a30();
      *puVar4 = 0;
      return 0xffffffff;
    }
    local_14 = 0xc0000000;
  }
  switch(param_3) {
  case 0x10:
    local_18 = 0;
    break;
  default:
    puVar4 = (uint *)FUN_10008a20();
    *puVar4 = 0x16;
    puVar4 = (uint *)FUN_10008a30();
    *puVar4 = 0;
    return 0xffffffff;
  case 0x20:
    local_18 = 1;
    break;
  case 0x30:
    local_18 = 2;
    break;
  case 0x40:
    local_18 = 3;
  }
  uVar3 = param_2 & 0x700;
  if (uVar3 < 0x101) {
    if (uVar3 == 0x100) {
      local_10 = 4;
      goto LAB_10009597;
    }
    if (uVar3 != 0) goto LAB_10009544;
LAB_10009567:
    local_10 = 3;
    goto LAB_10009597;
  }
  if (uVar3 < 0x301) {
    if (uVar3 == 0x300) {
      local_10 = 2;
      goto LAB_10009597;
    }
    if (uVar3 != 0x200) goto LAB_10009544;
LAB_1000957b:
    local_10 = 5;
  }
  else {
    if (uVar3 < 0x501) {
      if (uVar3 != 0x500) {
        if (uVar3 != 0x400) {
LAB_10009544:
          puVar4 = (uint *)FUN_10008a20();
          *puVar4 = 0x16;
          puVar4 = (uint *)FUN_10008a30();
          *puVar4 = 0;
          return 0xffffffff;
        }
        goto LAB_10009567;
      }
    }
    else {
      if (uVar3 == 0x600) goto LAB_1000957b;
      if (uVar3 != 0x700) goto LAB_10009544;
    }
    local_10 = 1;
  }
LAB_10009597:
  DVar9 = 0x80;
  if (((param_2 & 0x100) != 0) && ((~DAT_10016d60 & param_4 & 0x80) == 0)) {
    DVar9 = 1;
  }
  if ((param_2 & 0x40) != 0) {
    local_14 = local_14 | 0x10000;
    DVar9 = DVar9 | 0x4000000;
  }
  if ((param_2 & 0x1000) != 0) {
    DVar9 = DVar9 | 0x100;
  }
  if ((param_2 & 0x20) == 0) {
    if ((param_2 & 0x10) != 0) {
      DVar9 = DVar9 | 0x10000000;
    }
  }
  else {
    DVar9 = DVar9 | 0x8000000;
  }
  uVar3 = __alloc_osfhnd();
  if (uVar3 == 0xffffffff) {
    puVar4 = (uint *)FUN_10008a20();
    *puVar4 = 0x18;
    puVar4 = (uint *)FUN_10008a30();
    *puVar4 = 0;
    return 0xffffffff;
  }
  hFile = CreateFileA(param_1,local_14,local_18,&local_c,local_10,DVar9,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar9 = GetLastError();
    __dosmaperr(DVar9);
    __unlock_fhandle(uVar3);
    return 0xffffffff;
  }
  DVar9 = GetFileType(hFile);
  if (DVar9 == 0) {
    CloseHandle(hFile);
    DVar9 = GetLastError();
    __dosmaperr(DVar9);
    __unlock_fhandle(uVar3);
    return 0xffffffff;
  }
  if (DVar9 == 2) {
    bVar8 = bVar8 | 0x40;
  }
  else if (DVar9 == 3) {
    bVar8 = bVar8 | 8;
  }
  FUN_10008b80(uVar3,hFile);
  piVar1 = (int *)((int)&DAT_10241870 + ((int)(uVar3 & 0xffffffe7) >> 3));
  local_14 = (uVar3 & 0x1f) * 0x24;
  *(byte *)(*piVar1 + 4 + local_14) = bVar8 | 1;
  local_18 = CONCAT31(local_18._1_3_,bVar8) & 0xffffff48;
  if ((((bVar8 & 0x48) == 0) && ((bVar8 & 0x80) != 0)) && ((param_2 & 2) != 0)) {
    iVar5 = __lseek_lk(uVar3,0xffffffff,2);
    if (iVar5 == -1) {
      piVar6 = (int *)FUN_10008a30();
      if (*piVar6 != 0x83) {
        __close(uVar3);
        __unlock_fhandle(uVar3);
        return 0xffffffff;
      }
    }
    else {
      local_19 = '\0';
      iVar7 = FUN_1000b720(uVar3,&local_19,1);
      if (((iVar7 == 0) && (local_19 == '\x1a')) && (iVar5 = __chsize_lk(uVar3,iVar5), iVar5 == -1))
      {
        __close(uVar3);
        __unlock_fhandle(uVar3);
        return 0xffffffff;
      }
      iVar5 = __lseek_lk(uVar3,0,0);
      if (iVar5 == -1) {
        __close(uVar3);
        __unlock_fhandle(uVar3);
        return 0xffffffff;
      }
    }
  }
  if (((char)local_18 == '\0') && ((param_2 & 8) != 0)) {
    pbVar2 = (byte *)(*piVar1 + 4 + local_14);
    *pbVar2 = *pbVar2 | 0x20;
  }
  __unlock_fhandle(uVar3);
  return uVar3;
}
