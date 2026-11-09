// Name: core_glass.cpp_CGlass_onLaserHit_FUN_004e38f0
// Address: 004e38f0
// Address Range: [[004e38f0, 004e3a25]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_onLaserHit_FUN_004e38f0(CGlass *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_glass_cpp_CGlass_onLaserHit_FUN_004e38f0(CGlass *this_ptr,SLaserInfo *laser_info)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float10 fVar6;
  float10 fVar7;
  int iStack_18;
  int iStack_14;
  
  core_actor_cpp_FUN_00409680(this_ptr,laser_info);
  if (*(int *)&this_ptr->field_0x1e8 == 0) {
    *(float *)(laser_info + 0x48) =
         1.0 - (float)*(int *)&this_ptr->field_0x17c * (float)_DAT_005e3fdc;
    return;
  }
  if (*(int *)&this_ptr->field_0x180 == 0) {
    *(uint *)(laser_info + 0x50) = 0x3f800000;
  }
  else {
    fVar1 = *(float *)(laser_info + 0x30);
    fVar2 = *(float *)&this_ptr->field_0x15c;
    fVar3 = *(float *)(laser_info + 0x2c);
    fVar4 = *(float *)&this_ptr->field_0x158;
    fVar5 = (float)_DAT_005e3fe4;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
              (DAT_00612560,(SMRGLTextureBasic *)&this_ptr->field_0x374);
    fVar6 = (float10)(fVar3 / fVar4 + fVar5) * (float10)DAT_0061b4a8;
    fVar7 = (float10)(1.0 - fVar1 / fVar2) * (float10)DAT_0061b4a8;
    round();
    round();
    iStack_18 = (int)ROUND(fVar6);
    iStack_14 = (int)ROUND(fVar7);
    if (iStack_18 < 0) {
      iStack_18 = 0;
    }
    if (DAT_0061b4a8 <= iStack_18) {
      iStack_18 = DAT_0061b4a8 + -1;
    }
    if (iStack_14 < 0) {
      iStack_14 = 0;
    }
    if (DAT_0061b4a8 <= iStack_14) {
      iStack_14 = DAT_0061b4a8 + -1;
    }
    if (*(char *)(iStack_18 + iStack_14 * DAT_0061b4a8 + _DAT_01c50930) == '\0') {
      *(uint *)(laser_info + 0x50) = 0x3f800000;
      return;
    }
  }
  return;
}
