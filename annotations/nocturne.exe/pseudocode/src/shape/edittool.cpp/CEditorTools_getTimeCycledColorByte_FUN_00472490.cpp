// Name: shape_edittool.cpp_CEditorTools_getTimeCycledColorByte_FUN_00472490
// Address: 00472490
// Address Range: [[00472490, 004724d7]]
// Convention: __cdecl
// Signature: undefined1 __cdecl shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_00472490(void)

#include "nocturne.h"

byte __cdecl shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_00472490(void)

{
  uint uVar1;
  
  uVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
  uVar1 = uVar1 & 0x30000;
  if (uVar1 < 0x10000) {
    if (uVar1 == 0) {
      return DAT_01bf7720;
    }
  }
  else {
    if (uVar1 < 0x10001) {
      return DAT_01bff71f;
    }
    if (0x1ffff < uVar1) {
      if (uVar1 < 0x20001) {
        return DAT_01bf7b00;
      }
      if (uVar1 == 0x30000) {
        return DAT_01bff33f;
      }
    }
  }
  return 0;
}
