// Name: core_event.cpp_parseComparisonOp_FUN_004a128e
// Address: 004a128e
// Address Range: [[004a128e, 004a132c]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_parseComparisonOp_FUN_004a128e(char *str)

#include "nocturne.h"

int __cdecl core_event_cpp_parseComparisonOp_FUN_004a128e(char *str)

{
  int iVar1;
  
  iVar1 = _strcmp(str,&DAT_005dcbc4);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = _strcmp(str,&DAT_005dcbc6);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = _strcmp(str,&DAT_005dcbc9);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = _strcmp(str,&DAT_005dcbcc);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = _strcmp(str,&DAT_005dcbcf);
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = _strcmp(str,&DAT_005dcbd1);
  if (iVar1 == 0) {
    return 4;
  }
  return 6;
}
