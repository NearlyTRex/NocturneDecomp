// Name: shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
// Address: 004a1330
// Address Range: [[004a1330, 004a1377]]
// Convention: __cdecl
// Signature: uint __cdecl shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools *this_ptr)

#include "nocturne.h"

uint __cdecl shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330(CEditorTools *this_ptr)

{
  uint uVar1;
  
  uVar1 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
  uVar1 = uVar1 & 0x30000;
  if (uVar1 < 0x10000) {
    if (uVar1 == 0) {
      return (uint)g_ColorCubeLookup[0];
    }
  }
  else {
    if (uVar1 < 0x10001) {
      return (uint)g_ColorCubeLookup[0x7fff];
    }
    if (0x1ffff < uVar1) {
      if (uVar1 < 0x20001) {
        return (uint)g_ColorCubeLookup[0x3e0];
      }
      if (uVar1 == 0x30000) {
        return (uint)g_ColorCubeLookup[0x7c1f];
      }
    }
  }
  return 0;
}
