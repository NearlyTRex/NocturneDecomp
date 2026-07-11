// Name: FUN_0056c750
// Address: 0056c750
// Address Range: [[0056c750, 0056c861]]
// Convention: unknown
// Signature: uint FUN_0056c750(uint param_1,char *param_2)

#include "nocturne.h"

uint FUN_0056c750(uint param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  HANDLE hFile;
  DWORD DVar3;
  uint uVar4;
  char *pcVar5;
  
  uVar4 = 0;
  if (DAT_005c1d11 < 0x8000) {
    uVar1 = 0x20;
  }
  else {
    uVar1 = 0x40;
  }
  if ((param_1 & uVar1) != 0) {
    iVar2 = FUN_00564520(param_2,&DAT_00598bd4);
    pcVar5 = param_2;
    if (iVar2 == 0) {
      pcVar5 = "conin$";
    }
    hFile = CreateFileA(pcVar5,0,0,(LPSECURITY_ATTRIBUTES)0x0,3,0,(HANDLE)0x0);
    if (hFile == (HANDLE)0xffffffff) {
      if ((0x7fff < DAT_005c1d11) || (DVar3 = GetLastError(), DVar3 == 5)) {
        uVar4 = 0x2000;
      }
    }
    else {
      DVar3 = GetFileType(hFile);
      if (DVar3 == 2) {
        uVar4 = 0x2000;
      }
      else if (DVar3 == 3) {
        uVar4 = 0x1000;
      }
      CloseHandle(hFile);
    }
  }
  if ((param_1 & 0x10) == 0) {
    uVar1 = uVar4;
    if (((uVar4 & 0x2000) == 0) && ((uVar4 & 0x1000) == 0)) {
      uVar1 = uVar4 | 0x8000;
      do {
        pcVar5 = param_2;
        if (*param_2 == '.') goto LAB_0056c831;
        if (*param_2 == '\0') break;
        pcVar5 = param_2 + 1;
        if (*pcVar5 == '.') goto LAB_0056c831;
        param_2 = param_2 + 2;
      } while (*pcVar5 != '\0');
      pcVar5 = (char *)0x0;
LAB_0056c831:
      if ((pcVar5 != (char *)0x0) && (iVar2 = FUN_005649c0(pcVar5 + 1,&DAT_00598be0), iVar2 == 0)) {
        uVar1 = uVar4 | 0x8049;
      }
    }
  }
  else {
    uVar1 = 0x4049;
  }
  uVar4 = uVar1 | 0x124;
  if ((param_1 & 1) == 0) {
    uVar4 = uVar1 | 0x1b6;
  }
  return uVar4;
}
