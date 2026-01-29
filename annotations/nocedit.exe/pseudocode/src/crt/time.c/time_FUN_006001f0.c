// Name: crt_time.c_time_FUN_006001f0
// Address: 006001f0
// Address Range: [[006001f0, 00600226]]
// Convention: __cdecl
// Signature: time_t __cdecl crt_time_c_time_FUN_006001f0(time_t *optional_output)

#include "nocturne.h"

time_t __cdecl time(time_t *optional_output)

{
  int extraout_EAX;
  time_t tVar1;
  _tm local_28;
  
  get_local_time(&local_28);
  if (499 < extraout_EAX) {
    local_28.tm_sec = local_28.tm_sec + 1;
  }
  tVar1 = _mktime(&local_28);
  if (optional_output != (time_t *)0x0) {
    *optional_output = tVar1;
  }
  return tVar1;
}
