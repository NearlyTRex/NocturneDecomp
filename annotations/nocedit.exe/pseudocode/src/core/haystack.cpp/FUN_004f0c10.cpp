// Name: core_haystack.cpp_FUN_004f0c10
// Address: 004f0c10
// Address Range: [[004f0c10, 004f0c73]]
// Convention: __cdecl
// Signature: CHaystack * core_haystack.cpp_FUN_004f0c10(CHaystack * this_ptr)
// Cross-references:
//   core_haystack.cpp_FUN_004f0bd0 (004f0bd0) at 004f0bea [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_haystack_dfm_0062e7fa
//   CDemonActor_vtable PTR_core_haystack.cpp_FUN_0065f3f4
// Function calls:
//   core_hero.cpp_FUN_004f2340
//   core_skeleton.cpp_FUN_005a0840

#include "nocturne.h"

CHaystack * __cdecl core_haystack_cpp_FUN_004f0c10(CHaystack *this_ptr)

{
  CHaystack *pCVar1;
  
  pCVar1 = (CHaystack *)core_hero_cpp_FUN_004f2340();
  (pCVar1->base_hero).base_character.base_actor.metadata.vtable =
       &PTR_core_haystack_cpp_FUN_0065f3f4;
  pCVar1->field1_0x1fbd4[0] = '\0';
  pCVar1->field1_0x1fbd4[1] = '\0';
  pCVar1->field1_0x1fbd4[2] = '\0';
  pCVar1->field1_0x1fbd4[3] = '\0';
  pCVar1->field1_0x1fbd4[4] = '\0';
  pCVar1->field1_0x1fbd4[5] = '\0';
  pCVar1->field1_0x1fbd4[6] = '\0';
  pCVar1->field1_0x1fbd4[7] = '\0';
  core_skeleton_cpp_FUN_005a0840();
  pCVar1->field1_0x1fbd4[0x14] = '\0';
  pCVar1->field1_0x1fbd4[0x15] = '\0';
  pCVar1->field1_0x1fbd4[0x16] = -0x80;
  pCVar1->field1_0x1fbd4[0x17] = '?';
  pCVar1->field1_0x1fbd4[0x10] = '\0';
  pCVar1->field1_0x1fbd4[0x11] = '\0';
  pCVar1->field1_0x1fbd4[0x12] = '\0';
  pCVar1->field1_0x1fbd4[0x13] = '\0';
  *(undefined4 *)(pCVar1->field1_0x1fbd4 + 0xc) = *(undefined4 *)(pCVar1->field1_0x1fbd4 + 0x10);
  *(undefined4 *)(pCVar1->field1_0x1fbd4 + 8) = *(undefined4 *)(pCVar1->field1_0x1fbd4 + 0xc);
  return pCVar1;
}


// Assembly code:
// 004f0c10: PUSH EBX
//   Label: core_haystack.cpp_FUN_004f0c10
// 004f0c11: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f0c15: PUSH EDX
// 004f0c16: CALL core_hero.cpp_FUN_004f2340
//   XREF to: 004f2340 (UNCONDITIONAL_CALL)
// 004f0c1b: MOV EBX,EAX
// 004f0c1d: ADD EAX,0x158
// 004f0c22: ADD ESP,0x4
// 004f0c25: MOV dword ptr [EAX + -0x4],0x65f3f4
//   XREF to: 0065f3f4 (DATA)
// 004f0c2c: PUSH 0x62e7fa
//   XREF to: 0062e7fa (DATA)
// 004f0c31: MOV dword ptr [EAX + 0x1fa7c],0x0
// 004f0c3b: PUSH EAX
// 004f0c3c: MOV dword ptr [EAX + 0x1fa80],0x0
// 004f0c46: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004f0c4b: LEA EAX,[EBX + 0x1fbdc]
// 004f0c51: MOV dword ptr [EBX + 0x1fbe8],0x3f800000
// 004f0c5b: MOV dword ptr [EAX + 0x8],0x0
// 004f0c62: ADD ESP,0x8
// 004f0c65: MOV EDX,dword ptr [EAX + 0x8]
// 004f0c68: MOV dword ptr [EAX + 0x4],EDX
// 004f0c6b: MOV EDX,dword ptr [EAX + 0x4]
// 004f0c6e: MOV dword ptr [EAX],EDX
// 004f0c70: MOV EAX,EBX
// 004f0c72: POP EBX
// 004f0c73: RET
