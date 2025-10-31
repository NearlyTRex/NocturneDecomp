// Name: support_codec.cpp_CCodec_ctor_FUN_0043e9a0
// Address: 0043e9a0
// Address Range: [[0043e9a0, 0043e9aa]]
// Convention: __cdecl
// Signature: CCodec * support_codec.cpp_CCodec_ctor_FUN_0043e9a0(CCodec * this_ptr)
// Cross-references:
//   support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0 (0043f2d0) at 0043f2d5 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490 (0043f490) at 0043f495 [UNCONDITIONAL_CALL]
// Globals:
//   CCodec_vtable g_CCodecVTable

#include "nocturne.h"

CCodec * __cdecl support_codec_cpp_CCodec_ctor_FUN_0043e9a0(CCodec *this_ptr)

{
  this_ptr->vtable = &g_CCodecVTable;
  return this_ptr;
}


// Assembly code:
// 0043e9a0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: support_codec.cpp_CCodec_ctor_FUN_0043e9a0
//   XREF to: Stack[0x4] (READ)
// 0043e9a4: MOV dword ptr [EAX],0x65bbc4
//   XREF to: 0065bbc4 (DATA)
// 0043e9aa: RET
