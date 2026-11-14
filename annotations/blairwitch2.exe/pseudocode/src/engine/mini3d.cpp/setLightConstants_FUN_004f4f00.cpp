// Name: engine_mini3d.cpp_setLightConstants_FUN_004f4f00
// Address: 004f4f00
// Address Range: [[004f4f00, 004f4f47]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_setLightConstants_FUN_004f4f00(float arg1,float arg2,float arg3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_setLightConstants_FUN_004f4f00(float arg1,float arg2,float arg3)

{
  _DAT_01d098e4 = arg1;
  _DAT_01d098e8 = arg2;
  _DAT_01d098ec = arg3;
  if ((_DAT_0264bc78 != (code *)0x0) && (_DAT_01c37788 != 0)) {
    (*_DAT_0264bc78)(arg1,arg2,arg3,_DAT_01d09860);
    return;
  }
  return;
}
