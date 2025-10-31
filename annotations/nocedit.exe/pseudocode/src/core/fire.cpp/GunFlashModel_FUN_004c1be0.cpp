// Name: core_fire.cpp_GunFlashModel_FUN_004c1be0
// Address: 004c1be0
// Address Range: [[004c1be0, 004c1bff]]
// Convention: unknown
// Signature: undefined core_fire.cpp_GunFlashModel_FUN_004c1be0()
// Cross-references:
//   core_fire.cpp_CFireEffect_FUN_004c7ab0 (004c7ab0) at 004c7b06 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_gunflash_kfm_00629cd3
//   CKeyFramedModelInstance DAT_02d133e4
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0

#include "nocturne.h"

void core_fire_cpp_GunFlashModel_FUN_004c1be0(void)

{
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (&DAT_02d133e4,"gunflash.kfm");
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&DAT_02d133e4);
  return;
}


// Assembly code:
// 004c1be0: PUSH 0x629cd3
//   Label: core_fire.cpp_GunFlashModel_FUN_004c1be0
//   XREF to: 00629cd3 (DATA)
// 004c1be5: PUSH 0x2d133e4
//   XREF to: 02d133e4 (DATA)
// 004c1bea: CALL core_dmodel.cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
//   XREF to: 00478dd0 (UNCONDITIONAL_CALL)
// 004c1bef: ADD ESP,0x8
// 004c1bf2: PUSH 0x2d133e4
//   XREF to: 02d133e4 (DATA)
// 004c1bf7: CALL core_dmodel.cpp_CKeyFramedModelInstance_preCache_FUN_00478d60
//   XREF to: 00478d60 (UNCONDITIONAL_CALL)
// 004c1bfc: ADD ESP,0x4
// 004c1bff: RET
