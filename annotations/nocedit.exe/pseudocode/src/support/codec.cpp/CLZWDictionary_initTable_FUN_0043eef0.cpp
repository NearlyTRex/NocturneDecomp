// Name: support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0
// Address: 0043eef0
// Address Range: [[0043eef0, 0043ef45]]
// Convention: __cdecl
// Signature: void support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0(CLZWDictionary * this_ptr)
// Cross-references:
//   support_codec.cpp_CLZWDictionary_addNode_FUN_0043ef90 (0043ef90) at 0043f010 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWDictionary_init_FUN_0043ee60 (0043ee60) at 0043eed6 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDictionary_initTable_FUN_0043eef0(CLZWDictionary *this_ptr)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 1 << ((byte)this_ptr->num_bits & 0x1f);
  iVar2 = 0;
  this_ptr->max_entries = iVar1;
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      *(int *)((int)&this_ptr->node_table->code + iVar1) = iVar2;
      *(undefined4 *)((int)&this_ptr->node_table->prefix_code + iVar1) = 0xffffffff;
      *(undefined4 *)((int)&this_ptr->node_table->suffix_char + iVar1) = 0xffffffff;
      *(undefined4 *)((int)&this_ptr->node_table->next_link + iVar1) = 0xffffffff;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x10;
    } while (iVar2 < this_ptr->max_entries);
  }
  this_ptr->current_num_bits = this_ptr->num_bits;
  return;
}


// Assembly code:
// 0043eef0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: support_codec.cpp_CLZWDictionary_initTable_FUN_0043eef0
//   XREF to: Stack[0x4] (READ)
// 0043eef4: MOV EAX,0x1
// 0043eef9: MOV ECX,dword ptr [EDX + 0x4]
// 0043eefc: SHL EAX,CL
// 0043eefe: XOR ECX,ECX
// 0043ef00: MOV dword ptr [EDX + 0xc],EAX
// 0043ef03: TEST EAX,EAX
// 0043ef05: JLE 0x0043ef3f
//   XREF to: 0043ef3f (CONDITIONAL_JUMP)
// 0043ef07: PUSH ESI
// 0043ef08: PUSH EBX
// 0043ef09: XOR EAX,EAX
// 0043ef0b: MOV EBX,dword ptr [EDX + 0x10]
//   Label: LAB_0043ef0b
// 0043ef0e: MOV dword ptr [EBX + EAX*0x1],ECX
// 0043ef11: MOV EBX,dword ptr [EDX + 0x10]
// 0043ef14: MOV dword ptr [EBX + EAX*0x1 + 0x4],0xffffffff
// 0043ef1c: MOV EBX,dword ptr [EDX + 0x10]
// 0043ef1f: MOV dword ptr [EBX + EAX*0x1 + 0x8],0xffffffff
// 0043ef27: MOV EBX,dword ptr [EDX + 0x10]
// 0043ef2a: MOV dword ptr [EBX + EAX*0x1 + 0xc],0xffffffff
// 0043ef32: INC ECX
// 0043ef33: MOV ESI,dword ptr [EDX + 0xc]
// 0043ef36: ADD EAX,0x10
// 0043ef39: CMP ECX,ESI
// 0043ef3b: JL 0x0043ef0b
//   XREF to: 0043ef0b (CONDITIONAL_JUMP)
// 0043ef3d: POP EBX
// 0043ef3e: POP ESI
// 0043ef3f: MOV EAX,dword ptr [EDX + 0x4]
//   Label: LAB_0043ef3f
// 0043ef42: MOV dword ptr [EDX + 0x8],EAX
// 0043ef45: RET
