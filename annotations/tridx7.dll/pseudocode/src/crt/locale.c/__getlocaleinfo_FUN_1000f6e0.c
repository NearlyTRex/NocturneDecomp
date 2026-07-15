// Name: crt_locale.c___getlocaleinfo_FUN_1000f6e0
// Address: 1000f6e0
// Address Range: [[1000f6e0, 1000f895]]
// Convention: __cdecl
// Signature: int __cdecl crt_locale_c___getlocaleinfo_FUN_1000f6e0(int type,LCID lcid,LCTYPE lc_type,void *out)

#include "nocturne.h"

int __cdecl __getlocaleinfo(int type,LCID lcid,LCTYPE lc_type,void *out)

{
  bool bVar1;
  size_t sVar2;
  DWORD DVar3;
  byte *pbVar4;
  char *dest;
  int iVar5;
  uint uVar6;
  byte local_80 [128];
  
  if (type != 1) {
    if (type != 0) {
      return -1;
    }
    iVar5 = __crtGetLocaleInfoW(lcid,lc_type,(LPWSTR)&DAT_10240798,4,0);
    if (iVar5 != 0) {
      pbVar4 = &DAT_10240798;
      *(byte *)out = 0;
      while( true ) {
        local_80[0] = *pbVar4;
        if (DAT_10017690 < 2) {
          uVar6 = *(ushort *)(PTR_DAT_10017480 + (uint)local_80[0] * 2) & 4;
        }
        else {
          uVar6 = _isctype((uint)local_80[0],4);
        }
        if (uVar6 == 0) break;
        pbVar4 = pbVar4 + 2;
        *(byte *)out = local_80[0] + *(char *)out * '\n' + -0x30;
        if (&DAT_102407a0 <= pbVar4) {
          return 0;
        }
      }
      return 0;
    }
    return -1;
  }
  pbVar4 = local_80;
  bVar1 = false;
  sVar2 = __crtGetLocaleInfoA(lcid,lc_type,(LPSTR)local_80,0x80,0);
  if (sVar2 == 0) {
    DVar3 = GetLastError();
    if (((DVar3 != 0x7a) ||
        (sVar2 = __crtGetLocaleInfoA(lcid,lc_type,(LPSTR)0x0,0,0),
        sVar2 == 0)) || (pbVar4 = malloc(sVar2), pbVar4 == (byte *)0x0))
    goto LAB_1000f7b7;
    bVar1 = true;
    sVar2 = __crtGetLocaleInfoA(lcid,lc_type,(LPSTR)pbVar4,sVar2,0);
    if (sVar2 == 0) goto LAB_1000f7b7;
  }
  dest = (char *)malloc(sVar2);
  *(char **)out = dest;
  if (dest != (char *)0x0) {
    _strncpy(dest,(char *)pbVar4,sVar2);
    if (bVar1) {
      free(pbVar4);
    }
    return 0;
  }
LAB_1000f7b7:
  if (bVar1) {
    free(pbVar4);
  }
  return -1;
}
