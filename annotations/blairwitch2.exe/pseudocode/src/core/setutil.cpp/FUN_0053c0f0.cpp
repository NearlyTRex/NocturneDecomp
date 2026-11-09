// Name: core_setutil.cpp_FUN_0053c0f0
// Address: 0053c0f0
// Address Range: [[0053c0f0, 0053c16c]]
// Convention: unknown
// Signature: undefined4 core_setutil_cpp_FUN_0053c0f0(int param_1)

#include "nocturne.h"

uint core_setutil_cpp_FUN_0053c0f0(int param_1)

{
  uint uVar1;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  uint uStack_c;
  uint uStack_8;
  uint uStack_4;
  
  if ((*(uint *)(param_1 + 0x11d4) & 0x7fffffff) == 0) {
    return 1;
  }
  fStack_18 = -*(float *)(param_1 + 0x11d4);
  fStack_14 = -*(float *)(param_1 + 0x11d4);
  fStack_10 = -*(float *)(param_1 + 0x11d4);
  uStack_c = *(uint *)(param_1 + 0x11d4);
  uStack_8 = uStack_c;
  uStack_4 = uStack_c;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
            (DAT_0060b280,(CVector3f *)(param_1 + 0x104));
  uVar1 = core_box_cpp_FUN_0041a840(&fStack_18,0);
  return uVar1;
}
