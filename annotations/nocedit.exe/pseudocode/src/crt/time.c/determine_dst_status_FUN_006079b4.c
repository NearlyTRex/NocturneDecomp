// Name: crt_time.c_determine_dst_status_FUN_006079b4
// Address: 006079b4
// Address Range: [[006079b4, 00607c87]]
// Convention: __cdecl
// Signature: int __cdecl crt_time_c_determine_dst_status_FUN_006079b4(_tm *timeptr)

#include "nocturne.h"

int __cdecl determine_dst_status(_tm *timeptr)

{
  uint uVar1;
  int iVar2;
  int iVar1;
  int iVar3;
  int iVar7;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar8;
  int *piVar7;
  int iVar9;
  uint uVar8;
  dst_rule *pdVar9;
  int local_14;
  
  uVar8 = 0;
  if (*(char *)PTR_s_EDT_006851c4 == '\0') goto LAB_00607c7b;
  uVar1 = FUN_00607958(&g_DstStartRule,&g_DstTransitionSecond,timeptr->tm_year);
  if (uVar1 == 0) {
    piVar7 = &g_DstStartRule.seconds;
    pdVar9 = (dst_rule *)&g_DstTransitionSecond;
  }
  else {
    piVar7 = &g_DstTransitionSecond;
    pdVar9 = &g_DstStartRule;
  }
  iVar9 = timeptr->tm_mon;
  iVar2 = is_leap_year(timeptr->tm_year + 0x76c);
  if (iVar2 == 0) {
    iVar8 = *(int *)(&g_DaysInMonth_Normal + iVar9);
    iVar1 = *(int *)((int)&INFINITY + iVar9 * 2 + 6);
  }
  else {
    iVar8 = *(int *)(&g_DaysInMonth_Leap + iVar9);
    iVar1 = *(int *)(&DAT_00665f50 + iVar9 * 2);
  }
  iVar8 = (iVar8 >> 0x10) - (iVar1 >> 0x10);
  if (((dst_rule *)((int)piVar7 + 0x20))->seconds == 0) {
    if (((dst_rule *)piVar7)->month < iVar9) {
      uVar8 = 1;
    }
    else if (iVar9 == ((dst_rule *)piVar7)->month) {
      iVar1 = timeptr->tm_mday - ((timeptr->tm_wday + 7) - ((dst_rule *)piVar7)->day_of_year) % 7;
      iVar6 = (timeptr->tm_mday + -1) -
              ((timeptr->tm_wday + 6) - ((dst_rule *)piVar7)->day_of_year) % 7;
      if (((dst_rule *)piVar7)->day == 5) {
        iVar3 = iVar8 + -7;
        if ((iVar3 < iVar1) && (uVar8 = 1, iVar6 <= iVar3)) {
LAB_00607b55:
          iVar4 = FUN_00607c88(timeptr,piVar7);
          uVar8 = (uint)(iVar4 == 0);
        }
      }
      else {
        iVar7 = (((dst_rule *)piVar7)->day + -1) * 7 + 1;
        if ((iVar7 <= iVar1) && (uVar8 = 1, iVar6 < iVar7)) goto LAB_00607b55;
      }
    }
  }
  else {
    local_14 = ((dst_rule *)piVar7)->rule_type;
    if (((dst_rule *)((int)piVar7 + 0x20))->seconds == 1) {
      iVar1 = is_leap_year(timeptr->tm_year + 0x76c);
      if ((iVar1 != 0) && (0x003B001F >> 0x10 < local_14)) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + -1;
    }
    if ((local_14 <= timeptr->tm_yday) && (uVar8 = 1, timeptr->tm_yday == local_14))
    goto LAB_00607b55;
  }
  if (uVar8 == 0) {
    if (uVar1 != 0) {
      uVar8 = uVar1;
    }
    goto LAB_00607c7b;
  }
  if (pdVar9[1].seconds == 0) {
    if (pdVar9->month < iVar9) {
      uVar8 = 0;
    }
    else if (iVar9 == pdVar9->month) {
      iVar9 = timeptr->tm_mday - ((timeptr->tm_wday + 7) - pdVar9->day_of_year) % 7;
      uVar8 = 0;
      iVar5 = (timeptr->tm_mday + -1) - ((timeptr->tm_wday + 6) - pdVar9->day_of_year) % 7;
      if (pdVar9->day == 5) {
        iVar8 = iVar8 + -7;
        if (iVar8 < iVar9) {
          if (iVar5 <= iVar8) {
LAB_00607c63:
            uVar8 = FUN_00607c88(timeptr,pdVar9);
          }
        }
        else {
          uVar8 = 1;
        }
      }
      else {
        iVar8 = (pdVar9->day + -1) * 7 + 1;
        if (iVar9 < iVar8) {
          uVar8 = 1;
        }
        else if (iVar5 < iVar8) goto LAB_00607c63;
      }
    }
  }
  else {
    iVar9 = pdVar9->rule_type;
    if (pdVar9[1].seconds == 1) {
      iVar8 = is_leap_year(timeptr->tm_year + 0x76c);
      if ((iVar8 != 0) && (0x003B001F >> 0x10 < iVar9)) {
        iVar9 = iVar9 + 1;
      }
      iVar9 = iVar9 + -1;
    }
    if ((iVar9 <= timeptr->tm_yday) && (uVar8 = 0, iVar9 == timeptr->tm_yday)) goto LAB_00607c63;
  }
  if (uVar1 != 0) {
    uVar8 = uVar1 - uVar8;
  }
LAB_00607c7b:
  timeptr->tm_isdst = uVar8;
  return uVar8;
}
