// Name: shape_edittool.cpp_qsortByString_FUN_004811b0
// Address: 004811b0
// Address Range: [[004811b0, 004811c6]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_qsortByString_FUN_004811b0(char *a,char *b)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_qsortByString_FUN_004811b0(char *a,char *b)

{
  int iVar1;
  
  iVar1 = _stricmp(*(char **)a,*(char **)b);
  return iVar1;
}
