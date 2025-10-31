// Name: support_codec.cpp_CLZWDecompress_finalize_FUN_0043f590
// Address: 0043f590
// Address Range: [[0043f590, 0043f5c2]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CLZWDecompress_finalize_FUN_0043f590(CLZWDecompress * this_ptr, FILE * output_file)
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1630 [UNCONDITIONAL_CALL]
// Function calls:
//   support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200

#include "nocturne.h"

int __cdecl
support_codec_cpp_CLZWDecompress_finalize_FUN_0043f590(CLZWDecompress *this_ptr,FILE *output_file)

{
  if (this_ptr->current_code < 0) {
    return 1;
  }
  support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200
            (&this_ptr->lzw_dict,this_ptr->current_code,output_file);
  this_ptr->current_code = -1;
  return 1;
}


// Assembly code:
// 0043f590: PUSH EBX
//   Label: support_codec.cpp_CLZWDecompress_finalize_FUN_0043f590
// 0043f591: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0043f595: MOV EDX,dword ptr [EBX + 0x2c]
// 0043f598: TEST EDX,EDX
// 0043f59a: JGE 0x0043f5a3
//   XREF to: 0043f5a3 (CONDITIONAL_JUMP)
// 0043f59c: MOV EAX,0x1
// 0043f5a1: POP EBX
// 0043f5a2: RET
// 0043f5a3: MOV ECX,dword ptr [ESP + 0xc]
//   Label: LAB_0043f5a3
//   XREF to: Stack[0x8] (READ)
// 0043f5a7: PUSH ECX
// 0043f5a8: PUSH EDX
// 0043f5a9: LEA EAX,[EBX + 0x4]
// 0043f5ac: PUSH EAX
// 0043f5ad: CALL support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200
//   XREF to: 0043f200 (UNCONDITIONAL_CALL)
// 0043f5b2: ADD ESP,0xc
// 0043f5b5: MOV dword ptr [EBX + 0x2c],0xffffffff
// 0043f5bc: MOV EAX,0x1
// 0043f5c1: POP EBX
// 0043f5c2: RET
