// Name: core_smiley.cpp_FUN_005a3690
// Address: 005a3690
// Address Range: [[005a3690, 005a37ed]]
// Convention: unknown
// Signature: undefined core_smiley.cpp_FUN_005a3690()
// Globals:
//   undefined4 DAT_03f48fa0
//   undefined4 DAT_03f48fb4
//   undefined4 DAT_03f48fb8
//   undefined4 DAT_03f48fc4
//   undefined4 DAT_03f48fcc
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_smiley.cpp_FUN_005a3690(undefined4 param_1, undefined4
   param_2) */

undefined4 core_smiley_cpp_FUN_005a3690(void)

{
  CVector3f *pCVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CVector3f local_30;
  CVector3f CStack_20;
  
  if (*(int *)(in_stack_00000004 + 0xbefc) == 3) {
    return 0;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_30,DAT_03f48fa0
                     );
  if (in_stack_00000008 != pCVar1) {
    in_stack_00000008->x = pCVar1->x;
    in_stack_00000008->y = pCVar1->y;
    in_stack_00000008->z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&CStack_20,
                      DAT_03f48fb4);
  if (in_stack_00000008 + 1 != pCVar1) {
    in_stack_00000008[1].x = pCVar1->x;
    in_stack_00000008[1].y = pCVar1->y;
    in_stack_00000008[1].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                      (CVector3f *)&stack0xffffffc0,DAT_03f48fb8);
  if (in_stack_00000008 + 2 != pCVar1) {
    in_stack_00000008[2].x = pCVar1->x;
    in_stack_00000008[2].y = pCVar1->y;
    in_stack_00000008[2].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),&local_30,DAT_03f48fc4
                     );
  if (in_stack_00000008 + 3 != pCVar1) {
    in_stack_00000008[3].x = pCVar1->x;
    in_stack_00000008[3].y = pCVar1->y;
    in_stack_00000008[3].z = pCVar1->z;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
                     ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),
                      (CVector3f *)&stack0xfffffff8,DAT_03f48fcc);
  if (in_stack_00000008 + 4 != pCVar1) {
    in_stack_00000008[4].x = pCVar1->x;
    in_stack_00000008[4].y = pCVar1->y;
    in_stack_00000008[4].z = pCVar1->z;
  }
  return 5;
}


