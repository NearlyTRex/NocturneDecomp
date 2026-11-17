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
  int *piVar7;
  uint uVar8;
  dst_rule *pdVar9;
  int local_14;
  
  uVar8 = 0;
  if (*PTR_s_EDT_005c1f10 == '\0') goto LAB_0056d2fb;
  uVar1 = FUN_0056cfd8(&g_dst_rule_005c1dc0,&g_INT_005c1de4,timeptr->tm_year);
  if (uVar1 == 0) {
    piVar7 = &g_dst_rule_005c1dc0.seconds;
    pdVar9 = (dst_rule *)&g_INT_005c1de4;
  }
  else {
    piVar7 = &g_INT_005c1de4;
    pdVar9 = &g_dst_rule_005c1dc0;
  }
  iVar5 = timeptr->tm_mon;
  iVar2 = is_leap_year(timeptr->tm_year + 0x76c);
  if (iVar2 == 0) {
    iVar2 = *(int *)(&g_SHORT_005a4a78 + iVar5);
    iVar4 = *(int *)((int)&g_fstreambaseTypeInfo_005a4a60.class_name + iVar5 * 2 + 2);
  }
  else {
    iVar2 = *(int *)(&g_SHORT_005a4a92 + iVar5);
    iVar4 = *(int *)(&g_SHORT_005a4a90 + iVar5);
  }
  iVar2 = (iVar2 >> 0x10) - (iVar4 >> 0x10);
  if (((dst_rule *)((int)piVar7 + 0x20))->seconds == 0) {
    if (((dst_rule *)piVar7)->month < iVar5) {
      uVar8 = 1;
    }
    else if (iVar5 == ((dst_rule *)piVar7)->month) {
      iVar4 = timeptr->tm_mday - ((timeptr->tm_wday + 7) - ((dst_rule *)piVar7)->day_of_year) % 7;
      iVar6 = (timeptr->tm_mday + -1) -
              ((timeptr->tm_wday + 6) - ((dst_rule *)piVar7)->day_of_year) % 7;
      if (((dst_rule *)piVar7)->day == 5) {
        iVar3 = iVar2 + -7;
        if ((iVar3 < iVar4) && (uVar8 = 1, iVar6 <= iVar3)) {
LAB_0056d1d5:
          iVar4 = FUN_0056d308(timeptr,piVar7);
          uVar8 = (uint)(iVar4 == 0);
        }
      }
      else {
        iVar3 = (((dst_rule *)piVar7)->day + -1) * 7 + 1;
        if ((iVar3 <= iVar4) && (uVar8 = 1, iVar6 < iVar3)) goto LAB_0056d1d5;
      }
    }
  }
  else {
    local_14 = ((dst_rule *)piVar7)->rule_type;
    if (((dst_rule *)((int)piVar7 + 0x20))->seconds == 1) {
      iVar4 = is_leap_year(timeptr->tm_year + 0x76c);
      if ((iVar4 != 0) && (g_INT_005a4a7a >> 0x10 < local_14)) {
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
  if (pdVar9[1].seconds == 0) {
    if (pdVar9->month < iVar5) {
      uVar8 = 0;
    }
    else if (iVar5 == pdVar9->month) {
      iVar4 = timeptr->tm_mday - ((timeptr->tm_wday + 7) - pdVar9->day_of_year) % 7;
      uVar8 = 0;
      iVar5 = (timeptr->tm_mday + -1) - ((timeptr->tm_wday + 6) - pdVar9->day_of_year) % 7;
      if (pdVar9->day == 5) {
        iVar2 = iVar2 + -7;
        if (iVar2 < iVar4) {
          if (iVar5 <= iVar2) {
LAB_0056d2e3:
            uVar8 = FUN_0056d308(timeptr,pdVar9);
          }
        }
        else {
          uVar8 = 1;
        }
      }
      else {
        iVar2 = (pdVar9->day + -1) * 7 + 1;
        if (iVar4 < iVar2) {
          uVar8 = 1;
        }
        else if (iVar5 < iVar2) goto LAB_0056d2e3;
      }
    }
  }
  else {
    iVar5 = pdVar9->rule_type;
    if (pdVar9[1].seconds == 1) {
      iVar2 = is_leap_year(timeptr->tm_year + 0x76c);
      if ((iVar2 != 0) && (g_INT_005a4a7a >> 0x10 < iVar5)) {
        iVar5 = iVar5 + 1;
      }
      iVar5 = iVar5 + -1;
    }
    if ((iVar5 <= timeptr->tm_yday) && (uVar8 = 0, iVar5 == timeptr->tm_yday)) goto LAB_0056d2e3;
  }
  if (uVar1 != 0) {
    uVar8 = uVar1 - uVar8;
  }
LAB_0056d2fb:
  timeptr->tm_isdst = uVar8;
  return uVar8;
}
