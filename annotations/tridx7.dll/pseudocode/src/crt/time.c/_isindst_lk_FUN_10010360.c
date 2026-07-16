// Name: crt_time.c__isindst_lk_FUN_10010360
// Address: 10010360
// Address Range: [[10010360, 100105ba]]
// Convention: __cdecl
// Signature: int __cdecl crt_time_c__isindst_lk_FUN_10010360(_tm *tb)

#include "nocturne.h"

int __cdecl _isindst_lk(_tm *tb)

{
  uint date;
  int datetype;
  int iVar1;
  uint month;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint hour;
  uint min;
  uint sec;
  
  if (DAT_10018524 == 0) {
    return 0;
  }
  iVar1 = tb->tm_year;
  if ((DAT_100185c0 == iVar1) && (DAT_100185d0 == iVar1)) goto LAB_100104fd;
  if (DAT_102407a0 == 0) {
    cvtdate(1,1,iVar1,4,1,0,0,2,0,0,0);
    uVar4 = 0;
    sec = 0;
    min = 0;
    iVar1 = tb->tm_year;
    hour = 2;
    uVar3 = 0;
    uVar2 = 5;
    month = 10;
LAB_100104f1:
    date = 0;
    datetype = 1;
  }
  else {
    if (DAT_10240840 != 0) {
      uVar4 = (uint)DAT_10240846;
      uVar3 = 0;
      uVar2 = 0;
    }
    else {
      uVar4 = 0;
      uVar3 = (uint)DAT_10240844;
      uVar2 = (uint)DAT_10240846;
    }
    cvtdate
              (1,(uint)(DAT_10240840 == 0),iVar1,(uint)DAT_10240842,uVar2,uVar3,uVar4,
               (uint)DAT_10240848,(uint)DAT_1024084a,(uint)DAT_1024084c,(uint)DAT_1024084e);
    if (DAT_102407ec == 0) {
      uVar4 = (uint)DAT_102407fa;
      sec = (uint)DAT_102407f8;
      min = (uint)DAT_102407f6;
      hour = (uint)DAT_102407f4;
      uVar3 = (uint)DAT_102407f0;
      uVar2 = (uint)DAT_102407f2;
      iVar1 = tb->tm_year;
      month = (uint)DAT_102407ee;
      goto LAB_100104f1;
    }
    uVar4 = (uint)DAT_102407fa;
    sec = (uint)DAT_102407f8;
    min = (uint)DAT_102407f6;
    hour = (uint)DAT_102407f4;
    date = (uint)DAT_102407f2;
    iVar1 = tb->tm_year;
    uVar3 = 0;
    uVar2 = 0;
    month = (uint)DAT_102407ee;
    datetype = 0;
  }
  cvtdate(0,datetype,iVar1,month,uVar2,uVar3,date,hour,min,sec,uVar4);
LAB_100104fd:
  iVar1 = tb->tm_yday;
  if (DAT_100185c4 < DAT_100185d4) {
    if ((iVar1 < DAT_100185c4) || (DAT_100185d4 < iVar1)) {
      return 0;
    }
    if ((DAT_100185c4 < iVar1) && (iVar1 < DAT_100185d4)) {
      return 1;
    }
  }
  else {
    if (iVar1 < DAT_100185d4) {
      return 1;
    }
    if (DAT_100185c4 < iVar1) {
      return 1;
    }
    if ((DAT_100185d4 < iVar1) && (iVar1 < DAT_100185c4)) {
      return 0;
    }
  }
  iVar1 = ((tb->tm_hour * 0x3c + tb->tm_min) * 0x3c + tb->tm_sec) * 1000;
  if (tb->tm_yday == DAT_100185c4) {
    if (iVar1 < DAT_100185c8) {
      return 0;
    }
  }
  else if (DAT_100185d8 <= iVar1) {
    return 0;
  }
  return 1;
}
