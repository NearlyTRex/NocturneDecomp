// Name: core_fire.cpp_loadDynamiteAssets_FUN_004c41d0
// Address: 004c41d0
// Address Range: [[004c41d0, 004c41dd]]
// Convention: __cdecl
// Signature: undefined core_fire.cpp_loadDynamiteAssets_FUN_004c41d0()
// Cross-references:
//   core_fire.cpp_CFireEffect_loadAssets_FUN_004c7ab0 (004c7ab0) at 004c7afc [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_dynamitestick_kfm_00629e21
// Function calls:
//   core_dmodel.cpp_loadModel_FUN_00478c00

#include "nocturne.h"

void __cdecl core_fire_cpp_loadDynamiteAssets_FUN_004c41d0(void)

{
  core_dmodel_cpp_loadModel_FUN_00478c00("dynamitestick.kfm");
  return;
}


// Assembly code:
// 004c41d0: PUSH 0x629e21
//   Label: core_fire.cpp_loadDynamiteAssets_FUN_004c41d0
//   XREF to: 00629e21 (DATA)
// 004c41d5: CALL core_dmodel.cpp_loadModel_FUN_00478c00
//   XREF to: 00478c00 (UNCONDITIONAL_CALL)
// 004c41da: ADD ESP,0x4
// 004c41dd: RET
