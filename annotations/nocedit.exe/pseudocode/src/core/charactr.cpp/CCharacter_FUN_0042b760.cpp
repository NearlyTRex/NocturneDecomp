// Name: core_charactr.cpp_CCharacter_FUN_0042b760
// Address: 0042b760
// Address Range: [[0042b760, 0042b801]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b760(CCharacter * this_ptr)
// Cross-references:
//   core_bride.cpp_FUN_00423a30 (00423a30) at 004244b1 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e80ab [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f9f83 [UNCONDITIONAL_CALL]
// Globals:
//   CGore* g_CGorePtr = 02d83364
//   CGore g_CGoreInstance
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   core_actor.cpp_randomChance_FUN_0040cd10
//   core_gore.cpp_FUN_004edaa0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b760(CCharacter *this_ptr)

{
  int iVar1;
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  float in_stack_00000010;
  CVector3f local_28 [2];
  CVector3f local_10;
  
  if ((this_ptr->model).part_visibility_flags[in_stack_00000008] == 0) {
    iVar1 = core_actor_cpp_randomChance_FUN_0040cd10(in_stack_00000010);
    if (iVar1 != 0) {
      input_local_point = (CVector3f *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base_actor,(CVector3f *)&local_10.z,input_local_point);
      local_28[0].x = -3.0;
      local_28[0].y = 0.0;
      local_28[0].z = 0.0;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
                (&this_ptr->base_actor,&local_10,local_28);
      core_gore_cpp_FUN_004edaa0();
      return;
    }
  }
  return;
}


// Assembly code:
// 0042b760: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042b760
// 0042b761: SUB ESP,0x30
// 0042b764: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 0042b768: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 0042b76c: CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0
// 0042b774: JZ 0x0042b77b
//   XREF to: 0042b77b (CONDITIONAL_JUMP)
// 0042b776: ADD ESP,0x30
//   Label: LAB_0042b776
// 0042b779: POP EBX
// 0042b77a: RET
// 0042b77b: PUSH dword ptr [ESP + 0x44]
//   Label: LAB_0042b77b
//   XREF to: Stack[0x10] (READ)
// 0042b77f: CALL core_actor.cpp_randomChance_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 0042b784: ADD ESP,0x4
// 0042b787: TEST EAX,EAX
// 0042b789: JZ 0x0042b776
//   XREF to: 0042b776 (CONDITIONAL_JUMP)
// 0042b78b: PUSH EDI
// 0042b78c: PUSH ESI
// 0042b78d: MOV ECX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0xc] (READ)
// 0042b791: PUSH ECX
// 0042b792: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x28] (DATA)
// 0042b796: PUSH EAX
// 0042b797: LEA EAX,[EBX + 0x158]
// 0042b79d: PUSH EAX
// 0042b79e: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 0042b7a3: ADD ESP,0xc
// 0042b7a6: PUSH EAX
// 0042b7a7: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x10] (DATA)
// 0042b7ab: PUSH EAX
// 0042b7ac: PUSH EBX
// 0042b7ad: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0042b7b2: ADD ESP,0xc
// 0042b7b5: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x34] (DATA)
// 0042b7b9: PUSH EAX
// 0042b7ba: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x1c] (DATA)
// 0042b7be: MOV ESI,0xc0400000
// 0042b7c3: PUSH EAX
// 0042b7c4: XOR EDI,EDI
// 0042b7c6: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 0042b7ca: PUSH EBX
// 0042b7cb: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 0042b7cf: MOV dword ptr [ESP + 0x1c],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 0042b7d3: CALL core_actor.cpp_CDemonActor_transformVector_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 0042b7d8: ADD ESP,0xc
// 0042b7db: MOV EAX,dword ptr [EBX + 0x2610]
// 0042b7e1: PUSH EAX
// 0042b7e2: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x1c] (DATA)
// 0042b7e6: PUSH EAX
// 0042b7e7: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x10] (DATA)
// 0042b7eb: PUSH EAX
// 0042b7ec: MOV EDX,dword ptr [0x0067b9a0]
//   XREF to: 02d83364 (PARAM)
//   XREF to: 0067b9a0 (READ)
// 0042b7f2: PUSH EDX
//   XREF to: 02d83364 (DATA)
// 0042b7f3: CALL core_gore.cpp_FUN_004edaa0
//   XREF to: 004edaa0 (UNCONDITIONAL_CALL)
// 0042b7f8: ADD ESP,0x10
// 0042b7fb: POP ESI
// 0042b7fc: POP EDI
// 0042b7fd: ADD ESP,0x30
// 0042b800: POP EBX
// 0042b801: RET
