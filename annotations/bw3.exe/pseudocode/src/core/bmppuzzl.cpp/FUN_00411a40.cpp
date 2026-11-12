// Name: core_bmppuzzl.cpp_FUN_00411a40
// Address: 00411a40
// Address Range: [[00411a40, 00411a88]]
// Convention: unknown
// Signature: void core_bmppuzzl_cpp_FUN_00411a40(void)

#include "nocturne.h"

void core_bmppuzzl_cpp_FUN_00411a40(void)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_007dffb4 != 0) {
    core_bmppuzzl_cpp_FUN_004119a0(DAT_007dffb4,0);
  }
  iVar2 = 0;
  if (0 < DAT_007dff88) {
    iVar3 = 0;
    do {
      puVar1 = (uint *)((int)&DAT_007dff8c + iVar3);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      (**(code **)(*(int *)*puVar1 + 0x10))((int *)*puVar1);
    } while (iVar2 < DAT_007dff88);
  }
  return;
}
