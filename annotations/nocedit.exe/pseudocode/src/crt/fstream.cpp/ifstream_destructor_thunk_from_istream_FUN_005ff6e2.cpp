// Name: crt_fstream.cpp_ifstream_destructor_thunk_from_istream_FUN_005ff6e2
// Address: 005ff6e2
// Address Range: [[005ff6e2, 005ff6f7]]
// Convention: __cdecl
// Signature: void crt_fstream.cpp_ifstream_destructor_thunk_from_istream_FUN_005ff6e2(istream * this_ptr, int dtor_flags)
// Function calls:
//   crt_fstream.cpp_ifstream_dtor_FUN_005ff856

#include "nocturne.h"

void __cdecl
crt_fstream_cpp_ifstream_destructor_thunk_from_istream_FUN_005ff6e2
          (istream *this_ptr,int dtor_flags)

{
  uint unaff_retaddr;
  
  crt_fstream_cpp_ifstream_dtor_FUN_005ff856
            ((ifstream *)&this_ptr[-2].ios.__i_lock,dtor_flags,unaff_retaddr,(uint)this_ptr,
             dtor_flags);
  return;
}


// Assembly code:
// 005ff6e2: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_fstream.cpp_ifstream_destructor_thunk_from_istream_FUN_005ff6e2
//   XREF to: Stack[0x4] (READ)
// 005ff6e6: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005ff6ea: PUSH EDX
// 005ff6eb: SUB EAX,0x44
// 005ff6ee: PUSH EAX
// 005ff6ef: CALL crt_fstream.cpp_ifstream_dtor_FUN_005ff856
//   XREF to: 005ff856 (UNCONDITIONAL_CALL)
// 005ff6f4: ADD ESP,0x8
// 005ff6f7: RET
