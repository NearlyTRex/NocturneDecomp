// Name: support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30
// Address: 0043eb30
// Address Range: [[0043eb30, 0043eb9b]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30(CCodec * this_ptr, byte * input, int * input_length, byte * output, int * output_length)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 (004529b0) at 00452e86 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_strstream.cpp_istrstream_constructor_FUN_005ff524
//   crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca

#include "nocturne.h"

int __cdecl
support_codec_cpp_CCodec_processFromBuffer_FUN_0043eb30
          (CCodec *this_ptr,byte *input,int *input_length,byte *output,int *output_length)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  FILE aFStack_44 [2];
  
  crt_strstream_cpp_istrstream_constructor_FUN_005ff524
            ((istrstream *)&stack0xffffff70,0,(char *)input,*input_length);
  iVar1 = (**(code **)(*(int *)input + 8))
                    ((CCodec *)input,aFStack_44,(int)input_length,(FILE *)output_length);
  crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca((istrstream *)&stack0xffffff98,0);
  return iVar1;
}


// Assembly code:
// 0043eb30: PUSH EBX
//   Label: support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30
// 0043eb31: PUSH ESI
// 0043eb32: PUSH EDI
// 0043eb33: SUB ESP,0x84
// 0043eb39: MOV EBX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0xc] (READ)
// 0043eb40: MOV EDX,dword ptr [EBX]
// 0043eb42: PUSH EDX
// 0043eb43: MOV ECX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x8] (READ)
// 0043eb4a: PUSH ECX
// 0043eb4b: PUSH 0x0
// 0043eb4d: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x90] (DATA)
// 0043eb51: PUSH EAX
// 0043eb52: CALL crt_strstream.cpp_istrstream_constructor_FUN_005ff524
//   XREF to: 005ff524 (UNCONDITIONAL_CALL)
// 0043eb57: ADD ESP,0x10
// 0043eb5a: MOV ESI,dword ptr [ESP + 0xa0]
//   XREF to: Stack[0x10] (READ)
// 0043eb61: PUSH ESI
// 0043eb62: PUSH EBX
// 0043eb63: LEA EBX,[ESP + 0x50]
//   XREF to: Stack[-0x48] (DATA)
// 0043eb67: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x4] (READ)
// 0043eb6e: PUSH EBX
// 0043eb6f: MOV EDI,dword ptr [ESP + 0xa0]
//   XREF to: Stack[0x4] (READ)
// 0043eb76: MOV EAX,dword ptr [EAX]
// 0043eb78: PUSH EDI
// 0043eb79: CALL dword ptr [EAX + 0x8]
// 0043eb7c: ADD ESP,0x10
// 0043eb7f: PUSH 0x0
// 0043eb81: MOV EBX,EAX
// 0043eb83: LEA EAX,[ESP + 0x4]
// 0043eb87: PUSH EAX
// 0043eb88: CALL crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca
//   XREF to: 005ff5ca (UNCONDITIONAL_CALL)
// 0043eb8d: ADD ESP,0x8
// 0043eb90: MOV EAX,EBX
// 0043eb92: ADD ESP,0x84
// 0043eb98: POP EDI
// 0043eb99: POP ESI
// 0043eb9a: POP EBX
// 0043eb9b: RET
