// Name: __fltout2
// Address: 1000a350
// Address Range: [[1000a350, 1000a3d0]]
// Convention: __cdecl
// Signature: STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

#include "nocturne.h"

/* Library Function - Single Match
STRFLT __cdecl __fltout2(_CRT_DOUBLE _Dbl,STRFLT _Flt,char *_ResultStr,size_t _SizeInBytes)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  uint local_28;
  uint local_24;
  uint local_20;
  short local_1c;
  char local_1a;
  char local_18 [24];
  
  bVar7 = 0;
  ___dtold(&local_28,&_Dbl);
  iVar2 = _I10_OUTPUT(local_28,local_24,local_20,0x11,0,&local_1c);
  _Flt->flag = iVar2;
  _Flt->sign = (int)local_1a;
  _Flt->decpt = (int)local_1c;
  uVar3 = 0xffffffff;
  pcVar5 = local_18;
  do {
    pcVar6 = pcVar5;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3;
  pcVar5 = pcVar6 + -uVar3;
  pcVar6 = _ResultStr;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(uint *)pcVar6 = *(uint *)pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -8 + 4;
    pcVar6 = pcVar6 + (uint)bVar7 * -8 + 4;
  }
  for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  }
  _Flt->mantissa = _ResultStr;
  return _Flt;
}
