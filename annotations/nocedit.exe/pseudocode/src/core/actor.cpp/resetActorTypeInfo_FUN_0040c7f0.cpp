// Name: core_actor.cpp_resetActorTypeInfo_FUN_0040c7f0
// Address: 0040c7f0
// Address Range: [[0040c7f0, 0040c827]]
// Convention: __cdecl
// Signature: void core_actor.cpp_resetActorTypeInfo_FUN_0040c7f0(void)
// Cross-references:
//   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 (00522eb0) at 00523020 [UNCONDITIONAL_CALL]
// Globals:
//   int g_NumActorClassTypes
//   CDemonActorType*[200] g_ActorClassRegistrations
//   undefined4 g_ActorClassRegistrations[1]

#include "nocturne.h"

void __cdecl core_actor_cpp_resetActorTypeInfo_FUN_0040c7f0(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_NumActorClassTypes) {
    iVar2 = 0;
    do {
      piVar1 = (int *)((int)g_ActorClassRegistrations + iVar2);
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + 1;
      **(undefined4 **)(*piVar1 + 0x30) = 1;
    } while (iVar3 < g_NumActorClassTypes);
  }
  return;
}


// Assembly code:
// 0040c7f0: PUSH EBX
//   Label: core_actor.cpp_resetActorTypeInfo_FUN_0040c7f0
// 0040c7f1: MOV EBX,dword ptr [0x00822044]
//   XREF to: 00822044 (READ)
// 0040c7f7: XOR EDX,EDX
// 0040c7f9: TEST EBX,EBX
// 0040c7fb: JLE 0x0040c820
//   XREF to: 0040c820 (CONDITIONAL_JUMP)
// 0040c7fd: XOR EAX,EAX
// 0040c7ff: MOV ECX,dword ptr [EAX + 0x822048]
//   Label: LAB_0040c7ff
//   XREF to: 00822048 (READ)
//   XREF to: 0082204c (READ)
// 0040c805: MOV ECX,dword ptr [ECX + 0x30]
// 0040c808: ADD EAX,0x4
// 0040c80b: INC EDX
// 0040c80c: MOV dword ptr [ECX],0x1
// 0040c812: CMP EDX,EBX
// 0040c814: JL 0x0040c7ff
//   XREF to: 0040c7ff (CONDITIONAL_JUMP)
// 0040c816: LEA EAX,[EAX]
// 0040c81c: LEA EDX,[EDX]
// 0040c820: MOV dword ptr [0x00822044],EBX
//   Label: LAB_0040c820
//   XREF to: 00822044 (WRITE)
// 0040c826: POP EBX
// 0040c827: RET
