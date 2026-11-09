// Name: core_wateract.cpp_FUN_005ab530
// Address: 005ab530
// Address Range: [[005ab530, 005ab7b3]]
// Convention: unknown
// Signature: float core_wateract_cpp_FUN_005ab530(int param_1,undefined4 param_2,undefined4 param_3,float *param_4)

#include "nocturne.h"

float core_wateract_cpp_FUN_005ab530(int param_1,uint param_2,uint param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1048 [982];
  float fStack_d0;
  byte auStack_c8 [40];
  float fStack_a0;
  float fStack_9c;
  uint auStack_90 [6];
  uint auStack_78 [6];
  float fStack_60;
  float afStack_5c [4];
  float fStack_4c;
  float afStack_48 [3];
  float fStack_3c;
  float afStack_38 [4];
  float fStack_28;
  int iStack_24;
  int iStack_1c;
  int iStack_18;
  float fStack_14;
  
  bVar5 = 0;
  (**(code **)(*(int *)(param_1 + 0x154) + 0x1c))(param_1,param_2,param_3,0);
  puVar3 = auStack_90;
  puVar4 = auStack_78;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  fStack_14 = (float)core_box_cpp_FUN_00420ee0(auStack_78);
  if ((0.0 <= fStack_14) && (fStack_14 <= 1.0)) {
    iStack_24 = *(int *)(param_1 + 0x2b234);
    iVar2 = param_1 + 0x7fa8;
    iStack_18 = 0;
    fStack_d0 = 2.0;
    if (0 < iStack_24) {
      iStack_1c = param_1 + 0x29c;
      do {
        core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0048fed0
                  ((CDemonTriangle *)auStack_c8,
                   (CVector3f *)(*(int *)(iVar2 + 0x18) * 0x20 + iStack_1c),
                   (CVector3f *)(*(int *)(iVar2 + 0x24) * 0x20 + iStack_1c),
                   (CVector3f *)(*(int *)(iVar2 + 0x30) * 0x20 + iStack_1c));
        fVar1 = (float)core_dtri_cpp_rayTriangleIntersection_FUN_0048ff40
                                 (auStack_c8,param_2,param_3);
        fStack_14 = fVar1;
        if (((fVar1 < fStack_d0) && (0.0 <= fVar1)) && (fVar1 <= 1.0)) {
          afStack_38[2] = -(float)auStack_c8._36_4_;
          afStack_38[3] = -fStack_a0;
          fStack_28 = -fStack_9c;
          fStack_60 = -(float)auStack_c8._36_4_;
          afStack_5c[(uint)bVar5 * -2] = afStack_38[(uint)bVar5 * -2 + 3];
          afStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               afStack_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
          fStack_d0 = fVar1;
          if (afStack_5c + 5 != &fStack_60) {
            afStack_48[0] = fStack_60;
          }
        }
        iStack_18 = iStack_18 + 1;
        iVar2 = iVar2 + 0x48;
      } while (iStack_18 < iStack_24);
    }
    if (fStack_d0 < 1.0) {
      core_actor_cpp_FUN_00408ac0(param_1,afStack_5c + 5);
      afStack_5c[2] = fStack_3c;
      afStack_5c[(uint)bVar5 * -2 + 3] = afStack_38[(uint)bVar5 * -2];
      afStack_5c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           afStack_38[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      if (afStack_5c + 2 != param_4) {
        *param_4 = afStack_5c[2];
        param_4[1] = afStack_5c[3];
        param_4[2] = fStack_4c;
      }
    }
    return fStack_d0;
  }
  return 2.0;
}
