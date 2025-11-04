// Name: core_sentinel.cpp_FUN_00568dd0
// Address: 00568dd0
// Address Range: [[00568dd0, 00568eed]]
// Convention: unknown
// Signature: undefined core_sentinel.cpp_FUN_00568dd0()
// Globals:
//   undefined4 DAT_0311420c
//   undefined4 DAT_03114220
//   undefined4 DAT_03114224
//   undefined4 DAT_03114230
//   undefined4 DAT_03114238
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_sentinel.cpp_FUN_00568dd0(undefined4 param_1, undefined4
   param_2) */

undefined4 core_sentinel_cpp_FUN_00568dd0(void)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  undefined1 auStack_3c [24];
  CVector3f CStack_24;
  
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                      (CVector3f *)(auStack_3c + 8),DAT_0311420c);
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&CStack_24,
                      DAT_03114220);
  if (in_stack_00000008 + 1 != pCVar1) {
    in_stack_00000008[1].x = pCVar1->x;
    in_stack_00000008[1].y = pCVar1->y;
    in_stack_00000008[1].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                      (CVector3f *)&stack0xffffffec,DAT_03114224);
  if (in_stack_00000008 + 2 != pCVar1) {
    in_stack_00000008[2].x = pCVar1->x;
    in_stack_00000008[2].y = pCVar1->y;
    in_stack_00000008[2].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                      (CVector3f *)(auStack_3c + 8),DAT_03114230);
  if (in_stack_00000008 + 3 != pCVar1) {
    in_stack_00000008[3].x = pCVar1->x;
    in_stack_00000008[3].y = pCVar1->y;
    in_stack_00000008[3].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                      (CVector3f *)auStack_3c,DAT_03114238);
  if (in_stack_00000008 + 4 == pCVar1) {
    return 5;
  }
  in_stack_00000008[4].x = pCVar1->x;
  in_stack_00000008[4].y = pCVar1->y;
  in_stack_00000008[4].z = pCVar1->z;
  return 5;
}


