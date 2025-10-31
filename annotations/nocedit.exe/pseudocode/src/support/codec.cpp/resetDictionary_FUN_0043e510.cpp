// Name: support_codec.cpp_resetDictionary_FUN_0043e510
// Address: 0043e510
// Address Range: [[0043e510, 0043e521]]
// Convention: __cdecl
// Signature: void support_codec.cpp_resetDictionary_FUN_0043e510(CLZWDictionary * dict)
// Cross-references:
//   support_codec.cpp_CLZWCompress_init_FUN_0043f320 (0043f320) at 0043f341 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0 (0043f4d0) at 0043f4f1 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl support_codec_cpp_resetDictionary_FUN_0043e510(CLZWDictionary *dict)

{
  dict->num_bits = 0;
  dict->dict_size = 0;
  return;
}


// Assembly code:
// 0043e510: MOV EAX,dword ptr [ESP + 0x4]
//   Label: support_codec.cpp_resetDictionary_FUN_0043e510
//   XREF to: Stack[0x4] (READ)
// 0043e514: MOV dword ptr [EAX + 0x4],0x0
// 0043e51b: MOV dword ptr [EAX],0x0
// 0043e521: RET
