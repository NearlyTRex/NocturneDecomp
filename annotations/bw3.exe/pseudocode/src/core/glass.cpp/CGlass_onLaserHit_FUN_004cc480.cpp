// Name: core_glass.cpp_CGlass_onLaserHit_FUN_004cc480
// Address: 004cc480
// Address Range: [[004cc480, 004cc5b5]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_onLaserHit_FUN_004cc480(CGlass *this_ptr,SLaserInfo *laser_info)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_glass_cpp_CGlass_onLaserHit_FUN_004cc480(CGlass *this_ptr,SLaserInfo *laser_info)

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
  
  core_actor_cpp_FUN_004096c0(this_ptr,laser_info);
  if (*(int *)&this_ptr->field_0x218 == 0) {
    *(float *)(laser_info + 0x48) =
         1.0 - (float)*(int *)&this_ptr->field_0x1ac * (float)_DAT_005c45e8;
    return;
  }
  if (*(int *)&this_ptr->field_0x1b0 == 0) {
    *(uint *)(laser_info + 0x50) = 0x3f800000;
  }
  else {
    fVar1 = *(float *)(laser_info + 0x30);
    fVar2 = *(float *)&this_ptr->field_0x15c;
    fVar3 = *(float *)(laser_info + 0x2c);
    fVar4 = *(float *)&this_ptr->field_0x158;
    fVar5 = (float)_DAT_005c45f0;
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046e5e0
              (DAT_005f2afc,(SMRGLTextureBasic *)&this_ptr->field_0x3a4);
    fVar6 = (float10)(fVar3 / fVar4 + fVar5) * (float10)DAT_005fba28;
    fVar7 = (float10)(1.0 - fVar1 / fVar2) * (float10)DAT_005fba28;
    round();
    round();
    iStack_18 = (int)ROUND(fVar6);
    iStack_14 = (int)ROUND(fVar7);
    if (iStack_18 < 0) {
      iStack_18 = 0;
    }
    if (DAT_005fba28 <= iStack_18) {
      iStack_18 = DAT_005fba28 + -1;
    }
    if (iStack_14 < 0) {
      iStack_14 = 0;
    }
    if (DAT_005fba28 <= iStack_14) {
      iStack_14 = DAT_005fba28 + -1;
    }
    if (*(char *)(iStack_18 + iStack_14 * DAT_005fba28 + _DAT_01c6ced0) == '\0') {
      *(uint *)(laser_info + 0x50) = 0x3f800000;
      return;
    }
  }
  return;
}