// Assembly code:
// 00568dd0: PUSH EBX
//   Label: core_sentinel.cpp_FUN_00568dd0
// 00568dd1: PUSH ESI
// 00568dd2: PUSH EDI
// 00568dd3: PUSH EBP
// 00568dd4: SUB ESP,0x3c
// 00568dd7: MOV ESI,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x4] (READ)
// 00568ddb: MOV EBX,dword ptr [ESP + 0x54]
//   XREF to: Stack[0x8] (READ)
// 00568ddf: MOV EDX,dword ptr [0x0311420c]
//   XREF to: 0311420c (READ)
// 00568de5: PUSH EDX
// 00568de6: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x34] (DATA)
// 00568dea: PUSH EAX
// 00568deb: LEA EAX,[ESI + 0x158]
// 00568df1: PUSH EAX
// 00568df2: MOV EDI,0x5
// 00568df7: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00568dfc: ADD ESP,0xc
// 00568dff: CMP EBX,EAX
// 00568e01: JZ 0x00568e13
//   XREF to: 00568e13 (CONDITIONAL_JUMP)
// 00568e03: MOV EDX,dword ptr [EAX]
// 00568e05: MOV dword ptr [EBX],EDX
// 00568e07: MOV EDX,dword ptr [EAX + 0x4]
// 00568e0a: MOV dword ptr [EBX + 0x4],EDX
// 00568e0d: MOV EDX,dword ptr [EAX + 0x8]
// 00568e10: MOV dword ptr [EBX + 0x8],EDX
// 00568e13: MOV ECX,dword ptr [0x03114220]
//   Label: LAB_00568e13
//   XREF to: 03114220 (READ)
// 00568e19: PUSH ECX
// 00568e1a: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x28] (DATA)
// 00568e1e: PUSH EAX
// 00568e1f: LEA EAX,[ESI + 0x158]
// 00568e25: PUSH EAX
// 00568e26: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00568e2b: LEA EDX,[EBX + 0xc]
// 00568e2e: ADD ESP,0xc
// 00568e31: CMP EDX,EAX
// 00568e33: JZ 0x00568e45
//   XREF to: 00568e45 (CONDITIONAL_JUMP)
// 00568e35: MOV ECX,dword ptr [EAX]
// 00568e37: MOV dword ptr [EDX],ECX
// 00568e39: MOV ECX,dword ptr [EAX + 0x4]
// 00568e3c: MOV dword ptr [EDX + 0x4],ECX
// 00568e3f: MOV ECX,dword ptr [EAX + 0x8]
// 00568e42: MOV dword ptr [EDX + 0x8],ECX
// 00568e45: MOV EBP,dword ptr [0x03114224]
//   Label: LAB_00568e45
//   XREF to: 03114224 (READ)
// 00568e4b: PUSH EBP
// 00568e4c: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x1c] (DATA)
// 00568e50: PUSH EAX
// 00568e51: LEA EAX,[ESI + 0x158]
// 00568e57: PUSH EAX
// 00568e58: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00568e5d: LEA EDX,[EBX + 0x18]
// 00568e60: ADD ESP,0xc
// 00568e63: CMP EDX,EAX
// 00568e65: JZ 0x00568e77
//   XREF to: 00568e77 (CONDITIONAL_JUMP)
// 00568e67: MOV ECX,dword ptr [EAX]
// 00568e69: MOV dword ptr [EDX],ECX
// 00568e6b: MOV ECX,dword ptr [EAX + 0x4]
// 00568e6e: MOV dword ptr [EDX + 0x4],ECX
// 00568e71: MOV ECX,dword ptr [EAX + 0x8]
// 00568e74: MOV dword ptr [EDX + 0x8],ECX
// 00568e77: MOV EAX,[0x03114230]
//   Label: LAB_00568e77
//   XREF to: 03114230 (READ)
// 00568e7c: PUSH EAX
// 00568e7d: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x40] (DATA)
// 00568e81: PUSH EAX
// 00568e82: LEA EAX,[ESI + 0x158]
// 00568e88: PUSH EAX
// 00568e89: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00568e8e: LEA EDX,[EBX + 0x24]
// 00568e91: ADD ESP,0xc
// 00568e94: CMP EDX,EAX
// 00568e96: JZ 0x00568ea8
//   XREF to: 00568ea8 (CONDITIONAL_JUMP)
// 00568e98: MOV ECX,dword ptr [EAX]
// 00568e9a: MOV dword ptr [EDX],ECX
// 00568e9c: MOV ECX,dword ptr [EAX + 0x4]
// 00568e9f: MOV dword ptr [EDX + 0x4],ECX
// 00568ea2: MOV ECX,dword ptr [EAX + 0x8]
// 00568ea5: MOV dword ptr [EDX + 0x8],ECX
// 00568ea8: MOV EDX,dword ptr [0x03114238]
//   Label: LAB_00568ea8
//   XREF to: 03114238 (READ)
// 00568eae: PUSH EDX
// 00568eaf: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x4c] (DATA)
// 00568eb3: PUSH EAX
// 00568eb4: ADD ESI,0x158
// 00568eba: PUSH ESI
// 00568ebb: ADD EBX,0x30
// 00568ebe: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00568ec3: ADD ESP,0xc
// 00568ec6: CMP EBX,EAX
// 00568ec8: JNZ 0x00568ed4
//   XREF to: 00568ed4 (CONDITIONAL_JUMP)
// 00568eca: MOV EAX,EDI
// 00568ecc: ADD ESP,0x3c
// 00568ecf: POP EBP
// 00568ed0: POP EDI
// 00568ed1: POP ESI
// 00568ed2: POP EBX
// 00568ed3: RET
// 00568ed4: MOV EDX,dword ptr [EAX]
//   Label: LAB_00568ed4
// 00568ed6: MOV dword ptr [EBX],EDX
// 00568ed8: MOV EDX,dword ptr [EAX + 0x4]
// 00568edb: MOV dword ptr [EBX + 0x4],EDX
// 00568ede: MOV EDX,dword ptr [EAX + 0x8]
// 00568ee1: MOV dword ptr [EBX + 0x8],EDX
// 00568ee4: MOV EAX,EDI
// 00568ee6: ADD ESP,0x3c
// 00568ee9: POP EBP
// 00568eea: POP EDI
// 00568eeb: POP ESI
// 00568eec: POP EBX
// 00568eed: RET
