// Name: core_frankgen.cpp_FUN_00494e80
// Address: 00494e80
// Address Range: [[00494e80, 00494ff6]]
// Convention: unknown
// Signature: int core_frankgen_cpp_FUN_00494e80(int param_1)

#include "nocturne.h"

int core_frankgen_cpp_FUN_00494e80(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  float10 fVar5;
  float fStack_38;
  byte local_34 [24];
  ulonglong uStack_1c;
  
  if (*(int *)(0x01CC9450 + 4) != 0) {
    iVar3 = core_frankgen_cpp_findLeader_FUN_00495240();
    *(uint *)(param_1 + 0x154) = *(uint *)(iVar3 + 0x154);
    core_frankgen_cpp_FUN_004950a0();
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20();
  uVar4 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x14))(param_1,local_34,0);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_0041ceb0(uVar4);
  if (iVar3 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
              (param_1 + 0x17c,*(uint *)(param_1 + 0x178),0xffffffff);
    if (*(char *)(param_1 + 0x37c) != '\0') {
      iVar1 = *(int *)(param_1 + 0x154);
      if (iVar1 < 0x4400c000) {
        fStack_38 = 201.0;
      }
      else if (iVar1 < 0x44e10000) {
        fStack_38 = 0.0;
        uStack_1c = __BITCAST_DOUBLE(CONCAT44(uStack_1c._4_4_,(uint)uStack_1c));
      }
      else if (iVar1 < 0x44ed8000) {
        fStack_38 = *(float *)(param_1 + 0x154) + -1800.0f;
        uStack_1c = __BITCAST_DOUBLE(CONCAT44(uStack_1c._4_4_,(uint)uStack_1c));
      }
      else if (iVar1 < 0x44fa0000) {
        fStack_38 = 100.0;
        uStack_1c = __BITCAST_DOUBLE(CONCAT44(uStack_1c._4_4_,(uint)uStack_1c));
      }
      else {
        fVar2 = (*(float *)(param_1 + 0x154) + -2000.0f) * (float)3;
        uStack_1c = (double)floor((double)(fVar2 * 0.005f));
        fVar5 = (float10)fVar2 - (float10)uStack_1c * (float10)200;
        fStack_38 = (float)fVar5;
        if ((float10)100.0f < fVar5) {
          fStack_38 = 200.0f - fStack_38;
        }
        fStack_38 = fStack_38 + 99.0f;
      }
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
                (param_1 + 0x304,fStack_38,0xffffffff);
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60();
      return iVar3;
    }
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60();
  return iVar3;
}
