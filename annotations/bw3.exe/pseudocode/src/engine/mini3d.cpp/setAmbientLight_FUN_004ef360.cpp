// Name: engine_mini3d.cpp_setAmbientLight_FUN_004ef360
// Address: 004ef360
// Address Range: [[004ef360, 004ef387]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setAmbientLight_FUN_004ef360(float ambient)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setAmbientLight_FUN_004ef360(float ambient)

{
  _DAT_01d76cd4 = ambient;
  if ((_DAT_02cf60ac != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
    (*_DAT_02cf60ac)(ambient);
    return;
  }
  return;
}
