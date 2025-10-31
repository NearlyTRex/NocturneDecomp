// Name: core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0
// Address: 005014a0
// Address Range: [[005014a0, 005014fb]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0(CInventory * this_ptr, uint key_mask)
// Cross-references:
//   core_hero.cpp_CHero_FUN_004f3b20 (004f3b20) at 004f3b7e [UNCONDITIONAL_CALL]
//   core_hero.cpp_FUN_004f3910 (004f3910) at 004f391f [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_CKeyActorClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_inv.cpp_CInventory_removeItem_FUN_004fea70

#include "nocturne.h"

void __cdecl
core_inv_cpp_CInventory_removeMatchingKeys_FUN_005014a0(CInventory *this_ptr,uint key_mask)

{
  CDemonActor *pCVar1;
  CInventory *pCVar2;
  int iVar3;
  
  iVar3 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      while ((pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                                 (pCVar2->items[0],g_CKeyActorClassInfo.name_hash),
             pCVar1 == (CDemonActor *)0x0 || (((uint)pCVar1[2].location.position.y & key_mask) == 0)
             )) {
        iVar3 = iVar3 + 1;
        pCVar2 = (CInventory *)&pCVar2->owner;
        if (this_ptr->item_count <= iVar3) {
          return;
        }
      }
      core_inv_cpp_CInventory_removeItem_FUN_004fea70(this_ptr,pCVar2->items[0],1);
    } while (iVar3 < this_ptr->item_count);
  }
  return;
}


// Assembly code:
// 005014a0: PUSH EBX
//   Label: core_inv.cpp_CInventory_removeMatchingKeys_FUN_005014a0
// 005014a1: PUSH ESI
// 005014a2: PUSH EDI
// 005014a3: PUSH EBP
// 005014a4: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005014a8: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005014ac: MOV EDX,dword ptr [EDI + 0x8]
// 005014af: XOR ESI,ESI
// 005014b1: TEST EDX,EDX
// 005014b3: JLE 0x005014e9
//   XREF to: 005014e9 (CONDITIONAL_JUMP)
// 005014b5: MOV EBX,EDI
// 005014b7: MOV EAX,[0x02dcd7d0]
//   Label: LAB_005014b7
//   XREF to: 02dcd7d0 (READ)
// 005014bc: PUSH EAX
// 005014bd: MOV EDX,dword ptr [EBX + 0xc]
// 005014c0: PUSH EDX
// 005014c1: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 005014c6: ADD ESP,0x8
// 005014c9: TEST EAX,EAX
// 005014cb: JZ 0x005014ee
//   XREF to: 005014ee (CONDITIONAL_JUMP)
// 005014cd: TEST dword ptr [EAX + 0x2d4],EBP
// 005014d3: JZ 0x005014ee
//   XREF to: 005014ee (CONDITIONAL_JUMP)
// 005014d5: PUSH 0x1
// 005014d7: MOV EAX,dword ptr [EBX + 0xc]
// 005014da: PUSH EAX
// 005014db: PUSH EDI
// 005014dc: CALL core_inv.cpp_CInventory_removeItem_FUN_004fea70
//   XREF to: 004fea70 (UNCONDITIONAL_CALL)
// 005014e1: ADD ESP,0xc
// 005014e4: CMP ESI,dword ptr [EDI + 0x8]
// 005014e7: JL 0x005014b7
//   XREF to: 005014b7 (CONDITIONAL_JUMP)
// 005014e9: POP EBP
//   Label: LAB_005014e9
// 005014ea: POP EDI
// 005014eb: POP ESI
// 005014ec: POP EBX
// 005014ed: RET
// 005014ee: INC ESI
//   Label: LAB_005014ee
// 005014ef: ADD EBX,0x4
// 005014f2: CMP ESI,dword ptr [EDI + 0x8]
// 005014f5: JL 0x005014b7
//   XREF to: 005014b7 (CONDITIONAL_JUMP)
// 005014f7: POP EBP
// 005014f8: POP EDI
// 005014f9: POP ESI
// 005014fa: POP EBX
// 005014fb: RET
