// Name: core_enemy.cpp_FUN_004aa0f0
// Address: 004aa0f0
// Address Range: [[004aa0f0, 004aa16b]]
// Convention: unknown
// Signature: undefined core_enemy.cpp_FUN_004aa0f0()
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
//   undefined4 g_CDemonSetInstance.field19_0x14f0a0[7996]
//   undefined4 DAT_03265258
// Function calls:
//   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

int core_enemy_cpp_FUN_004aa0f0(void)

{
  CDemonActor *actor_ptr;
  CDemonActor *class_name;
  int iVar1;
  int iVar2;
  int iVar3;
  SCollisionInfo *unaff_EDI;
  int iVar4;
  CDemonActor *in_stack_00000004;
  
  iVar4 = 0;
  iVar3 = 0;
  class_name = (CDemonActor *)
               core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(in_stack_00000004);
  iVar2 = 0;
  while( true ) {
    if (*(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c) <= iVar4) break;
    actor_ptr = *(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + iVar3 + 8000);
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(actor_ptr,class_name->actor_name);
    if (iVar1 != 0) {
      class_name = actor_ptr;
      iVar1 = (*actor_ptr->vtable[1].hasCollision)(actor_ptr,unaff_EDI);
      if ((iVar1 == 0) &&
         (*(CHero **)(actor_ptr[0x8d].create_event + 0x4c) == g_HeroActors[g_LocalHeroIndex])) {
        iVar2 = iVar2 + 1;
      }
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 4;
  }
  return iVar2;
}


// Assembly code:
// 004aa0f0: PUSH EBX
//   Label: core_enemy.cpp_FUN_004aa0f0
// 004aa0f1: PUSH ESI
// 004aa0f2: PUSH EDI
// 004aa0f3: PUSH EBP
// 004aa0f4: SUB ESP,0x4
// 004aa0f7: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004aa0fb: PUSH EDX
// 004aa0fc: XOR EDI,EDI
// 004aa0fe: XOR ESI,ESI
// 004aa100: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 004aa105: ADD ESP,0x4
// 004aa108: XOR EBP,EBP
// 004aa10a: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004aa10d: MOV EAX,[0x006810c8]
//   Label: LAB_004aa10d
//   XREF to: 006810c8 (READ)
// 004aa112: CMP EDI,dword ptr [EAX + 0x150fdc]
//   XREF to: 03265254 (READ)
// 004aa118: JL 0x004aa124
//   XREF to: 004aa124 (CONDITIONAL_JUMP)
// 004aa11a: MOV EAX,EBP
// 004aa11c: ADD ESP,0x4
// 004aa11f: POP EBP
// 004aa120: POP EDI
// 004aa121: POP ESI
// 004aa122: POP EBX
// 004aa123: RET
// 004aa124: MOV EBX,dword ptr [ESI + EAX*0x1 + 0x150fe0]
//   Label: LAB_004aa124
//   XREF to: 03265258 (READ)
// 004aa12b: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 004aa12e: PUSH EAX
// 004aa12f: PUSH EBX
// 004aa130: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004aa135: ADD ESP,0x8
// 004aa138: TEST EAX,EAX
// 004aa13a: JZ 0x004aa166
//   XREF to: 004aa166 (CONDITIONAL_JUMP)
// 004aa13c: PUSH EBX
// 004aa13d: MOV EAX,dword ptr [EBX + 0x154]
// 004aa143: CALL dword ptr [EAX + 0x120]
// 004aa149: ADD ESP,0x4
// 004aa14c: TEST EAX,EAX
// 004aa14e: JNZ 0x004aa166
//   XREF to: 004aa166 (CONDITIONAL_JUMP)
// 004aa150: MOV EDX,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 004aa156: MOV EAX,dword ptr [EBX + 0xbe3c]
// 004aa15c: CMP EAX,dword ptr [EDX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 004aa163: JNZ 0x004aa166
//   XREF to: 004aa166 (CONDITIONAL_JUMP)
// 004aa165: INC EBP
// 004aa166: INC EDI
//   Label: LAB_004aa166
// 004aa167: ADD ESI,0x4
// 004aa16a: JMP 0x004aa10d
//   XREF to: 004aa10d (UNCONDITIONAL_JUMP)
