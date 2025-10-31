// Name: support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90
// Address: 0043ef90
// Address Range: [[0043ef90, 0043f021]]
// Convention: __cdecl
// Signature: int support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90(CLZWDictionary * this_ptr, int code, int parent_index)
// Cross-references:
//   support_codec.cpp_CLZWCompress_process_FUN_0043f360 (0043f360) at 0043f402 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWDecompress_processBuffer_FUN_0043f5d0 (0043f5d0) at 0043f613 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWDecompress_process_FUN_0043f510 (0043f510) at 0043f53c [UNCONDITIONAL_CALL]
// Function calls:
//   support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0

#include "nocturne.h"

int __cdecl
support_codec_cpp_CLZWDictionary_addNode_FUN_0043ef90
          (CLZWDictionary *this_ptr,int code,int parent_index)

{
  if (this_ptr->max_entries < this_ptr->dict_size) {
    if ((this_ptr->max_entries & this_ptr->max_entries - 1U) == 0) {
      this_ptr->current_num_bits = this_ptr->current_num_bits + 1;
    }
    this_ptr->node_table[this_ptr->max_entries].code = code;
    this_ptr->node_table[this_ptr->max_entries].prefix_code = parent_index;
    this_ptr->node_table[this_ptr->max_entries].suffix_char = -1;
    this_ptr->node_table[this_ptr->max_entries].next_link =
         this_ptr->node_table[parent_index].suffix_char;
    this_ptr->node_table[parent_index].suffix_char = this_ptr->max_entries;
    this_ptr->max_entries = this_ptr->max_entries + 1;
    return 0;
  }
  support_codec_cpp_CLZWDictionary_initTable_FUN_0043eef0(this_ptr);
  return 1;
}


// Assembly code:
// 0043ef90: PUSH EBX
//   Label: support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90
// 0043ef91: PUSH EBP
// 0043ef92: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0043ef96: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0043ef9a: MOV ECX,dword ptr [EAX]
// 0043ef9c: MOV EDX,dword ptr [EAX + 0xc]
// 0043ef9f: CMP EDX,ECX
// 0043efa1: JGE 0x0043f00f
//   XREF to: 0043f00f (CONDITIONAL_JUMP)
// 0043efa3: DEC EDX
// 0043efa4: TEST dword ptr [EAX + 0xc],EDX
// 0043efa7: JNZ 0x0043efac
//   XREF to: 0043efac (CONDITIONAL_JUMP)
// 0043efa9: INC dword ptr [EAX + 0x8]
// 0043efac: PUSH ESI
//   Label: LAB_0043efac
// 0043efad: MOV EDX,dword ptr [EAX + 0xc]
// 0043efb0: MOV ECX,dword ptr [EAX + 0x10]
// 0043efb3: SHL EDX,0x4
// 0043efb6: ADD EDX,ECX
// 0043efb8: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0043efbc: MOV dword ptr [EDX],ECX
// 0043efbe: MOV EDX,dword ptr [EAX + 0xc]
// 0043efc1: MOV ECX,dword ptr [EAX + 0x10]
// 0043efc4: SHL EDX,0x4
// 0043efc7: MOV dword ptr [ECX + EDX*0x1 + 0x4],EBX
// 0043efcb: MOV ECX,dword ptr [EAX + 0xc]
// 0043efce: MOV EDX,dword ptr [EAX + 0x10]
// 0043efd1: SHL ECX,0x4
// 0043efd4: MOV dword ptr [ECX + EDX*0x1 + 0x8],0xffffffff
// 0043efdc: MOV ECX,EBX
// 0043efde: MOV EDX,dword ptr [EAX + 0x10]
// 0043efe1: MOV EBX,dword ptr [EAX + 0xc]
// 0043efe4: SHL ECX,0x4
// 0043efe7: SHL EBX,0x4
// 0043efea: LEA ESI,[EDX + ECX*0x1]
// 0043efed: ADD EBX,EDX
// 0043efef: MOV EDX,dword ptr [ESI + 0x8]
// 0043eff2: MOV dword ptr [EBX + 0xc],EDX
// 0043eff5: MOV EDX,dword ptr [EAX + 0x10]
// 0043eff8: ADD ECX,EDX
// 0043effa: MOV EDX,dword ptr [EAX + 0xc]
// 0043effd: MOV dword ptr [ECX + 0x8],EDX
// 0043f000: MOV EBP,dword ptr [EAX + 0xc]
// 0043f003: INC EBP
// 0043f004: XOR EDX,EDX
// 0043f006: MOV dword ptr [EAX + 0xc],EBP
// 0043f009: POP ESI
// 0043f00a: MOV EAX,EDX
// 0043f00c: POP EBP
// 0043f00d: POP EBX
// 0043f00e: RET
// 0043f00f: PUSH EAX
//   Label: LAB_0043f00f
// 0043f010: CALL support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0
//   XREF to: 0043eef0 (UNCONDITIONAL_CALL)
// 0043f015: MOV EDX,0x1
// 0043f01a: ADD ESP,0x4
// 0043f01d: MOV EAX,EDX
// 0043f01f: POP EBP
// 0043f020: POP EBX
// 0043f021: RET
