// Name: core_event.cpp_parseComparisonOp_FUN_004aa320
// Address: 004aa320
// Address Range: [[004aa320, 004aa3bc]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_parseComparisonOp_FUN_004aa320(char *str)

#include "nocturne.h"

int __cdecl core_event_cpp_parseComparisonOp_FUN_004aa320(char *str)

{
  int iVar1;
  
  iVar1 = strcmp(str,"<");
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = strcmp(str,"<=");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = strcmp(str,"==");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = strcmp(str,"!=");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = strcmp(str,">");
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = strcmp(str,">=");
  if (iVar1 == 0) {
    return 4;
  }
  return 6;
}
