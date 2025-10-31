// Name: core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
// Address: 0040d040
// Address Range: [[0040d040, 0040d140]]
// Convention: __cdecl
// Signature: void core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor * this_ptr)
// Cross-references:
//   core_barrier.cpp_CBarrier_FUN_00414460 (00414460) at 004145fd [UNCONDITIONAL_CALL]
//   core_bodypart.cpp_FUN_0041b260 (0041b260) at 0041b265 [UNCONDITIONAL_CALL]
//   core_boxactor.cpp_FUN_004228e0 (004228e0) at 004228e5 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_computePickupInLoop_FUN_0042f800 (0042f800) at 0042f809 [UNCONDITIONAL_CALL]
//   core_curtain.cpp_FUN_0044b7a0 (0044b7a0) at 0044b8ab [UNCONDITIONAL_CALL]
//   core_door.cpp_CDoor_processInEditor_FUN_00481590 (00481590) at 00481596 [UNCONDITIONAL_CALL]
//   core_drip.cpp_FUN_0048ea30 (0048ea30) at 0048ea54 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a8fe0 (004a8fe0) at 004a9340 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004caf60 (004caf60) at 004cb081 [UNCONDITIONAL_CALL]
//   core_flies.cpp_FUN_004ccaf0 (004ccaf0) at 004ccc61 [UNCONDITIONAL_CALL]
//   core_frankgen.cpp_FUN_004d25f0 (004d25f0) at 004d2706 [UNCONDITIONAL_CALL]
//   core_glass.cpp_FUN_004eb490 (004eb490) at 004eb5e1 [UNCONDITIONAL_CALL]
//   core_grave.cpp_FUN_004eea70 (004eea70) at 004eea79 [UNCONDITIONAL_CALL]
//   core_ladder.cpp_FUN_00502d00 (00502d00) at 00502e45 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_0050b440 (0050b440) at 0050b7b5 [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_0054a790 (0054a790) at 0054a795 [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054ea00 (0054ea00) at 0054ec00 [UNCONDITIONAL_CALL]
//   core_spike.cpp_FUN_005b9020 (005b9020) at 005b9025 [UNCONDITIONAL_CALL]
//   core_stairs.cpp_FUN_005ba900 (005ba900) at 005ba939 [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleportDest_FUN_005da870 (005da870) at 005da95d [UNCONDITIONAL_CALL]
//   core_teleport.cpp_CTeleport_FUN_005dabe0 (005dabe0) at 005dadad [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_FUN_005df750 (005df750) at 005df756 [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_FUN_005e1180 (005e1180) at 005e11c3 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e3dd0 (005e3dd0) at 005e3dd6 [UNCONDITIONAL_CALL]
//   core_vehicle.cpp_CVehicle_FUN_005e8cf0 (005e8cf0) at 005e8cf5 [UNCONDITIONAL_CALL]
//   core_wateract.cpp_CWaterActor_FUN_005ebab0 (005ebab0) at 005ebbf1 [UNCONDITIONAL_CALL]
// Globals:
//   CKeys* g_CKeysPtr = 02dcd7d4
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   int g_MouseButtonFlags
//   void* g_CKeysPtr
//   CDemonMission g_CDemonMissionInstance
// Function calls:
//   core_msnedit.cpp_FUN_0053ca00
//   core_msnedit.cpp_IgnoreAndProcess_FUN_0053c8d0
//   core_skeleton.cpp_FUN_005a20b0

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(CDemonActor *this_ptr)

