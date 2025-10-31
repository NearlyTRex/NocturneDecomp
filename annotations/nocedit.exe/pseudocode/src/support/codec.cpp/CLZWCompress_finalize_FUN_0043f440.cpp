// Name: support_codec.cpp_CLZWCompress_finalize_FUN_0043f440
// Address: 0043f440
// Address Range: [[0043f440, 0043f484]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CLZWCompress_finalize_FUN_0043f440(CLZWCompress * this_ptr, FILE * output_file)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 (004529b0) at 00452f2e [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e10a4 [UNCONDITIONAL_CALL]
// Function calls:
//   support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_0043f170
//   support_codec.cpp_flushBitBuffer_FUN_0043e7e0

#include "nocturne.h"

int __cdecl
support_codec_cpp_CLZWCompress_finalize_FUN_0043f440(CLZWCompress *this_ptr,FILE *output_file)

{
  FILE *in_stack_0000000c;
  
  if (-1 < this_ptr->current_code) {
    support_codec_cpp_CLZWDictionary_writeCodeBits_FUN_0043f170
              (&this_ptr->dictionary,this_ptr->current_code,&(this_ptr->dictionary).bit_state,
               output_file);
    this_ptr->current_code = -1;
  }
  support_codec_cpp_flushBitBuffer_FUN_0043e7e0(&(this_ptr->dictionary).bit_state,in_stack_0000000c)
  ;
  return 1;
}


// Assembly code:
// 0043f440: PUSH EBX
//   Label: support_codec.cpp_CLZWCompress_finalize_FUN_0043f440
// 0043f441: PUSH EDI
// 0043f442: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0043f446: MOV EDX,dword ptr [EBX + 0x30]
// 0043f449: TEST EDX,EDX
// 0043f44b: JGE 0x0043f466
//   XREF to: 0043f466 (CONDITIONAL_JUMP)
// 0043f44d: MOV EDI,dword ptr [ESP + 0x10]
//   Label: LAB_0043f44d
//   XREF to: Stack[0x8] (READ)
// 0043f451: PUSH EDI
// 0043f452: ADD EBX,0x18
// 0043f455: PUSH EBX
// 0043f456: CALL support_codec.cpp_flushBitBuffer_FUN_0043e7e0
//   XREF to: 0043e7e0 (UNCONDITIONAL_CALL)
// 0043f45b: MOV EAX,0x1
// 0043f460: ADD ESP,0x8
// 0043f463: POP EDI
// 0043f464: POP EBX
// 0043f465: RET
// 0043f466: MOV ECX,dword ptr [ESP + 0x10]
//   Label: LAB_0043f466
//   XREF to: Stack[0x8] (READ)
// 0043f46a: PUSH ECX
// 0043f46b: LEA EAX,[EBX + 0x18]
// 0043f46e: PUSH EAX
// 0043f46f: PUSH EDX
// 0043f470: LEA EAX,[EBX + 0x4]
// 0043f473: PUSH EAX
// 0043f474: CALL support_codec.cpp_CLZWDictionary_writeCodeBits_FUN_0043f170
//   XREF to: 0043f170 (UNCONDITIONAL_CALL)
// 0043f479: ADD ESP,0x10
// 0043f47c: MOV dword ptr [EBX + 0x30],0xffffffff
// 0043f483: JMP 0x0043f44d
//   XREF to: 0043f44d (UNCONDITIONAL_JUMP)
