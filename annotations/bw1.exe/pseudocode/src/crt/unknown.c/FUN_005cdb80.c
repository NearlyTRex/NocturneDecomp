// Name: crt_unknown.c_FUN_005cdb80
// Address: 005cdb80
// Address Range: [[005cdb80, 005cdbe4]]
// Convention: unknown
// Signature: WORD crt_unknown_c_FUN_005cdb80(uint *param_1)

#include "nocturne.h"

WORD FUN_005cdb80(uint *param_1)

{
  _SYSTEMTIME _Stack_14;
  
  GetLocalTime(&_Stack_14);
  param_1[5] = _Stack_14.wYear - 0x76c;
  param_1[4] = _Stack_14.wMonth - 1;
  param_1[3] = (uint)_Stack_14.wDay;
  param_1[2] = (uint)_Stack_14.wHour;
  param_1[1] = (uint)_Stack_14.wMinute;
  param_1[8] = 0xffffffff;
  *param_1 = (uint)_Stack_14.wSecond;
  return _Stack_14.wMilliseconds;
}
