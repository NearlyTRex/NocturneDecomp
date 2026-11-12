// Name: core_event.cpp_parseComparisonOp_FUN_00488c1e
// Address: 00488c1e
// Address Range: [[00488c1e, 00488cbc]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_parseComparisonOp_FUN_00488c1e(char *str)

#include "nocturne.h"

int __cdecl core_event_cpp_parseComparisonOp_FUN_00488c1e(char *str)

{
  int iVar1;
  
  iVar1 = _strcmp(str,&DAT_005d2e2b);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = _strcmp(str,&DAT_005d2e2d);
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = _strcmp(str,&DAT_005d2e30);
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = _strcmp(str,&DAT_005d2e33);
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = _strcmp(str,&DAT_005d2e36);
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = _strcmp(str,&DAT_005d2e38);
  if (iVar1 == 0) {
    return 4;
  }
  return 6;
}
