// Name: shape_edittool.cpp_FUN_00497830
// Address: 00497830
// Address Range: [[00497830, 0049786c]]
// Convention: __cdecl
// Signature: uint __cdecl shape_edittool_cpp_FUN_00497830(CEditorTools *this_ptr)

#include "nocturne.h"

uint __cdecl shape_edittool_cpp_FUN_00497830(CEditorTools *this_ptr)

{
  uint uVar1;
  
  uVar1 = wincore_winrun_cpp_FUN_005b2420();
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
