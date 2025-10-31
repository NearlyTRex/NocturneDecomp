// Name: support_codec.cpp_CLZWDictionary_findCode_FUN_0043ef50
// Address: 0043ef50
// Address Range: [[0043ef50, 0043ef8b]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CLZWDictionary_findCode_FUN_0043ef50(CLZWDictionary * this_ptr, int search_code, int start_index)
// Cross-references:
//   support_codec.cpp_CLZWCompress_process_FUN_0043f360 (0043f360) at 0043f396 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl
support_codec_cpp_CLZWDictionary_findCode_FUN_0043ef50
          (CLZWDictionary *this_ptr,int search_code,int start_index)

{
  int iVar1;
  CLZWDictionaryNode *pCVar2;
  
  if (start_index < 0) {
    return search_code;
  }
  iVar1 = this_ptr->node_table[start_index].suffix_char;
  while( true ) {
    if (iVar1 < 0) {
      return -1;
    }
    pCVar2 = this_ptr->node_table + iVar1;
    if (search_code == pCVar2->code) break;
    iVar1 = pCVar2->next_link;
  }
  return iVar1;
}


// Assembly code:
// 0043ef50: PUSH EBX
//   Label: support_codec.cpp_CLZWDictionary_findCode_FUN_0043ef50
// 0043ef51: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0043ef55: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 0043ef59: TEST EAX,EAX
// 0043ef5b: JL 0x0043ef88
//   XREF to: 0043ef88 (CONDITIONAL_JUMP)
// 0043ef5d: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0043ef61: SHL EAX,0x4
// 0043ef64: MOV ECX,dword ptr [ECX + 0x10]
// 0043ef67: MOV EAX,dword ptr [ECX + EAX*0x1 + 0x8]
// 0043ef6b: TEST EAX,EAX
// 0043ef6d: JL 0x0043ef81
//   XREF to: 0043ef81 (CONDITIONAL_JUMP)
// 0043ef6f: MOV EDX,EAX
//   Label: LAB_0043ef6f
// 0043ef71: SHL EDX,0x4
// 0043ef74: ADD EDX,ECX
// 0043ef76: CMP EBX,dword ptr [EDX]
// 0043ef78: JZ 0x0043ef86
//   XREF to: 0043ef86 (CONDITIONAL_JUMP)
// 0043ef7a: MOV EAX,dword ptr [EDX + 0xc]
// 0043ef7d: TEST EAX,EAX
// 0043ef7f: JGE 0x0043ef6f
//   XREF to: 0043ef6f (CONDITIONAL_JUMP)
// 0043ef81: MOV EAX,0xffffffff
//   Label: LAB_0043ef81
// 0043ef86: POP EBX
//   Label: LAB_0043ef86
// 0043ef87: RET
// 0043ef88: MOV EAX,EBX
//   Label: LAB_0043ef88
// 0043ef8a: POP EBX
// 0043ef8b: RET