{
  CDemonActor_vtable *pCVar1;
  CDemonActor *pCVar2;
  CDemonActor *pCVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  float in_stack_00000008;
  float in_stack_0000000c;
  CDemonMission *in_stack_00000010;
  CDemonMission *in_stack_00000014;
  CDemonActor *in_stack_00000018;
  
  pCVar2 = this_ptr;
  pCVar1 = (this_ptr->metadata).vtable;
  this_ptr->was_created = 0;
  pCVar3 = (*pCVar1->getCarrier)(this_ptr);
  if (pCVar3 == (CDemonActor *)0x0) {
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x29);
    if (iVar4 == 0) {
      if ((CLocation *)&stack0x00000000 != &this_ptr->location) {
        in_stack_00000008 = (this_ptr->location).position.z;
        this_ptr = (CDemonActor *)(this_ptr->location).position.y;
      }
      if ((COrientation *)&stack0x0000000c != &pCVar2->orient) {
        in_stack_0000000c = (pCVar2->orient).pitch;
        in_stack_00000010 = (CDemonMission *)(pCVar2->orient).bank;
        in_stack_00000014 = (CDemonMission *)(pCVar2->orient).heading;
      }
      core_skeleton_cpp_FUN_005a20b0();
      (pCVar2->location).position.x = (float)this_ptr;
      (pCVar2->location).position.y = in_stack_00000008;
      (pCVar2->location).position.z = in_stack_0000000c;
      if (&pCVar2->orient != (COrientation *)&stack0x00000010) {
        (pCVar2->orient).pitch = (float)in_stack_00000010;
        (pCVar2->orient).bank = (float)in_stack_00000014;
        (pCVar2->orient).heading = (float)in_stack_00000018;
      }
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x22);
    if (iVar4 != 0) {
      in_stack_00000014 = (CDemonMission *)pCVar2;
      in_stack_00000010 = g_CDemonMissionPtr;
      in_stack_0000000c = 5.952307e-39;
      core_msnedit_cpp_IgnoreAndProcess_FUN_0053c8d0();
    }
    if (((byte)g_MouseButtonFlags & 2) != 0) {
      in_stack_00000018 = pCVar2;
      in_stack_00000014 = g_CDemonMissionPtr;
      in_stack_00000010 = (CDemonMission *)0x40d0b5;
      core_msnedit_cpp_FUN_0053ca00();
      return;
    }
  }
  return;
}


