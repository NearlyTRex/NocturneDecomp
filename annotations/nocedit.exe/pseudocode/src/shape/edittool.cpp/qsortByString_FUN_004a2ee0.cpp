// Name: shape_edittool.cpp_qsortByString_FUN_004a2ee0
// Address: 004a2ee0
// Address Range: [[004a2ee0, 004a2ef6]]
// Convention: __cdecl
// Signature: int __cdecl shape_edittool_cpp_qsortByString_FUN_004a2ee0(char *a,char *b)

#include "nocturne.h"

int __cdecl shape_edittool_cpp_qsortByString_FUN_004a2ee0(char *a,char *b)

{
  int iVar1;
  
  iVar1 = _stricmp(*(char **)a,*(char **)b);
  return iVar1;
}
