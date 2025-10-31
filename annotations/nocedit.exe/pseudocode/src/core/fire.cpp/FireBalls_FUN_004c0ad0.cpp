// Name: core_fire.cpp_FireBalls_FUN_004c0ad0
// Address: 004c0ad0
// Address Range: [[004c0ad0, 004c0b2d]]
// Convention: unknown
// Signature: undefined core_fire.cpp_FireBalls_FUN_004c0ad0()
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c7ab0 (004c7ab0) at 004c7af2 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_fball_kfm_00629c7b
//   TerminatedCString s_smfball_kfm_00629c85
//   TerminatedCString s_grnball_kfm_00629c91
//   CKeyFramedModelInstance DAT_02d12f70
//   CKeyFramedModelInstance DAT_02d130ec
//   CKeyFramedModelInstance DAT_02d13268
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

void core_fire_cpp_FireBalls_FUN_004c0ad0(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&DAT_02d12f70,"fball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&DAT_02d12f70);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&DAT_02d130ec,"smfball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&DAT_02d130ec);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&DAT_02d13268,"grnball.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&DAT_02d13268);
  return;
}


// Assembly code:
// 004c0ad0: PUSH 0x629c7b
//   Label: core_fire.cpp_FireBalls_FUN_004c0ad0
//   XREF to: 00629c7b (DATA)
// 004c0ad5: PUSH 0x2d12f70
//   XREF to: 02d12f70 (DATA)
// 004c0ada: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004c0adf: ADD ESP,0x8
// 004c0ae2: PUSH 0x2d12f70
//   XREF to: 02d12f70 (DATA)
// 004c0ae7: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004c0aec: ADD ESP,0x4
// 004c0aef: PUSH 0x629c85
//   XREF to: 00629c85 (DATA)
// 004c0af4: PUSH 0x2d130ec
//   XREF to: 02d130ec (DATA)
// 004c0af9: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004c0afe: ADD ESP,0x8
// 004c0b01: PUSH 0x2d130ec
//   XREF to: 02d130ec (DATA)
// 004c0b06: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004c0b0b: ADD ESP,0x4
// 004c0b0e: PUSH 0x629c91
//   XREF to: 00629c91 (DATA)
// 004c0b13: PUSH 0x2d13268
//   XREF to: 02d13268 (DATA)
// 004c0b18: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004c0b1d: ADD ESP,0x8
// 004c0b20: PUSH 0x2d13268
//   XREF to: 02d13268 (DATA)
// 004c0b25: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004c0b2a: ADD ESP,0x4
// 004c0b2d: RET
