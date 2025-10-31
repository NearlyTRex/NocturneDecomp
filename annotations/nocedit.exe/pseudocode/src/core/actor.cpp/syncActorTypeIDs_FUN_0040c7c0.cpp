// Name: core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
// Address: 0040c7c0
// Address Range: [[0040c7c0, 0040c7ee]]
// Convention: __cdecl
// Signature: void core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0(void)
// Cross-references:
//   core_actor.cpp_CDemonActor_save_FUN_0040af30 (0040af30) at 0040af3f [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 (00523600) at 0052371b [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_DuplicateActorCheckMaybe_FUN_0053bd80 (0053bd80) at 0053bdb2 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UndoChangeMaybe_FUN_0053c0b0 (0053c0b0) at 0053c0bf [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140 (0053c140) at 0053c1db [UNCONDITIONAL_CALL]
// Globals:
//   int g_NumActorClassTypes
//   CDemonActorType*[200] g_ActorClassRegistrations
//   undefined4 g_ActorClassRegistrations[1]

#include "nocturne.h"

void __cdecl core_actor_cpp_syncActorTypeIDs_FUN_0040c7c0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if (0 < g_NumActorClassTypes) {
    iVar3 = 0;
    do {
      piVar1 = (int *)((int)g_ActorClassRegistrations + iVar3);
      iVar3 = iVar3 + 4;
      iVar2 = iVar2 + 1;
      **(undefined4 **)(*piVar1 + 0x30) = *(undefined4 *)(*piVar1 + 0x34);
    } while (iVar2 < g_NumActorClassTypes);
  }
  return;
}


// Assembly code:
// 0040c7c0: PUSH ESI
//   Label: core_actor.cpp_syncActorTypeIDs_FUN_0040c7c0
// 0040c7c1: MOV ESI,dword ptr [0x00822044]
//   XREF to: 00822044 (READ)
// 0040c7c7: XOR EAX,EAX
// 0040c7c9: TEST ESI,ESI
// 0040c7cb: JLE 0x0040c7e7
//   XREF to: 0040c7e7 (CONDITIONAL_JUMP)
// 0040c7cd: PUSH EBX
// 0040c7ce: XOR EDX,EDX
// 0040c7d0: MOV ECX,dword ptr [EDX + 0x822048]
//   Label: LAB_0040c7d0
//   XREF to: 00822048 (READ)
//   XREF to: 0082204c (READ)
// 0040c7d6: ADD EDX,0x4
// 0040c7d9: MOV EBX,dword ptr [ECX + 0x30]
// 0040c7dc: MOV ECX,dword ptr [ECX + 0x34]
// 0040c7df: INC EAX
// 0040c7e0: MOV dword ptr [EBX],ECX
// 0040c7e2: CMP EAX,ESI
// 0040c7e4: JL 0x0040c7d0
//   XREF to: 0040c7d0 (CONDITIONAL_JUMP)
// 0040c7e6: POP EBX
// 0040c7e7: MOV dword ptr [0x00822044],ESI
//   Label: LAB_0040c7e7
//   XREF to: 00822044 (WRITE)
// 0040c7ed: POP ESI
// 0040c7ee: RET
