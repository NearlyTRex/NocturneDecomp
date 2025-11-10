// Name: sound_mp3.cpp_CFileBitStream_fillBuffer_FUN_0052ec40
// Address: 0052ec40
// Address Range: [[0052ec40, 0052ec9f]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_CFileBitStream_fillBuffer_FUN_0052ec40(CFileBitStream * this_ptr)
// Function calls:
//   crt_stdio.c_fread_FUN_005fd990

#include "nocturne.h"

void __cdecl sound_mp3_cpp_CFileBitStream_fillBuffer_FUN_0052ec40(CFileBitStream *this_ptr)

{
  SIZE_T SVar1;
  char *buffer;
  int iVar2;
  
  iVar2 = (this_ptr->buffer_size + -2) - this_ptr->current_byte_index;
  do {
    if (iVar2 < 0) {
      return;
    }
    while( true ) {
      if (this_ptr->end_of_stream_flag != 0) {
        return;
      }
      SVar1 = 0;
      if (0 < this_ptr->bytes_remaining) {
        buffer = this_ptr->buffer + iVar2;
        iVar2 = iVar2 + -1;
        SVar1 = crt_stdio_c_fread_FUN_005fd990(buffer,1,1,this_ptr->file_handle);
      }
      if (SVar1 == 1) break;
      this_ptr->end_of_stream_flag = iVar2 + 1;
      if (iVar2 < 0) {
        return;
      }
    }
    this_ptr->bytes_remaining = this_ptr->bytes_remaining + -1;
  } while( true );
}


// Assembly code:
// 0052ec40: PUSH EBX
//   Label: sound_mp3.cpp_CFileBitStream_fillBuffer_FUN_0052ec40
// 0052ec41: PUSH ESI
// 0052ec42: PUSH EDI
// 0052ec43: PUSH EBP
// 0052ec44: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052ec48: MOV ESI,dword ptr [EBX + 0x8]
// 0052ec4b: MOV EDX,dword ptr [EBX + 0x10]
// 0052ec4e: SUB ESI,0x2
// 0052ec51: SUB ESI,EDX
// 0052ec53: TEST ESI,ESI
// 0052ec55: JL 0x0052ec72
//   XREF to: 0052ec72 (CONDITIONAL_JUMP)
// 0052ec57: CMP dword ptr [EBX + 0x18],0x0
//   Label: LAB_0052ec57
// 0052ec5b: JNZ 0x0052ec72
//   XREF to: 0052ec72 (CONDITIONAL_JUMP)
// 0052ec5d: MOV EDI,dword ptr [EBX + 0x28]
// 0052ec60: XOR EAX,EAX
// 0052ec62: TEST EDI,EDI
// 0052ec64: JG 0x0052ec77
//   XREF to: 0052ec77 (CONDITIONAL_JUMP)
// 0052ec66: CMP EAX,0x1
//   Label: LAB_0052ec66
// 0052ec69: JNZ 0x0052ec91
//   XREF to: 0052ec91 (CONDITIONAL_JUMP)
// 0052ec6b: DEC dword ptr [EBX + 0x28]
// 0052ec6e: TEST ESI,ESI
// 0052ec70: JGE 0x0052ec57
//   XREF to: 0052ec57 (CONDITIONAL_JUMP)
// 0052ec72: POP EBP
//   Label: LAB_0052ec72
// 0052ec73: POP EDI
// 0052ec74: POP ESI
// 0052ec75: POP EBX
// 0052ec76: RET
// 0052ec77: MOV EBP,dword ptr [EBX]
//   Label: LAB_0052ec77
// 0052ec79: PUSH EBP
// 0052ec7a: PUSH 0x1
// 0052ec7c: MOV EDX,ESI
// 0052ec7e: MOV EAX,dword ptr [EBX + 0x4]
// 0052ec81: PUSH 0x1
// 0052ec83: ADD EAX,EDX
// 0052ec85: PUSH EAX
// 0052ec86: DEC ESI
// 0052ec87: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 0052ec8c: ADD ESP,0x10
// 0052ec8f: JMP 0x0052ec66
//   XREF to: 0052ec66 (UNCONDITIONAL_JUMP)
// 0052ec91: LEA EAX,[ESI + 0x1]
//   Label: LAB_0052ec91
// 0052ec94: MOV dword ptr [EBX + 0x18],EAX
// 0052ec97: TEST ESI,ESI
// 0052ec99: JGE 0x0052ec57
//   XREF to: 0052ec57 (CONDITIONAL_JUMP)
// 0052ec9b: POP EBP
// 0052ec9c: POP EDI
// 0052ec9d: POP ESI
// 0052ec9e: POP EBX
// 0052ec9f: RET
