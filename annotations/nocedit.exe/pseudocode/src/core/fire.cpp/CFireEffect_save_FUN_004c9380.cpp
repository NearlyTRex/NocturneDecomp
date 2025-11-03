// Name: core_fire.cpp_CFireEffect_save_FUN_004c9380
// Address: 004c9380
// Address Range: [[004c9380, 004c93c2]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_save_FUN_004c9380(CFireEffect * this_ptr, FILE * file_handle)
// Cross-references:
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e0e78 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Fire_state_0062a0c7
//   TerminatedCString s_s_1_0062a0d3
//   CCrater[20] g_CraterPool
//   undefined4 DAT_02d6c714
//   CCrater* g_CraterActiveListHead
// Function calls:
//   core_fire.cpp_CCrater_save_FUN_004c49c0
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_save_FUN_004c9380(CFireEffect *this_ptr,FILE *file_handle)

{
  CCrater *this_ptr_00;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"Fire state\n");
  this_ptr_00 = g_CraterPool;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"1\n");
  do {
    core_fire_cpp_CCrater_save_FUN_004c49c0(this_ptr_00,file_handle);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CCrater *)&g_CraterActiveListHead);
  return;
}


// Assembly code:
// 004c9380: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_save_FUN_004c9380
// 004c9381: PUSH ESI
// 004c9382: PUSH EDI
// 004c9383: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004c9387: PUSH 0x62a0c7
//   XREF to: 0062a0c7 (DATA)
// 004c938c: PUSH ESI
// 004c938d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004c9392: ADD ESP,0x8
// 004c9395: PUSH 0x62a0d3
//   XREF to: 0062a0d3 (DATA)
// 004c939a: MOV EBX,0x2d6c6a4
//   XREF to: 02d6c6a4 (PARAM)
// 004c939f: PUSH ESI
// 004c93a0: LEA EDI,[EBX + 0x8c0]
//   XREF to: 02d6cf64 (DATA)
// 004c93a6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004c93ab: ADD ESP,0x8
// 004c93ae: PUSH ESI
//   Label: LAB_004c93ae
// 004c93af: PUSH EBX
//   XREF to: 02d6c6a4 (DATA)
//   XREF to: 02d6c714 (DATA)
// 004c93b0: CALL core_fire.cpp_CCrater_save_FUN_004c49c0
//   XREF to: 004c49c0 (UNCONDITIONAL_CALL)
// 004c93b5: ADD EBX,0x70
//   XREF to: 02d6c714 (PARAM)
// 004c93b8: ADD ESP,0x8
// 004c93bb: CMP EBX,EDI
// 004c93bd: JNZ 0x004c93ae
//   XREF to: 004c93ae (CONDITIONAL_JUMP)
// 004c93bf: POP EDI
// 004c93c0: POP ESI
// 004c93c1: POP EBX
// 004c93c2: RET
