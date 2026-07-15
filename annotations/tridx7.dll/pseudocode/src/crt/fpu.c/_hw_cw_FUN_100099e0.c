// Name: crt_fpu.c__hw_cw_FUN_100099e0
// Address: 100099e0
// Address Range: [[100099e0, 10009a6c]]
// Convention: __cdecl
// Signature: uint __cdecl crt_fpu_c__hw_cw_FUN_100099e0(uint control_word)

#include "nocturne.h"

uint __cdecl _hw_cw(uint control_word)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  
  uVar1 = in_EAX & 0xffff0000;
  if ((control_word & 0x10) != 0) {
    uVar1 = CONCAT22((short)(in_EAX >> 0x10),1);
  }
  if ((control_word & 8) != 0) {
    uVar1 = uVar1 | 4;
  }
  if ((control_word & 4) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((control_word & 2) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  if ((control_word & 1) != 0) {
    uVar1 = uVar1 | 0x20;
  }
  if ((control_word & 0x80000) != 0) {
    uVar1 = uVar1 | 2;
  }
  uVar2 = control_word & 0x300;
  if (uVar2 == 0x100) {
    uVar1 = uVar1 | 0x400;
  }
  else if (uVar2 == 0x200) {
    uVar1 = uVar1 | 0x800;
  }
  else if (uVar2 == 0x300) {
    uVar1 = uVar1 | 0xc00;
  }
  if ((control_word & 0x30000) == 0) {
    uVar1 = uVar1 | 0x300;
  }
  else if ((control_word & 0x30000) == 0x10000) {
    uVar1 = uVar1 | 0x200;
  }
  if ((control_word & 0x40000) != 0) {
    uVar1 = uVar1 | 0x1000;
  }
  return uVar1;
}
