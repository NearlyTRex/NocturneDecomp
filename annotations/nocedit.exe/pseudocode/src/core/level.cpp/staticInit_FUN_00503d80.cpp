// Name: core_level.cpp_staticInit_FUN_00503d80
// Address: 00503d80
// Address Range: [[00503d80, 00503da7]]
// Convention: __cdecl
// Signature: void core_level.cpp_staticInit_FUN_00503d80(void)
// Globals:
//   WatcomStaticDestructorNode g_LoadingMoonModelDestructorNode
//   CLevelLoader g_CLevelLoaderInstance
//   CKeyFramedModel g_LoadingMoonModel
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
//   core_level.cpp_CLevelLoader_reset_FUN_00503db0
//   crt_stdlib.c_atexit_FUN_005ff060

#include "nocturne.h"

void __cdecl core_level_cpp_staticInit_FUN_00503d80(void)

{
  core_level_cpp_CLevelLoader_reset_FUN_00503db0(&g_CLevelLoaderInstance);
  core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00476cf0(&g_LoadingMoonModel);
  crt_stdlib_c_atexit_FUN_005ff060(&g_LoadingMoonModelDestructorNode);
  return;
}


// Assembly code:
// 00503d80: PUSH 0x2dcd850
//   Label: core_level.cpp_staticInit_FUN_00503d80
//   XREF to: 02dcd850 (DATA)
// 00503d85: CALL core_level.cpp_CLevelLoader_reset_FUN_00503db0
//   XREF to: 00503db0 (UNCONDITIONAL_CALL)
// 00503d8a: ADD ESP,0x4
// 00503d8d: PUSH 0x2dcd980
//   XREF to: 02dcd980 (DATA)
// 00503d92: CALL core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00476cf0
//   XREF to: 00476cf0 (UNCONDITIONAL_CALL)
// 00503d97: ADD ESP,0x4
// 00503d9a: PUSH 0x67cf70
//   XREF to: 0067cf70 (DATA)
// 00503d9f: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 00503da4: ADD ESP,0x4
// 00503da7: RET
