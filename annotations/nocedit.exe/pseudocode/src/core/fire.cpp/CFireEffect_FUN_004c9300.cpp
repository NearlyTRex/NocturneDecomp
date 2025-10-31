// Name: core_fire.cpp_CFireEffect_FUN_004c9300
// Address: 004c9300
// Address Range: [[004c9300, 004c9377]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c9300(CFireEffect * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1c0b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_0062a0c3
//   CCrater[20] g_CFireEffectCraters
//   undefined4 DAT_02d6c714
//   undefined4 DAT_02d6cf64
// Function calls:
//   core_fire.cpp_CCrater_FUN_004c4880
//   core_fire.cpp_CFireEffect_FUN_004c6c80
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c9300(CFireEffect *this_ptr)

{
  CCrater *this_ptr_00;
  BADSPACEBASE *in_ESP;
  FILE *in_stack_00000008;
  
  core_fire_cpp_CFireEffect_FUN_004c6c80(this_ptr);
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffef4,0xff,in_stack_00000008);
  this_ptr_00 = g_CFireEffectCraters;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
  do {
    core_fire_cpp_CCrater_FUN_004c4880(this_ptr_00);
    this_ptr_00 = this_ptr_00 + 1;
  } while (this_ptr_00 != (CCrater *)&DAT_02d6cf64);
  return;
}


// Assembly code:
// 004c9300: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c9300
// 004c9301: PUSH ESI
// 004c9302: PUSH EDI
// 004c9303: SUB ESP,0x104
// 004c9309: MOV EDI,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x8] (READ)
// 004c9310: MOV ECX,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x4] (READ)
// 004c9317: XOR EDX,EDX
// 004c9319: PUSH ECX
// 004c931a: MOV dword ptr [ESP + 0x104],EDX
//   XREF to: Stack[-0x10] (WRITE)
// 004c9321: CALL core_fire.cpp_CFireEffect_FUN_004c6c80
//   XREF to: 004c6c80 (UNCONDITIONAL_CALL)
// 004c9326: ADD ESP,0x4
// 004c9329: PUSH EDI
// 004c932a: PUSH 0xff
// 004c932f: LEA EBX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 004c9333: PUSH EBX
// 004c9334: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004c9339: ADD ESP,0xc
// 004c933c: LEA EBX,[ESP + 0x100]
//   XREF to: Stack[-0x10] (DATA)
// 004c9343: PUSH EBX
// 004c9344: PUSH 0x62a0c3
//   XREF to: 0062a0c3 (DATA)
// 004c9349: PUSH EDI
// 004c934a: MOV EBX,0x2d6c6a4
//   XREF to: 02d6c6a4 (PARAM)
// 004c934f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004c9354: LEA ESI,[EBX + 0x8c0]
//   XREF to: 02d6cf64 (DATA)
// 004c935a: ADD ESP,0xc
// 004c935d: PUSH EDI
//   Label: LAB_004c935d
// 004c935e: PUSH EBX
//   XREF to: 02d6c6a4 (DATA)
//   XREF to: 02d6c714 (DATA)
// 004c935f: CALL core_fire.cpp_CCrater_FUN_004c4880
//   XREF to: 004c4880 (UNCONDITIONAL_CALL)
// 004c9364: ADD EBX,0x70
//   XREF to: 02d6c714 (PARAM)
// 004c9367: ADD ESP,0x8
// 004c936a: CMP EBX,ESI
// 004c936c: JNZ 0x004c935d
//   XREF to: 004c935d (CONDITIONAL_JUMP)
// 004c936e: ADD ESP,0x104
// 004c9374: POP EDI
// 004c9375: POP ESI
// 004c9376: POP EBX
// 004c9377: RET
