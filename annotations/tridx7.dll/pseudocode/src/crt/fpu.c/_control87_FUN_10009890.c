// Name: crt_fpu.c__control87_FUN_10009890
// Address: 10009890
// Address Range: [[10009890, 100098ce]]
// Convention: __cdecl
// Signature: uint __cdecl crt_fpu_c__control87_FUN_10009890(uint new_value,uint mask)

#include "nocturne.h"

uint __cdecl _control87(uint new_value,uint mask)

{
  uint uVar1;
  ushort in_FPUControlWord;
  
  uVar1 = _abstract_cw(in_FPUControlWord);
  uVar1 = ~mask & uVar1 | mask & new_value;
  _hw_cw(uVar1);
  return uVar1;
}
