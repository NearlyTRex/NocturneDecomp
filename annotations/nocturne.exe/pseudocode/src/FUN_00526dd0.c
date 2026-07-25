// Name: FUN_00526dd0
// Address: 00526dd0
// Address Range: [[00526dd0, 00526e0b]]
// Convention: unknown
// Signature: undefined4 FUN_00526dd0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint FUN_00526dd0(void)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  uint *in_stack_00000008;
  
  bVar3 = 0;
  puVar1 = (uint *)sound_sndmain_cpp_getSfxSlotFromHandle_FUN_005234b0();
  if (puVar1 == (uint *)0x0) {
    return 0;
  }
  sound_sndmain_cpp_CSfxSlot_compute_FUN_00524830(puVar1,0);
  for (iVar2 = 0x1b; iVar2 != 0; iVar2 = iVar2 + -1) {
    *in_stack_00000008 = *puVar1;
    puVar1 = puVar1 + (uint)bVar3 * -2 + 1;
    in_stack_00000008 = in_stack_00000008 + (uint)bVar3 * -2 + 1;
  }
  sound_sndmain_cpp_unlockSound_FUN_00528890();
  return 1;
}
