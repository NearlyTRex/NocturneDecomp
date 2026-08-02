// Name: crt_unknown.c_FUN_0056ced8
// Address: 0056ced8
// Address Range: [[0056ced8, 0056cfd4]]
// Convention: unknown
// Signature: int crt_unknown_c_FUN_0056ced8(int param_1,int param_2)

#include "nocturne.h"

int FUN_0056ced8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  _tm local_34;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    iVar1 = is_leap_year(param_2 + 0x76c);
    if (iVar1 == 0) {
      iVar1 = *(int *)(&DAT_005a4a78 + *(int *)(param_1 + 0x10) * 2);
      iVar2 = *(int *)((int)&g_fstreambaseTypeInfo_005a4a60.class_name +
                      *(int *)(param_1 + 0x10) * 2 + 2);
    }
    else {
      iVar1 = *(int *)(&DAT_005a4a92 + *(int *)(param_1 + 0x10) * 2);
      iVar2 = *(int *)(&DAT_005a4a90 + *(int *)(param_1 + 0x10) * 2);
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
