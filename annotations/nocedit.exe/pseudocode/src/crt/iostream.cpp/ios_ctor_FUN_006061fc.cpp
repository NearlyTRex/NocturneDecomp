// Name: crt_iostream.cpp_ios_ctor_FUN_006061fc
// Address: 006061fc
// Address Range: [[006061fc, 00606207]]
// Convention: __cdecl
// Signature: ios * crt_iostream.cpp_ios_ctor_FUN_006061fc(ios * this_ptr)
// Cross-references:
//   crt_fstream.cpp_fstreambase_constructor_FUN_00606456 (00606456) at 0060646e [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_fstreambase_ctor_FUN_0060658f (0060658f) at 006065eb [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ifstream_constructor_FUN_005ff664 (005ff664) at 005ff6d5 [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0 (005ff8f0) at 005ff94f [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ofstream_constructor_FUN_005ff710 (005ff710) at 005ff781 [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ofstream_ctor_FUN_005ff95c (005ff95c) at 005ff9bb [UNCONDITIONAL_CALL]
//   crt_iostream.cpp_istream_ctor_FUN_00606376 (00606376) at 006063bc [UNCONDITIONAL_CALL]
//   crt_iostream.cpp_ostream_ctor_FUN_006061a2 (006061a2) at 006061d7 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_istrstream_constructor_FUN_005ff524 (005ff524) at 005ff58f [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_ostrstream_ctor_FUN_005ff384 (005ff384) at 005ff417 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_strstreambase_constructor_FUN_006060fe (006060fe) at 0060617d [UNCONDITIONAL_CALL]
// Globals:
//   void* g_IOS_Destructor = 0060632c

#include "nocturne.h"

ios * __cdecl crt_iostream_cpp_ios_ctor_FUN_006061fc(ios *this_ptr)

{
  this_ptr->cleanup_vtable = &g_IOS_Destructor;
  return this_ptr;
}


// Assembly code:
// 006061fc: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_iostream.cpp_ios_ctor_FUN_006061fc
//   XREF to: Stack[0x4] (READ)
// 00606200: MOV dword ptr [EAX + 0x28],0x665df8
//   XREF to: 00665df8 (DATA)
// 00606207: RET
