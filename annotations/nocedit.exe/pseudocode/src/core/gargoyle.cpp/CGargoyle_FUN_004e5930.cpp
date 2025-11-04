// Name: core_gargoyle.cpp_CGargoyle_FUN_004e5930
// Address: 004e5930
// Address Range: [[004e5930, 004e5ace]]
// Convention: unknown
// Signature: undefined core_gargoyle.cpp_CGargoyle_FUN_004e5930()
// Globals:
//   undefined4 DAT_02d83200
//   undefined4 DAT_02d83214
//   undefined4 DAT_02d83218
//   undefined4 DAT_02d83224
//   undefined4 DAT_02d8322c
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_gargoyle.cpp_CGargoyle_FUN_004e5930(CGargoyle* param_1,
   undefined4 param_2) */

int core_gargoyle_cpp_CGargoyle_FUN_004e5930(void)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f CStack_3c;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  
  iVar3 = 1;
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                      (CVector3f *)&stack0xffffffb4,DAT_02d83200);
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbebc) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&CStack_3c,
                        DAT_02d83214);
    if (in_stack_00000008 + 1 != pCVar1) {
      in_stack_00000008[1].x = pCVar1->x;
      in_stack_00000008[1].y = pCVar1->y;
      in_stack_00000008[1].z = pCVar1->z;
    }
    iVar3 = 2;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbec4) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&CStack_2c,
                        DAT_02d83218);
    pCVar2 = in_stack_00000008 + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbedc) * 4) != 0) {
    pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                       ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                        (CVector3f *)&stack0xffffffec,DAT_02d83224);
    pCVar2 = in_stack_00000008 + iVar3;
    if (pCVar2 != pCVar1) {
      pCVar2->x = pCVar1->x;
      pCVar2->y = pCVar1->y;
      pCVar2->z = pCVar1->z;
    }
    iVar3 = iVar3 + 1;
  }
  if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbee0) * 4) == 0) {
    return iVar3;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&CStack_20,
                      DAT_02d8322c);
  in_stack_00000008 = in_stack_00000008 + iVar3;
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  return iVar3 + 1;
}


