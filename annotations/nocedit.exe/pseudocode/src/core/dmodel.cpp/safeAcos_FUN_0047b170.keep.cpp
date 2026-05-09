// Name: core_dmodel.cpp_safeAcos_FUN_0047b170
// Address: 0047b170
// MANUAL RECONSTRUCTION
// Address Range: [[0047b170, 0047b1dd]]
// Convention: __cdecl
// Signature: double __cdecl core_dmodel_cpp_safeAcos_FUN_0047b170(float value)

#include "nocturne.h"

double __cdecl core_dmodel_cpp_safeAcos_FUN_0047b170(float value)

{
  double dVar1;
  double local_10;

  dVar1 = (double)value;
  if (1.0 <= dVar1) {
    local_10 = 0.0;
  }
  else {
    if (-1 < dVar1) {
      dVar1 = acos(dVar1);
      return dVar1;
    }
    local_10 = 3.141592653589793;
  }
  return local_10;
}
