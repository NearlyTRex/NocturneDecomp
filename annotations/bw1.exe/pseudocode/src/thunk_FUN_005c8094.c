// Name: thunk_FUN_005c8094
// Address: 005c1da8
// Address Range: [[005c1da8, 005c1dac]]
// Convention: unknown
// Signature: undefined4 thunk_FUN_005c8094(LPCSTR param_1,int *param_2)

#include "nocturne.h"

uint thunk_FUN_005c8094(LPCSTR param_1,int *param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  HANDLE hFindFile;
  char *pcVar6;
  _WIN32_FIND_DATAA _Stack_368;
  char cStack_228;
  char cStack_227;
  char cStack_226;
  char cStack_225;
  CHAR aCStack_124 [260];
  short asStack_20 [2];
  uint uStack_1c;
  uint uStack_18;
  short asStack_14 [2];
  
  bVar1 = false;
  if ((*param_1 == '\0') || (iVar3 = FUN_005cc170(param_1,&DAT_005fabc8), iVar3 != 0)) {
    FUN_005c6450(1);
    uVar4 = 0xffffffff;
  }
  else {
    FUN_005c91d0(aCStack_124,0x104);
    iVar3 = FUN_005c2500(&cStack_228,param_1,0x104);
    if ((iVar3 != 0) &&
       ((((((&DAT_00626114)[(byte)(cStack_228 + 1)] & 0xc0) != 0 && (cStack_227 == ':')) &&
         (cStack_226 == '\\')) && (cStack_225 == '\0')))) {
      bVar1 = true;
    }
    pcVar5 = (char *)FUN_005c90c0(param_1);
    pcVar6 = param_1;
    if (*pcVar5 == ':') {
      pcVar6 = param_1 + 2;
    }
    if ((((*pcVar6 == '\\') || (*pcVar6 == '/')) && (pcVar6[1] == '\0')) || (bVar1)) {
      iVar3 = FUN_005c26c0(param_1);
      if (iVar3 != 0) {
        return 0xffffffff;
      }
      FUN_005c26c0(aCStack_124);
      FUN_005bfb70(&_Stack_368,0,0x13e);
      _Stack_368.dwFileAttributes = 0x10;
    }
    else {
      hFindFile = FindFirstFileA(param_1,&_Stack_368);
      if (hFindFile == (HANDLE)0xffffffff) {
        uVar4 = FUN_005c862c();
        return uVar4;
      }
      FindClose(hFindFile);
    }
    pcVar6 = (char *)FUN_005c90c0(param_1);
    if (*pcVar6 == ':') {
      aCStack_124[0] = *param_1;
    }
    iVar3 = FUN_005c0820(aCStack_124[0]);
    *param_2 = iVar3 + -0x61;
    iVar3 = *param_2;
    *param_2 = iVar3 + -1;
    *(int *)((int)param_2 + 0x12) = iVar3 + -1;
    *(DWORD *)((int)param_2 + 0x16) = _Stack_368.nFileSizeLow;
    uVar2 = FUN_005c7f80(_Stack_368.dwFileAttributes,_Stack_368.cFileName);
    *(ushort *)(param_2 + 2) = uVar2;
    FUN_005cc1c0(&_Stack_368.ftLastWriteTime,asStack_20,asStack_14);
    uVar4 = FUN_005cc2b0(asStack_20[0],asStack_14[0]);
    *(uint *)((int)param_2 + 0x1e) = uVar4;
    FUN_005cc1c0(&_Stack_368.ftCreationTime,&uStack_18,&uStack_1c);
    if (((short)uStack_18 == asStack_20[0]) && ((short)uStack_1c == asStack_14[0])) {
      uVar4 = *(uint *)((int)param_2 + 0x1e);
    }
    else {
      uVar4 = FUN_005cc2b0(uStack_18 & 0xffff,uStack_1c & 0xffff);
    }
    *(uint *)((int)param_2 + 0x22) = uVar4;
    FUN_005cc1c0(&_Stack_368.ftLastAccessTime,&uStack_18,&uStack_1c);
    if (((short)uStack_18 == asStack_20[0]) && ((short)uStack_1c == asStack_14[0])) {
      uVar4 = *(uint *)((int)param_2 + 0x1e);
    }
    else {
      uVar4 = FUN_005cc2b0(uStack_18 & 0xffff,uStack_1c & 0xffff);
    }
    *(uint *)((int)param_2 + 0x1a) = uVar4;
    *(ushort *)(param_2 + 4) = 0;
    *(ushort *)((int)param_2 + 10) = 1;
    param_2[3] = (int)(short)param_2[4];
    param_2[1] = (int)(short)param_2[4];
    *(uint *)((int)param_2 + 0x2e) = 0;
    *(DWORD *)((int)param_2 + 0x2a) = _Stack_368.dwFileAttributes;
    *(uint *)((int)param_2 + 0x32) = 0;
    *(ushort *)((int)param_2 + 0x36) = 0;
    *(byte *)(param_2 + 0xe) = 0;
    FUN_005c20d0((int)param_2 + 0x39,_Stack_368.cFileName,0xd);
    uVar4 = 0;
  }
  return uVar4;
}
