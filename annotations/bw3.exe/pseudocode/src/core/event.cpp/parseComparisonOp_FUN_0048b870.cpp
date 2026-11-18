// Name: core_event.cpp_parseComparisonOp_FUN_0048b870
// Address: 0048b870
// Address Range: [[0048b870, 0048b90c]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_parseComparisonOp_FUN_0048b870(char *str)

#include "nocturne.h"

int __cdecl core_event_cpp_parseComparisonOp_FUN_0048b870(char *str)

{
  int iVar1;
  
  iVar1 = _strcmp(str,"<");
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = _strcmp(str,"<=");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = _strcmp(str,"==");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = _strcmp(str,"!=");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = _strcmp(str,">");
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = _strcmp(str,">=");
  if (iVar1 == 0) {
    return 4;
  }
  return 6;
}
