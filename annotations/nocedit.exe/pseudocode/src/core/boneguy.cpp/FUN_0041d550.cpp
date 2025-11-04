// Name: core_boneguy.cpp_FUN_0041d550
// Address: 0041d550
// Address Range: [[0041d550, 0041d673]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041d550()
// Globals:
//   undefined4 DAT_00822944
//   undefined4 DAT_00822958
//   undefined4 DAT_0082295c
//   undefined4 DAT_00822968
//   undefined4 DAT_0082296c
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_boneguy.cpp_FUN_0041d550(undefined4 param_1, undefined4
   param_2) */

undefined4 core_boneguy_cpp_FUN_0041d550(void)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  undefined1 auStack_38 [24];
  CVector3f CStack_20;
  
  if (*(int *)(in_stack_00000004 + 0xc4dc) != 0) {
    return 0;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                      (CVector3f *)(auStack_38 + 8),DAT_00822944);
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&CStack_20,
                      DAT_00822958);
  if (in_stack_00000008 + 1 != pCVar1) {
    in_stack_00000008[1].x = pCVar1->x;
    in_stack_00000008[1].y = pCVar1->y;
    in_stack_00000008[1].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                      (CVector3f *)&stack0xfffffff0,DAT_0082295c);
  if (in_stack_00000008 + 2 != pCVar1) {
    in_stack_00000008[2].x = pCVar1->x;
    in_stack_00000008[2].y = pCVar1->y;
    in_stack_00000008[2].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                      (CVector3f *)(auStack_38 + 8),DAT_00822968);
  if (in_stack_00000008 + 3 != pCVar1) {
    in_stack_00000008[3].x = pCVar1->x;
    in_stack_00000008[3].y = pCVar1->y;
    in_stack_00000008[3].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                      (CVector3f *)auStack_38,DAT_0082296c);
  if (in_stack_00000008 + 4 != pCVar1) {
    in_stack_00000008[4].x = pCVar1->x;
    in_stack_00000008[4].y = pCVar1->y;
    in_stack_00000008[4].z = pCVar1->z;
  }
  return 5;
}