// Assembly code:
// 0040d040: PUSH EBX
//   Label: core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
// 0040d041: SUB ESP,0x1c
// 0040d044: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0040d048: PUSH EBX
// 0040d049: MOV EAX,dword ptr [EBX + 0x154]
// 0040d04f: MOV dword ptr [EBX + 0x70],0x0
// 0040d056: CALL dword ptr [EAX + 0x8c]
// 0040d05c: ADD ESP,0x4
// 0040d05f: TEST EAX,EAX
// 0040d061: JZ 0x0040d068
//   XREF to: 0040d068 (CONDITIONAL_JUMP)
// 0040d063: ADD ESP,0x1c
//   Label: LAB_0040d063
// 0040d066: POP EBX
// 0040d067: RET
// 0040d068: PUSH 0x29
//   Label: LAB_0040d068
// 0040d06a: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0040d06f: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0040d070: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0040d072: CALL dword ptr [EDX]
// 0040d074: ADD ESP,0x8
// 0040d077: TEST EAX,EAX
// 0040d079: JZ 0x0040d0bd
//   XREF to: 0040d0bd (CONDITIONAL_JUMP)
// 0040d07b: PUSH 0x22
//   Label: LAB_0040d07b
// 0040d07d: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0040d082: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0040d083: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0040d085: CALL dword ptr [EDX + 0x4]
// 0040d088: ADD ESP,0x8
// 0040d08b: TEST EAX,EAX
// 0040d08d: JZ 0x0040d09f
//   XREF to: 0040d09f (CONDITIONAL_JUMP)
// 0040d08f: PUSH EBX
// 0040d090: MOV EDX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 0040d096: PUSH EDX
//   XREF to: 02f33740 (DATA)
// 0040d097: CALL core_msnedit.cpp_IgnoreAndProcess_FUN_0053c8d0
//   XREF to: 0053c8d0 (UNCONDITIONAL_CALL)
// 0040d09c: ADD ESP,0x8
// 0040d09f: TEST byte ptr [0x02cf6a94],0x2
//   Label: LAB_0040d09f
//   XREF to: 02cf6a94 (READ)
// 0040d0a6: JZ 0x0040d063
//   XREF to: 0040d063 (CONDITIONAL_JUMP)
// 0040d0a8: PUSH EBX
// 0040d0a9: MOV ECX,dword ptr [0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 0040d0af: PUSH ECX
//   XREF to: 02f33740 (DATA)
// 0040d0b0: CALL core_msnedit.cpp_FUN_0053ca00
//   XREF to: 0053ca00 (UNCONDITIONAL_CALL)
// 0040d0b5: ADD ESP,0x8
// 0040d0b8: ADD ESP,0x1c
// 0040d0bb: POP EBX
// 0040d0bc: RET
// 0040d0bd: MOV EAX,ESP
//   Label: LAB_0040d0bd
// 0040d0bf: LEA EDX,[EBX + 0x20]
// 0040d0c2: CMP EAX,EDX
// 0040d0c4: JZ 0x0040d0d9
//   XREF to: 0040d0d9 (CONDITIONAL_JUMP)
// 0040d0c6: MOV EAX,dword ptr [EDX]
// 0040d0c8: MOV dword ptr [ESP],EAX
// 0040d0cb: MOV EAX,dword ptr [EDX + 0x4]
// 0040d0ce: MOV dword ptr [ESP + 0x4],EAX
// 0040d0d2: MOV EAX,dword ptr [EDX + 0x8]
// 0040d0d5: MOV dword ptr [ESP + 0x8],EAX
// 0040d0d9: LEA EAX,[ESP + 0xc]
//   Label: LAB_0040d0d9
// 0040d0dd: LEA EDX,[EBX + 0x30]
// 0040d0e0: CMP EAX,EDX
// 0040d0e2: JZ 0x0040d0f8
//   XREF to: 0040d0f8 (CONDITIONAL_JUMP)
// 0040d0e4: MOV EAX,dword ptr [EDX]
// 0040d0e6: MOV dword ptr [ESP + 0xc],EAX
// 0040d0ea: MOV EAX,dword ptr [EDX + 0x4]
// 0040d0ed: MOV dword ptr [ESP + 0x10],EAX
// 0040d0f1: MOV EAX,dword ptr [EDX + 0x8]
// 0040d0f4: MOV dword ptr [ESP + 0x14],EAX
// 0040d0f8: MOV EAX,ESP
//   Label: LAB_0040d0f8
// 0040d0fa: PUSH EAX
// 0040d0fb: CALL core_skeleton.cpp_FUN_005a20b0
//   XREF to: 005a20b0 (UNCONDITIONAL_CALL)
// 0040d100: ADD ESP,0x4
// 0040d103: LEA EDX,[EBX + 0x20]
// 0040d106: MOV EAX,dword ptr [ESP]
// 0040d109: MOV dword ptr [EDX],EAX
// 0040d10b: MOV EAX,dword ptr [ESP + 0x4]
// 0040d10f: MOV dword ptr [EDX + 0x4],EAX
// 0040d112: MOV EAX,dword ptr [ESP + 0x8]
// 0040d116: MOV dword ptr [EDX + 0x8],EAX
// 0040d119: LEA EAX,[ESP + 0xc]
// 0040d11d: LEA EDX,[EBX + 0x30]
// 0040d120: CMP EDX,EAX
// 0040d122: JZ 0x0040d07b
//   XREF to: 0040d07b (CONDITIONAL_JUMP)
// 0040d128: MOV EAX,dword ptr [ESP + 0xc]
// 0040d12c: MOV dword ptr [EDX],EAX
// 0040d12e: MOV EAX,dword ptr [ESP + 0x10]
// 0040d132: MOV dword ptr [EDX + 0x4],EAX
// 0040d135: MOV EAX,dword ptr [ESP + 0x14]
// 0040d139: MOV dword ptr [EDX + 0x8],EAX
// 0040d13c: JMP 0x0040d07b
//   XREF to: 0040d07b (UNCONDITIONAL_JUMP)
