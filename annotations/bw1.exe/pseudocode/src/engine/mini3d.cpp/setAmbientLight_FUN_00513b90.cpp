// Name: engine_mini3d.cpp_setAmbientLight_FUN_00513b90
// Address: 00513b90
// Address Range: [[00513b90, 00513bb7]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setAmbientLight_FUN_00513b90(float ambient)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setAmbientLight_FUN_00513b90(float ambient)

{
  _DAT_01d22554 = ambient;
  if ((_DAT_02c83450 != (code *)0x0) && (_DAT_01c50948 != 0)) {
    (*_DAT_02c83450)(ambient);
    return;
  }
  return;
}
