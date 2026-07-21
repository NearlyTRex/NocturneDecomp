// Name: core_manpuz.cpp_CMirrorHack_renderOpaque_FUN_004cbb70
// Address: 004cbb70
// Address Range: [[004cbb70, 004cbbbe]]
// Convention: unknown
// Signature: undefined4 core_manpuz_cpp_CMirrorHack_renderOpaque_FUN_004cbb70(int param_1)

#include "nocturne.h"

uint core_manpuz_cpp_CMirrorHack_renderOpaque_FUN_004cbb70(int param_1)

{
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00409f20(param_1);
  *(uint *)(0x01C775EC + 500) = 1;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_004544d0
            (param_1 + 0x150,0,0xffffffff);
  *(uint *)(0x01C775EC + 500) = 0;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00409f60(param_1);
  return 1;
}
