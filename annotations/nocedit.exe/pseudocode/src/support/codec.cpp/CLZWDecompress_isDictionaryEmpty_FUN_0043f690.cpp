// Name: support_codec.cpp_CLZWDecompress_isDictionaryEmpty_FUN_0043f690
// Address: 0043f690
// Address Range: [[0043f690, 0043f6a0]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CLZWDecompress_isDictionaryEmpty_FUN_0043f690(CLZWDecompress * this_ptr)

#include "nocturne.h"

int __cdecl
support_codec_cpp_CLZWDecompress_isDictionaryEmpty_FUN_0043f690(CLZWDecompress *this_ptr)

{
  return (uint)((this_ptr->lzw_dict).max_entries == 0);
}


// Assembly code:
// 0043f690: MOV EAX,dword ptr [ESP + 0x4]
//   Label: support_codec.cpp_CLZWDecompress_isDictionaryEmpty_FUN_0043f690
//   XREF to: Stack[0x4] (READ)
// 0043f694: CMP dword ptr [EAX + 0x10],0x0
// 0043f698: SETZ AL
// 0043f69b: AND EAX,0xff
// 0043f6a0: RET
