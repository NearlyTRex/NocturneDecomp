// Name: crt_unknown.c_FUN_0056a189
// Address: 0056a189
// Address Range: [[0056a189, 0056a1b4]]
// Convention: unknown
// Signature: void crt_unknown_c_FUN_0056a189(char *param_1,undefined4 *param_2)

#include "nocturne.h"

void FUN_0056a189(char *param_1,uint *param_2)

{
  double dVar1;
  uint local_c;
  uint local_8;
  
  dVar1 = strtod_main(param_1,(char **)0x0);
  local_c = SUB84(__BITCAST_UINT64(dVar1),0);
  *param_2 = local_c;
  local_8 = (uint)((ulonglong)dVar1 >> 0x20);
  param_2[1] = local_8;
  return;
}
