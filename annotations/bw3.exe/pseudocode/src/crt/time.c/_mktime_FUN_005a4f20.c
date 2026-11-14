// Name: crt_time.c__mktime_FUN_005a4f20
// Address: 005a4f20
// Address Range: [[005a4f20, 005a50d2]]
// Convention: __cdecl
// Signature: time_t __cdecl crt_time_c__mktime_FUN_005a4f20(_tm *timeptr)

#include "nocturne.h"

time_t __cdecl _mktime(_tm *timeptr)

{
  time_t tVar1;
  int iVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  
  iVar3 = timeptr->tm_mon % 0xc;
  puVar4 = &DAT_005e8804;
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
    iVar2 = FUN_005abdf0(iVar5 + 0x76c);
    if (iVar2 != 0) {
      puVar4 = &DAT_005e881e;
    }
    iVar2 = iVar5 + 3 >> 0x1f;
    iVar3 = (int)*(short *)(puVar4 + iVar3 * 2) +
            ((iVar5 * 0x16d + ((int)((iVar5 + 3 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2)) -
            (iVar5 + 99) / 100) + (iVar5 + 299) / 400 + timeptr->tm_mday;
    for (iVar5 = timeptr->tm_sec + (timeptr->tm_min + timeptr->tm_hour * 0x3c) * 0x3c;
        iVar3 = iVar3 + -1, iVar5 < 0; iVar5 = iVar5 + 0x15180) {
    }
    FUN_005ac290(iVar3,iVar5,0,timeptr);
    FUN_005ac558();
    iVar5 = iVar5 + DAT_00607d3c;
    if (timeptr->tm_isdst < 0) {
      FUN_005abf84(timeptr);
    }
    if (0 < timeptr->tm_isdst) {
      iVar5 = iVar5 - DAT_00607d44;
    }
    for (; iVar5 < 0; iVar5 = iVar5 + 0x15180) {
      iVar3 = iVar3 + -1;
    }
    if (iVar3 < 0x63de) {
      return -1;
    }
    if (iVar3 == 0x63de) {
      tVar1 = iVar5 + -0x15180;
      if ((DAT_00607d3c < 1) || (tVar1 < 0)) {
        return -1;
      }
    }
    else {
      tVar1 = iVar5 + (iVar3 + -0x63df) * 0x15180;
    }
  }
  return tVar1;
}
