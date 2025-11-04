// Name: core_drone.cpp_FUN_0048f4d0
// Address: 0048f4d0
// Address Range: [[0048f4d0, 0048f518]]
// Convention: unknown
// Signature: undefined core_drone.cpp_FUN_0048f4d0()
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_drone.cpp_FUN_0048f4d0(undefined4 param_1, undefined4 param_2)
    */

undefined4 core_drone_cpp_FUN_0048f4d0(void)

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
// 0048f4d0: PUSH EBX
//   Label: core_drone.cpp_FUN_0048f4d0
// 0048f4d1: SUB ESP,0x18
// 0048f4d4: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0048f4d8: PUSH 0x0
// 0048f4da: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x10] (DATA)
// 0048f4de: PUSH EAX
// 0048f4df: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0048f4e3: ADD EAX,0x158
// 0048f4e8: PUSH EAX
// 0048f4e9: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 0048f4ee: ADD ESP,0xc
// 0048f4f1: CMP EBX,EAX
// 0048f4f3: JNZ 0x0048f4ff
//   XREF to: 0048f4ff (CONDITIONAL_JUMP)
// 0048f4f5: MOV EAX,0x1
// 0048f4fa: ADD ESP,0x18
// 0048f4fd: POP EBX
// 0048f4fe: RET
// 0048f4ff: MOV EDX,dword ptr [EAX]
//   Label: LAB_0048f4ff
// 0048f501: MOV dword ptr [EBX],EDX
// 0048f503: MOV EDX,dword ptr [EAX + 0x4]
// 0048f506: MOV dword ptr [EBX + 0x4],EDX
// 0048f509: MOV EDX,dword ptr [EAX + 0x8]
// 0048f50c: MOV dword ptr [EBX + 0x8],EDX
// 0048f50f: MOV EAX,0x1
// 0048f514: ADD ESP,0x18
// 0048f517: POP EBX
// 0048f518: RET
