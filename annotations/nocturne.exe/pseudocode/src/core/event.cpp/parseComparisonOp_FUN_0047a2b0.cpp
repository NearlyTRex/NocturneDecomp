// Name: core_event.cpp_parseComparisonOp_FUN_0047a2b0
// Address: 0047a2b0
// Address Range: [[0047a2b0, 0047a34c]]
// Convention: unknown
// Signature: undefined4 core_event_cpp_parseComparisonOp_FUN_0047a2b0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

uint core_event_cpp_parseComparisonOp_FUN_0047a2b0(void)

{
  int iVar1;
  char *in_stack_00000004;
  
  iVar1 = _strcmp(in_stack_00000004,"<");
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = _strcmp(in_stack_00000004,"<=");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = _strcmp(in_stack_00000004,"==");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = _strcmp(in_stack_00000004,"!=");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = _strcmp(in_stack_00000004,">");
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = _strcmp(in_stack_00000004,">=");
  if (iVar1 == 0) {
    return 4;
  }
  return 6;
}
