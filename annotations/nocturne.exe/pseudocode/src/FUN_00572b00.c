// Name: FUN_00572b00
// Address: 00572b00
// Address Range: [[00572b00, 00572b64]]
// Convention: unknown
// Signature: WORD FUN_00572b00(uint *param_1)

#include "nocturne.h"

WORD FUN_00572b00(uint *param_1)

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