// Assembly code:
// 005a3690: PUSH ESI
//   Label: core_smiley.cpp_FUN_005a3690
// 005a3691: PUSH EDI
// 005a3692: PUSH EBP
// 005a3693: SUB ESP,0x3c
// 005a3696: MOV EDI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x4] (READ)
// 005a369a: MOV ESI,dword ptr [ESP + 0x50]
//   XREF to: Stack[0x8] (READ)
// 005a369e: CMP dword ptr [EDI + 0xbefc],0x3
// 005a36a5: JNZ 0x005a36b0
//   XREF to: 005a36b0 (CONDITIONAL_JUMP)
// 005a36a7: XOR EAX,EAX
// 005a36a9: ADD ESP,0x3c
// 005a36ac: POP EBP
// 005a36ad: POP EDI
// 005a36ae: POP ESI
// 005a36af: RET
// 005a36b0: PUSH EBX
//   Label: LAB_005a36b0
// 005a36b1: MOV ECX,dword ptr [0x03f48fa0]
//   XREF to: 03f48fa0 (READ)
// 005a36b7: PUSH ECX
// 005a36b8: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x30] (DATA)
// 005a36bc: PUSH EAX
// 005a36bd: LEA EAX,[EDI + 0x158]
// 005a36c3: PUSH EAX
// 005a36c4: MOV EBX,0x1
// 005a36c9: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005a36ce: ADD ESP,0xc
// 005a36d1: CMP ESI,EAX
// 005a36d3: JZ 0x005a36e5
//   XREF to: 005a36e5 (CONDITIONAL_JUMP)
// 005a36d5: MOV EDX,dword ptr [EAX]
// 005a36d7: MOV dword ptr [ESI],EDX
// 005a36d9: MOV EDX,dword ptr [EAX + 0x4]
// 005a36dc: MOV dword ptr [ESI + 0x4],EDX
// 005a36df: MOV EDX,dword ptr [EAX + 0x8]
// 005a36e2: MOV dword ptr [ESI + 0x8],EDX
// 005a36e5: MOV EBP,dword ptr [0x03f48fb4]
//   Label: LAB_005a36e5
//   XREF to: 03f48fb4 (READ)
// 005a36eb: PUSH EBP
// 005a36ec: LEA EAX,[ESP + 0x2c]
//   XREF to: Stack[-0x24] (DATA)
// 005a36f0: PUSH EAX
// 005a36f1: LEA EAX,[EDI + 0x158]
// 005a36f7: PUSH EAX
// 005a36f8: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005a36fd: MOV EDX,EAX
// 005a36ff: LEA EAX,[EBX*0x4 + 0x0]
// 005a3706: SUB EAX,EBX
// 005a3708: SHL EAX,0x2
// 005a370b: ADD EAX,ESI
// 005a370d: ADD ESP,0xc
// 005a3710: CMP EAX,EDX
// 005a3712: JZ 0x005a3724
//   XREF to: 005a3724 (CONDITIONAL_JUMP)
// 005a3714: MOV ECX,dword ptr [EDX]
// 005a3716: MOV dword ptr [EAX],ECX
// 005a3718: MOV ECX,dword ptr [EDX + 0x4]
// 005a371b: MOV dword ptr [EAX + 0x4],ECX
// 005a371e: MOV ECX,dword ptr [EDX + 0x8]
// 005a3721: MOV dword ptr [EAX + 0x8],ECX
// 005a3724: MOV EAX,[0x03f48fb8]
//   Label: LAB_005a3724
//   XREF to: 03f48fb8 (READ)
// 005a3729: PUSH EAX
// 005a372a: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x48] (DATA)
// 005a372e: PUSH EAX
// 005a372f: LEA EAX,[EDI + 0x158]
// 005a3735: PUSH EAX
// 005a3736: INC EBX
// 005a3737: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005a373c: MOV EDX,EAX
// 005a373e: LEA EAX,[EBX*0x4 + 0x0]
// 005a3745: SUB EAX,EBX
// 005a3747: SHL EAX,0x2
// 005a374a: ADD EAX,ESI
// 005a374c: ADD ESP,0xc
// 005a374f: CMP EAX,EDX
// 005a3751: JZ 0x005a3763
//   XREF to: 005a3763 (CONDITIONAL_JUMP)
// 005a3753: MOV ECX,dword ptr [EDX]
// 005a3755: MOV dword ptr [EAX],ECX
// 005a3757: MOV ECX,dword ptr [EDX + 0x4]
// 005a375a: MOV dword ptr [EAX + 0x4],ECX
// 005a375d: MOV ECX,dword ptr [EDX + 0x8]
// 005a3760: MOV dword ptr [EAX + 0x8],ECX
// 005a3763: MOV EDX,dword ptr [0x03f48fc4]
//   Label: LAB_005a3763
//   XREF to: 03f48fc4 (READ)
// 005a3769: PUSH EDX
// 005a376a: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x3c] (DATA)
// 005a376e: PUSH EAX
// 005a376f: LEA EAX,[EDI + 0x158]
// 005a3775: PUSH EAX
// 005a3776: INC EBX
// 005a3777: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005a377c: MOV EDX,EAX
// 005a377e: LEA EAX,[EBX*0x4 + 0x0]
// 005a3785: SUB EAX,EBX
// 005a3787: SHL EAX,0x2
// 005a378a: ADD EAX,ESI
// 005a378c: ADD ESP,0xc
// 005a378f: CMP EAX,EDX
// 005a3791: JZ 0x005a37a3
//   XREF to: 005a37a3 (CONDITIONAL_JUMP)
// 005a3793: MOV ECX,dword ptr [EDX]
// 005a3795: MOV dword ptr [EAX],ECX
// 005a3797: MOV ECX,dword ptr [EDX + 0x4]
// 005a379a: MOV dword ptr [EAX + 0x4],ECX
// 005a379d: MOV ECX,dword ptr [EDX + 0x8]
// 005a37a0: MOV dword ptr [EAX + 0x8],ECX
// 005a37a3: MOV ECX,dword ptr [0x03f48fcc]
//   Label: LAB_005a37a3
//   XREF to: 03f48fcc (READ)
// 005a37a9: PUSH ECX
// 005a37aa: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x18] (DATA)
// 005a37ae: PUSH EAX
// 005a37af: ADD EDI,0x158
// 005a37b5: PUSH EDI
// 005a37b6: INC EBX
// 005a37b7: CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 005a37bc: MOV EDX,EAX
// 005a37be: LEA EAX,[EBX*0x4 + 0x0]
// 005a37c5: SUB EAX,EBX
// 005a37c7: SHL EAX,0x2
// 005a37ca: ADD ESI,EAX
// 005a37cc: ADD ESP,0xc
// 005a37cf: CMP ESI,EDX
// 005a37d1: JZ 0x005a37e3
//   XREF to: 005a37e3 (CONDITIONAL_JUMP)
// 005a37d3: MOV EAX,dword ptr [EDX]
// 005a37d5: MOV dword ptr [ESI],EAX
// 005a37d7: MOV EAX,dword ptr [EDX + 0x4]
// 005a37da: MOV dword ptr [ESI + 0x4],EAX
// 005a37dd: MOV EAX,dword ptr [EDX + 0x8]
// 005a37e0: MOV dword ptr [ESI + 0x8],EAX
// 005a37e3: LEA EAX,[EBX + 0x1]
//   Label: LAB_005a37e3
// 005a37e6: POP EBX
// 005a37e7: ADD ESP,0x3c
// 005a37ea: POP EBP
// 005a37eb: POP EDI
// 005a37ec: POP ESI
// 005a37ed: RET
