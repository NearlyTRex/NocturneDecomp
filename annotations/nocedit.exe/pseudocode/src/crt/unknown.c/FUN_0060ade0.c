// Name: crt_unknown.c_FUN_0060ade0
// Address: 0060ade0
// Address Range: [[0060ade0, 0060ae4d]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060ade0()
// Function calls:
//   crt_stdlib.c_i64toa_FUN_0060ad40

#include "nocturne.h"

char * crt_unknown_c_FUN_0060ade0(void)

{
  char *buffer;
  BADSPACEBASE *in_ESP;
  uint *in_stack_00000004;
  char *in_stack_00000008;
  int in_stack_0000000c;
  uint local_18;
  uint local_14;
  
  local_18 = *in_stack_00000004;
  local_14 = in_stack_00000004[1];
  buffer = in_stack_00000008;
  if ((in_stack_0000000c == 10) && ((local_14 & 0x80000000) != 0)) {
    *in_stack_00000008 = '-';
    local_14 = ~local_14;
    buffer = in_stack_00000008 + 1;
    local_18 = ~local_18 + 1;
    if (local_18 == 0) {
      local_14 = local_14 + 1;
    }
  }
  crt_stdlib_c_i64toa_FUN_0060ad40((longlong *)&local_18,buffer,in_stack_0000000c);
  return in_stack_00000008;
}


// Assembly code:
// 0060ade0: PUSH EBX
//   Label: crt_unknown.c_FUN_0060ade0
// 0060ade1: PUSH ESI
// 0060ade2: PUSH EDI
// 0060ade3: PUSH ES
// 0060ade4: SUB ESP,0x8
// 0060ade7: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0060adeb: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0060adef: MOV EDI,ESP
// 0060adf1: MOV AX,DS
// 0060adf3: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0060adf7: MOV ES,AX
// 0060adf9: MOV EDX,EBX
// 0060adfb: MOVSD ES:EDI,ESI
// 0060adfc: MOVSD ES:EDI,ESI
// 0060adfd: CMP ECX,0xa
// 0060ae00: JNZ 0x0060ae35
//   XREF to: 0060ae35 (CONDITIONAL_JUMP)
// 0060ae02: TEST byte ptr [ESP + 0x7],0x80
//   XREF to: Stack[-0x11] (READ)
// 0060ae07: JZ 0x0060ae35
//   XREF to: 0060ae35 (CONDITIONAL_JUMP)
// 0060ae09: MOV byte ptr [EBX],0x2d
// 0060ae0c: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0060ae0f: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0060ae13: NOT EDX
// 0060ae15: NOT ESI
// 0060ae17: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x18] (DATA)
// 0060ae1a: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0060ae1e: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0060ae21: LEA EDX,[EBX + 0x1]
// 0060ae24: INC EDI
// 0060ae25: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x18] (DATA)
// 0060ae28: JNZ 0x0060ae2f
//   XREF to: 0060ae2f (CONDITIONAL_JUMP)
// 0060ae2a: LEA EAX,[ESI + 0x1]
// 0060ae2d: JMP 0x0060ae31
//   XREF to: 0060ae31 (UNCONDITIONAL_JUMP)
// 0060ae2f: MOV EAX,ESI
//   Label: LAB_0060ae2f
// 0060ae31: MOV dword ptr [ESP + 0x4],EAX
//   Label: LAB_0060ae31
//   XREF to: Stack[-0x14] (WRITE)
// 0060ae35: PUSH ECX
//   Label: LAB_0060ae35
// 0060ae36: PUSH EDX
// 0060ae37: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x18] (DATA)
// 0060ae3b: PUSH EAX
// 0060ae3c: CALL crt_stdlib.c_i64toa_FUN_0060ad40
//   XREF to: 0060ad40 (UNCONDITIONAL_CALL)
// 0060ae41: ADD ESP,0xc
// 0060ae44: MOV EAX,EBX
// 0060ae46: ADD ESP,0x8
// 0060ae49: POP ES
// 0060ae4a: POP EDI
// 0060ae4b: POP ESI
// 0060ae4c: POP EBX
// 0060ae4d: RET
