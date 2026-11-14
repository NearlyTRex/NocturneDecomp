// Name: crt_unknown.c_FUN_005cc330
// Address: 005cc330
// Address Range: [[005cc330, 005cc366]]
// Convention: unknown
// Signature: time_t crt_unknown_c_FUN_005cc330(time_t *param_1)

#include "nocturne.h"

time_t FUN_005cc330(time_t *param_1)

{
  int iVar1;
  time_t tVar2;
  _tm _Stack_28;
  
  iVar1 = FUN_005cdb80(&_Stack_28);
  if (499 < iVar1) {
    _Stack_28.tm_sec = _Stack_28.tm_sec + 1;
  }
  tVar2 = _mktime(&_Stack_28);
  if (param_1 != (time_t *)0x0) {
    *param_1 = tVar2;
  }
  return tVar2;
}
