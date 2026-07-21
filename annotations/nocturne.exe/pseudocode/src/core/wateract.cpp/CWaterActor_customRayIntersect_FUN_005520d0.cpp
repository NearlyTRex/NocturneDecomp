// Name: core_wateract.cpp_CWaterActor_customRayIntersect_FUN_005520d0
// Address: 005520d0
// Address Range: [[005520d0, 00552297]]
// Convention: unknown
// Signature: float core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005520d0(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

float core_wateract_cpp_CWaterActor_customRayIntersect_FUN_005520d0(int param_1,uint param_2,uint param_3,float *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fStack_8c;
  byte auStack_88 [36];
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  byte local_50 [24];
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  int iStack_1c;
  float fStack_18;
  
  uVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_50,param_2,param_3,0);
  fStack_18 = (float)core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_0041d550(uVar1);
  if ((fStack_18 < 0.0) || (1.0 < fStack_18)) {
    fStack_20 = 2.0;
  }
  else {
    iStack_1c = *(int *)(param_1 + 0x2b22c);
    iVar3 = 0;
    fStack_8c = 2.0;
    iVar2 = param_1 + 0x7fa0;
    if (0 < iStack_1c) {
      param_1 = param_1 + 0x294;
      do {
        core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0046c5b0
                  (auStack_88,*(int *)(iVar2 + 0x18) * 0x20 + param_1,
                   *(int *)(iVar2 + 0x24) * 0x20 + param_1,*(int *)(iVar2 + 0x30) * 0x20 + param_1);
        fStack_18 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_0046c620
                                     (auStack_88,param_2,param_3);
        if (((fStack_18 < fStack_8c) && (0.0 <= fStack_18)) && (fStack_18 <= 1.0)) {
          fStack_38 = -fStack_64;
          fStack_34 = -fStack_60;
          fStack_30 = -fStack_5c;
          fStack_8c = fStack_18;
          if (&fStack_2c != &fStack_38) {
            fStack_2c = fStack_38;
            fStack_28 = fStack_34;
            fStack_24 = fStack_30;
          }
        }
        iVar3 = iVar3 + 1;
        iVar2 = iVar2 + 0x48;
      } while (iVar3 < iStack_1c);
    }
    if ((fStack_8c < 1.0) && (&fStack_2c != param_4)) {
      *param_4 = fStack_2c;
      param_4[1] = fStack_28;
      param_4[2] = fStack_24;
    }
    fStack_20 = fStack_8c;
  }
  return fStack_20;
}
