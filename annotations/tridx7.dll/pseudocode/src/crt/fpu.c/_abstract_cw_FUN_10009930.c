// Name: crt_fpu.c__abstract_cw_FUN_10009930
// Address: 10009930
// Address Range: [[10009930, 100099d0]]
// Convention: __cdecl
// Signature: uint __cdecl crt_fpu_c__abstract_cw_FUN_10009930(ushort control_word)

#include "nocturne.h"

uint __cdecl _abstract_cw(ushort control_word)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = 0;
  if ((control_word & 1) != 0) {
    uVar1 = 0x10;
  }
  if ((control_word & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((control_word & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((control_word & 0x10) != 0) {
    uVar1 = uVar1 | 2;
  }
  if ((control_word & 0x20) != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((control_word & 2) != 0) {
    uVar1 = uVar1 | 0x80000;
  }
  uVar2 = control_word & 0xc00;
  if (uVar2 == 0x400) {
    uVar1 = uVar1 | 0x100;
  }
  else if (uVar2 == 0x800) {
    uVar1 = uVar1 | 0x200;
  }
  else if (uVar2 == 0xc00) {
    uVar1 = uVar1 | 0x300;
  }
  if ((control_word & 0x300) == 0) {
    uVar1 = uVar1 | 0x20000;
  }
  else if ((control_word & 0x300) == 0x200) {
    uVar1 = uVar1 | 0x10000;
  }
  if ((control_word & 0x1000) != 0) {
    uVar1 = uVar1 | 0x40000;
  }
  return uVar1;
}
