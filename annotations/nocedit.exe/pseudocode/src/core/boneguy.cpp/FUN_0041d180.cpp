// Name: core_boneguy.cpp_FUN_0041d180
// Address: 0041d180
// Address Range: [[0041d180, 0041d1a1]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041d180()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_charactr.cpp_CCharacter_FUN_0042a2c0
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_boneguy.cpp_FUN_0041d180(undefined4 param_1) */

void core_boneguy_cpp_FUN_0041d180(void)

{
  int iVar1;
  CCharacter *in_stack_00000008;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar1 == 0) {
    return;
  }
  core_charactr_cpp_CCharacter_FUN_0042a2c0(in_stack_00000008);
  return;
}


// Assembly code:
// 0041d180: MOV EDX,dword ptr [0x006703ec]
//   Label: core_boneguy.cpp_FUN_0041d180
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0041d186: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0041d187: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0041d18c: ADD ESP,0x4
// 0041d18f: TEST EAX,EAX
// 0041d191: JNZ 0x0041d194
//   XREF to: 0041d194 (CONDITIONAL_JUMP)
// 0041d193: RET
// 0041d194: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_0041d194
//   XREF to: Stack[0x4] (READ)
// 0041d198: PUSH ECX
// 0041d199: CALL core_charactr.cpp_CCharacter_FUN_0042a2c0
//   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)
// 0041d19e: ADD ESP,0x4
// 0041d1a1: RET
