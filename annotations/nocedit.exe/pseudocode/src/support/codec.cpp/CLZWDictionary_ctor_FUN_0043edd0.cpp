// Name: support_codec.cpp_CLZWDictionary_ctor_FUN_0043edd0
// Address: 0043edd0
// Address Range: [[0043edd0, 0043ede7]]
// Convention: __cdecl
// Signature: CLZWDictionary * support_codec.cpp_CLZWDictionary_ctor_FUN_0043edd0(CLZWDictionary * this_ptr)
// Cross-references:
//   support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0 (0043f2d0) at 0043f2e1 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490 (0043f490) at 0043f4a1 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CLZWDictionary * __cdecl
support_codec_cpp_CLZWDictionary_ctor_FUN_0043edd0(CLZWDictionary *this_ptr)

{
  this_ptr->max_entries = 0;
  this_ptr->node_table = (CLZWDictionaryNode *)0x0;
  this_ptr->dict_size = this_ptr->max_entries;
  return this_ptr;
}


// Assembly code:
// 0043edd0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: support_codec.cpp_CLZWDictionary_ctor_FUN_0043edd0
//   XREF to: Stack[0x4] (READ)
// 0043edd4: MOV dword ptr [EAX + 0xc],0x0
// 0043eddb: MOV dword ptr [EAX + 0x10],0x0
// 0043ede2: MOV EDX,dword ptr [EAX + 0xc]
// 0043ede5: MOV dword ptr [EAX],EDX
// 0043ede7: RET
