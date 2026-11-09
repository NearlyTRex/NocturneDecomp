// Name: unkafter_2d.cpp_FUN_005b0088
// Address: 005b0088
// Address Range: [[005b0088, 005b0114]]
// Convention: unknown
// Signature: undefined4 unkafter_2d_cpp_FUN_005b0088(int param_1,int param_2)

#include "nocturne.h"

uint unkafter_2d_cpp_FUN_005b0088(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((0 < param_1) && (param_1 < 0xd)) {
    PTR_crt_unknown_c_FUN_005a5fb8_00607674 = engine_2d_c_enableTextWrap_FUN_005b003c;
    if ((param_2 != 2) && (param_2 != 3)) {
      iVar1 = unkafter_asgaya_cpp_FUN_005afef8(param_1);
      if ((iVar1 != 0) && (param_1 == 2)) {
        unkafter_2d_cpp_FUN_005b0df0(0,0x9f);
      }
    }
    uVar2 = unkafter_asgaya_cpp_FUN_005afed4(param_1);
    unkafter_asgaya_cpp_FUN_005afe80(param_1,param_2);
    iVar1 = unkafter_asgaya_cpp_FUN_005affa0();
    if (iVar1 == 0) {
      unkafter_asgaya_cpp_FUN_005b0004();
    }
    else {
      unkafter_asgaya_cpp_FUN_005affd8();
    }
    return uVar2;
  }
  setErrno(9);
  return 3;
}
