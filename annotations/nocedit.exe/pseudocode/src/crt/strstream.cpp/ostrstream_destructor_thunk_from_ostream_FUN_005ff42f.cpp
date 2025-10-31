// Name: crt_strstream.cpp_ostrstream_destructor_thunk_from_ostream_FUN_005ff42f
// Address: 005ff42f
// Address Range: [[005ff42f, 005ff444]]
// Convention: __cdecl
// Signature: void crt_strstream.cpp_ostrstream_destructor_thunk_from_ostream_FUN_005ff42f(ostream * this_ptr, int dtor_flags)
// Function calls:
//   crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a

#include "nocturne.h"

void __cdecl
crt_strstream_cpp_ostrstream_destructor_thunk_from_ostream_FUN_005ff42f
          (ostream *this_ptr,int dtor_flags)

{
  crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a
            ((ostrstream *)&this_ptr[-2].ios.__xalloc_list,dtor_flags);
  return;
}


// Assembly code:
// 005ff42f: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_strstream.cpp_ostrstream_destructor_thunk_from_ostream_FUN_005ff42f
//   XREF to: Stack[0x4] (READ)
// 005ff433: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 005ff437: PUSH EDX
// 005ff438: SUB EAX,0x48
// 005ff43b: PUSH EAX
// 005ff43c: CALL crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a
//   XREF to: 005ff48a (UNCONDITIONAL_CALL)
// 005ff441: ADD ESP,0x8
// 005ff444: RET