// Assembly code:
// 0041d550: PUSH EBX
//   Label: core_boneguy.cpp_FUN_0041d550
// 0041d551: PUSH ESI
// 0041d552: PUSH EBP
// 0041d553: SUB ESP,0x3c
// 0041d556: MOV ESI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 0041d55a: MOV EBX,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 0041d55e: CMP dword ptr [ESI + 0xc4dc],0x0
// 0041d565: JZ 0x0041d570
//   XREF to: 0041d570 (CONDITIONAL_JUMP)
// 0041d567: XOR EAX,EAX
// 0041d569: ADD ESP,0x3c
// 0041d56c: POP EBP
// 0041d56d: POP ESI
// 0041d56e: POP EBX
// 0041d56f: RET
// 0041d570: MOV ECX,dword ptr [0x00822944]
//   Label: LAB_0041d570
//   XREF to: 00822944 (READ)
// 0041d576: PUSH ECX
// 0041d577: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x30] (DATA)
// 0041d57b: PUSH EAX
// 0041d57c: LEA EAX,[ESI + 0x158]
// 0041d582: PUSH EAX
// 0041d583: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 0041d588: ADD ESP,0xc
// 0041d58b: CMP EBX,EAX
// 0041d58d: JZ 0x0041d59f
//   XREF to: 0041d59f (CONDITIONAL_JUMP)
// 0041d58f: MOV EDX,dword ptr [EAX]
// 0041d591: MOV dword ptr [EBX],EDX
// 0041d593: MOV EDX,dword ptr [EAX + 0x4]
// 0041d596: MOV dword ptr [EBX + 0x4],EDX
// 0041d599: MOV EDX,dword ptr [EAX + 0x8]
// 0041d59c: MOV dword ptr [EBX + 0x8],EDX
// 0041d59f: PUSH EDI
//   Label: LAB_0041d59f
// 0041d5a0: MOV EDI,dword ptr [0x00822958]
//   XREF to: 00822958 (READ)
// 0041d5a6: PUSH EDI
// 0041d5a7: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0x24] (DATA)
// 0041d5ab: PUSH EAX
// 0041d5ac: LEA EAX,[ESI + 0x158]
// 0041d5b2: PUSH EAX
// 0041d5b3: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 0041d5b8: LEA EDX,[EBX + 0xc]
// 0041d5bb: ADD ESP,0xc
// 0041d5be: CMP EDX,EAX
// 0041d5c0: JZ 0x0041d5d2
//   XREF to: 0041d5d2 (CONDITIONAL_JUMP)
// 0041d5c2: MOV ECX,dword ptr [EAX]
// 0041d5c4: MOV dword ptr [EDX],ECX
// 0041d5c6: MOV ECX,dword ptr [EAX + 0x4]
// 0041d5c9: MOV dword ptr [EDX + 0x4],ECX
// 0041d5cc: MOV ECX,dword ptr [EAX + 0x8]
// 0041d5cf: MOV dword ptr [EDX + 0x8],ECX
// 0041d5d2: MOV EBP,dword ptr [0x0082295c]
//   Label: LAB_0041d5d2
//   XREF to: 0082295c (READ)
// 0041d5d8: PUSH EBP
// 0041d5d9: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x18] (DATA)
// 0041d5dd: PUSH EAX
// 0041d5de: LEA EAX,[ESI + 0x158]
// 0041d5e4: PUSH EAX
// 0041d5e5: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 0041d5ea: LEA EDX,[EBX + 0x18]
// 0041d5ed: ADD ESP,0xc
// 0041d5f0: CMP EDX,EAX
// 0041d5f2: JZ 0x0041d604
//   XREF to: 0041d604 (CONDITIONAL_JUMP)
// 0041d5f4: MOV ECX,dword ptr [EAX]
// 0041d5f6: MOV dword ptr [EDX],ECX
// 0041d5f8: MOV ECX,dword ptr [EAX + 0x4]
// 0041d5fb: MOV dword ptr [EDX + 0x4],ECX
// 0041d5fe: MOV ECX,dword ptr [EAX + 0x8]
// 0041d601: MOV dword ptr [EDX + 0x8],ECX
// 0041d604: MOV EAX,[0x00822968]
//   Label: LAB_0041d604
//   XREF to: 00822968 (READ)
// 0041d609: PUSH EAX
// 0041d60a: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x3c] (DATA)
// 0041d60e: PUSH EAX
// 0041d60f: LEA EAX,[ESI + 0x158]
// 0041d615: PUSH EAX
// 0041d616: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 0041d61b: LEA EDX,[EBX + 0x24]
// 0041d61e: ADD ESP,0xc
// 0041d621: CMP EDX,EAX
// 0041d623: JZ 0x0041d635
//   XREF to: 0041d635 (CONDITIONAL_JUMP)
// 0041d625: MOV ECX,dword ptr [EAX]
// 0041d627: MOV dword ptr [EDX],ECX
// 0041d629: MOV ECX,dword ptr [EAX + 0x4]
// 0041d62c: MOV dword ptr [EDX + 0x4],ECX
// 0041d62f: MOV ECX,dword ptr [EAX + 0x8]
// 0041d632: MOV dword ptr [EDX + 0x8],ECX
// 0041d635: MOV EDX,dword ptr [0x0082296c]
//   Label: LAB_0041d635
//   XREF to: 0082296c (READ)
// 0041d63b: PUSH EDX
// 0041d63c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x48] (DATA)
// 0041d640: PUSH EAX
// 0041d641: ADD ESI,0x158
// 0041d647: PUSH ESI
// 0041d648: ADD EBX,0x30
// 0041d64b: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 0041d650: ADD ESP,0xc
// 0041d653: CMP EBX,EAX
// 0041d655: JZ 0x0041d667
//   XREF to: 0041d667 (CONDITIONAL_JUMP)
// 0041d657: MOV EDX,dword ptr [EAX]
// 0041d659: MOV dword ptr [EBX],EDX
// 0041d65b: MOV EDX,dword ptr [EAX + 0x4]
// 0041d65e: MOV dword ptr [EBX + 0x4],EDX
// 0041d661: MOV EDX,dword ptr [EAX + 0x8]
// 0041d664: MOV dword ptr [EBX + 0x8],EDX
// 0041d667: MOV EAX,0x5
//   Label: LAB_0041d667
// 0041d66c: POP EDI
// 0041d66d: ADD ESP,0x3c
// 0041d670: POP EBP
// 0041d671: POP ESI
// 0041d672: POP EBX
// 0041d673: RET
