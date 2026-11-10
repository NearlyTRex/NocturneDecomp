// Name: shape_edittool.cpp_FUN_004803d0
// Address: 004803d0
// Address Range: [[004803d0, 0048040c]]
// Convention: __cdecl
// Signature: uint __cdecl shape_edittool_cpp_FUN_004803d0(CEditorTools *this_ptr)

#include "nocturne.h"

uint __cdecl shape_edittool_cpp_FUN_004803d0(CEditorTools *this_ptr)

{
  uint uVar1;
  
  uVar1 = wincore_winrun_cpp_getTime_FUN_005806a0();
  uVar1 = uVar1 & 0x30000;
  if (uVar1 < 0x10000) {
    if (uVar1 == 0) {
      return 0;
    }
  }
  else {
    if (uVar1 < 0x10001) {
      return 0xff;
    }
    if (0x1ffff < uVar1) {
      if (uVar1 < 0x20001) {
        return 2;
      }
      if (uVar1 == 0x30000) {
        return 0xfd;
      }
    }
  }
  return 0;
}
