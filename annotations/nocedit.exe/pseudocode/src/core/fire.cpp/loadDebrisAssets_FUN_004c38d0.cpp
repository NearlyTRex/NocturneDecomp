// Name: core_fire.cpp_loadDebrisAssets_FUN_004c38d0
// Address: 004c38d0
// Address Range: [[004c38d0, 004c396b]]
// Convention: __cdecl
// Signature: void core_fire.cpp_loadDebrisAssets_FUN_004c38d0(void)
// Cross-references:
//   core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0 (004c7ab0) at 004c7b10 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_debris01_kfm_00629d63
//   TerminatedCString s_debris02_kfm_00629d70
//   TerminatedCString s_debris03_kfm_00629d7d
//   TerminatedCString s_debris04_kfm_00629d8a
//   TerminatedCString s_debris05_kfm_00629d97
//   CKeyFramedModelInstance[5] g_CFireEffectDebrisModels
//   undefined4 DAT_02d136e4
//   undefined4 DAT_02d13860
//   undefined4 DAT_02d139dc
//   undefined4 DAT_02d13b58
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

void __cdecl core_fire_cpp_loadDebrisAssets_FUN_004c38d0(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (g_CFireEffectDebrisModels,"debris01.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (g_CFireEffectDebrisModels + 1,"debris02.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (g_CFireEffectDebrisModels + 2,"debris03.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (g_CFireEffectDebrisModels + 3,"debris04.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (g_CFireEffectDebrisModels + 4,"debris05.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(g_CFireEffectDebrisModels);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(g_CFireEffectDebrisModels + 1);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(g_CFireEffectDebrisModels + 2);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(g_CFireEffectDebrisModels + 3);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(g_CFireEffectDebrisModels + 4);
  return;
}


// Assembly code:
// 004c38d0: PUSH 0x629d63
//   Label: core_fire.cpp_loadDebrisAssets_FUN_004c38d0
//   XREF to: 00629d63 (DATA)
// 004c38d5: PUSH 0x2d13568
//   XREF to: 02d13568 (DATA)
// 004c38da: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004c38df: ADD ESP,0x8
// 004c38e2: PUSH 0x629d70
//   XREF to: 00629d70 (DATA)
// 004c38e7: PUSH 0x2d136e4
//   XREF to: 02d136e4 (DATA)
// 004c38ec: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004c38f1: ADD ESP,0x8
// 004c38f4: PUSH 0x629d7d
//   XREF to: 00629d7d (DATA)
// 004c38f9: PUSH 0x2d13860
//   XREF to: 02d13860 (DATA)
// 004c38fe: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004c3903: ADD ESP,0x8
// 004c3906: PUSH 0x629d8a
//   XREF to: 00629d8a (DATA)
// 004c390b: PUSH 0x2d139dc
//   XREF to: 02d139dc (DATA)
// 004c3910: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004c3915: ADD ESP,0x8
// 004c3918: PUSH 0x629d97
//   XREF to: 00629d97 (DATA)
// 004c391d: PUSH 0x2d13b58
//   XREF to: 02d13b58 (DATA)
// 004c3922: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004c3927: ADD ESP,0x8
// 004c392a: PUSH 0x2d13568
//   XREF to: 02d13568 (DATA)
// 004c392f: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004c3934: ADD ESP,0x4
// 004c3937: PUSH 0x2d136e4
//   XREF to: 02d136e4 (DATA)
// 004c393c: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004c3941: ADD ESP,0x4
// 004c3944: PUSH 0x2d13860
//   XREF to: 02d13860 (DATA)
// 004c3949: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004c394e: ADD ESP,0x4
// 004c3951: PUSH 0x2d139dc
//   XREF to: 02d139dc (DATA)
// 004c3956: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004c395b: ADD ESP,0x4
// 004c395e: PUSH 0x2d13b58
//   XREF to: 02d13b58 (DATA)
// 004c3963: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004c3968: ADD ESP,0x4
// 004c396b: RET
