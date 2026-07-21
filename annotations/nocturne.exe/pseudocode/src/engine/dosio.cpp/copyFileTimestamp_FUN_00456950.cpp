// Name: engine_dosio.cpp_copyFileTimestamp_FUN_00456950
// Address: 00456950
// Address Range: [[00456950, 0045699a]]
// Convention: unknown
// Signature: bool engine_dosio_cpp_copyFileTimestamp_FUN_00456950(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

bool engine_dosio_cpp_copyFileTimestamp_FUN_00456950(uint param_1,uint param_2)

{
  int iVar1;
  byte auStack_50 [26];
  uint uStack_36;
  uint uStack_8;
  uint uStack_4;
  
  uStack_8 = param_2;
  uStack_4 = param_2;
  iVar1 = getFileStat(param_1,auStack_50);
  if (iVar1 == 0) {
    uStack_8 = uStack_36;
  }
  iVar1 = _utime_00600c1e(param_1,&uStack_8);
  return iVar1 == 0;
}
