// Name: crt_time.c_determine_dst_status_FUN_0056d034
// Address: 0056d034
// Address Range: [[0056d034, 0056d307]]
// Convention: __cdecl
// Signature: int __cdecl crt_time_c_determine_dst_status_FUN_0056d034(_tm *timeptr)

#include "nocturne.h"

int __cdecl determine_dst_status(_tm *timeptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  int local_14;
  
  uVar8 = 0;
  if (*PTR_DAT_005c1f10 == '\0') goto LAB_0056d2fb;
  uVar1 = FUN_0056cfd8(&DAT_005c1dc0,&DAT_005c1de4,timeptr->tm_year);
  if (uVar1 == 0) {
    puVar7 = (uint *)&DAT_005c1dc0;
    puVar9 = &DAT_005c1de4;
  }
  else {
    puVar7 = &DAT_005c1de4;
    puVar9 = (uint *)&DAT_005c1dc0;
  }
  iVar4 = timeptr->tm_mon;
  iVar2 = is_leap_year(timeptr->tm_year + 0x76c);
  iVar6 = iVar4 * 2;
  if (iVar2 == 0) {
    iVar2 = *(int *)(&DAT_005a4a78 + iVar6);
    iVar6 = *(int *)((int)&g_fstreambaseTypeInfo_005a4a60.class_name + iVar6 + 2);
  }
  else {
    iVar2 = *(int *)(&DAT_005a4a92 + iVar6);
    iVar6 = *(int *)(&DAT_005a4a90 + iVar6);
  }
  iVar6 = (iVar2 >> 0x10) - (iVar6 >> 0x10);
  if (puVar7[8] == 0) {
    if ((int)puVar7[4] < iVar4) {
      uVar8 = 1;
    }
    else if (iVar4 == puVar7[4]) {
      iVar2 = timeptr->tm_mday - ((timeptr->tm_wday + 7) - puVar7[6]) % 7;
      iVar5 = (timeptr->tm_mday + -1) - ((timeptr->tm_wday + 6) - puVar7[6]) % 7;
      if (puVar7[3] == 5) {
        iVar3 = iVar6 + -7;
        if ((iVar3 < iVar2) && (uVar8 = 1, iVar5 <= iVar3)) {
LAB_0056d1d5:
          iVar2 = FUN_0056d308(timeptr,puVar7);
          uVar8 = (uint)(iVar2 == 0);
        }
      }
      else {
        iVar3 = (puVar7[3] + -1) * 7 + 1;
        if ((iVar3 <= iVar2) && (uVar8 = 1, iVar5 < iVar3)) goto LAB_0056d1d5;
      }
    }
  }
  else {
    local_14 = puVar7[7];
    if (puVar7[8] == 1) {
      iVar2 = is_leap_year(timeptr->tm_year + 0x76c);
      if ((iVar2 != 0) && (0x003B001F >> 0x10 < local_14)) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + -1;
    }
    if ((local_14 <= timeptr->tm_yday) && (uVar8 = 1, timeptr->tm_yday == local_14))
    goto LAB_0056d1d5;
  }
  if (uVar8 == 0) {
    if (uVar1 != 0) {
      uVar8 = uVar1;
    }
    goto LAB_0056d2fb;
  }
  if (puVar9[8] == 0) {
    if ((int)puVar9[4] < iVar4) {
      uVar8 = 0;
    }
    else if (iVar4 == puVar9[4]) {
      iVar2 = timeptr->tm_mday - ((timeptr->tm_wday + 7) - puVar9[6]) % 7;
      uVar8 = 0;
      iVar4 = (timeptr->tm_mday + -1) - ((timeptr->tm_wday + 6) - puVar9[6]) % 7;
      if (puVar9[3] == 5) {
        iVar6 = iVar6 + -7;
        if (iVar6 < iVar2) {
          if (iVar4 <= iVar6) {
LAB_0056d2e3:
            uVar8 = FUN_0056d308(timeptr,puVar9);
          }
        }
        else {
          uVar8 = 1;
        }
      }
      else {
        iVar6 = (puVar9[3] + -1) * 7 + 1;
        if (iVar2 < iVar6) {
          uVar8 = 1;
        }
        else if (iVar4 < iVar6) goto LAB_0056d2e3;
      }
    }
  }
  else {
    iVar4 = puVar9[7];
    if (puVar9[8] == 1) {
      iVar6 = is_leap_year(timeptr->tm_year + 0x76c);
      if ((iVar6 != 0) && (0x003B001F >> 0x10 < iVar4)) {
        iVar4 = iVar4 + 1;
      }
      iVar4 = iVar4 + -1;
    }
    if ((iVar4 <= timeptr->tm_yday) && (uVar8 = 0, iVar4 == timeptr->tm_yday)) goto LAB_0056d2e3;
  }
  if (uVar1 != 0) {
    uVar8 = uVar1 - uVar8;
  }
LAB_0056d2fb:
  timeptr->tm_isdst = uVar8;
  return uVar8;
}
