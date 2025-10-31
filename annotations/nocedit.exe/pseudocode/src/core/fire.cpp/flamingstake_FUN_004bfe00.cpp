// Name: core_fire.cpp_flamingstake_FUN_004bfe00
// Address: 004bfe00
// Address Range: [[004bfe00, 004bfe1f]]
// Convention: unknown
// Signature: undefined core_fire.cpp_flamingstake_FUN_004bfe00()
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c7ab0 (004c7ab0) at 004c7aed [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_stake_kfm_00629c53
//   CKeyFramedModelInstance DAT_02d12df4
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

void core_fire_cpp_flamingstake_FUN_004bfe00(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&DAT_02d12df4,"stake.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&DAT_02d12df4);
  return;
}


// Assembly code:
// 004bfe00: PUSH 0x629c53
//   Label: core_fire.cpp_flamingstake_FUN_004bfe00
//   XREF to: 00629c53 (DATA)
// 004bfe05: PUSH 0x2d12df4
//   XREF to: 02d12df4 (DATA)
// 004bfe0a: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004bfe0f: ADD ESP,0x8
// 004bfe12: PUSH 0x2d12df4
//   XREF to: 02d12df4 (DATA)
// 004bfe17: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004bfe1c: ADD ESP,0x4
// 004bfe1f: RET
