// Name: core_larva.cpp_FUN_00503c00
// Address: 00503c00
// Address Range: [[00503c00, 00503c48]]
// Convention: unknown
// Signature: undefined core_larva.cpp_FUN_00503c00()
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_larva.cpp_FUN_00503c00(undefined4 param_1, undefined4 param_2)
    */

undefined4 core_larva_cpp_FUN_00503c00(void)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f local_10;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_10,0);
  if (in_stack_00000008 == pCVar1) {
    return 1;
  }
  in_stack_00000008->x = pCVar1->x;
  in_stack_00000008->y = pCVar1->y;
  in_stack_00000008->z = pCVar1->z;
  return 1;
}


// Assembly code:
// 00503c00: PUSH EBX
//   Label: core_larva.cpp_FUN_00503c00
// 00503c01: SUB ESP,0xc
// 00503c04: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00503c08: PUSH 0x0
// 00503c0a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x10] (DATA)
// 00503c0e: PUSH EAX
// 00503c0f: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00503c13: ADD EAX,0x158
// 00503c18: PUSH EAX
// 00503c19: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00503c1e: ADD ESP,0xc
// 00503c21: CMP EBX,EAX
// 00503c23: JNZ 0x00503c2f
//   XREF to: 00503c2f (CONDITIONAL_JUMP)
// 00503c25: MOV EAX,0x1
// 00503c2a: ADD ESP,0xc
// 00503c2d: POP EBX
// 00503c2e: RET
// 00503c2f: MOV EDX,dword ptr [EAX]
//   Label: LAB_00503c2f
// 00503c31: MOV dword ptr [EBX],EDX
// 00503c33: MOV EDX,dword ptr [EAX + 0x4]
// 00503c36: MOV dword ptr [EBX + 0x4],EDX
// 00503c39: MOV EDX,dword ptr [EAX + 0x8]
// 00503c3c: MOV dword ptr [EBX + 0x8],EDX
// 00503c3f: MOV EAX,0x1
// 00503c44: ADD ESP,0xc
// 00503c47: POP EBX
// 00503c48: RET
