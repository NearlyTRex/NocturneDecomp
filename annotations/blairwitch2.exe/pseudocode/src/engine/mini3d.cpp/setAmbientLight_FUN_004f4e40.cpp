// Name: engine_mini3d.cpp_setAmbientLight_FUN_004f4e40
// Address: 004f4e40
// Address Range: [[004f4e40, 004f4e67]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setAmbientLight_FUN_004f4e40(float ambient)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setAmbientLight_FUN_004f4e40(float ambient)

{
  _DAT_01d098f0 = ambient;
  if ((_DAT_0264bc80 != (code *)0x0) && (_DAT_01c37788 != 0)) {
    (*_DAT_0264bc80)(ambient);
    return;
  }
  return;
}
