// Name: crt_fpu.c__controlfp_FUN_100098d0
// Address: 100098d0
// Address Range: [[100098d0, 100098e7]]
// Convention: __cdecl
// Signature: uint __cdecl crt_fpu_c__controlfp_FUN_100098d0(uint new_value,uint mask)

#include "nocturne.h"

uint __cdecl _controlfp(uint new_value,uint mask)

{
  uint uVar1;
  
  uVar1 = _control87(new_value,mask & 0xfff7ffff);
  return uVar1;
}
