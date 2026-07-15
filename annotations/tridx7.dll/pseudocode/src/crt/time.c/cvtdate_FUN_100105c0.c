// Name: crt_time.c_cvtdate_FUN_100105c0
// Address: 100105c0
// Address Range: [[100105c0, 1001074a]]
// Convention: __cdecl
// Signature: time_t __cdecl crt_time_c_cvtdate_FUN_100105c0(int trantype,int datetype,int year,int month,int week,int weekday,int date,int hour,int min,int sec,int msec)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

time_t __cdecl cvtdate(int trantype,int datetype,int year,int month,int week,int weekday,int date,int hour,int min,int sec,int msec)

{
  int iVar1;
  time_t tVar2;
  int iVar3;
  int iVar4;
  
  if (datetype == 1) {
    if ((year & 3U) == 0) {
      iVar4 = (&DAT_100185dc)[month];
    }
    else {
      iVar4 = *(int *)(&DAT_10018614 + month * 4);
    }
    iVar3 = ((year + -1 >> 2) + year * 0x16d + -0x63db + iVar4 + 1) % 7;
    iVar1 = week;
    if (iVar3 < weekday) {
      iVar1 = week + -1;
    }
    iVar4 = iVar4 + 1 + (iVar1 * 7 - iVar3) + weekday;
    if (week == 5) {
      if ((year & 3U) == 0) {
        iVar1 = *(int *)(&DAT_100185e0 + month * 4);
      }
      else {
        iVar1 = *(int *)(&DAT_10018618 + month * 4);
      }
      if (iVar1 < iVar4) {
        iVar4 = iVar4 + -7;
      }
    }
  }
  else {
    if ((year & 3U) == 0) {
      iVar4 = (&DAT_100185dc)[month];
    }
    else {
      iVar4 = *(int *)(&DAT_10018614 + month * 4);
    }
    iVar4 = iVar4 + date;
  }
  if (trantype != 1) {
    DAT_100185d4 = iVar4;
    DAT_100185d8 = msec + ((hour * 0x3c + min) * 0x3c + _DAT_10018528 + sec) * 1000;
    tVar2 = DAT_100185d8;
    if (DAT_100185d8 < 0) {
      DAT_100185d8 = DAT_100185d8 + 86399999;
    }
    else if (86399999 < DAT_100185d8) {
      DAT_100185d8 = DAT_100185d8 + -86399999;
    }
    DAT_100185d0 = year;
    return tVar2;
  }
  DAT_100185c4 = iVar4;
  DAT_100185c0 = year;
  DAT_100185c8 = msec + ((hour * 0x3c + min) * 0x3c + sec) * 1000;
  return msec;
}
