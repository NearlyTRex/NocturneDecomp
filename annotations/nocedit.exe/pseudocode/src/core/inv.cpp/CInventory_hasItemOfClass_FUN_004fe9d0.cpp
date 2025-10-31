// Name: core_inv.cpp_CInventory_hasItemOfClass_FUN_004fe9d0
// Address: 004fea20
// Address Range: [[004fea20, 004fea63]]
// Convention: __cdecl
// Signature: int core_inv.cpp_CInventory_hasItemOfClass_FUN_004fe9d0(CInventory * this_ptr, char * class_name)
// Cross-references:
//   core_event.cpp_CEvent_EventReadingFromFile_FUN_004ae140 (004ae140) at 004aec31 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

int __cdecl
core_inv_cpp_CInventory_hasItemOfClass_FUN_004fe9d0(CInventory *this_ptr,char *class_name)

{
  int iVar1;
  int iVar2;
  CInventory *pCVar3;
  
  iVar2 = 0;
  pCVar3 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(pCVar3->items[0],class_name);
      if (iVar1 != 0) {
        return 1;
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CInventory *)&pCVar3->owner;
    } while (iVar2 < this_ptr->item_count);
  }
  return 0;
}


// Assembly code:
// 004fea20: PUSH EBX
//   Label: core_inv.cpp_CInventory_hasItemOfClass_FUN_004fe9d0
// 004fea21: PUSH ESI
// 004fea22: PUSH EDI
// 004fea23: PUSH EBP
// 004fea24: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004fea28: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004fea2c: MOV EDX,dword ptr [EDI + 0x8]
// 004fea2f: XOR EBX,EBX
// 004fea31: TEST EDX,EDX
// 004fea33: JLE 0x004fea53
//   XREF to: 004fea53 (CONDITIONAL_JUMP)
// 004fea35: MOV ESI,EDI
// 004fea37: PUSH EBP
//   Label: LAB_004fea37
// 004fea38: MOV EAX,dword ptr [ESI + 0xc]
// 004fea3b: PUSH EAX
// 004fea3c: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fea41: ADD ESP,0x8
// 004fea44: TEST EAX,EAX
// 004fea46: JNZ 0x004fea5a
//   XREF to: 004fea5a (CONDITIONAL_JUMP)
// 004fea48: INC EBX
// 004fea49: MOV ECX,dword ptr [EDI + 0x8]
// 004fea4c: ADD ESI,0x4
// 004fea4f: CMP EBX,ECX
// 004fea51: JL 0x004fea37
//   XREF to: 004fea37 (CONDITIONAL_JUMP)
// 004fea53: XOR EAX,EAX
//   Label: LAB_004fea53
// 004fea55: POP EBP
// 004fea56: POP EDI
// 004fea57: POP ESI
// 004fea58: POP EBX
// 004fea59: RET
// 004fea5a: MOV EAX,0x1
//   Label: LAB_004fea5a
// 004fea5f: POP EBP
// 004fea60: POP EDI
// 004fea61: POP ESI
// 004fea62: POP EBX
// 004fea63: RET
