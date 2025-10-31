// Name: core_set.cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0
// Address: 005711b0
// Address Range: [[005711b0, 0057122a]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0(CDemonSet * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e0f3a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Set_state_version_0064607b
//   TerminatedCString s_s_1_00646091
//   TerminatedCString s_Camera_count_enabled_lis_00646094
//   TerminatedCString s_d_006460b3
//   TerminatedCString s_d_006460b7
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl
core_set_cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0(CDemonSet *this_ptr)

{
  int iVar1;
  CDemonSet *pCVar2;
  FILE *in_stack_00000008;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// Set state version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"1\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"// Camera count, enabled list\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n",this_ptr->camera_count);
  pCVar2 = this_ptr;
  if (0 < this_ptr->camera_count) {
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (in_stack_00000008,"%d\n",pCVar2->cameras[0].field17_0x1a0);
      pCVar2 = (CDemonSet *)&pCVar2->cameras[0].field17_0x1a0;
    } while (iVar1 < this_ptr->camera_count);
  }
  return;
}


// Assembly code:
// 005711b0: PUSH EBX
//   Label: core_set.cpp_CDemonSet_SetStateVersionCameraCountInStrings_FUN_005711b0
// 005711b1: PUSH EDI
// 005711b2: PUSH EBP
// 005711b3: MOV EBP,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005711b7: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 005711bb: PUSH 0x64607b
//   XREF to: 0064607b (DATA)
// 005711c0: PUSH EDI
// 005711c1: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005711c6: ADD ESP,0x8
// 005711c9: PUSH 0x646091
//   XREF to: 00646091 (DATA)
// 005711ce: PUSH EDI
// 005711cf: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005711d4: ADD ESP,0x8
// 005711d7: PUSH 0x646094
//   XREF to: 00646094 (DATA)
// 005711dc: PUSH EDI
// 005711dd: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005711e2: ADD ESP,0x8
// 005711e5: MOV EDX,dword ptr [EBP]
// 005711e8: PUSH EDX
// 005711e9: PUSH 0x6460b3
//   XREF to: 006460b3 (DATA)
// 005711ee: PUSH EDI
// 005711ef: XOR EBX,EBX
// 005711f1: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005711f6: MOV ECX,dword ptr [EBP]
// 005711f9: ADD ESP,0xc
// 005711fc: TEST ECX,ECX
// 005711fe: JLE 0x00571227
//   XREF to: 00571227 (CONDITIONAL_JUMP)
// 00571200: PUSH ESI
// 00571201: MOV ESI,EBP
// 00571203: MOV EAX,dword ptr [ESI + 0x1a4]
//   Label: LAB_00571203
// 00571209: PUSH EAX
// 0057120a: PUSH 0x6460b7
//   XREF to: 006460b7 (DATA)
// 0057120f: PUSH EDI
// 00571210: ADD ESI,0x1a4
// 00571216: INC EBX
// 00571217: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0057121c: MOV EDX,dword ptr [EBP]
// 0057121f: ADD ESP,0xc
// 00571222: CMP EBX,EDX
// 00571224: JL 0x00571203
//   XREF to: 00571203 (CONDITIONAL_JUMP)
// 00571226: POP ESI
// 00571227: POP EBP
//   Label: LAB_00571227
// 00571228: POP EDI
// 00571229: POP EBX
// 0057122a: RET
