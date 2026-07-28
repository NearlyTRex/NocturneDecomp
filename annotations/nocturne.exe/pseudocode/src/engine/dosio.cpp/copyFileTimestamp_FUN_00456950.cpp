// Name: engine_dosio.cpp_copyFileTimestamp_FUN_00456950
// Address: 00456950
// Address Range: [[00456950, 0045699a]]
// Convention: unknown
// Signature: bool engine_dosio_cpp_copyFileTimestamp_FUN_00456950(char *param_1,time_t param_2)

#include "nocturne.h"

bool engine_dosio_cpp_copyFileTimestamp_FUN_00456950(char *param_1,time_t param_2)

{
  int iVar1;
  _stat _Stack_50;
  _utimbuf _Stack_8;
  
  _Stack_8.actime = param_2;
  _Stack_8.modtime = param_2;
  iVar1 = getFileStat(param_1,&_Stack_50);
  if (iVar1 == 0) {
    _Stack_8.actime = _Stack_50._st_atime;
  }
  iVar1 = _utime_00600c1e(param_1,&_Stack_8);
  return iVar1 == 0;
}
