// Name: core_dirmat.cpp_angleFromSinCos_FUN_0044db00
// Address: 0044db00
// Address Range: [[0044db00, 0044dbcd]]
// Convention: __cdecl
// Signature: float __cdecl core_dirmat_cpp_angleFromSinCos_FUN_0044db00(double y,double x)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_dirmat_cpp_angleFromSinCos_FUN_0044db00(double y,double x)

{
  float10 fVar1;
  double dVar2;
  float local_c;
  
  if ((_DAT_0057c4de <= y) || (y <= _DAT_0057c4e6)) {
    if ((_DAT_0057c4ee < x) && (x < 1.0)) {
      dVar2 = acos(x);
      local_c = (float)dVar2;
    }
    if (y < 0.0) {
      local_c = -local_c;
    }
  }
  else {
    fVar1 = asin((float10)y);
    local_c = (float)fVar1;
    if (x < 0.0) {
      local_c = (float)_DAT_0057c4f6 - local_c;
    }
  }
  if (local_c < (float)_DAT_0057c4fe) {
    local_c = local_c + _DAT_0057c506;
  }
  if ((float)_DAT_0057c4f6 < local_c) {
    return local_c + _DAT_0057c50a;
  }
  return local_c;
}
