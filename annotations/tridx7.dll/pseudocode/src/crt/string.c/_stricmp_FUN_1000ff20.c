// Name: crt_string.c__stricmp_FUN_1000ff20
// Address: 1000ff20
// Address Range: [[1000ff20, 1000ffe6]]
// Convention: __cdecl
// Signature: int __cdecl crt_string_c__stricmp_FUN_1000ff20(char *str1,char *str2)

#include "nocturne.h"

int __cdecl _stricmp(char *str1,char *str2)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint c;
  
  if (DAT_10017760 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_1000ff6e;
        bVar5 = *str2;
        str2 = str2 + 1;
        bVar4 = *str1;
        str1 = str1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
LAB_1000ff6e:
    c = (uint)cVar6;
  }
  else {
    bVar2 = 0 < DAT_10240854;
    if (bVar2) {
      _lock(0x13);
    }
    else {
      DAT_10240858 = DAT_10240858 + 1;
    }
    uVar8 = (uint)bVar2;
    c = 0xff;
    uVar7 = 0;
    do {
      do {
        if ((char)c == '\0') goto LAB_1000ffc7;
        cVar6 = *str2;
        c = CONCAT31((int3)(c >> 8),cVar6);
        str2 = str2 + 1;
        cVar1 = *str1;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),cVar1);
        str1 = str1 + 1;
      } while (cVar6 == cVar1);
      uVar7 = _tolower_lk(uVar7);
      c = _tolower_lk(c);
    } while ((byte)uVar7 == (byte)c);
    uVar7 = (uint)((byte)uVar7 < (byte)c);
    c = (1 - uVar7) - (uint)(uVar7 != 0);
LAB_1000ffc7:
    if (uVar8 == 0) {
      DAT_10240858 = DAT_10240858 + -1;
    }
    else {
      _unlock(0x13);
    }
  }
  return c;
}
