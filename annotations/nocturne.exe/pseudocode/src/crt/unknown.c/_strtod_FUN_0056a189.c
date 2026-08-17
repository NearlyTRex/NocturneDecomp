// Name: crt_unknown.c__strtod_FUN_0056a189
// Address: 0056a189
// Address Range: [[0056a189, 0056a1b4]]
// Convention: __cdecl
// Signature: double __cdecl crt_unknown_c__strtod_FUN_0056a189(char *str)

#include "nocturne.h"

double __cdecl _strtod(char *str)

{
  double dVar1;
  uint *in_stack_00000008;
  uint local_c;
  uint local_8;
  
  dVar1 = strtod_main(str,(char **)0x0);
  local_c = SUB84(__BITCAST_UINT64(dVar1),0);
  *in_stack_00000008 = local_c;
  local_8 = (uint)((ulonglong)dVar1 >> 0x20);
  in_stack_00000008[1] = local_8;
  return __BITCAST_DOUBLE(CONCAT44(local_8,in_stack_00000008));
}
