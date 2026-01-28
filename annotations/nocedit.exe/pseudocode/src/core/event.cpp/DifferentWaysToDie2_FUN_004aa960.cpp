// Name: core_event.cpp_DifferentWaysToDie2_FUN_004aa960
// Address: 004aa960
// Address Range: [[004aa960, 004aaa4e]]
// Convention: unknown
// Signature: undefined4 core_event_cpp_DifferentWaysToDie2_FUN_004aa960(void)

#include "nocturne.h"

uint core_event_cpp_DifferentWaysToDie2_FUN_004aa960(void)

{
  int iVar1;
  char *in_stack_00000004;
  uint *in_stack_00000008;
  
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"generic");
  if (iVar1 == 0) {
    *in_stack_00000008 = 100;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"bullet");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0x65;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"Fire");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0x66;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"Blade");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0x67;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"Stake");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0x68;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"Gas");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0x69;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"electrocute");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0x6a;
    return 1;
  }
  return 0;
}
