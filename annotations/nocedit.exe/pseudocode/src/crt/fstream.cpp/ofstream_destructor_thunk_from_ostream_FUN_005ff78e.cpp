// Name: crt_fstream.cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e
// Address: 005ff78e
// Address Range: [[005ff78e, 005ff7a3]]
// Convention: __cdecl
// Signature: void crt_fstream.cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e(ostream * this_ptr, int dtor_flags)
// Function calls:
//   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc

#include "nocturne.h"

void __cdecl
crt_fstream_cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e
          (ostream *this_ptr,int dtor_flags)

{
  uint unaff_retaddr;
  
  crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc
            ((ofstream *)&this_ptr[-2].ios.__fill_character,dtor_flags,unaff_retaddr,(uint)this_ptr,
             dtor_flags);
  return;
}


// Assembly code:
// 005ff78e: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_fstream.cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e
//   XREF to: Stack[0x4] (READ)
// 005ff792: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005ff796: PUSH EDX
// 005ff797: SUB EAX,0x44
// 005ff79a: PUSH EAX
// 005ff79b: CALL crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
//   XREF to: 005ff7bc (UNCONDITIONAL_CALL)
// 005ff7a0: ADD ESP,0x8
// 005ff7a3: RET
