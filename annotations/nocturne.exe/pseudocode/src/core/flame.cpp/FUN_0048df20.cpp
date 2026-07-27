// Name: core_flame.cpp_FUN_0048df20
// Address: 0048df20
// Address Range: [[0048df20, 0048e096]]
// Convention: unknown
// Signature: void core_flame_cpp_FUN_0048df20(int param_1,int param_2)

#include "nocturne.h"

void core_flame_cpp_FUN_0048df20(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  byte local_38 [24];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  
  uVar2 = DAT_005ae704;
  *(uint *)(param_1 + 0x298) = 0;
  *(uint *)(param_1 + 0x290) = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(uVar2);
  if ((iVar1 == 0) && (param_2 != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
    uVar2 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_38,0);
    uVar2 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar2);
    *(uint *)(param_1 + 0x288) = uVar2;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
    if ((*(int *)(param_1 + 0x288) != 0) &&
       (((1.0 < SQRT(*(float *)(param_1 + 0x158) * *(float *)(param_1 + 0x158) +
                     *(float *)(param_1 + 0x150) * *(float *)(param_1 + 0x150) +
                     *(float *)(param_1 + 0x154) * *(float *)(param_1 + 0x154)) &&
         (0.0 < *(float *)(param_1 + 0x1a4))) && (*(int *)(param_1 + 0x1a0) == 0)))) {
      iVar1 = 0;
      iStack_14 = 0;
      for (iVar4 = 0; iVar4 < *(int *)(0x01E57284 + 0x14cd6c); iVar4 = iVar4 + 1) {
        iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                          (*(uint *)(iVar1 + 0x14cd70 + 0x01E57284),
                           g_CFlameActorType_01c70618.name_hash);
        if (iVar3 != 0) {
          fStack_20 = *(float *)(param_1 + 0x20) - *(float *)(iVar3 + 0x20);
          fStack_1c = *(float *)(param_1 + 0x24) - *(float *)(iVar3 + 0x24);
          fStack_18 = *(float *)(param_1 + 0x28) - *(float *)(iVar3 + 0x28);
          if ((SQRT(fStack_18 * fStack_18 + fStack_20 * fStack_20 + fStack_1c * fStack_1c) <
               (float)5) && (*(int *)(iVar3 + 0x298) == 1)) {
            return;
          }
        }
        iVar1 = iVar1 + 4;
      }
      if (iStack_14 == 0) {
        *(uint *)(param_1 + 0x298) = 1;
        return;
      }
    }
  }
  return;
}
