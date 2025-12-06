// Name: core_event.cpp_DifferentWaysToDie_FUN_004aa7d0
// Address: 004aa7d0
// Address Range: [[004aa7d0, 004aa95a]]
// Convention: unknown
// Signature: undefined core_event.cpp_DifferentWaysToDie_FUN_004aa7d0()

#include "nocturne.h"

uint core_event_cpp_DifferentWaysToDie_FUN_004aa7d0(void)

{
  int iVar1;
  char *in_stack_00000004;
  uint *in_stack_00000008;
  
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"generic");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"drown");
  if (iVar1 == 0) {
    *in_stack_00000008 = 1;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"fall");
  if (iVar1 == 0) {
    *in_stack_00000008 = 2;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"explode");
  if (iVar1 == 0) {
    *in_stack_00000008 = 3;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"fallApart");
  if (iVar1 == 0) {
    *in_stack_00000008 = 4;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"shatter");
  if (iVar1 == 0) {
    *in_stack_00000008 = 5;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"electrocute");
  if (iVar1 == 0) {
    *in_stack_00000008 = 6;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"gas");
  if (iVar1 == 0) {
    *in_stack_00000008 = 0x69;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"Chopped");
  if (iVar1 == 0) {
    *in_stack_00000008 = 7;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"Crushed");
  if (iVar1 == 0) {
    *in_stack_00000008 = 8;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"Impale");
  if (iVar1 == 0) {
    *in_stack_00000008 = 9;
    return 1;
  }
  iVar1 = crt_string_c_stricmp_FUN_005fe7f0(in_stack_00000004,"Fire");
  if (iVar1 == 0) {
    *in_stack_00000008 = 10;
    return 1;
  }
  return 0;
}
