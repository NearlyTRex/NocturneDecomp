// Name: support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200
// Address: 0043f200
// Address Range: [[0043f200, 0043f260]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200(CLZWDictionary * this_ptr, int code, FILE * output_file)
// Cross-references:
//   support_codec.cpp_CLZWDecompress_finalize_FUN_0043f590 (0043f590) at 0043f5ad [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWDecompress_process_FUN_0043f510 (0043f510) at 0043f52a [UNCONDITIONAL_CALL]
// Function calls:
//   crt_stdio.c_fputc_FUN_005ff2d7

#include "nocturne.h"

int __cdecl
support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200
          (CLZWDictionary *this_ptr,int code,FILE *output_file)

{
  int iVar1;
  
  iVar1 = this_ptr->node_table[code].prefix_code;
  if (-1 < iVar1) {
    iVar1 = support_codec_cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200
                      (this_ptr,iVar1,output_file);
    crt_stdio_c_fputc_FUN_005ff2d7(output_file,(uint)(byte)this_ptr->node_table[code].code);
    return iVar1;
  }
  crt_stdio_c_fputc_FUN_005ff2d7(output_file,(uint)(byte)this_ptr->node_table[code].code);
  return this_ptr->node_table[code].code;
}


// Assembly code:
// 0043f200: PUSH EBX
//   Label: support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200
// 0043f201: PUSH EDI
// 0043f202: PUSH EBP
// 0043f203: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0043f207: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0043f20b: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0043f20f: MOV EAX,dword ptr [EDI + 0x10]
// 0043f212: SHL EBX,0x4
// 0043f215: ADD EAX,EBX
// 0043f217: MOV EDX,dword ptr [EAX + 0x4]
// 0043f21a: TEST EDX,EDX
// 0043f21c: JL 0x0043f246
//   XREF to: 0043f246 (CONDITIONAL_JUMP)
// 0043f21e: PUSH ESI
// 0043f21f: PUSH EBP
// 0043f220: PUSH EDX
// 0043f221: PUSH EDI
// 0043f222: CALL support_codec.cpp_CLZWDictionary_writeCodeSequence_FUN_0043f200
//   XREF to: 0043f200 (UNCONDITIONAL_CALL)
// 0043f227: MOV ESI,EAX
// 0043f229: MOV EAX,dword ptr [EDI + 0x10]
// 0043f22c: ADD EBX,EAX
// 0043f22e: XOR EAX,EAX
// 0043f230: ADD ESP,0xc
// 0043f233: MOV AL,byte ptr [EBX]
// 0043f235: PUSH EAX
// 0043f236: PUSH EBP
// 0043f237: CALL crt_stdio.c_fputc_FUN_005ff2d7
//   XREF to: 005ff2d7 (UNCONDITIONAL_CALL)
// 0043f23c: ADD ESP,0x8
// 0043f23f: MOV EAX,ESI
// 0043f241: POP ESI
// 0043f242: POP EBP
// 0043f243: POP EDI
// 0043f244: POP EBX
// 0043f245: RET
// 0043f246: MOV AL,byte ptr [EAX]
//   Label: LAB_0043f246
// 0043f248: AND EAX,0xff
// 0043f24d: PUSH EAX
// 0043f24e: PUSH EBP
// 0043f24f: CALL crt_stdio.c_fputc_FUN_005ff2d7
//   XREF to: 005ff2d7 (UNCONDITIONAL_CALL)
// 0043f254: MOV EAX,dword ptr [EDI + 0x10]
// 0043f257: ADD ESP,0x8
// 0043f25a: MOV EAX,dword ptr [EBX + EAX*0x1]
// 0043f25d: POP EBP
// 0043f25e: POP EDI
// 0043f25f: POP EBX
// 0043f260: RET
