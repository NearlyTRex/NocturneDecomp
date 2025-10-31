// Name: core_icepick.cpp_FUN_004f7df0
// Address: 004f7df0
// Address Range: [[004f7df0, 004f7e71]]
// Convention: __cdecl
// Signature: CIcePick * core_icepick.cpp_FUN_004f7df0(CIcePick * this_ptr)
// Cross-references:
//   core_icepick.cpp_FUN_004f7db0 (004f7db0) at 004f7dca [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_icepick_dfm_0062f5a8
//   CDemonActor_vtable PTR_core_icepick.cpp_FUN_00660034
// Function calls:
//   core_hero.cpp_FUN_004f2340
//   core_skeleton.cpp_FUN_005a0840

#include "nocturne.h"

CIcePick * __cdecl core_icepick_cpp_FUN_004f7df0(CIcePick *this_ptr)

{
  CIcePick *pCVar1;
  
  pCVar1 = (CIcePick *)core_hero_cpp_FUN_004f2340();
  (pCVar1->base_hero).base_character.base_actor.metadata.vtable = &PTR_core_icepick_cpp_FUN_00660034
  ;
  pCVar1->field1_0x1fbd4[0] = '\0';
  pCVar1->field1_0x1fbd4[1] = '\0';
  pCVar1->field1_0x1fbd4[2] = '\0';
  pCVar1->field1_0x1fbd4[3] = '\0';
  pCVar1->field1_0x1fbd4[4] = '\0';
  pCVar1->field1_0x1fbd4[5] = '\0';
  pCVar1->field1_0x1fbd4[6] = '\0';
  pCVar1->field1_0x1fbd4[7] = '\0';
  core_skeleton_cpp_FUN_005a0840();
  pCVar1->field1_0x1fbd4[0x1c] = '\0';
  pCVar1->field1_0x1fbd4[0x1d] = '\0';
  pCVar1->field1_0x1fbd4[0x1e] = -0x80;
  pCVar1->field1_0x1fbd4[0x1f] = '?';
  pCVar1->field1_0x1fbd4[0x18] = '\0';
  pCVar1->field1_0x1fbd4[0x19] = '\0';
  pCVar1->field1_0x1fbd4[0x1a] = '\0';
  pCVar1->field1_0x1fbd4[0x1b] = '\0';
  *(undefined4 *)(pCVar1->field1_0x1fbd4 + 0x14) = *(undefined4 *)(pCVar1->field1_0x1fbd4 + 0x18);
  *(undefined4 *)(pCVar1->field1_0x1fbd4 + 0x10) = *(undefined4 *)(pCVar1->field1_0x1fbd4 + 0x14);
  pCVar1->field1_0x1fbd4[0x20] = '\0';
  pCVar1->field1_0x1fbd4[0x21] = '\0';
  pCVar1->field1_0x1fbd4[0x22] = '\0';
  pCVar1->field1_0x1fbd4[0x23] = '\0';
  pCVar1->field1_0x1fbd4[0x24] = '\0';
  pCVar1->field1_0x1fbd4[0x25] = '\0';
  pCVar1->field1_0x1fbd4[0x26] = '\0';
  pCVar1->field1_0x1fbd4[0x27] = '\0';
  (pCVar1->base_hero).base_character.hit_points = 300.0;
  return pCVar1;
}


// Assembly code:
// 004f7df0: PUSH EBX
//   Label: core_icepick.cpp_FUN_004f7df0
// 004f7df1: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f7df5: PUSH EDX
// 004f7df6: CALL core_hero.cpp_FUN_004f2340
//   XREF to: 004f2340 (UNCONDITIONAL_CALL)
// 004f7dfb: MOV EBX,EAX
// 004f7dfd: ADD EAX,0x158
// 004f7e02: ADD ESP,0x4
// 004f7e05: MOV dword ptr [EAX + -0x4],0x660034
//   XREF to: 00660034 (DATA)
// 004f7e0c: PUSH 0x62f5a8
//   XREF to: 0062f5a8 (DATA)
// 004f7e11: MOV dword ptr [EAX + 0x1fa7c],0x0
// 004f7e1b: PUSH EAX
// 004f7e1c: MOV dword ptr [EAX + 0x1fa80],0x0
// 004f7e26: CALL core_skeleton.cpp_FUN_005a0840
//   XREF to: 005a0840 (UNCONDITIONAL_CALL)
// 004f7e2b: LEA EAX,[EBX + 0x1fbe4]
// 004f7e31: MOV dword ptr [EBX + 0x1fbf0],0x3f800000
// 004f7e3b: MOV dword ptr [EAX + 0x8],0x0
// 004f7e42: MOV EDX,dword ptr [EAX + 0x8]
// 004f7e45: MOV dword ptr [EAX + 0x4],EDX
// 004f7e48: MOV EDX,dword ptr [EAX + 0x4]
// 004f7e4b: MOV dword ptr [EAX],EDX
// 004f7e4d: MOV dword ptr [EBX + 0x1fbf4],0x0
// 004f7e57: ADD ESP,0x8
// 004f7e5a: MOV dword ptr [EBX + 0x1fbf8],0x0
// 004f7e64: MOV EAX,EBX
// 004f7e66: MOV dword ptr [EBX + 0x243c],0x43960000
// 004f7e70: POP EBX
// 004f7e71: RET
