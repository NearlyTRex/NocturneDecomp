// Name: support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0
// Address: 0043f5d0
// Address Range: [[0043f5d0, 0043f68f]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0(CLZWDecompress * this_ptr, byte * input, int * input_length, byte * output, int * output_length, int enable_callback)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 (0044f3e0) at 0044f6e9 [UNCONDITIONAL_CALL]
// Function calls:
//   support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90
//   support_codec.cpp_CLZWDictionary_decodeCodeToBuffer_FUN_0043f270
//   support_codec.cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0

#include "nocturne.h"

int __cdecl
support_codec_cpp_CLZWDecompress_processBuffer_FUN_0043f5d0
          (CLZWDecompress *this_ptr,byte *input,int *input_length,byte *output,int *output_length,
          int enable_callback)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  byte *local_14;
  
  local_14 = output;
  if (this_ptr->current_code < 0) goto LAB_0043f633;
  do {
    iVar1 = support_codec_cpp_CLZWDictionary_decodeCodeToBuffer_FUN_0043f270
                      (&this_ptr->lzw_dict,this_ptr->current_code,(char **)&local_14);
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
LAB_0043f633:
    iVar1 = support_codec_cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0
                      (&this_ptr->lzw_dict,&(this_ptr->lzw_dict).bit_state,&stack0xffffffe8,
                       input_length,(int)input);
    this_ptr->current_code = iVar1;
  } while (-1 < iVar1);
  *output_length = *output_length - ((int)local_14 - (int)output);
  if (enable_callback != 0) {
    iVar1 = (*(code *)((this_ptr->base_codec).vtable)->finalizeBuffer)();
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


// Assembly code:
// 0043f5d0: PUSH EBX
//   Label: support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0
// 0043f5d1: PUSH ESI
// 0043f5d2: PUSH EDI
// 0043f5d3: PUSH EBP
// 0043f5d4: SUB ESP,0x8
// 0043f5d7: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0043f5db: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 0043f5df: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 0043f5e3: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0043f5e7: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 0043f5eb: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 0043f5ee: CMP dword ptr [EBX + 0x2c],0x0
// 0043f5f2: JL 0x0043f633
//   XREF to: 0043f633 (CONDITIONAL_JUMP)
// 0043f5f4: LEA EAX,[ESP + 0x4]
//   Label: LAB_0043f5f4
//   XREF to: Stack[-0x14] (DATA)
// 0043f5f8: PUSH EAX
// 0043f5f9: MOV EAX,dword ptr [EBX + 0x2c]
// 0043f5fc: PUSH EAX
// 0043f5fd: LEA ESI,[EBX + 0x4]
// 0043f600: PUSH ESI
// 0043f601: CALL support_codec.cpp_CLZWDictionary_decodeCodeToBuffer_FUN_0043f270
//   XREF to: 0043f270 (UNCONDITIONAL_CALL)
// 0043f606: MOV EDX,dword ptr [EBX + 0x28]
// 0043f609: ADD ESP,0xc
// 0043f60c: TEST EDX,EDX
// 0043f60e: JL 0x0043f626
//   XREF to: 0043f626 (CONDITIONAL_JUMP)
// 0043f610: PUSH EDX
// 0043f611: PUSH EAX
// 0043f612: PUSH ESI
// 0043f613: CALL support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90
//   XREF to: 0043ef90 (UNCONDITIONAL_CALL)
// 0043f618: ADD ESP,0xc
// 0043f61b: TEST EAX,EAX
// 0043f61d: JZ 0x0043f626
//   XREF to: 0043f626 (CONDITIONAL_JUMP)
// 0043f61f: MOV dword ptr [EBX + 0x2c],0xffffffff
// 0043f626: MOV EAX,dword ptr [EBX + 0x2c]
//   Label: LAB_0043f626
// 0043f629: MOV dword ptr [EBX + 0x2c],0xffffffff
// 0043f630: MOV dword ptr [EBX + 0x28],EAX
// 0043f633: MOV ECX,dword ptr [ESP + 0x24]
//   Label: LAB_0043f633
//   XREF to: Stack[0xc] (READ)
// 0043f637: PUSH ECX
// 0043f638: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0043f63c: PUSH EAX
// 0043f63d: LEA EAX,[EBX + 0x18]
// 0043f640: PUSH EAX
// 0043f641: LEA EAX,[EBX + 0x4]
// 0043f644: PUSH EAX
// 0043f645: CALL support_codec.cpp_CLZWDictionary_writeCodeToStream_FUN_0043f0d0
//   XREF to: 0043f0d0 (UNCONDITIONAL_CALL)
// 0043f64a: ADD ESP,0x10
// 0043f64d: MOV dword ptr [EBX + 0x2c],EAX
// 0043f650: TEST EAX,EAX
// 0043f652: JGE 0x0043f5f4
//   XREF to: 0043f5f4 (CONDITIONAL_JUMP)
// 0043f654: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0043f658: MOV ESI,dword ptr [EDI]
// 0043f65a: SUB EAX,EBP
// 0043f65c: SUB ESI,EAX
// 0043f65e: MOV EBP,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x18] (READ)
// 0043f662: MOV dword ptr [EDI],ESI
// 0043f664: TEST EBP,EBP
// 0043f666: JNZ 0x0043f675
//   XREF to: 0043f675 (CONDITIONAL_JUMP)
// 0043f668: MOV EAX,0x1
//   Label: LAB_0043f668
// 0043f66d: ADD ESP,0x8
// 0043f670: POP EBP
// 0043f671: POP EDI
// 0043f672: POP ESI
// 0043f673: POP EBX
// 0043f674: RET
// 0043f675: PUSH EDI
//   Label: LAB_0043f675
// 0043f676: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x14] (READ)
// 0043f67a: PUSH EDX
// 0043f67b: MOV EAX,dword ptr [EBX]
// 0043f67d: PUSH EBX
// 0043f67e: CALL dword ptr [EAX + 0x20]
// 0043f681: ADD ESP,0xc
// 0043f684: TEST EAX,EAX
// 0043f686: JNZ 0x0043f668
//   XREF to: 0043f668 (CONDITIONAL_JUMP)
// 0043f688: ADD ESP,0x8
// 0043f68b: POP EBP
// 0043f68c: POP EDI
// 0043f68d: POP ESI
// 0043f68e: POP EBX
// 0043f68f: RET
