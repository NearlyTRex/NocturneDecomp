// Name: crt_time.c_determine_dst_status_FUN_006079b4
// Address: 006079b4
// Address Range: [[006079b4, 00607c87]]
// Convention: __cdecl
// Signature: int crt_time.c_determine_dst_status_FUN_006079b4(tm * timeptr)

#include "nocturne.h"

int __cdecl crt_time_c_determine_dst_status_FUN_006079b4(tm *timeptr)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int *piVar3;
  int iVar4;
  int unaff_ESI;
  uint uVar5;
  uint unaff_EDI;
  dst_rule *pdVar6;
  int local_1c;
  
                    /* WARNING: Load size is inaccurate */
  uVar5 = 0;
  if (*PTR_s_EDT_006851c4 == '\0') goto LAB_00607c7b;
  iVar1 = crt_unknown_c_FUN_00607958();
  if (iVar1 == 0) {
    piVar3 = &g_DstStartRule.seconds;
    pdVar6 = (dst_rule *)&g_DstTransitionSecond;
  }
  else {
    piVar3 = &g_DstTransitionSecond;
    pdVar6 = &g_DstStartRule;
  }
  iVar1 = crt_time_c_is_leap_year_FUN_00607820(timeptr->tm_year + 0x76c);
  if (iVar1 == 0) {
    iVar1 = *(int *)(&g_DaysInMonth_Normal + unaff_EBP);
    iVar4 = *(int *)((int)&inf + unaff_EBP * 2 + 6);
  }
  else {
    iVar1 = *(int *)(&g_DaysInMonth_Leap + unaff_EBP);
    iVar4 = *(int *)(&DAT_00665f50 + unaff_EBP * 2);
  }
  if (((dst_rule *)((int)piVar3 + 0x20))->seconds == 0) {
    if (((dst_rule *)piVar3)->month < unaff_EBP) {
      uVar5 = 1;
      goto LAB_00607b4e;
    }
    if (unaff_EBP != ((dst_rule *)piVar3)->month) goto LAB_00607b4e;
    local_1c = timeptr->tm_mday - ((timeptr->tm_wday + 7) - ((dst_rule *)piVar3)->day_of_year) % 7;
    iVar2 = (timeptr->tm_mday + -1) -
            ((timeptr->tm_wday + 6) - ((dst_rule *)piVar3)->day_of_year) % 7;
    if (((dst_rule *)piVar3)->day == 5) {
      iVar1 = ((iVar1 >> 0x10) - (iVar4 >> 0x10)) + -7;
      if ((local_1c <= iVar1) || (uVar5 = 1, iVar1 < iVar2)) goto LAB_00607b4e;
    }
    else {
      iVar1 = (((dst_rule *)piVar3)->day + -1) * 7 + 1;
      if ((local_1c < iVar1) || (uVar5 = 1, iVar1 <= iVar2)) goto LAB_00607b4e;
    }
LAB_00607b55:
    iVar1 = crt_unknown_c_FUN_00607c88();
    uVar5 = (uint)(iVar1 == 0);
  }
  else {
    unaff_EDI = ((dst_rule *)piVar3)->rule_type;
    if (((dst_rule *)((int)piVar3 + 0x20))->seconds == 1) {
      iVar1 = crt_time_c_is_leap_year_FUN_00607820(timeptr->tm_year + 0x76c);
      if ((iVar1 != 0) && (DAT_00665f3a >> 0x10 < unaff_ESI)) {
        unaff_ESI = unaff_ESI + 1;
      }
      unaff_ESI = unaff_ESI + -1;
    }
    if ((unaff_ESI <= timeptr->tm_yday) && (uVar5 = 1, timeptr->tm_yday == unaff_ESI))
    goto LAB_00607b55;
LAB_00607b4e:
    if (local_1c != 0) goto LAB_00607b55;
  }
  if (uVar5 == 0) {
    if (unaff_EDI != 0) {
      uVar5 = unaff_EDI;
    }
    goto LAB_00607c7b;
  }
  if (pdVar6[1].seconds == 0) {
    if (pdVar6->month < unaff_ESI) {
      uVar5 = 0;
    }
    else if (unaff_ESI == pdVar6->month) {
      iVar4 = timeptr->tm_mday - ((timeptr->tm_wday + 7) - pdVar6->day_of_year) % 7;
      uVar5 = 0;
      iVar1 = (timeptr->tm_mday + -1) - ((timeptr->tm_wday + 6) - pdVar6->day_of_year) % 7;
      if (pdVar6->day == 5) {
        if (unaff_EBP + -7 < iVar4) {
          if (iVar1 <= unaff_EBP + -7) {
LAB_00607c63:
            uVar5 = crt_unknown_c_FUN_00607c88();
          }
        }
        else {
          uVar5 = 1;
        }
      }
      else {
        iVar2 = (pdVar6->day + -1) * 7 + 1;
        if (iVar4 < iVar2) {
          uVar5 = 1;
        }
        else if (iVar1 < iVar2) goto LAB_00607c63;
      }
    }
  }
  else {
    iVar1 = pdVar6->rule_type;
    if (pdVar6[1].seconds == 1) {
      iVar4 = crt_time_c_is_leap_year_FUN_00607820(timeptr->tm_year + 0x76c);
      if ((iVar4 != 0) && (DAT_00665f3a >> 0x10 < iVar1)) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 + -1;
    }
    if ((iVar1 <= timeptr->tm_yday) && (uVar5 = 0, iVar1 == timeptr->tm_yday)) goto LAB_00607c63;
  }
  if (unaff_ESI != 0) {
    uVar5 = unaff_ESI - uVar5;
  }
LAB_00607c7b:
  timeptr->tm_isdst = uVar5;
  return uVar5;
}
