// Name: crt_time.c_time_with_rounding_FUN_006001f0
// Address: 006001f0
// Address Range: [[006001f0, 00600226]]
// Convention: __cdecl
// Signature: time_t crt_time.c_time_with_rounding_FUN_006001f0(time_t * optional_output)

#include "nocturne.h"

time_t __cdecl crt_time_c_time_with_rounding_FUN_006001f0(time_t *optional_output)

{
  int extraout_EAX;
  time_t tVar1;
  BADSPACEBASE *in_ESP;
  int iStack_24;
  
  crt_time_c_get_local_time_FUN_00607150((tm *)&stack0xffffffd8);
  if (499 < extraout_EAX) {
    iStack_24 = iStack_24 + 1;
  }
  tVar1 = crt_time_c_mktime_FUN_00600f80((tm *)&iStack_24);
  if (optional_output != (time_t *)0x0) {
    *optional_output = tVar1;
  }
  return tVar1;
}
