// Name: core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20
// Address: 00572e20
// Address Range: [[00572e20, 00572e7d]]
// Convention: __cdecl
// Signature: int core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20(CDemonSet * this_ptr, CDemonActor * actor)
// Cross-references:
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0 (005716b0) at 005718dd [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_raycastAgainstActors_FUN_00572a10 (00572a10) at 00572bc5 [UNCONDITIONAL_CALL]
//   core_setcolid.cpp_CDemonSet_testCapsuleCollision_FUN_00573470 (00573470) at 0057364a [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_CCharacterClassInfo.name_hash
// Function calls:
//   core_actor.cpp_isOfClassHash_FUN_0040c760

#include "nocturne.h"

int __cdecl
core_setcolid_cpp_CDemonSet_isActorIgnored_FUN_00572e20(CDemonSet *this_ptr,CDemonActor *actor)

{
  int iVar1;
  CDemonSet *pCVar2;
  
  if ((this_ptr->collision_flag != 0) &&
     (iVar1 = core_actor_cpp_isOfClassHash_FUN_0040c760(actor,g_CCharacterClassInfo.name_hash),
     iVar1 != 0)) {
    return 1;
  }
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < this_ptr->ignore_list_count) {
    do {
      if (actor == pCVar2->ignore_list[0]) {
        return 1;
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)pCVar2->cameras;
    } while (iVar1 < this_ptr->ignore_list_count);
  }
  return 0;
}


// Assembly code:
// 00572e20: PUSH EBX
//   Label: core_setcolid.cpp_CDemonSet_isActorIgnored_FUN_00572e20
// 00572e21: PUSH ESI
// 00572e22: PUSH EDI
// 00572e23: PUSH EBP
// 00572e24: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00572e28: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00572e2c: CMP dword ptr [EBX + 0x15f698],0x0
// 00572e33: JNZ 0x00572e60
//   XREF to: 00572e60 (CONDITIONAL_JUMP)
// 00572e35: MOV EDI,dword ptr [EBX + 0x15f694]
//   Label: LAB_00572e35
// 00572e3b: XOR EAX,EAX
// 00572e3d: TEST EDI,EDI
// 00572e3f: JLE 0x00572e59
//   XREF to: 00572e59 (CONDITIONAL_JUMP)
// 00572e41: MOV EDX,EBX
// 00572e43: CMP ESI,dword ptr [EDX + 0x15f69c]
//   Label: LAB_00572e43
// 00572e49: JZ 0x00572e74
//   XREF to: 00572e74 (CONDITIONAL_JUMP)
// 00572e4b: INC EAX
// 00572e4c: MOV EBP,dword ptr [EBX + 0x15f694]
// 00572e52: ADD EDX,0x4
// 00572e55: CMP EAX,EBP
// 00572e57: JL 0x00572e43
//   XREF to: 00572e43 (CONDITIONAL_JUMP)
// 00572e59: XOR EAX,EAX
//   Label: LAB_00572e59
// 00572e5b: POP EBP
// 00572e5c: POP EDI
// 00572e5d: POP ESI
// 00572e5e: POP EBX
// 00572e5f: RET
// 00572e60: MOV ECX,dword ptr [0x00823c4c]
//   Label: LAB_00572e60
//   XREF to: 00823c4c (READ)
// 00572e66: PUSH ECX
// 00572e67: PUSH ESI
// 00572e68: CALL core_actor.cpp_isOfClassHash_FUN_0040c760
//   XREF to: 0040c760 (UNCONDITIONAL_CALL)
// 00572e6d: ADD ESP,0x8
// 00572e70: TEST EAX,EAX
// 00572e72: JZ 0x00572e35
//   XREF to: 00572e35 (CONDITIONAL_JUMP)
// 00572e74: MOV EAX,0x1
//   Label: LAB_00572e74
// 00572e79: POP EBP
// 00572e7a: POP EDI
// 00572e7b: POP ESI
// 00572e7c: POP EBX
// 00572e7d: RET
