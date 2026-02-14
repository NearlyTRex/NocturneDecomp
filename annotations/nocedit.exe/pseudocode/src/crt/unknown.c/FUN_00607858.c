// Name: crt_unknown.c_FUN_00607858
// Address: 00607858
// Address Range: [[00607858, 00607954]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_00607858(int param_1,int param_2)

#include "nocturne.h"

int FUN_00607858(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _tm local_34;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = is_leap_year(param_2 + 0x76c);
    if (iVar1 == 0) {
      iVar1 = *(int *)(&g_DaysInMonth_Normal + *(int *)(param_1 + 0x10));
      iVar2 = *(int *)((int)&INFINITY + *(int *)(param_1 + 0x10) * 2 + 6);
    }
    else {
      iVar1 = *(int *)(&g_DaysInMonth_Leap + *(int *)(param_1 + 0x10));
      iVar2 = *(int *)(&DAT_00665f50 + *(int *)(param_1 + 0x10) * 2);
    }
    local_34.tm_sec = 0;
    local_34.tm_min = 0;
    local_34.tm_hour = 0;
    local_34.tm_mday = 1;
    local_34.tm_mon = *(int *)(param_1 + 0x10);
    local_34.tm_year = param_2;
    local_34.tm_isdst = 0;
    _mktime(&local_34);
    iVar4 = ((*(int *)(param_1 + 0x18) - local_34.tm_wday) + 7) % 7;
    if (*(int *)(param_1 + 0xc) == 5) {
      iVar3 = 4;
      if ((iVar1 >> 0x10) - (iVar2 >> 0x10) < iVar4 + 0x1d) {
        iVar3 = *(int *)(param_1 + 0xc) + -2;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0xc) + -1;
    }
    return iVar3 * 7 + local_34.tm_yday + iVar4;
  }
  if (*(int *)(param_1 + 0x20) != 1) {
    return *(int *)(param_1 + 0x1c);
  }
  return *(int *)(param_1 + 0x1c) + -1;
}
