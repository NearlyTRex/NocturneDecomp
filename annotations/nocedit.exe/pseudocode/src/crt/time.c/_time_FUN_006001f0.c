// Name: crt_time.c__time_FUN_006001f0
// Address: 006001f0
// Address Range: [[006001f0, 00600226]]
// Convention: __cdecl
// Signature: time_t __cdecl crt_time_c__time_FUN_006001f0(int *time)

#include "nocturne.h"

time_t __cdecl _time(int *time)

{
  int iVar1;
  time_t tVar1;
  _tm local_28;
  
  iVar1 = get_local_time(&local_28);
  if (499 < iVar1) {
    local_28.tm_sec = local_28.tm_sec + 1;
  }
  tVar1 = _mktime(&local_28);
  if (time != (int *)0x0) {
    *time = tVar1;
  }
  return tVar1;
}