// Assembly code:
// 004e5930: PUSH EBX
//   Label: core_gargoyle.cpp_CGargoyle_FUN_004e5930
// 004e5931: PUSH ESI
// 004e5932: PUSH EDI
// 004e5933: PUSH EBP
// 004e5934: SUB ESP,0x3c
// 004e5937: MOV ESI,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 004e593b: MOV EDI,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x8] (READ)
// 004e593f: MOV EDX,dword ptr [0x02d83200]
//   XREF to: 02d83200 (READ)
// 004e5945: PUSH EDX
// 004e5946: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4c] (DATA)
// 004e594a: PUSH EAX
// 004e594b: LEA EAX,[ESI + 0x158]
// 004e5951: PUSH EAX
// 004e5952: MOV EBX,0x1
// 004e5957: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004e595c: ADD ESP,0xc
// 004e595f: CMP EDI,EAX
// 004e5961: JNZ 0x004e5a70
//   XREF to: 004e5a70 (CONDITIONAL_JUMP)
// 004e5967: MOV EAX,dword ptr [ESI + 0xbebc]
//   Label: LAB_004e5967
// 004e596d: CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0
// 004e5975: JZ 0x004e59b7
//   XREF to: 004e59b7 (CONDITIONAL_JUMP)
// 004e5977: MOV EBP,dword ptr [0x02d83214]
//   XREF to: 02d83214 (READ)
// 004e597d: PUSH EBP
// 004e597e: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x40] (DATA)
// 004e5982: PUSH EAX
// 004e5983: LEA EAX,[ESI + 0x158]
// 004e5989: PUSH EAX
// 004e598a: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004e598f: MOV EDX,EAX
// 004e5991: LEA EAX,[EBX*0x4 + 0x0]
// 004e5998: SUB EAX,EBX
// 004e599a: SHL EAX,0x2
// 004e599d: ADD EAX,EDI
// 004e599f: ADD ESP,0xc
// 004e59a2: CMP EAX,EDX
// 004e59a4: JZ 0x004e59b6
//   XREF to: 004e59b6 (CONDITIONAL_JUMP)
// 004e59a6: MOV ECX,dword ptr [EDX]
// 004e59a8: MOV dword ptr [EAX],ECX
// 004e59aa: MOV ECX,dword ptr [EDX + 0x4]
// 004e59ad: MOV dword ptr [EAX + 0x4],ECX
// 004e59b0: MOV ECX,dword ptr [EDX + 0x8]
// 004e59b3: MOV dword ptr [EAX + 0x8],ECX
// 004e59b6: INC EBX
//   Label: LAB_004e59b6
// 004e59b7: MOV EAX,dword ptr [ESI + 0xbec4]
//   Label: LAB_004e59b7
// 004e59bd: CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0
// 004e59c5: JZ 0x004e5a07
//   XREF to: 004e5a07 (CONDITIONAL_JUMP)
// 004e59c7: MOV ECX,dword ptr [0x02d83218]
//   XREF to: 02d83218 (READ)
// 004e59cd: PUSH ECX
// 004e59ce: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x34] (DATA)
// 004e59d2: PUSH EAX
// 004e59d3: LEA EAX,[ESI + 0x158]
// 004e59d9: PUSH EAX
// 004e59da: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004e59df: MOV EDX,EAX
// 004e59e1: LEA EAX,[EBX*0x4 + 0x0]
// 004e59e8: SUB EAX,EBX
// 004e59ea: SHL EAX,0x2
// 004e59ed: ADD EAX,EDI
// 004e59ef: ADD ESP,0xc
// 004e59f2: CMP EAX,EDX
// 004e59f4: JZ 0x004e5a06
//   XREF to: 004e5a06 (CONDITIONAL_JUMP)
// 004e59f6: MOV ECX,dword ptr [EDX]
// 004e59f8: MOV dword ptr [EAX],ECX
// 004e59fa: MOV ECX,dword ptr [EDX + 0x4]
// 004e59fd: MOV dword ptr [EAX + 0x4],ECX
// 004e5a00: MOV ECX,dword ptr [EDX + 0x8]
// 004e5a03: MOV dword ptr [EAX + 0x8],ECX
// 004e5a06: INC EBX
//   Label: LAB_004e5a06
// 004e5a07: MOV EAX,dword ptr [ESI + 0xbedc]
//   Label: LAB_004e5a07
// 004e5a0d: CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0
// 004e5a15: JZ 0x004e5a56
//   XREF to: 004e5a56 (CONDITIONAL_JUMP)
// 004e5a17: MOV EAX,[0x02d83224]
//   XREF to: 02d83224 (READ)
// 004e5a1c: PUSH EAX
// 004e5a1d: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x1c] (DATA)
// 004e5a21: PUSH EAX
// 004e5a22: LEA EAX,[ESI + 0x158]
// 004e5a28: PUSH EAX
// 004e5a29: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004e5a2e: MOV EDX,EAX
// 004e5a30: LEA EAX,[EBX*0x4 + 0x0]
// 004e5a37: SUB EAX,EBX
// 004e5a39: SHL EAX,0x2
// 004e5a3c: ADD EAX,EDI
// 004e5a3e: ADD ESP,0xc
// 004e5a41: CMP EAX,EDX
// 004e5a43: JZ 0x004e5a55
//   XREF to: 004e5a55 (CONDITIONAL_JUMP)
// 004e5a45: MOV ECX,dword ptr [EDX]
// 004e5a47: MOV dword ptr [EAX],ECX
// 004e5a49: MOV ECX,dword ptr [EDX + 0x4]
// 004e5a4c: MOV dword ptr [EAX + 0x4],ECX
// 004e5a4f: MOV ECX,dword ptr [EDX + 0x8]
// 004e5a52: MOV dword ptr [EAX + 0x8],ECX
// 004e5a55: INC EBX
//   Label: LAB_004e5a55
// 004e5a56: MOV EAX,dword ptr [ESI + 0xbee0]
//   Label: LAB_004e5a56
// 004e5a5c: CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0
// 004e5a64: JNZ 0x004e5a85
//   XREF to: 004e5a85 (CONDITIONAL_JUMP)
// 004e5a66: MOV EAX,EBX
// 004e5a68: ADD ESP,0x3c
// 004e5a6b: POP EBP
// 004e5a6c: POP EDI
// 004e5a6d: POP ESI
// 004e5a6e: POP EBX
// 004e5a6f: RET
// 004e5a70: MOV EDX,dword ptr [EAX]
//   Label: LAB_004e5a70
// 004e5a72: MOV dword ptr [EDI],EDX
// 004e5a74: MOV EDX,dword ptr [EAX + 0x4]
// 004e5a77: MOV dword ptr [EDI + 0x4],EDX
// 004e5a7a: MOV EDX,dword ptr [EAX + 0x8]
// 004e5a7d: MOV dword ptr [EDI + 0x8],EDX
// 004e5a80: JMP 0x004e5967
//   XREF to: 004e5967 (UNCONDITIONAL_JUMP)
// 004e5a85: MOV ECX,dword ptr [0x02d8322c]
//   Label: LAB_004e5a85
//   XREF to: 02d8322c (READ)
// 004e5a8b: PUSH ECX
// 004e5a8c: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x28] (DATA)
// 004e5a90: PUSH EAX
// 004e5a91: ADD ESI,0x158
// 004e5a97: PUSH ESI
// 004e5a98: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004e5a9d: MOV ESI,EAX
// 004e5a9f: LEA EAX,[EBX*0x4 + 0x0]
// 004e5aa6: SUB EAX,EBX
// 004e5aa8: SHL EAX,0x2
// 004e5aab: ADD EDI,EAX
// 004e5aad: ADD ESP,0xc
// 004e5ab0: CMP EDI,ESI
// 004e5ab2: JZ 0x004e5ac4
//   XREF to: 004e5ac4 (CONDITIONAL_JUMP)
// 004e5ab4: MOV EAX,dword ptr [ESI]
// 004e5ab6: MOV dword ptr [EDI],EAX
// 004e5ab8: MOV EAX,dword ptr [ESI + 0x4]
// 004e5abb: MOV dword ptr [EDI + 0x4],EAX
// 004e5abe: MOV EAX,dword ptr [ESI + 0x8]
// 004e5ac1: MOV dword ptr [EDI + 0x8],EAX
// 004e5ac4: INC EBX
//   Label: LAB_004e5ac4
// 004e5ac5: MOV EAX,EBX
// 004e5ac7: ADD ESP,0x3c
// 004e5aca: POP EBP
// 004e5acb: POP EDI
// 004e5acc: POP ESI
// 004e5acd: POP EBX
// 004e5ace: RET
