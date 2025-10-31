// Name: crt_strstream.cpp_istrstream_destructor_thunk_from_istream_FUN_005ff59c
// Address: 005ff59c
// Address Range: [[005ff59c, 005ff5b1]]
// Convention: __cdecl
// Signature: void crt_strstream.cpp_istrstream_destructor_thunk_from_istream_FUN_005ff59c(istream * this_ptr, int dtor_flags)
// Function calls:
//   crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca

#include "nocturne.h"

void __cdecl
crt_strstream_cpp_istrstream_destructor_thunk_from_istream_FUN_005ff59c
          (istream *this_ptr,int dtor_flags)

{
  crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca
            ((istrstream *)&this_ptr[-2].ios.__fill_character,dtor_flags);
  return;
}


// Assembly code:
// 005ff59c: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_strstream.cpp_istrstream_destructor_thunk_from_istream_FUN_005ff59c
//   XREF to: Stack[0x4] (READ)
// 005ff5a0: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005ff5a4: PUSH EDX
// 005ff5a5: SUB EAX,0x48
// 005ff5a8: PUSH EAX
// 005ff5a9: CALL crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca
//   XREF to: 005ff5ca (UNCONDITIONAL_CALL)
// 005ff5ae: ADD ESP,0x8
// 005ff5b1: RET
