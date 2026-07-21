// Name: engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_00493140
// Address: 00493140
// Address Range: [[00493140, 00493195]]
// Convention: __cdecl
// Signature: undefined8 __cdecl engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(int param_1,undefined4 param_2,int param_3,int param_4)

#include "nocturne.h"

ulonglong __cdecl engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_00493140(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (param_4 == -0x81) {
    param_4 = param_3;
  }
  if (param_3 < 0) {
    param_3 = 0;
  }
  if (0xff < param_4) {
    param_4 = 0xff;
  }
  iVar2 = param_3;
  if (param_3 <= param_4) {
    iVar1 = param_3 * 4 + param_1;
    do {
      param_3 = iVar1 + 4;
      iVar2 = iVar2 + 1;
      *(uint *)(iVar1 + 0x2d68) = param_2;
      iVar1 = param_3;
    } while (iVar2 <= param_4);
  }
  return CONCAT44(iVar2,param_3);
}
