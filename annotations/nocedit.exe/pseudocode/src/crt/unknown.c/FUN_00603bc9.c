// Name: crt_unknown.c_FUN_00603bc9
// Address: 00603bc9
// Address Range: [[00603bc9, 00603bf4]]
// Convention: __cdecl
// Signature: void __cdecl crt_unknown_c_FUN_00603bc9(char *str,double *output)

#include "nocturne.h"

void __cdecl FUN_00603bc9(char *str,double *output)

{
  double dVar1;
  uint local_c;
  uint local_8;
  
  dVar1 = strtod_main(str,(char **)0x0);
  local_c = SUB84(__BITCAST_UINT64(dVar1),0);
  *(uint *)output = local_c;
  local_8 = (uint)((ulonglong)dVar1 >> 0x20);
  *(uint *)((int)output + 4) = local_8;
  return;
}
