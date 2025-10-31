// Name: support_codec.cpp_CCodec_processBuffer_FUN_0043eba0
// Address: 0043eba0
// Address Range: [[0043eba0, 0043ec24]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CCodec_processBuffer_FUN_0043eba0(CCodec * this_ptr, byte * input, int * input_length, byte * output, int * output_length, int enable_callback)
// Function calls:
//   crt_strstream.cpp_istrstream_constructor_FUN_005ff524
//   crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca

#include "nocturne.h"

int __cdecl
support_codec_cpp_CCodec_processBuffer_FUN_0043eba0
          (CCodec *this_ptr,byte *input,int *input_length,byte *output,int *output_length,
          int enable_callback)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  istrstream local_94;
  
  crt_strstream_cpp_istrstream_constructor_FUN_005ff524(&local_94,0,(char *)input,*input_length);
  iVar1 = (*(code *)this_ptr->vtable->processToBuffer)();
  crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca(&local_94,0);
  return iVar1;
}


// Assembly code:
// 0043eba0: PUSH EBX
//   Label: support_codec.cpp_CCodec_processBuffer_FUN_0043eba0
// 0043eba1: PUSH ESI
// 0043eba2: PUSH EDI
// 0043eba3: PUSH EBP
// 0043eba4: SUB ESP,0x84
// 0043ebaa: MOV EAX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[0xc] (READ)
// 0043ebb1: MOV EDX,dword ptr [EAX]
// 0043ebb3: PUSH EDX
// 0043ebb4: MOV ECX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[0x8] (READ)
// 0043ebbb: PUSH ECX
// 0043ebbc: PUSH 0x0
// 0043ebbe: LEA EBX,[ESP + 0xc]
//   XREF to: Stack[-0x94] (DATA)
// 0043ebc2: PUSH EBX
// 0043ebc3: CALL crt_strstream.cpp_istrstream_constructor_FUN_005ff524
//   XREF to: 005ff524 (UNCONDITIONAL_CALL)
// 0043ebc8: ADD ESP,0x10
// 0043ebcb: MOV EBX,dword ptr [ESP + 0xac]
//   XREF to: Stack[0x18] (READ)
// 0043ebd2: PUSH EBX
// 0043ebd3: MOV ESI,dword ptr [ESP + 0xac]
//   XREF to: Stack[0x14] (READ)
// 0043ebda: PUSH ESI
// 0043ebdb: MOV EDI,dword ptr [ESP + 0xac]
//   XREF to: Stack[0x10] (READ)
// 0043ebe2: PUSH EDI
// 0043ebe3: MOV EBP,dword ptr [ESP + 0xac]
//   XREF to: Stack[0xc] (READ)
// 0043ebea: PUSH EBP
// 0043ebeb: LEA EBX,[ESP + 0x58]
//   XREF to: Stack[-0x4c] (DATA)
// 0043ebef: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[0x4] (READ)
// 0043ebf6: PUSH EBX
// 0043ebf7: MOV EDX,dword ptr [ESP + 0xac]
//   XREF to: Stack[0x4] (READ)
// 0043ebfe: MOV EAX,dword ptr [EAX]
// 0043ec00: PUSH EDX
// 0043ec01: CALL dword ptr [EAX + 0x10]
// 0043ec04: ADD ESP,0x18
// 0043ec07: PUSH 0x0
// 0043ec09: MOV EBX,EAX
// 0043ec0b: LEA EAX,[ESP + 0x4]
// 0043ec0f: PUSH EAX
// 0043ec10: CALL crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca
//   XREF to: 005ff5ca (UNCONDITIONAL_CALL)
// 0043ec15: ADD ESP,0x8
// 0043ec18: MOV EAX,EBX
// 0043ec1a: ADD ESP,0x84
// 0043ec20: POP EBP
// 0043ec21: POP EDI
// 0043ec22: POP ESI
// 0043ec23: POP EBX
// 0043ec24: RET
