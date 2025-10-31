// Name: support_codec.cpp_CCodec_processToBuffer_FUN_0043ea80
// Address: 0043ea80
// Address Range: [[0043ea80, 0043eb20]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CCodec_processToBuffer_FUN_0043ea80(CCodec * this_ptr, void * input_param, void * context_param, char * output_buffer, int * output_size, int enable_finalize)
// Function calls:
//   crt_strstream.cpp_ostrstream_ctor_FUN_005ff384
//   crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a
//   crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d

#include "nocturne.h"

int __cdecl
support_codec_cpp_CCodec_processToBuffer_FUN_0043ea80
          (CCodec *this_ptr,void *input_param,void *context_param,char *output_buffer,
          int *output_size,int enable_finalize)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int in_stack_00000040;
  FILE FStack_44;
  
  crt_strstream_cpp_ostrstream_ctor_FUN_005ff384
            ((ostrstream *)&stack0xffffff70,0,output_buffer,*output_size,2);
  iVar1 = (*this_ptr->vtable->process)(this_ptr,(FILE *)context_param,(int)output_buffer,&FStack_44)
  ;
  if ((iVar1 != 0) && (in_stack_00000040 != 0)) {
    iVar1 = (*this_ptr->vtable->finalize)(this_ptr,(FILE *)&stack0xffffffe0);
  }
  iVar2 = crt_strstream_cpp_ostrstream_tellp_FUN_005ff45d((ostrstream *)&stack0xfffffff4);
  *output_size = *output_size - iVar2;
  crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a((ostrstream *)&stack0xffffffb0,0);
  return iVar1;
}


// Assembly code:
// 0043ea80: PUSH EBX
//   Label: support_codec.cpp_CCodec_processToBuffer_FUN_0043ea80
// 0043ea81: PUSH ESI
// 0043ea82: PUSH EDI
// 0043ea83: PUSH EBP
// 0043ea84: SUB ESP,0x80
// 0043ea8a: MOV ESI,dword ptr [ESP + 0x94]
//   XREF to: Stack[0x4] (READ)
// 0043ea91: MOV EDI,dword ptr [ESP + 0xa4]
//   XREF to: Stack[0x14] (READ)
// 0043ea98: PUSH 0x2
// 0043ea9a: MOV EDX,dword ptr [EDI]
// 0043ea9c: PUSH EDX
// 0043ea9d: MOV ECX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[0x10] (READ)
// 0043eaa4: PUSH ECX
// 0043eaa5: PUSH 0x0
// 0043eaa7: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x90] (DATA)
// 0043eaab: PUSH EAX
// 0043eaac: CALL crt_strstream.cpp_ostrstream_ctor_FUN_005ff384
//   XREF to: 005ff384 (UNCONDITIONAL_CALL)
// 0043eab1: ADD ESP,0x14
// 0043eab4: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x48] (DATA)
// 0043eab8: PUSH EAX
// 0043eab9: MOV EBP,dword ptr [ESP + 0xa0]
//   XREF to: Stack[0xc] (READ)
// 0043eac0: PUSH EBP
// 0043eac1: MOV EAX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[0x8] (READ)
// 0043eac8: PUSH EAX
// 0043eac9: MOV EBX,dword ptr [ESI]
// 0043eacb: PUSH ESI
// 0043eacc: CALL dword ptr [EBX + 0x8]
// 0043eacf: ADD ESP,0x10
// 0043ead2: MOV EBX,EAX
// 0043ead4: TEST EAX,EAX
// 0043ead6: JZ 0x0043eaf2
//   XREF to: 0043eaf2 (CONDITIONAL_JUMP)
// 0043ead8: CMP dword ptr [ESP + 0xa8],0x0
// 0043eae0: JZ 0x0043eaf2
//   XREF to: 0043eaf2 (CONDITIONAL_JUMP)
// 0043eae2: LEA EAX,[ESP + 0x48]
// 0043eae6: PUSH EAX
// 0043eae7: MOV EBX,dword ptr [ESI]
// 0043eae9: PUSH ESI
// 0043eaea: CALL dword ptr [EBX + 0xc]
// 0043eaed: ADD ESP,0x8
// 0043eaf0: MOV EBX,EAX
// 0043eaf2: LEA EAX,[ESP + 0x48]
//   Label: LAB_0043eaf2
// 0043eaf6: PUSH EAX
// 0043eaf7: CALL crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d
//   XREF to: 005ff45d (UNCONDITIONAL_CALL)
// 0043eafc: ADD ESP,0x4
// 0043eaff: MOV ECX,dword ptr [EDI]
// 0043eb01: PUSH 0x0
// 0043eb03: SUB ECX,EAX
// 0043eb05: LEA EAX,[ESP + 0x4]
// 0043eb09: PUSH EAX
// 0043eb0a: MOV dword ptr [EDI],ECX
// 0043eb0c: CALL crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a
//   XREF to: 005ff48a (UNCONDITIONAL_CALL)
// 0043eb11: ADD ESP,0x8
// 0043eb14: MOV EAX,EBX
// 0043eb16: ADD ESP,0x80
// 0043eb1c: POP EBP
// 0043eb1d: POP EDI
// 0043eb1e: POP ESI
// 0043eb1f: POP EBX
// 0043eb20: RET
