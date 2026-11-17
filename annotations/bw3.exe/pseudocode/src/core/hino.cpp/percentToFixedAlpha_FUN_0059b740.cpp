// Name: core_hino.cpp_percentToFixedAlpha_FUN_0059b740
// Address: 0059b740
// Address Range: [[0059b740, 0059b769]]
// Convention: __cdecl
// Signature: int __cdecl core_hino_cpp_percentToFixedAlpha_FUN_0059b740(int percent)

#include "nocturne.h"

int __cdecl core_hino_cpp_percentToFixedAlpha_FUN_0059b740(int percent)

{
  double dVar1;
  
  dVar1 = round((double)percent * 0.01 * 65536);
  return (int)ROUND(dVar1);
}
