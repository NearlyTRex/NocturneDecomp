// Name: engine_mini3d.cpp_clearZBuffer_FUN_005111a0
// Address: 005111a0
// Address Range: [[005111a0, 005111b4]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_clearZBuffer_FUN_005111a0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_mini3d_cpp_clearZBuffer_FUN_005111a0(void)

{
  int extraout_EAX;
  int iVar1;
  
  if (_DAT_01c50948 == 0) {
    engine_special_cpp_clearZBufferNative_FUN_0057dca4();
    return extraout_EAX;
  }
  if (_DAT_01c50948 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02c833f4)();
  return iVar1;
}
