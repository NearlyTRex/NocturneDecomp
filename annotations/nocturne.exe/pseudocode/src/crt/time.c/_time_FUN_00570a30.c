// Name: crt_time.c__time_FUN_00570a30
// Address: 00570a30
// Address Range: [[00570a30, 00570a66]]
// Convention: __cdecl
// Signature: time_t __cdecl crt_time_c__time_FUN_00570a30(time_t *time)

#include "nocturne.h"

time_t __cdecl _time(time_t *time)

{
  int iVar1;
  time_t tVar2;
  _tm _Stack_28;
  
  iVar1 = get_local_time(&_Stack_28);
  if (499 < iVar1) {
    _Stack_28.tm_sec = _Stack_28.tm_sec + 1;
  }
  tVar2 = _mktime(&_Stack_28);
  if (time != (time_t *)0x0) {
    *time = tVar2;
  }
  return tVar2;
}
