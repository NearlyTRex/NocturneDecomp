// Name: crt_unknown.c_FUN_00603bc9
// Address: 00603bc9
// Address Range: [[00603bc9, 00603bf4]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_FUN_00603bc9(void)

#include "nocturne.h"

void __cdecl FUN_00603bc9(void)

{
  double dVar1;
  uint *in_stack_00000008;
  char **in_stack_fffffff4;
  uint local_8;
  
  dVar1 = strtod_main((char *)0x0,in_stack_fffffff4);
  *in_stack_00000008 = SUB84(__BITCAST_UINT64(dVar1),0);
  local_8 = (uint)((ulonglong)dVar1 >> 0x20);
  in_stack_00000008[1] = local_8;
  return;
}
