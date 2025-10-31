// Name: core_game.cpp_staticInit_FUN_004d76d0
// Address: 004d76d0
// Address Range: [[004d76d0, 004d7728]]
// Convention: __cdecl
// Signature: void core_game.cpp_staticInit_FUN_004d76d0(void)
// Globals:
//   WatcomStaticDestructorNode g_GameDestructorNode1
//   WatcomStaticDestructorNode g_GameDestructorNode2
//   WatcomStaticDestructorNode g_GameDestructorNode3
//   CDemonLight g_CDemonLightInstance
//   CGame g_CGameInstance
//   CPickList g_CPickList
// Function calls:
//   core_dlight.cpp_CDemonLight_ctor_FUN_004726a0
//   core_game.cpp_CGame_ctor_FUN_004d7b40
//   crt_stdlib.c_atexit_FUN_005ff060
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90

#include "nocturne.h"

void __cdecl core_game_cpp_staticInit_FUN_004d76d0(void)

{
  core_dlight_cpp_CDemonLight_ctor_FUN_004726a0(&g_CDemonLightInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_GameDestructorNode1);
  core_game_cpp_CGame_ctor_FUN_004d7b40(&g_CGameInstance);
  crt_stdlib_c_atexit_FUN_005ff060(&g_GameDestructorNode2);
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&g_CPickList);
  crt_stdlib_c_atexit_FUN_005ff060(&g_GameDestructorNode3);
  return;
}


// Assembly code:
// 004d76d0: PUSH 0x100
//   Label: core_game.cpp_staticInit_FUN_004d76d0
// 004d76d5: PUSH 0x100
// 004d76da: PUSH 0x2d7eaf0
//   XREF to: 02d7eaf0 (DATA)
// 004d76df: CALL core_dlight.cpp_CDemonLight_ctor_FUN_004726a0
//   XREF to: 004726a0 (UNCONDITIONAL_CALL)
// 004d76e4: ADD ESP,0xc
// 004d76e7: PUSH 0x67b5c0
//   XREF to: 0067b5c0 (DATA)
// 004d76ec: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004d76f1: ADD ESP,0x4
// 004d76f4: PUSH 0x2d81a9c
//   XREF to: 02d81a9c (DATA)
// 004d76f9: CALL core_game.cpp_CGame_ctor_FUN_004d7b40
//   XREF to: 004d7b40 (UNCONDITIONAL_CALL)
// 004d76fe: ADD ESP,0x4
// 004d7701: PUSH 0x67b5d0
//   XREF to: 0067b5d0 (DATA)
// 004d7706: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004d770b: ADD ESP,0x4
// 004d770e: PUSH 0x2d828d4
//   XREF to: 02d828d4 (DATA)
// 004d7713: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004d7718: ADD ESP,0x4
// 004d771b: PUSH 0x67b5e0
//   XREF to: 0067b5e0 (DATA)
// 004d7720: CALL crt_stdlib.c_atexit_FUN_005ff060
//   XREF to: 005ff060 (UNCONDITIONAL_CALL)
// 004d7725: ADD ESP,0x4
// 004d7728: RET
