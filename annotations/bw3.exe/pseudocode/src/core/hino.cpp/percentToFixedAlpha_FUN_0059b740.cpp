// Name: core_hino.cpp_percentToFixedAlpha_FUN_0059b740
// Address: 0059b740
// Address Range: [[0059b740, 0059b769]]
// Convention: __cdecl
// Signature: int __cdecl core_hino_cpp_percentToFixedAlpha_FUN_0059b740(int percent)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hino_cpp_percentToFixedAlpha_FUN_0059b740(int percent)

{
  double dVar1;
  
  dVar1 = round((double)percent * _DAT_005d9bdc * _DAT_005d9be4);
  return (int)ROUND(dVar1);
}
