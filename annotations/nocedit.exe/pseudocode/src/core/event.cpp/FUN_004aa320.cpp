// Name: core_event.cpp_FUN_004aa320
// Address: 004aa320
// Address Range: [[004aa320, 004aa3bc]]
// Convention: unknown
// Signature: undefined core_event.cpp_FUN_004aa320()

#include "nocturne.h"

uint core_event_cpp_FUN_004aa320(void)

{
  int iVar1;
  char *in_stack_00000004;
  
  iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000004,"<");
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000004,"<=");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000004,"==");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000004,"!=");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000004,">");
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = crt_string_c_strcmp_FUN_005fef20(in_stack_00000004,">=");
  if (iVar1 == 0) {
    return 4;
  }
  return 6;
}
