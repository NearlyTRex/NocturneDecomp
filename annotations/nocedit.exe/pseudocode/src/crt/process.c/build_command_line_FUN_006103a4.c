// Name: crt_process.c_build_command_line_FUN_006103a4
// Address: 006103a4
// Address Range: [[006103a4, 006103f8]]
// Convention: __cdecl
// Signature: void crt_process.c_build_command_line_FUN_006103a4(char * program_name, char * * argv, char * buffer, int skip_program_name)
// Cross-references:
//   crt_process.c_spawn_FUN_006105a0 (006105a0) at 006105be [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_FUN_0060f39c (0060f39c) at 0060f7bc [UNCONDITIONAL_CALL]
// Function calls:
//   crt_string.c_strcpy_advance_FUN_00610240

#include "nocturne.h"

void __cdecl
crt_process_c_build_command_line_FUN_006103a4
          (char *program_name,char **argv,char *buffer,int skip_program_name)

{
  char *pcVar1;
  char **ppcVar2;
  
  if (skip_program_name == 0) {
    pcVar1 = crt_string_c_strcpy_advance_FUN_00610240(buffer,program_name);
    *pcVar1 = ' ';
    buffer = pcVar1 + 1;
  }
  if ((*argv != (char *)0x0) && (ppcVar2 = argv + 1, argv[1] != (char *)0x0)) {
    while( true ) {
      pcVar1 = *ppcVar2;
      ppcVar2 = ppcVar2 + 1;
      buffer = crt_string_c_strcpy_advance_FUN_00610240(buffer,pcVar1);
      if (*ppcVar2 == (char *)0x0) break;
      *buffer = ' ';
      buffer = buffer + 1;
    }
  }
  *buffer = '\0';
  return;
}


// Assembly code:
// 006103a4: PUSH EBX
//   Label: crt_process.c_build_command_line_FUN_006103a4
// 006103a5: PUSH EDI
// 006103a6: PUSH EBP
// 006103a7: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 006103ab: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 006103af: CMP dword ptr [ESP + 0x1c],0x0
//   XREF to: Stack[0x10] (READ)
// 006103b4: JNZ 0x006103c8
//   XREF to: 006103c8 (CONDITIONAL_JUMP)
// 006103b6: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 006103ba: PUSH ECX
// 006103bb: PUSH EAX
// 006103bc: CALL crt_string.c_strcpy_advance_FUN_00610240
//   XREF to: 00610240 (UNCONDITIONAL_CALL)
// 006103c1: ADD ESP,0x8
// 006103c4: MOV byte ptr [EAX],0x20
// 006103c7: INC EAX
// 006103c8: CMP dword ptr [EBX],0x0
//   Label: LAB_006103c8
// 006103cb: JZ 0x006103f2
//   XREF to: 006103f2 (CONDITIONAL_JUMP)
// 006103cd: MOV EDI,dword ptr [EBX + 0x4]
// 006103d0: ADD EBX,0x4
// 006103d3: TEST EDI,EDI
// 006103d5: JZ 0x006103f2
//   XREF to: 006103f2 (CONDITIONAL_JUMP)
// 006103d7: MOV EBP,dword ptr [EBX]
//   Label: LAB_006103d7
// 006103d9: PUSH EBP
// 006103da: PUSH EAX
// 006103db: ADD EBX,0x4
// 006103de: CALL crt_string.c_strcpy_advance_FUN_00610240
//   XREF to: 00610240 (UNCONDITIONAL_CALL)
// 006103e3: MOV EDX,dword ptr [EBX]
// 006103e5: ADD ESP,0x8
// 006103e8: TEST EDX,EDX
// 006103ea: JZ 0x006103f2
//   XREF to: 006103f2 (CONDITIONAL_JUMP)
// 006103ec: MOV byte ptr [EAX],0x20
// 006103ef: INC EAX
// 006103f0: JMP 0x006103d7
//   XREF to: 006103d7 (UNCONDITIONAL_JUMP)
// 006103f2: MOV byte ptr [EAX],0x0
//   Label: LAB_006103f2
// 006103f5: POP EBP
// 006103f6: POP EDI
// 006103f7: POP EBX
// 006103f8: RET
