// Name: unkafter_2d.cpp_FUN_005cd2f8
// Address: 005cd2f8
// Address Range: [[005cd2f8, 005cd384]]
// Convention: unknown
// Signature: undefined4 unkafter_2d_cpp_FUN_005cd2f8(int param_1,int param_2)

#include "nocturne.h"

uint unkafter_2d_cpp_FUN_005cd2f8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((0 < param_1) && (param_1 < 0xd)) {
    PTR_crt_unknown_c_FUN_005c3148_006262d0 = engine_2d_c_enableTextWrap_FUN_005cd2ac;
    if ((param_2 != 2) && (param_2 != 3)) {
      iVar1 = unkafter_zombie_cpp_FUN_005cd168(param_1);
      if ((iVar1 != 0) && (param_1 == 2)) {
        unkafter_2d_cpp_FUN_005ce060(0,0x9f);
      }
    }
    uVar2 = unkafter_zombie_cpp_FUN_005cd144(param_1);
    unkafter_zombie_cpp_FUN_005cd0f0(param_1,param_2);
    iVar1 = unkafter_zombie_cpp_FUN_005cd210();
    if (iVar1 == 0) {
      unkafter_zombie_cpp_FUN_005cd274();
    }
    else {
      unkafter_zombie_cpp_FUN_005cd248();
    }
    return uVar2;
  }
  setErrno(9);
  return 3;
}
