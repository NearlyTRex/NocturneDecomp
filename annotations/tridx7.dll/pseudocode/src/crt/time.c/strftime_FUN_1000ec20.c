// Name: crt_time.c_strftime_FUN_1000ec20
// Address: 1000ec20
// Address Range: [[1000ec20, 1000ed2c]]
// Convention: __cdecl
// Signature: size_t __cdecl crt_time_c_strftime_FUN_1000ec20(char *dest,size_t max_size,char *format,_tm *timeptr)

#include "nocturne.h"

size_t __cdecl strftime(char *dest,size_t max_size,char *format,_tm *timeptr)

{
  byte bVar1;
  size_t sVar2;
  _tm *tb;
  byte *pbVar3;
  byte *pbVar4;
  bool bVar5;
  uint uStack_8;
  uint uStack_4;
  
  sVar2 = max_size;
  bVar5 = DAT_10240854 == 0;
  uStack_8 = max_size;
  if (bVar5) {
    DAT_10240858 = DAT_10240858 + 1;
  }
  else {
    _lock(0x13);
  }
  tb = timeptr;
  uStack_4 = (uint)!bVar5;
  pbVar3 = (byte *)format;
  while ((uStack_8 != 0 && (bVar1 = *pbVar3, bVar1 != 0))) {
    if (bVar1 == 0x25) {
      pbVar4 = pbVar3 + 1;
      bVar1 = *pbVar4;
      if (bVar1 == 0x23) {
        pbVar4 = pbVar3 + 2;
      }
      DAT_10018210 = (uint)(bVar1 == 0x23);
      _expandtime(*pbVar4,tb,&dest,&uStack_8);
    }
    else {
      if (((PTR_DAT_10017480[(uint)bVar1 * 2 + 1] & 0x80) != 0) && (1 < uStack_8)) {
        pbVar3 = pbVar3 + 1;
        *dest = bVar1;
        dest = dest + 1;
        uStack_8 = uStack_8 - 1;
      }
      *dest = *pbVar3;
      dest = dest + 1;
      uStack_8 = uStack_8 - 1;
      pbVar4 = pbVar3;
    }
    pbVar3 = pbVar4 + 1;
  }
  if (uStack_4 == 0) {
    DAT_10240858 = DAT_10240858 + -1;
  }
  else {
    _unlock(0x13);
  }
  if (uStack_8 != 0) {
    *dest = '\0';
    return sVar2 - uStack_8;
  }
  return 0;
}
