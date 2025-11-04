// Name: core_stranger.cpp_CStranger_FUN_005be490
// Address: 005be490
// Address Range: [[005be490, 005be51c]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005be490()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bbb2d [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_006537ec = 0.5
//   undefined4 DAT_03f6bb00
//   undefined4 DAT_03f6bb04
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005be490(CStranger* param_1,
   undefined4 param_2) */

float * core_stranger_cpp_CStranger_FUN_005be490(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  CVector3f *pCVar6;
  CVector3f *pCVar7;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  pCVar6 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                      (CVector3f *)&stack0xffffffd0,DAT_03f6bb04);
  pCVar7 = core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                      (CVector3f *)&stack0xffffffec,DAT_03f6bb00);
  fVar5 = FLOAT_006537ec;
  fVar1 = pCVar7->y;
  fVar2 = pCVar6->y;
  fVar3 = pCVar7->z;
  fVar4 = pCVar6->z;
  *in_stack_00000008 = (pCVar7->x + pCVar6->x) * FLOAT_006537ec;
  in_stack_00000008[1] = (fVar1 + fVar2) * fVar5;
  in_stack_00000008[2] = fVar5 * (fVar3 + fVar4);
  return in_stack_00000008;
}


// Assembly code:
// 005be490: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005be490
// 005be491: PUSH ESI
// 005be492: PUSH EDI
// 005be493: SUB ESP,0x24
// 005be496: MOV ESI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 005be49a: MOV EDX,dword ptr [0x03f6bb04]
//   XREF to: 03f6bb04 (READ)
// 005be4a0: PUSH EDX
// 005be4a1: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x30] (DATA)
// 005be4a5: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 005be4a9: PUSH EAX
// 005be4aa: ADD EDI,0x158
// 005be4b0: PUSH EDI
// 005be4b1: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005be4b6: ADD ESP,0xc
// 005be4b9: MOV ECX,dword ptr [0x03f6bb00]
//   XREF to: 03f6bb00 (READ)
// 005be4bf: PUSH ECX
// 005be4c0: MOV EBX,EAX
// 005be4c2: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x18] (DATA)
// 005be4c6: PUSH EAX
// 005be4c7: PUSH EDI
// 005be4c8: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
//   XREF to: 0059fa20 (UNCONDITIONAL_CALL)
// 005be4cd: FLD float ptr [EAX]
// 005be4cf: FADD float ptr [EBX]
// 005be4d1: ADD ESP,0xc
// 005be4d4: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (WRITE)
// 005be4d8: FLD float ptr [EAX + 0x4]
// 005be4db: FADD float ptr [EBX + 0x4]
// 005be4de: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 005be4e2: FXCH
// 005be4e4: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 005be4e8: FLD float ptr [EAX + 0x8]
// 005be4eb: FADD float ptr [EBX + 0x8]
// 005be4ee: FXCH
// 005be4f0: FLD float ptr [0x006537ec]
//   XREF to: 006537ec (READ)
// 005be4f6: FXCH
// 005be4f8: FMUL ST1
// 005be4fa: FXCH ST2
// 005be4fc: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (WRITE)
// 005be500: FXCH
// 005be502: FSTP float ptr [ESI]
// 005be504: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 005be508: FMUL ST1
// 005be50a: FSTP float ptr [ESI + 0x4]
// 005be50d: FMUL float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 005be511: MOV EAX,ESI
// 005be513: FSTP float ptr [ESI + 0x8]
// 005be516: ADD ESP,0x24
// 005be519: POP EDI
// 005be51a: POP ESI
// 005be51b: POP EBX
// 005be51c: RET
