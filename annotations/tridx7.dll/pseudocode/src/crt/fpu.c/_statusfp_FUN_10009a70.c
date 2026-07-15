// Name: crt_fpu.c__statusfp_FUN_10009a70
// Address: 10009a70
// Address Range: [[10009a70, 10009aab]]
// Convention: __cdecl
// Signature: uint __cdecl crt_fpu_c__statusfp_FUN_10009a70(void)

#include "nocturne.h"

uint __cdecl _statusfp(void)

{
  uint uVar1;
  ushort in_stack_00000004;
  
  uVar1 = 0;
  if ((in_stack_00000004 & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((in_stack_00000004 & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((in_stack_00000004 & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((in_stack_00000004 & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((in_stack_00000004 & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((in_stack_00000004 & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  return uVar1;
}
