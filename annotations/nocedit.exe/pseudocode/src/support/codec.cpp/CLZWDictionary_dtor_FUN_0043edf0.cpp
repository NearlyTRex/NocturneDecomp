// Name: support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0
// Address: 0043edf0
// Address Range: [[0043edf0, 0043ee01]]
// Convention: __cdecl
// Signature: CLZWDictionary * support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0(CLZWDictionary * this_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 (004529b0) at 00452f40 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e16bb [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e10d5 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWCompress_dtor_FUN_0043f710 (0043f710) at 0043f722 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWDecompress_dtor_FUN_0043f6b0 (0043f6b0) at 0043f6c2 [UNCONDITIONAL_CALL]
// Function calls:
//   support_codec.cpp_CLZWDictionary_free_FUN_0043ee10

#include "nocturne.h"

CLZWDictionary * __cdecl
support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(CLZWDictionary *this_ptr)

{
  support_codec_cpp_CLZWDictionary_free_FUN_0043ee10(this_ptr);
  return this_ptr;
}


// Assembly code:
// 0043edf0: PUSH EBX
//   Label: support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0
// 0043edf1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0043edf5: PUSH EBX
// 0043edf6: CALL support_codec.cpp_CLZWDictionary_free_FUN_0043ee10
//   XREF to: 0043ee10 (UNCONDITIONAL_CALL)
// 0043edfb: ADD ESP,0x4
// 0043edfe: MOV EAX,EBX
// 0043ee00: POP EBX
// 0043ee01: RET
