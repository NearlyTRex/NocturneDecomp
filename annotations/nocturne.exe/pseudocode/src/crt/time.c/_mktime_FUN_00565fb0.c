// Name: crt_time.c__mktime_FUN_00565fb0
// Address: 00565fb0
// Address Range: [[00565fb0, 00566162]]
// Convention: __cdecl
// Signature: time_t __cdecl crt_time_c__mktime_FUN_00565fb0(_tm *timeptr)

#include "nocturne.h"

time_t __cdecl _mktime(_tm *timeptr)

{
  time_t tVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  
  iVar3 = timeptr->tm_mon % 0xc;
  puVar4 = &DAT_005a4a78;
  if (timeptr->tm_year < -0xb04815f) {
    tVar1 = -1;
  }
  else {
    iVar5 = timeptr->tm_year + timeptr->tm_mon / 0xc;
    for (; iVar3 < 0; iVar3 = iVar3 + 0xc) {
      iVar5 = iVar5 + -1;
    }
    if (iVar5 < 0) {
      return -1;
    }
    iVar2 = is_leap_year(iVar5 + 0x76c);
    if (iVar2 != 0) {
      puVar4 = &DAT_005a4a92;
    }
    iVar2 = iVar5 + 3 >> 0x1f;
    iVar3 = (int)*(short *)(puVar4 + iVar3 * 2) +
            ((iVar5 * 0x16d + ((int)((iVar5 + 3 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2)) -
            (iVar5 + 99) / 100) + (iVar5 + 299) / 400 + timeptr->tm_mday;
    for (iVar5 = timeptr->tm_sec + (timeptr->tm_min + timeptr->tm_hour * 0x3c) * 0x3c;
        iVar3 = iVar3 + -1, iVar5 < 0; iVar5 = iVar5 + 0x15180) {
    }
    gmtime_r(iVar3,iVar5,0,(char)timeptr);
    tzset();
    iVar5 = iVar5 + DAT_005c1f14;
    if (timeptr->tm_isdst < 0) {
      determine_dst_status(timeptr);
    }
    if (0 < timeptr->tm_isdst) {
      iVar5 = iVar5 - DAT_005c1f1c;
    }
    for (; iVar5 < 0; iVar5 = iVar5 + 0x15180) {
      iVar3 = iVar3 + -1;
    }
    if (iVar3 < 0x63de) {
      return -1;
    }
    if (iVar3 == 0x63de) {
      tVar1 = iVar5 + -0x15180;
      if ((DAT_005c1f14 < 1) || (tVar1 < 0)) {
        return -1;
      }
    }
    else {
      tVar1 = iVar5 + (iVar3 + -0x63df) * 0x15180;
    }
  }
  return tVar1;
}
