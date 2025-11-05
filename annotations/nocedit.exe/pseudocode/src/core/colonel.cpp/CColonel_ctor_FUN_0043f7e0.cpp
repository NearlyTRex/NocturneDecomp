// Name: core_colonel.cpp_CColonel_ctor_FUN_0043f7e0
// Address: 0043f7e0
// Address Range: [[0043f7e0, 0043f843]]
// Convention: __cdecl
// Signature: CColonel * core_colonel.cpp_CColonel_ctor_FUN_0043f7e0(CColonel * this_ptr)
// Cross-references:
//   core_colonel.cpp_FUN_0043f7a0 (0043f7a0) at 0043f7ba [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_colonel_dfm_00618b8e
//   CDemonActor_vtable PTR_core_colonel.cpp_FUN_0065bd54
// Function calls:
//   core_hero.cpp_FUN_004f2340
//   core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840

#include "nocturne.h"

CColonel * __cdecl core_colonel_cpp_CColonel_ctor_FUN_0043f7e0(CColonel *this_ptr)

{
  CColonel *pCVar1;
  
  pCVar1 = (CColonel *)core_hero_cpp_FUN_004f2340();
  (pCVar1->base_hero).base_character.base_actor.vtable = &PTR_core_colonel_cpp_FUN_0065bd54;
  pCVar1->field1_0x1fbd4[0] = '\0';
  pCVar1->field1_0x1fbd4[1] = '\0';
  pCVar1->field1_0x1fbd4[2] = '\0';
  pCVar1->field1_0x1fbd4[3] = '\0';
  pCVar1->field1_0x1fbd4[4] = '\0';
  pCVar1->field1_0x1fbd4[5] = '\0';
  pCVar1->field1_0x1fbd4[6] = '\0';
  pCVar1->field1_0x1fbd4[7] = '\0';
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar1->base_hero).base_character.model,"colonel.dfm");
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
// 0043f7e0: PUSH EBX
//   Label: core_colonel.cpp_CColonel_ctor_FUN_0043f7e0
// 0043f7e1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0043f7e5: PUSH EDX
// 0043f7e6: CALL core_hero.cpp_FUN_004f2340
//   XREF to: 004f2340 (UNCONDITIONAL_CALL)
// 0043f7eb: MOV EBX,EAX
// 0043f7ed: ADD EAX,0x158
// 0043f7f2: ADD ESP,0x4
// 0043f7f5: MOV dword ptr [EAX + -0x4],0x65bd54
//   XREF to: 0065bd54 (DATA)
// 0043f7fc: PUSH 0x618b8e
//   XREF to: 00618b8e (DATA)
// 0043f801: MOV dword ptr [EAX + 0x1fa7c],0x0
// 0043f80b: PUSH EAX
// 0043f80c: MOV dword ptr [EAX + 0x1fa80],0x0
// 0043f816: CALL core_skeleton.cpp_CDeformableModelInstance_init_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 0043f81b: LEA EAX,[EBX + 0x1fbdc]
// 0043f821: MOV dword ptr [EBX + 0x1fbe8],0x3f800000
// 0043f82b: MOV dword ptr [EAX + 0x8],0x0
// 0043f832: ADD ESP,0x8
// 0043f835: MOV EDX,dword ptr [EAX + 0x8]
// 0043f838: MOV dword ptr [EAX + 0x4],EDX
// 0043f83b: MOV EDX,dword ptr [EAX + 0x4]
// 0043f83e: MOV dword ptr [EAX],EDX
// 0043f840: MOV EAX,EBX
// 0043f842: POP EBX
// 0043f843: RET
