// Name: crt_unknown.c_FUN_00607858
// Address: 00607858
// Address Range: [[00607858, 00607954]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00607858()

#include "nocturne.h"

/* Signature: byte FUN_00607858(uint param_1, uint param_2) */

int crt_unknown_c_FUN_00607858(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  int in_stack_00000008;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  
  if (*(int *)(in_stack_00000004 + 0x20) == 0) {
    iVar1 = crt_time_c_is_leap_year_FUN_00607820(in_stack_00000008 + 0x76c);
    if (iVar1 == 0) {
      iVar1 = *(int *)(&g_DaysInMonth_Normal + *(int *)(in_stack_00000004 + 0x10));
      iVar2 = *(int *)((int)&inf + *(int *)(in_stack_00000004 + 0x10) * 2 + 6);
    }
    else {
      iVar1 = *(int *)(&g_DaysInMonth_Leap + *(int *)(in_stack_00000004 + 0x10));
      iVar2 = *(int *)(&DAT_00665f50 + *(int *)(in_stack_00000004 + 0x10) * 2);
    }
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 1;
    local_20 = *(int *)(in_stack_00000004 + 0x10);
    local_1c = in_stack_00000008;
    crt_time_c_mktime_FUN_00600f80((tm *)&local_30);
    iVar4 = ((*(int *)(in_stack_00000004 + 0x18) - local_14) + 7) % 7;
    if (*(int *)(in_stack_00000004 + 0xc) == 5) {
      iVar3 = 4;
      if ((iVar1 >> 0x10) - (iVar2 >> 0x10) < iVar4 + 0x1d) {
        iVar3 = *(int *)(in_stack_00000004 + 0xc) + -2;
      }
    }
    else {
      iVar3 = *(int *)(in_stack_00000004 + 0xc) + -1;
    }
    return iVar3 * 7 + iVar4;
  }
  if (*(int *)(in_stack_00000004 + 0x20) != 1) {
    return *(int *)(in_stack_00000004 + 0x1c);
  }
  return *(int *)(in_stack_00000004 + 0x1c) + -1;
}
