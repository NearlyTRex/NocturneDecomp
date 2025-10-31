// Name: support_codec.cpp_CCodec_process_FUN_0043ea10
// Address: 0043ea10
// Address Range: [[0043ea10, 0043ea75]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CCodec_process_FUN_0043ea10(CCodec * this_ptr, FILE * input_file, int byte_count, FILE * output_file)
// Function calls:
//   crt_stdio.c_fgetc_FUN_005ff245
//   crt_stdio.c_fputc_FUN_005ff2d7

#include "nocturne.h"

int __cdecl
support_codec_cpp_CCodec_process_FUN_0043ea10
          (CCodec *this_ptr,FILE *input_file,int byte_count,FILE *output_file)

{
  uint uVar1;
  BADSPACEBASE *in_ESP;
  uint unaff_EBP;
  
  do {
    if (*(int *)byte_count < 1) {
LAB_0043ea2c:
      uVar1 = 0xffffffff;
    }
    else {
      crt_stdio_c_fgetc_FUN_005ff245(input_file,&stack0xffffffec);
      if (*(int *)((int)&input_file->_handle + *(int *)(input_file->_ptr + 4)) != 0)
      goto LAB_0043ea2c;
      *(int *)byte_count = *(int *)byte_count + -1;
      uVar1 = unaff_EBP & 0xff;
    }
    if ((int)uVar1 < 0) {
      return 1;
    }
    crt_stdio_c_fputc_FUN_005ff2d7(output_file,uVar1 & 0xff);
  } while( true );
}


// Assembly code:
// 0043ea10: PUSH EBX
//   Label: support_codec.cpp_CCodec_process_FUN_0043ea10
// 0043ea11: PUSH ESI
// 0043ea12: PUSH EDI
// 0043ea13: PUSH EBP
// 0043ea14: SUB ESP,0x4
// 0043ea17: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0043ea1b: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 0043ea1f: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 0043ea23: MOV EDX,dword ptr [EDI]
//   Label: LAB_0043ea23
// 0043ea25: MOV EBX,EDI
// 0043ea27: CMP EDX,0x1
// 0043ea2a: JGE 0x0043ea44
//   XREF to: 0043ea44 (CONDITIONAL_JUMP)
// 0043ea2c: MOV EAX,0xffffffff
//   Label: LAB_0043ea2c
// 0043ea31: MOV EBX,EAX
//   Label: LAB_0043ea31
// 0043ea33: TEST EAX,EAX
// 0043ea35: JGE 0x0043ea66
//   XREF to: 0043ea66 (CONDITIONAL_JUMP)
// 0043ea37: MOV EAX,0x1
// 0043ea3c: ADD ESP,0x4
// 0043ea3f: POP EBP
// 0043ea40: POP EDI
// 0043ea41: POP ESI
// 0043ea42: POP EBX
// 0043ea43: RET
// 0043ea44: MOV EAX,ESP
//   Label: LAB_0043ea44
// 0043ea46: PUSH EAX
// 0043ea47: PUSH ESI
// 0043ea48: CALL crt_stdio.c_fgetc_FUN_005ff245
//   XREF to: 005ff245 (UNCONDITIONAL_CALL)
// 0043ea4d: MOV EAX,dword ptr [ESI]
// 0043ea4f: MOV EAX,dword ptr [EAX + 0x4]
// 0043ea52: MOV ECX,dword ptr [ESI + EAX*0x1 + 0x10]
// 0043ea56: ADD ESP,0x8
// 0043ea59: TEST ECX,ECX
// 0043ea5b: JNZ 0x0043ea2c
//   XREF to: 0043ea2c (CONDITIONAL_JUMP)
// 0043ea5d: DEC dword ptr [EDI]
// 0043ea5f: XOR EAX,EAX
// 0043ea61: MOV AL,byte ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0043ea64: JMP 0x0043ea31
//   XREF to: 0043ea31 (UNCONDITIONAL_JUMP)
// 0043ea66: XOR EAX,EAX
//   Label: LAB_0043ea66
// 0043ea68: MOV AL,BL
// 0043ea6a: PUSH EAX
// 0043ea6b: PUSH EBP
// 0043ea6c: CALL crt_stdio.c_fputc_FUN_005ff2d7
//   XREF to: 005ff2d7 (UNCONDITIONAL_CALL)
// 0043ea71: ADD ESP,0x8
// 0043ea74: JMP 0x0043ea23
//   XREF to: 0043ea23 (UNCONDITIONAL_JUMP)
