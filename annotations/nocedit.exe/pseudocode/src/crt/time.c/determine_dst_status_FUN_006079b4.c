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
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  dst_rule *pdVar9;
  int local_14;
  
  uVar8 = 0;
  if (*(char *)PTR_s_EDT_006851c4 == '\0') goto LAB_00607c7b;
  uVar1 = crt_unknown_c_FUN_00607958();
  if (uVar1 == 0) {
    piVar7 = &g_DstStartRule.seconds;
    pdVar9 = (dst_rule *)&g_DstTransitionSecond;
  }
  else {
    piVar7 = &g_DstTransitionSecond;
    pdVar9 = &g_DstStartRule;
  }
  iVar5 = timeptr->tm_mon;
  iVar2 = is_leap_year(timeptr->tm_year + 0x76c);
  if (iVar2 == 0) {
    iVar2 = *(int *)(&g_DaysInMonth_Normal + iVar5);
    iVar4 = *(int *)((int)&INFINITY + iVar5 * 2 + 6);
  }
  else {
    iVar2 = *(int *)(&g_DaysInMonth_Leap + iVar5);
    iVar4 = *(int *)(&DAT_00665f50 + iVar5 * 2);
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
LAB_00607b55:
          iVar4 = crt_unknown_c_FUN_00607c88();
          uVar8 = (uint)(iVar4 == 0);
        }
      }
      else {
        iVar3 = (((dst_rule *)piVar7)->day + -1) * 7 + 1;
        if ((iVar3 <= iVar4) && (uVar8 = 1, iVar6 < iVar3)) goto LAB_00607b55;
      }
    }
  }
  else {
    local_14 = ((dst_rule *)piVar7)->rule_type;
    if (((dst_rule *)((int)piVar7 + 0x20))->seconds == 1) {
      iVar4 = is_leap_year(timeptr->tm_year + 0x76c);
      if ((iVar4 != 0) && (0x003B001F >> 0x10 < local_14)) {
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
LAB_00607c63:
            uVar8 = crt_unknown_c_FUN_00607c88();
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
        else if (iVar5 < iVar2) goto LAB_00607c63;
      }
    }
  }
  else {
    iVar5 = pdVar9->rule_type;
    if (pdVar9[1].seconds == 1) {
      iVar2 = is_leap_year(timeptr->tm_year + 0x76c);
      if ((iVar2 != 0) && (0x003B001F >> 0x10 < iVar5)) {
        iVar5 = iVar5 + 1;
      }
      iVar5 = iVar5 + -1;
    }
    if ((iVar5 <= timeptr->tm_yday) && (uVar8 = 0, iVar5 == timeptr->tm_yday)) goto LAB_00607c63;
  }
  if (uVar1 != 0) {
    uVar8 = uVar1 - uVar8;
  }
LAB_00607c7b:
  timeptr->tm_isdst = uVar8;
  return uVar8;
}
