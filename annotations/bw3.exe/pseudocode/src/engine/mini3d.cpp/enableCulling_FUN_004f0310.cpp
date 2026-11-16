// Name: engine_mini3d.cpp_enableCulling_FUN_004f0310
// Address: 004f0310
// Address Range: [[004f0310, 004f0337]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_enableCulling_FUN_004f0310(int enable)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_enableCulling_FUN_004f0310(int enable)

{
  _DAT_01d76cf8 = enable;
  if ((_DAT_02cf60ec != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
    (*_DAT_02cf60ec)(enable);
    return;
  }
  return;
}
