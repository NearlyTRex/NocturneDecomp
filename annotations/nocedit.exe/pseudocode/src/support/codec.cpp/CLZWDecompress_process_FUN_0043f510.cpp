// Name: support_codec.cpp_CLZWDecompress_process_FUN_0043f510
// Address: 0043f510
// Address Range: [[0043f510, 0043f585]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CLZWDecompress_process_FUN_0043f510(CLZWDecompress * this_ptr, FILE * input_file, int byte_count, FILE * output_file)
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1618 [UNCONDITIONAL_CALL]
// Function calls:
//   support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90
//   support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030
//   support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200

#include "nocturne.h"

int __cdecl
support_codec_cpp_CLZWDecompress_process_FUN_0043f510
          (CLZWDecompress *this_ptr,FILE *input_file,int byte_count,FILE *output_file)

{
  int iVar1;
  
  if (this_ptr->current_code < 0) goto LAB_0043f55c;
  do {
    iVar1 = support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200
                      (&this_ptr->lzw_dict,this_ptr->current_code,output_file);
    if (-1 < this_ptr->previous_code) {
      iVar1 = support_codec_cpp_CLZWDictionary_addNode_FUN_0043ef90
                        (&this_ptr->lzw_dict,iVar1,this_ptr->previous_code);
      if (iVar1 != 0) {
        this_ptr->current_code = -1;
      }
    }
    iVar1 = this_ptr->current_code;
    this_ptr->current_code = -1;
    this_ptr->previous_code = iVar1;
LAB_0043f55c:
    iVar1 = support_codec_cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030
                      (&this_ptr->lzw_dict,&(this_ptr->lzw_dict).bit_state,input_file,
                       (int *)byte_count);
    this_ptr->current_code = iVar1;
  } while (-1 < iVar1);
  return 1;
}


// Assembly code:
// 0043f510: PUSH EBX
//   Label: support_codec.cpp_CLZWDecompress_process_FUN_0043f510
// 0043f511: PUSH ESI
// 0043f512: PUSH EBP
// 0043f513: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0043f517: CMP dword ptr [EBX + 0x2c],0x0
// 0043f51b: JL 0x0043f55c
//   XREF to: 0043f55c (CONDITIONAL_JUMP)
// 0043f51d: MOV EBP,dword ptr [ESP + 0x1c]
//   Label: LAB_0043f51d
//   XREF to: Stack[0x10] (READ)
// 0043f521: PUSH EBP
// 0043f522: MOV EAX,dword ptr [EBX + 0x2c]
// 0043f525: PUSH EAX
// 0043f526: LEA ESI,[EBX + 0x4]
// 0043f529: PUSH ESI
// 0043f52a: CALL support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200
//   XREF to: 0043f200 (UNCONDITIONAL_CALL)
// 0043f52f: MOV EDX,dword ptr [EBX + 0x28]
// 0043f532: ADD ESP,0xc
// 0043f535: TEST EDX,EDX
// 0043f537: JL 0x0043f54f
//   XREF to: 0043f54f (CONDITIONAL_JUMP)
// 0043f539: PUSH EDX
// 0043f53a: PUSH EAX
// 0043f53b: PUSH ESI
// 0043f53c: CALL support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90
//   XREF to: 0043ef90 (UNCONDITIONAL_CALL)
// 0043f541: ADD ESP,0xc
// 0043f544: TEST EAX,EAX
// 0043f546: JZ 0x0043f54f
//   XREF to: 0043f54f (CONDITIONAL_JUMP)
// 0043f548: MOV dword ptr [EBX + 0x2c],0xffffffff
// 0043f54f: MOV EAX,dword ptr [EBX + 0x2c]
//   Label: LAB_0043f54f
// 0043f552: MOV dword ptr [EBX + 0x2c],0xffffffff
// 0043f559: MOV dword ptr [EBX + 0x28],EAX
// 0043f55c: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_0043f55c
//   XREF to: Stack[0xc] (READ)
// 0043f560: PUSH ECX
// 0043f561: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0043f565: PUSH ESI
// 0043f566: LEA EAX,[EBX + 0x18]
// 0043f569: PUSH EAX
// 0043f56a: LEA EAX,[EBX + 0x4]
// 0043f56d: PUSH EAX
// 0043f56e: CALL support_codec.cpp_CLZWDictionary_readCodeFromStream_FUN_0043f030
//   XREF to: 0043f030 (UNCONDITIONAL_CALL)
// 0043f573: ADD ESP,0x10
// 0043f576: MOV dword ptr [EBX + 0x2c],EAX
// 0043f579: TEST EAX,EAX
// 0043f57b: JGE 0x0043f51d
//   XREF to: 0043f51d (CONDITIONAL_JUMP)
// 0043f57d: MOV EAX,0x1
// 0043f582: POP EBP
// 0043f583: POP ESI
// 0043f584: POP EBX
// 0043f585: RET
