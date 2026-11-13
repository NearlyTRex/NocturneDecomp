// Name: engine_mini3d.cpp_clearZBuffer_FUN_004ec970
// Address: 004ec970
// Address Range: [[004ec970, 004ec984]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_clearZBuffer_FUN_004ec970(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_mini3d_cpp_clearZBuffer_FUN_004ec970(void)

{
  int extraout_EAX;
  int iVar1;
  
  if (_DAT_01c6cee8 == 0) {
    engine_special_cpp_clearZBufferNative_FUN_00560dd4();
    return extraout_EAX;
  }
  if (_DAT_01c6cee8 == 0) {
    return 0;
  }
  iVar1 = (*_DAT_02cf6050)();
  return iVar1;
}
