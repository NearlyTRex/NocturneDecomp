// Name: core_bugs.cpp_FUN_004278d0
// Address: 004278d0
// Address Range: [[004278d0, 004279af]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004278d0()
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
// Function calls:
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_bugs.cpp_FUN_004257f0
//   core_bugs.cpp_FUN_00426420
//   core_bugs.cpp_FUN_004272f0
//   core_bugs.cpp_FUN_004276c0
//   core_charactr.cpp_CCharacter_computePickupInLoop_FUN_0042f800

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_bugs.cpp_FUN_004278d0(CDemonActor* param_1) */

void core_bugs_cpp_FUN_004278d0(void)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  CCharacter *in_stack_00000004;
  CCharacter *pCVar7;
  
  fVar1 = (in_stack_00000004->base_actor).location.position.y;
  fVar2 = (in_stack_00000004->base_actor).location.position.z;
  core_charactr_cpp_CCharacter_computePickupInLoop_FUN_0042f800(in_stack_00000004);
  (in_stack_00000004->base_actor).orient.heading = 0.0;
  (in_stack_00000004->base_actor).orient.bank = (in_stack_00000004->base_actor).orient.heading;
  (in_stack_00000004->base_actor).orient.pitch = (in_stack_00000004->base_actor).orient.bank;
  pCVar7 = in_stack_00000004;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&in_stack_00000004->base_actor);
  (in_stack_00000004->base_actor).location.position.x = (float)pCVar7;
  (in_stack_00000004->base_actor).location.position.y = fVar1;
  (in_stack_00000004->base_actor).location.position.z = fVar2;
  core_bugs_cpp_FUN_004276c0();
  iVar5 = 0;
  uVar4 = core_bugs_cpp_FUN_004257f0();
  iVar3 = *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24);
  uVar6 = CONCAT44(iVar3,uVar4);
  if (0 < iVar3) {
    do {
      iVar5 = iVar5 + 1;
      uVar6 = core_bugs_cpp_FUN_00426420();
    } while (iVar5 < *(int *)(in_stack_00000004[1].base_actor.create_event + 0x24));
  }
  core_bugs_cpp_FUN_004272f0((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  return;
}


// Assembly code:
// 004278d0: PUSH EBX
//   Label: core_bugs.cpp_FUN_004278d0
// 004278d1: PUSH ESI
// 004278d2: PUSH EDI
// 004278d3: PUSH EBP
// 004278d4: MOV EBP,ESP
// 004278d6: SUB ESP,0x1c
// 004278d9: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004278dc: LEA EBX,[EDI + 0x20]
// 004278df: MOV EAX,dword ptr [EBX]
// 004278e1: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004278e4: LEA EAX,[EBX + 0x4]
// 004278e7: MOV dword ptr [EBP + -0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004278ea: MOV EAX,dword ptr [EAX]
// 004278ec: LEA ESI,[EBX + 0x8]
// 004278ef: MOV dword ptr [EBP + -0x18],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004278f2: MOV EAX,dword ptr [ESI]
// 004278f4: PUSH EDI
// 004278f5: MOV dword ptr [EBP + -0x14],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004278f8: CALL core_charactr.cpp_CCharacter_computePickupInLoop_FUN_0042f800
//   XREF to: 0042f800 (UNCONDITIONAL_CALL)
// 004278fd: LEA EAX,[EDI + 0x30]
// 00427900: ADD ESP,0x4
// 00427903: MOV dword ptr [EAX + 0x8],0x0
// 0042790a: PUSH EDI
// 0042790b: MOV EDX,dword ptr [EAX + 0x8]
// 0042790e: MOV dword ptr [EAX + 0x4],EDX
// 00427911: MOV EDX,dword ptr [EAX + 0x4]
// 00427914: MOV dword ptr [EAX],EDX
// 00427916: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 0042791b: MOV EAX,dword ptr [EBX]
// 0042791d: MOV dword ptr [EBP + -0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00427920: MOV EAX,dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00427923: MOV EAX,dword ptr [EAX]
// 00427925: MOV dword ptr [EBP + -0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00427928: MOV EAX,dword ptr [ESI]
// 0042792a: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0042792d: MOV EAX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00427930: MOV dword ptr [EBX],EAX
// 00427932: MOV EAX,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00427935: MOV dword ptr [EBX + 0x4],EAX
// 00427938: MOV EAX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 0042793b: ADD ESP,0x4
// 0042793e: MOV dword ptr [EBX + 0x8],EAX
// 00427941: LEA EAX,[EBP + -0x10]
//   XREF to: Stack[-0x20] (DATA)
// 00427944: PUSH EAX
// 00427945: PUSH EDI
// 00427946: CALL core_bugs.cpp_FUN_004276c0
//   XREF to: 004276c0 (UNCONDITIONAL_CALL)
// 0042794b: ADD ESP,0x8
// 0042794e: PUSH EDI
// 0042794f: XOR ESI,ESI
// 00427951: CALL core_bugs.cpp_FUN_004257f0
//   XREF to: 004257f0 (UNCONDITIONAL_CALL)
// 00427956: MOV EDX,dword ptr [EDI + 0xbec0]
// 0042795c: ADD ESP,0x4
// 0042795f: TEST EDX,EDX
// 00427961: JLE 0x004279a0
//   XREF to: 004279a0 (CONDITIONAL_JUMP)
// 00427963: LEA EBX,[EDI + 0xbec4]
// 00427969: PUSH 0x0
//   Label: LAB_00427969
// 0042796b: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00427970: SUB ESP,0x4
// 00427973: MOV EDX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 00427979: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x34] (DATA)
// 0042797c: PUSH EBX
// 0042797d: PUSH EDI
// 0042797e: INC ESI
// 0042797f: CALL core_bugs.cpp_FUN_00426420
//   XREF to: 00426420 (UNCONDITIONAL_CALL)
// 00427984: ADD EBX,0x40
// 00427987: MOV ECX,dword ptr [EDI + 0xbec0]
// 0042798d: ADD ESP,0x10
// 00427990: CMP ESI,ECX
// 00427992: JL 0x00427969
//   XREF to: 00427969 (CONDITIONAL_JUMP)
// 00427994: LEA EAX,[EAX]
// 0042799a: LEA EDX,[EDX]
// 004279a0: PUSH EDI
//   Label: LAB_004279a0
// 004279a1: CALL core_bugs.cpp_FUN_004272f0
//   XREF to: 004272f0 (UNCONDITIONAL_CALL)
// 004279a6: ADD ESP,0x4
// 004279a9: MOV ESP,EBP
// 004279ab: POP EBP
// 004279ac: POP EDI
// 004279ad: POP ESI
// 004279ae: POP EBX
// 004279af: RET
