// Name: FUN_005aaed4
// Address: 005aaed4
// Address Range: [[005aaed4, 005ab1cf]]
// Convention: unknown
// Signature: undefined4 FUN_005aaed4(LPCSTR param_1,int *param_2)

#include "nocturne.h"

uint FUN_005aaed4(LPCSTR param_1,int *param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  HANDLE hFindFile;
  char *pcVar6;
  _WIN32_FIND_DATAA local_368;
  char local_228;
  char local_227;
  char local_226;
  char local_225;
  CHAR local_124 [260];
  short local_20 [2];
  uint local_1c;
  uint local_18;
  short local_14 [2];
  
  bVar1 = false;
  if ((*param_1 == '\0') || (iVar3 = FUN_005aede0(param_1,&DAT_005da884), iVar3 != 0)) {
    FUN_005a92c0(1);
    uVar4 = 0xffffffff;
  }
  else {
    FUN_005acb10(local_124,0x104);
    iVar3 = FUN_005a53f0(&local_228,param_1,0x104);
    if ((iVar3 != 0) &&
       ((((((&DAT_006074b8)[(byte)(local_228 + 1)] & 0xc0) != 0 && (local_227 == ':')) &&
         (local_226 == '\\')) && (local_225 == '\0')))) {
      bVar1 = true;
    }
    pcVar5 = (char *)FUN_005aca00(param_1);
    pcVar6 = param_1;
    if (*pcVar5 == ':') {
      pcVar6 = param_1 + 2;
    }
    if ((((*pcVar6 == '\\') || (*pcVar6 == '/')) && (pcVar6[1] == '\0')) || (bVar1)) {
      iVar3 = FUN_005a55b0(param_1);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      FUN_005a55b0(local_124);
      FUN_005a28f0(&local_368,0,0x13e);
      local_368.dwFileAttributes = 0x10;
    }
    else {
      hFindFile = FindFirstFileA(param_1,&local_368);
      if (hFindFile == (HANDLE)0xffffffff) {
        uVar4 = FUN_005ab46c();
        return uVar4;
      }
      FindClose(hFindFile);
    }
    pcVar6 = (char *)FUN_005aca00(param_1);
    if (*pcVar6 == ':') {
      local_124[0] = *param_1;
    }
    iVar3 = FUN_005a35a0(local_124[0]);
    *param_2 = iVar3 + -0x61;
    iVar3 = *param_2;
    *param_2 = iVar3 + -1;
    *(int *)((int)param_2 + 0x12) = iVar3 + -1;
    *(DWORD *)((int)param_2 + 0x16) = local_368.nFileSizeLow;
    uVar2 = FUN_005aadc0(local_368.dwFileAttributes,local_368.cFileName);
    *(ushort *)(param_2 + 2) = uVar2;
    FUN_005aee30(&local_368.ftLastWriteTime,local_20,local_14);
    uVar4 = FUN_005aef20(local_20[0],local_14[0]);
    *(uint *)((int)param_2 + 0x1e) = uVar4;
    FUN_005aee30(&local_368.ftCreationTime,&local_18,&local_1c);
    if (((short)local_18 == local_20[0]) && ((short)local_1c == local_14[0])) {
      uVar4 = *(uint *)((int)param_2 + 0x1e);
    }
    else {
      uVar4 = FUN_005aef20(local_18 & 0xffff,local_1c & 0xffff);
    }
    *(uint *)((int)param_2 + 0x22) = uVar4;
    FUN_005aee30(&local_368.ftLastAccessTime,&local_18,&local_1c);
    if (((short)local_18 == local_20[0]) && ((short)local_1c == local_14[0])) {
      uVar4 = *(uint *)((int)param_2 + 0x1e);
    }
    else {
      uVar4 = FUN_005aef20(local_18 & 0xffff,local_1c & 0xffff);
    }
    *(uint *)((int)param_2 + 0x1a) = uVar4;
    *(ushort *)(param_2 + 4) = 0;
    *(ushort *)((int)param_2 + 10) = 1;
    param_2[3] = (int)(short)param_2[4];
    param_2[1] = (int)(short)param_2[4];
    *(uint *)((int)param_2 + 0x2e) = 0;
    *(DWORD *)((int)param_2 + 0x2a) = local_368.dwFileAttributes;
    *(uint *)((int)param_2 + 0x32) = 0;
    *(ushort *)((int)param_2 + 0x36) = 0;
    *(byte *)(param_2 + 0xe) = 0;
    FUN_005a4ee0((int)param_2 + 0x39,local_368.cFileName,0xd);
    uVar4 = 0;
  }
  return uVar4;
}
