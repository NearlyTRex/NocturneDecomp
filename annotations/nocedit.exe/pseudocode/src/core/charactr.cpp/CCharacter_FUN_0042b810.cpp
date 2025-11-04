// Name: core_charactr.cpp_CCharacter_FUN_0042b810
// Address: 0042b810
// Address Range: [[0042b810, 0042b89e]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b810(CCharacter * this_ptr)
// Cross-references:
//   core_bride.cpp_FUN_00423a30 (00423a30) at 00424541 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e813c [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005fa015 [UNCONDITIONAL_CALL]
// Globals:
//   CGore* g_CGorePtr = 02d83364
//   CGore g_CGoreInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_gore.cpp_FUN_004edaa0
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b810(CCharacter *this_ptr)

{
  int iVar1;
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  float in_stack_00000010;
  undefined1 auStack_20 [28];
  
  if ((this_ptr->model).part_visibility_flags[in_stack_00000008] == 0) {
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(in_stack_00000010);
    if (iVar1 != 0) {
      input_local_point =
           core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     (&this_ptr->model,(CVector3f *)(auStack_20 + 8),(int)in_stack_00000010);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base_actor,(CVector3f *)auStack_20,input_local_point);
      core_gore_cpp_FUN_004edaa0();
      return;
    }
  }
  return;
}


// Assembly code:
// 0042b810: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042b810
// 0042b811: SUB ESP,0x24
// 0042b814: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0042b818: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0042b81c: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 0042b824: JZ 0x0042b82b
//   XREF to: 0042b82b (CONDITIONAL_JUMP)
// 0042b826: ADD ESP,0x24
//   Label: LAB_0042b826
// 0042b829: POP EBX
// 0042b82a: RET
// 0042b82b: PUSH dword ptr [ESP + 0x38]
//   Label: LAB_0042b82b
//   XREF to: Stack[0x10] (READ)
// 0042b82f: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 0042b834: ADD ESP,0x4
// 0042b837: TEST EAX,EAX
// 0042b839: JZ 0x0042b826
//   XREF to: 0042b826 (CONDITIONAL_JUMP)
// 0042b83b: PUSH EDI
// 0042b83c: PUSH ESI
// 0042b83d: MOV ECX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0xc] (READ)
// 0042b841: PUSH ECX
// 0042b842: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x1c] (DATA)
// 0042b846: PUSH EAX
// 0042b847: LEA EAX,[EBX + 0x158]
// 0042b84d: PUSH EAX
// 0042b84e: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 0042b853: ADD ESP,0xc
// 0042b856: PUSH EAX
// 0042b857: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x28] (DATA)
// 0042b85b: PUSH EAX
// 0042b85c: PUSH EBX
// 0042b85d: XOR ESI,ESI
// 0042b85f: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042b864: ADD ESP,0xc
// 0042b867: MOV EDI,0x40e00000
// 0042b86c: MOV dword ptr [ESP + 0x20],ESI
//   XREF to: Stack[-0x10] (WRITE)
// 0042b870: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[-0xc] (WRITE)
// 0042b874: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: Stack[-0x8] (WRITE)
// 0042b878: MOV EAX,dword ptr [EBX + 0x2610]
// 0042b87e: PUSH EAX
// 0042b87f: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x10] (DATA)
// 0042b883: PUSH EAX
// 0042b884: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x28] (DATA)
// 0042b888: PUSH EAX
// 0042b889: MOV EDX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0042b88f: PUSH EDX
//   XREF to: 02d83364 (DATA)
// 0042b890: CALL core_gore.cpp_FUN_004edaa0
//   XREF to: 004edaa0 (UNCONDITIONAL_CALL)
// 0042b895: ADD ESP,0x10
// 0042b898: POP ESI
// 0042b899: POP EDI
// 0042b89a: ADD ESP,0x24
// 0042b89d: POP EBX
// 0042b89e: RET
