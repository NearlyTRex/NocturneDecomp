// Name: core_skeledit.cpp_FUN_005925c0
// Address: 005925c0
// Address Range: [[005925c0, 00592668]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_005925c0()

#include "nocturne.h"

uint core_skeledit_cpp_FUN_005925c0(void)

{
  int iVar1;
  char *in_stack_00000004;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x10);
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"skipTo");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"flowTo");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"tweenPoseToPose");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"tweenPoseToMotion");
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"tweenMotionToPose");
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"tweenMotionToMotion");
  if (iVar1 == 0) {
    return 6;
  }
  return 0;
}
