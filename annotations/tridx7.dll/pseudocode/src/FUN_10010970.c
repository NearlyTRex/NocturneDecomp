// Name: FUN_10010970
// Address: 10010970
// Address Range: [[10010970, 10010bd9]]
// Convention: unknown
// Signature: uint FUN_10010970(LPSTR param_1,LPCWSTR param_2,uint param_3)

#include "nocturne.h"

uint FUN_10010970(LPSTR param_1,LPCWSTR param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  DWORD DVar5;
  int iVar6;
  CHAR local_6 [2];
  BOOL local_4;
  
  uVar2 = 0;
  local_4 = 0;
  if ((param_1 != (LPSTR)0x0) && (param_3 == 0)) {
    return uVar2;
  }
  if (param_1 == (LPSTR)0x0) {
    if (DAT_10017760 == 0) {
      uVar2 = FUN_1000a930(param_2);
      return uVar2;
    }
    iVar3 = WideCharToMultiByte(DAT_10017770,0x220,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,&local_4);
    if ((iVar3 != 0) && (local_4 == 0)) {
      return iVar3 - 1;
    }
    puVar4 = (uint *)FUN_10008a20();
    *puVar4 = 0x2a;
    uVar2 = 0xffffffff;
  }
  else if (DAT_10017760 == 0) {
    if (param_3 != 0) {
      while( true ) {
        if (0xff < (ushort)*param_2) {
          puVar4 = (uint *)FUN_10008a20();
          *puVar4 = 0x2a;
          return 0xffffffff;
        }
        param_1[uVar2] = (CHAR)*param_2;
        if (*param_2 == L'\0') break;
        uVar2 = uVar2 + 1;
        param_2 = param_2 + 1;
        if (param_3 <= uVar2) {
          return uVar2;
        }
      }
    }
  }
  else {
    if (DAT_10017690 != 1) {
      iVar3 = WideCharToMultiByte(DAT_10017770,0x220,param_2,-1,param_1,param_3,(LPCSTR)0x0,&local_4
                                 );
      if (iVar3 == 0) {
        if ((local_4 == 0) && (DVar5 = GetLastError(), DVar5 == 0x7a)) {
          uVar2 = 0;
          if (param_3 != 0) {
            do {
              iVar3 = WideCharToMultiByte(DAT_10017770,0,param_2,1,local_6,DAT_10017690,(LPCSTR)0x0,
                                          &local_4);
              if ((iVar3 == 0) || (local_4 != 0)) {
                puVar4 = (uint *)FUN_10008a20();
                *puVar4 = 0x2a;
                return 0xffffffff;
              }
              if (param_3 < uVar2 + iVar3) {
                return uVar2;
              }
              iVar6 = 0;
              if (0 < iVar3) {
                do {
                  cVar1 = local_6[iVar6];
                  param_1[uVar2] = cVar1;
                  if (cVar1 == '\0') {
                    return uVar2;
                  }
                  iVar6 = iVar6 + 1;
                  uVar2 = uVar2 + 1;
                } while (iVar6 < iVar3);
              }
              param_2 = param_2 + 1;
            } while (uVar2 < param_3);
          }
          return uVar2;
        }
      }
      else if (local_4 == 0) {
        return iVar3 - 1;
      }
      puVar4 = (uint *)FUN_10008a20();
      *puVar4 = 0x2a;
      return 0xffffffff;
    }
    if (param_3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = FUN_10010be0(param_2,param_3);
    }
    uVar2 = WideCharToMultiByte(DAT_10017770,0x220,param_2,iVar3,param_1,iVar3,(LPCSTR)0x0,&local_4)
    ;
    if ((uVar2 == 0) || (local_4 != 0)) {
      puVar4 = (uint *)FUN_10008a20();
      *puVar4 = 0x2a;
      return 0xffffffff;
    }
    if (param_1[uVar2 - 1] == '\0') {
      return uVar2 - 1;
    }
  }
  return uVar2;
}
