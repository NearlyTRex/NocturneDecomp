// Name: support_codec.cpp_CCodec_finalizeBuffer_FUN_0043ed50
// Address: 0043ed50
// Address Range: [[0043ed50, 0043edc7]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CCodec_finalizeBuffer_FUN_0043ed50(CCodec * this_ptr, char * buffer_ptr, int * buffer_size_ptr)
// Function calls:
//   crt_strstream.cpp_ostrstream_ctor_FUN_005ff384
//   crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a
//   crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d

#include "nocturne.h"

int __cdecl
support_codec_cpp_CCodec_finalizeBuffer_FUN_0043ed50
          (CCodec *this_ptr,char *buffer_ptr,int *buffer_size_ptr)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  FILE FStack_40;
  
  crt_strstream_cpp_ostrstream_ctor_FUN_005ff384
            ((ostrstream *)&stack0xffffff74,0,buffer_ptr,*buffer_size_ptr,2);
  iVar1 = (**(code **)(*(int *)buffer_ptr + 0xc))((CCodec *)buffer_ptr,&FStack_40);
  iVar2 = crt_strstream_cpp_ostrstream_tellp_FUN_005ff45d((ostrstream *)&FStack_40._bufsize);
  *buffer_size_ptr = *buffer_size_ptr - iVar2;
  crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a((ostrstream *)&stack0xffffff90,0);
  return iVar1;
}


// Assembly code:
// 0043ed50: PUSH EBX
//   Label: support_codec.cpp_CCodec_finalizeBuffer_FUN_0043ed50
// 0043ed51: PUSH ESI
// 0043ed52: PUSH EDI
// 0043ed53: SUB ESP,0x80
// 0043ed59: MOV ESI,dword ptr [ESP + 0x98]
//   XREF to: Stack[0xc] (READ)
// 0043ed60: PUSH 0x2
// 0043ed62: MOV EDX,dword ptr [ESI]
// 0043ed64: PUSH EDX
// 0043ed65: MOV ECX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[0x8] (READ)
// 0043ed6c: PUSH ECX
// 0043ed6d: PUSH 0x0
// 0043ed6f: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x8c] (DATA)
// 0043ed73: PUSH EAX
// 0043ed74: CALL crt_strstream.cpp_ostrstream_ctor_FUN_005ff384
//   XREF to: 005ff384 (UNCONDITIONAL_CALL)
// 0043ed79: ADD ESP,0x14
// 0043ed7c: LEA EBX,[ESP + 0x48]
//   XREF to: Stack[-0x44] (DATA)
// 0043ed80: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[0x4] (READ)
// 0043ed87: PUSH EBX
// 0043ed88: MOV EBX,dword ptr [ESP + 0x94]
//   XREF to: Stack[0x4] (READ)
// 0043ed8f: MOV EAX,dword ptr [EAX]
// 0043ed91: PUSH EBX
// 0043ed92: CALL dword ptr [EAX + 0xc]
// 0043ed95: ADD ESP,0x8
// 0043ed98: MOV EBX,EAX
// 0043ed9a: LEA EAX,[ESP + 0x48]
// 0043ed9e: PUSH EAX
// 0043ed9f: CALL crt_strstream.cpp_ostrstream_tellp_FUN_005ff45d
//   XREF to: 005ff45d (UNCONDITIONAL_CALL)
// 0043eda4: ADD ESP,0x4
// 0043eda7: MOV EDI,dword ptr [ESI]
// 0043eda9: PUSH 0x0
// 0043edab: SUB EDI,EAX
// 0043edad: LEA EAX,[ESP + 0x4]
// 0043edb1: PUSH EAX
// 0043edb2: MOV dword ptr [ESI],EDI
// 0043edb4: CALL crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a
//   XREF to: 005ff48a (UNCONDITIONAL_CALL)
// 0043edb9: ADD ESP,0x8
// 0043edbc: MOV EAX,EBX
// 0043edbe: ADD ESP,0x80
// 0043edc4: POP EDI
// 0043edc5: POP ESI
// 0043edc6: POP EBX
// 0043edc7: RET
