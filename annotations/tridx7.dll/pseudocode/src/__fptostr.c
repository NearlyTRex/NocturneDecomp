// Name: __fptostr
// Address: 1000a2c0
// Address Range: [[1000a2c0, 1000a340]]
// Convention: __cdecl
// Signature: errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

#include "nocturne.h"

/* Library Function - Single Match
errno_t __cdecl __fptostr(char *_Buf,size_t _SizeInBytes,int _Digits,STRFLT _PtFlt)

{
  char cVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  pcVar7 = _Buf + 1;
  pcVar5 = *(char **)(_Digits + 0xc);
  *_Buf = '0';
  sVar2 = _SizeInBytes;
  pcVar6 = pcVar7;
  if (0 < (int)_SizeInBytes) {
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\0') {
        *pcVar6 = '0';
      }
      else {
        pcVar5 = pcVar5 + 1;
        *pcVar6 = cVar1;
      }
      pcVar6 = pcVar6 + 1;
      _SizeInBytes = _SizeInBytes - 1;
      sVar2 = 0;
    } while (_SizeInBytes != 0);
  }
  *pcVar6 = '\0';
  if ((-1 < (int)sVar2) && ('4' < *pcVar5)) {
    pcVar6 = pcVar6 + -1;
    cVar1 = *pcVar6;
    while (cVar1 == '9') {
      *pcVar6 = '0';
      pcVar6 = pcVar6 + -1;
      cVar1 = *pcVar6;
    }
    *pcVar6 = *pcVar6 + '\x01';
  }
  if (*_Buf == '1') {
    *(int *)(_Digits + 4) = *(int *)(_Digits + 4) + 1;
    return sVar2;
  }
  uVar3 = 0xffffffff;
  do {
    pcVar5 = pcVar7;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar5 = pcVar7 + 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar5;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar7 = pcVar5 + -uVar3;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(uint *)_Buf = *(uint *)pcVar7;
    pcVar7 = pcVar7 + 4;
    _Buf = _Buf + 4;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *_Buf = *pcVar7;
    pcVar7 = pcVar7 + 1;
    _Buf = _Buf + 1;
  }
  return uVar3;
}
