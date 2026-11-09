// Name: core_motion.cpp_FUN_00523e2e
// Address: 00523e2e
// Address Range: [[00523e2e, 005240be]]
// Convention: unknown
// Signature: void core_motion_cpp_FUN_00523e2e(void)

#include "nocturne.h"

void core_motion_cpp_FUN_00523e2e(void)

{
  int iVar1;
  int iVar2;
  int iStack00000004;
  int in_stack_0000001c;
  
  FUN_005c03c0();
  FUN_005c03c0();
  iVar2 = 0;
  if (0 < *(int *)(in_stack_0000001c + 0x1c24)) {
    iStack00000004 = in_stack_0000001c + 0x1c28;
    do {
      FUN_005c03c0();
      FUN_005c03c0();
      FUN_005c03c0();
      FUN_005c03c0();
      FUN_005c03c0();
      FUN_005c03c0();
      FUN_005c03c0();
      FUN_005c03c0();
      FUN_005c03c0();
      FUN_005c03c0();
      FUN_005c03c0();
      iVar1 = 0;
      FUN_005c03c0();
      if (0 < *(int *)(iStack00000004 + 0x70)) {
        do {
          iVar1 = iVar1 + 1;
          FUN_005c03c0();
        } while (iVar1 < *(int *)(iStack00000004 + 0x70));
      }
      FUN_005c03c0();
      iVar1 = 0;
      FUN_005c03c0();
      if (0 < *(int *)(iStack00000004 + 0x78)) {
        do {
          iVar1 = iVar1 + 1;
          FUN_005c03c0();
        } while (iVar1 < *(int *)(iStack00000004 + 0x78));
      }
      FUN_005c03c0();
      iVar1 = 0;
      FUN_005c03c0();
      if (0 < *(int *)(iStack00000004 + 0xf4)) {
        do {
          iVar1 = iVar1 + 1;
          FUN_005c03c0();
        } while (iVar1 < *(int *)(iStack00000004 + 0xf4));
      }
      FUN_005c03c0();
      iStack00000004 = iStack00000004 + 0x120;
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(in_stack_0000001c + 0x1c24));
  }
  return;
}
