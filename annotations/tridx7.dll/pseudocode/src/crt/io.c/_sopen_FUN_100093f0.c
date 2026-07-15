// Name: crt_io.c__sopen_FUN_100093f0
// Address: 100093f0
// Address Range: [[100093f0, 10009806]]
// Convention: __cdecl
// Signature: int __cdecl crt_io_c__sopen_FUN_100093f0(char *path,int oflag,int shflag,int pmode)

#include "nocturne.h"

int __cdecl _sopen(char *path,int oflag,int shflag,int pmode)

{
  byte *pbVar1;
  uint uVar2;
  int *piVar3;
  ulong *puVar4;
  HANDLE hFile;
  long lVar5;
  int iVar6;
  byte bVar7;
  DWORD DVar8;
  char local_19;
  DWORD local_18;
  uint local_14;
  DWORD local_10;
  _SECURITY_ATTRIBUTES local_c;
  
  local_c.lpSecurityDescriptor = (LPVOID)0x0;
  local_c.nLength = 0xc;
  local_c.bInheritHandle = (BOOL)((oflag & 0x80U) == 0);
  if ((oflag & 0x8000U) == 0) {
    bVar7 = 0x80;
    if ((oflag & 0x4000U) == 0) {
      bVar7 = (DAT_100178f4 == 0x8000) - 1U & 0x80;
    }
  }
  else {
    bVar7 = 0;
  }
  uVar2 = oflag & 3;
  if (uVar2 == 0) {
    local_14 = 0x80000000;
  }
  else if (uVar2 == 1) {
    local_14 = 0x40000000;
  }
  else {
    if (uVar2 != 2) {
      piVar3 = _errno();
      *piVar3 = 0x16;
      puVar4 = __doserrno();
      *puVar4 = 0;
      return -1;
    }
    local_14 = 0xc0000000;
  }
  switch(shflag) {
  case 0x10:
    local_18 = 0;
    break;
  default:
    piVar3 = _errno();
    *piVar3 = 0x16;
    puVar4 = __doserrno();
    *puVar4 = 0;
    return -1;
  case 0x20:
    local_18 = 1;
    break;
  case 0x30:
    local_18 = 2;
    break;
  case 0x40:
    local_18 = 3;
  }
  uVar2 = oflag & 0x700;
  if (uVar2 < 0x101) {
    if (uVar2 == 0x100) {
      local_10 = 4;
      goto LAB_10009597;
    }
    if (uVar2 != 0) goto LAB_10009544;
LAB_10009567:
    local_10 = 3;
    goto LAB_10009597;
  }
  if (uVar2 < 0x301) {
    if (uVar2 == 0x300) {
      local_10 = 2;
      goto LAB_10009597;
    }
    if (uVar2 != 0x200) goto LAB_10009544;
LAB_1000957b:
    local_10 = 5;
  }
  else {
    if (uVar2 < 0x501) {
      if (uVar2 != 0x500) {
        if (uVar2 != 0x400) {
LAB_10009544:
          piVar3 = _errno();
          *piVar3 = 0x16;
          puVar4 = __doserrno();
          *puVar4 = 0;
          return -1;
        }
        goto LAB_10009567;
      }
    }
    else {
      if (uVar2 == 0x600) goto LAB_1000957b;
      if (uVar2 != 0x700) goto LAB_10009544;
    }
    local_10 = 1;
  }
LAB_10009597:
  DVar8 = 0x80;
  if (((oflag & 0x100U) != 0) && ((~DAT_10016d60 & pmode & 0x80) == 0)) {
    DVar8 = 1;
  }
  if ((oflag & 0x40U) != 0) {
    local_14 = local_14 | 0x10000;
    DVar8 = DVar8 | 0x4000000;
  }
  if ((oflag & 0x1000U) != 0) {
    DVar8 = DVar8 | 0x100;
  }
  if ((oflag & 0x20U) == 0) {
    if ((oflag & 0x10U) != 0) {
      DVar8 = DVar8 | 0x10000000;
    }
  }
  else {
    DVar8 = DVar8 | 0x8000000;
  }
  uVar2 = _alloc_osfhnd();
  if (uVar2 == 0xffffffff) {
    piVar3 = _errno();
    *piVar3 = 0x18;
    puVar4 = __doserrno();
    *puVar4 = 0;
    return -1;
  }
  hFile = CreateFileA(path,local_14,local_18,&local_c,local_10,DVar8,(HANDLE)0x0);
  if (hFile == (HANDLE)0xffffffff) {
    DVar8 = GetLastError();
    _dosmaperr(DVar8);
    _unlock_fhandle(uVar2);
    return -1;
  }
  DVar8 = GetFileType(hFile);
  if (DVar8 == 0) {
    CloseHandle(hFile);
    DVar8 = GetLastError();
    _dosmaperr(DVar8);
    _unlock_fhandle(uVar2);
    return -1;
  }
  if (DVar8 == 2) {
    bVar7 = bVar7 | 0x40;
  }
  else if (DVar8 == 3) {
    bVar7 = bVar7 | 8;
  }
  _set_osfhnd(uVar2,(intptr_t)hFile);
  piVar3 = (int *)((int)&DAT_10241870 + ((int)(uVar2 & 0xffffffe7) >> 3));
  local_14 = (uVar2 & 0x1f) * 0x24;
  *(byte *)(*piVar3 + 4 + local_14) = bVar7 | 1;
  local_18 = CONCAT31(local_18._1_3_,bVar7) & 0xffffff48;
  if ((((bVar7 & 0x48) == 0) && ((bVar7 & 0x80) != 0)) && ((oflag & 2U) != 0)) {
    lVar5 = _lseek_lk(uVar2,-1,2);
    if (lVar5 == -1) {
      puVar4 = __doserrno();
      if (*puVar4 != 0x83) {
        _close(uVar2);
        _unlock_fhandle(uVar2);
        return -1;
      }
    }
    else {
      local_19 = '\0';
      iVar6 = _read_lk(uVar2,&local_19,1);
      if (((iVar6 == 0) && (local_19 == '\x1a')) &&
         (iVar6 = _chsize_lk(uVar2,lVar5), iVar6 == -1)) {
        _close(uVar2);
        _unlock_fhandle(uVar2);
        return -1;
      }
      lVar5 = _lseek_lk(uVar2,0,0);
      if (lVar5 == -1) {
        _close(uVar2);
        _unlock_fhandle(uVar2);
        return -1;
      }
    }
  }
  if (((char)local_18 == '\0') && ((oflag & 8U) != 0)) {
    pbVar1 = (byte *)(*piVar3 + 4 + local_14);
    *pbVar1 = *pbVar1 | 0x20;
  }
  _unlock_fhandle(uVar2);
  return uVar2;
}
