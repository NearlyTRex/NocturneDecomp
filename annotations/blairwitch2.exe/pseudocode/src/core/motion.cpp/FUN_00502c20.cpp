// Name: core_motion.cpp_FUN_00502c20
// Address: 00502c20
// Address Range: [[00502c20, 00502f03]]
// Convention: unknown
// Signature: void core_motion_cpp_FUN_00502c20(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void core_motion_cpp_FUN_00502c20(void)

{
  int iVar1;
  int *in_stack_00000004;
  int iStack_18;
  int *piStack_14;
  
  FUN_005b8010();
  FUN_005b8010();
  FUN_005b8010();
  FUN_005b8010();
  iVar1 = 0;
  if (0 < *in_stack_00000004) {
    do {
      FUN_005b8010();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *in_stack_00000004);
  }
  FUN_005b8010();
  FUN_005b8010();
  iStack_18 = 0;
  if (0 < in_stack_00000004[0x709]) {
    piStack_14 = in_stack_00000004 + 0x70a;
    do {
      FUN_005b8010();
      FUN_005b8010();
      FUN_005b8010();
      FUN_005b8010();
      FUN_005b8010();
      FUN_005b8010();
      FUN_005b8010();
      FUN_005b8010();
      FUN_005b8010();
      iVar1 = 0;
      FUN_005b8010();
      if (0 < piStack_14[0x1a]) {
        do {
          iVar1 = iVar1 + 1;
          FUN_005b8010();
        } while (iVar1 < piStack_14[0x1a]);
      }
      FUN_005b8010();
      iVar1 = 0;
      FUN_005b8010();
      if (0 < piStack_14[0x1c]) {
        do {
          iVar1 = iVar1 + 1;
          FUN_005b8010();
        } while (iVar1 < piStack_14[0x1c]);
      }
      FUN_005b8010();
      iVar1 = 0;
      FUN_005b8010();
      if (0 < piStack_14[0x3b]) {
        do {
          iVar1 = iVar1 + 1;
          FUN_005b8010();
        } while (iVar1 < piStack_14[0x3b]);
      }
      FUN_005b8010();
      piStack_14 = piStack_14 + 0x46;
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < in_stack_00000004[0x709]);
  }
  return;
}
