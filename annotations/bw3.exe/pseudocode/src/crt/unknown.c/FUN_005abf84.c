// Name: crt_unknown.c_FUN_005abf84
// Address: 005abf84
// Address Range: [[005abf84, 005ac257]]
// Convention: unknown
// Signature: uint crt_unknown_c_FUN_005abf84(int param_1)

#include "nocturne.h"

uint FUN_005abf84(int param_1)

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
  if (*PTR_s_EDT_00607d38 == '\0') goto LAB_005ac24b;
  uVar1 = FUN_005abf28
                    (&g_DstStartRule,&g_DstTransitionSecond,*(uint *)(param_1 + 0x14));
  if (uVar1 == 0) {
    piVar7 = &g_DstStartRule.seconds;
    pdVar9 = (dst_rule *)&g_DstTransitionSecond;
  }
  else {
    piVar7 = &g_DstTransitionSecond;
    pdVar9 = &g_DstStartRule;
  }
  iVar5 = *(int *)(param_1 + 0x10);
  iVar2 = FUN_005abdf0(*(int *)(param_1 + 0x14) + 0x76c);
  if (iVar2 == 0) {
    iVar2 = *(int *)(&g_DaysInMonth_Normal + iVar5);
    iVar4 = *(int *)((int)&g_DOUBLE_005e87fc + iVar5 * 2 + 6);
  }
  else {
    iVar2 = *(int *)(&g_DaysInMonth_Leap + iVar5);
    iVar4 = *(int *)(&g_SHORT_005e881c + iVar5);
  }
  iVar2 = (iVar2 >> 0x10) - (iVar4 >> 0x10);
  if (((dst_rule *)((int)piVar7 + 0x20))->seconds == 0) {
    if (((dst_rule *)piVar7)->month < iVar5) {
      uVar8 = 1;
    }
    else if (iVar5 == ((dst_rule *)piVar7)->month) {
      iVar4 = *(int *)(param_1 + 0xc) -
              ((*(int *)(param_1 + 0x18) + 7) - ((dst_rule *)piVar7)->day_of_year) % 7;
      iVar6 = (*(int *)(param_1 + 0xc) + -1) -
              ((*(int *)(param_1 + 0x18) + 6) - ((dst_rule *)piVar7)->day_of_year) % 7;
      if (((dst_rule *)piVar7)->day == 5) {
        iVar3 = iVar2 + -7;
        if ((iVar3 < iVar4) && (uVar8 = 1, iVar6 <= iVar3)) {
LAB_005ac125:
          iVar4 = FUN_005ac258(param_1,piVar7);
          uVar8 = (uint)(iVar4 == 0);
        }
      }
      else {
        iVar3 = (((dst_rule *)piVar7)->day + -1) * 7 + 1;
        if ((iVar3 <= iVar4) && (uVar8 = 1, iVar6 < iVar3)) goto LAB_005ac125;
      }
    }
  }
  else {
    local_14 = ((dst_rule *)piVar7)->rule_type;
    if (((dst_rule *)((int)piVar7 + 0x20))->seconds == 1) {
      iVar4 = FUN_005abdf0(*(int *)(param_1 + 0x14) + 0x76c);
      if ((iVar4 != 0) && (g_INT_005e8806 >> 0x10 < local_14)) {
        local_14 = local_14 + 1;
      }
      local_14 = local_14 + -1;
    }
    if ((local_14 <= *(int *)(param_1 + 0x1c)) && (uVar8 = 1, *(int *)(param_1 + 0x1c) == local_14))
    goto LAB_005ac125;
  }
  if (uVar8 == 0) {
    if (uVar1 != 0) {
      uVar8 = uVar1;
    }
    goto LAB_005ac24b;
  }
  if (pdVar9[1].seconds == 0) {
    if (pdVar9->month < iVar5) {
      uVar8 = 0;
    }
    else if (iVar5 == pdVar9->month) {
      iVar4 = *(int *)(param_1 + 0xc) - ((*(int *)(param_1 + 0x18) + 7) - pdVar9->day_of_year) % 7;
      uVar8 = 0;
      iVar5 = (*(int *)(param_1 + 0xc) + -1) -
              ((*(int *)(param_1 + 0x18) + 6) - pdVar9->day_of_year) % 7;
      if (pdVar9->day == 5) {
        iVar2 = iVar2 + -7;
        if (iVar2 < iVar4) {
          if (iVar5 <= iVar2) {
LAB_005ac233:
            uVar8 = FUN_005ac258(param_1,pdVar9);
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
        else if (iVar5 < iVar2) goto LAB_005ac233;
      }
    }
  }
  else {
    iVar5 = pdVar9->rule_type;
    if (pdVar9[1].seconds == 1) {
      iVar2 = FUN_005abdf0(*(int *)(param_1 + 0x14) + 0x76c);
      if ((iVar2 != 0) && (g_INT_005e8806 >> 0x10 < iVar5)) {
        iVar5 = iVar5 + 1;
      }
      iVar5 = iVar5 + -1;
    }
    if ((iVar5 <= *(int *)(param_1 + 0x1c)) && (uVar8 = 0, iVar5 == *(int *)(param_1 + 0x1c)))
    goto LAB_005ac233;
  }
  if (uVar1 != 0) {
    uVar8 = uVar1 - uVar8;
  }
LAB_005ac24b:
  *(uint *)(param_1 + 0x20) = uVar8;
  return uVar8;
}
