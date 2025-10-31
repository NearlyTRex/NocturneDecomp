// Name: support_codec.cpp_CLZWDictionary_free_FUN_0043ee10
// Address: 0043ee10
// Address Range: [[0043ee10, 0043ee51]]
// Convention: __cdecl
// Signature: void support_codec.cpp_CLZWDictionary_free_FUN_0043ee10(CLZWDictionary * this_ptr)
// Cross-references:
//   support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0 (0043edf0) at 0043edf6 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_support_codec_cpp_00618b0d
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDictionary_free_FUN_0043ee10(CLZWDictionary *this_ptr)

{
  if (this_ptr->node_table == (CLZWDictionaryNode *)0x0) {
    this_ptr->max_entries = 0;
    this_ptr->dict_size = this_ptr->max_entries;
    return;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f460(this_ptr->node_table,"..\\support\\codec.cpp",0x2b5);
  this_ptr->node_table = (CLZWDictionaryNode *)0x0;
  this_ptr->max_entries = 0;
  this_ptr->dict_size = this_ptr->max_entries;
  return;
}


// Assembly code:
// 0043ee10: PUSH EBX
//   Label: support_codec.cpp_CLZWDictionary_free_FUN_0043ee10
// 0043ee11: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0043ee15: MOV EDX,dword ptr [EBX + 0x10]
// 0043ee18: TEST EDX,EDX
// 0043ee1a: JNZ 0x0043ee2a
//   XREF to: 0043ee2a (CONDITIONAL_JUMP)
// 0043ee1c: MOV dword ptr [EBX + 0xc],0x0
// 0043ee23: MOV EAX,dword ptr [EBX + 0xc]
// 0043ee26: MOV dword ptr [EBX],EAX
// 0043ee28: POP EBX
// 0043ee29: RET
// 0043ee2a: PUSH 0x2b5
//   Label: LAB_0043ee2a
// 0043ee2f: PUSH 0x618b0d
//   XREF to: 00618b0d (DATA)
// 0043ee34: PUSH EDX
// 0043ee35: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 0043ee3a: ADD ESP,0xc
// 0043ee3d: MOV dword ptr [EBX + 0x10],0x0
// 0043ee44: MOV dword ptr [EBX + 0xc],0x0
// 0043ee4b: MOV EAX,dword ptr [EBX + 0xc]
// 0043ee4e: MOV dword ptr [EBX],EAX
// 0043ee50: POP EBX
// 0043ee51: RET
