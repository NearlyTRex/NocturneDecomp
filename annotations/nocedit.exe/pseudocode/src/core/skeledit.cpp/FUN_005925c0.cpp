// Name: core_skeledit.cpp_FUN_005925c0
// Address: 005925c0
// Address Range: [[005925c0, 00592668]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_FUN_005925c0(void)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_FUN_005925c0(void)

{
  int iVar1;
  char *in_stack_00000004;
  
  __STK(0x10);
  iVar1 = stricmp(in_stack_00000004,"skipTo");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = stricmp(in_stack_00000004,"flowTo");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = stricmp(in_stack_00000004,"tweenPoseToPose");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = stricmp(in_stack_00000004,"tweenPoseToMotion");
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = stricmp(in_stack_00000004,"tweenMotionToPose");
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = stricmp(in_stack_00000004,"tweenMotionToMotion");
  if (iVar1 == 0) {
    return 6;
  }
  return 0;
}
