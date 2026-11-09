// Name: shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_0047f1c0
// Address: 0047f1c0
// Address Range: [[0047f1c0, 0047f207]]
// Convention: __cdecl
// Signature: uint __cdecl shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_0047f1c0(CEditorTools *this_ptr)

#include "nocturne.h"

uint __cdecl shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_0047f1c0(CEditorTools *this_ptr)

{
  uint uVar1;
  
  uVar1 = wincore_winrun_cpp_FUN_0058e9e0();
  uVar1 = uVar1 & 0x30000;
  if (uVar1 < 0x10000) {
    if (uVar1 == 0) {
      return (uint)DAT_01c2c910;
    }
  }
  else {
    if (uVar1 < 0x10001) {
      return (uint)DAT_01c3490f;
    }
    if (0x1ffff < uVar1) {
      if (uVar1 < 0x20001) {
        return (uint)DAT_01c2ccf0;
      }
      if (uVar1 == 0x30000) {
        return (uint)DAT_01c3452f;
      }
    }
  }
  return 0;
}
