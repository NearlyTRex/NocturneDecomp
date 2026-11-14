// Name: crt_unknown.c_FUN_005aef20
// Address: 005aef20
// Address Range: [[005aef20, 005aef91]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_005aef20(uint param_1,uint param_2)

#include "nocturne.h"

void FUN_005aef20(uint param_1,uint param_2)

{
  _tm local_28;
  
  local_28.tm_year = ((param_1 & 0xfe00) >> 9) + 0x50;
  local_28.tm_mon = ((param_1 & 0x1e0) >> 5) - 1;
  local_28.tm_hour = (param_2 & 0xf800) >> 0xb;
  local_28.tm_min = (param_2 & 0x7e0) >> 5;
  local_28.tm_sec = (param_2 & 0x1f) * 2;
  local_28.tm_mday = param_1 & 0x1f;
  local_28.tm_isdst = -1;
  _mktime(&local_28);
  return;
}
