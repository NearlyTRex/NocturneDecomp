// Name: core_stranger.cpp_CStranger_FUN_005c06b0
// Address: 005c06b0
// Address Range: [[005c06b0, 005c07ac]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c06b0()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc387 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c3397 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c5f10 (005c5f10) at 005c61b2 [UNCONDITIONAL_CALL]
// Function calls:
//   core_stranger.cpp_CStranger_FUN_005c07b0
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_getTranslation_FUN_005f6110
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c06b0(CStranger* param_1,
   undefined4 param_2) */

void core_stranger_cpp_CStranger_FUN_005c06b0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  CMatrix3x4f *unaff_ESI;
  float *pfVar2;
  CMatrix3x4f *pCVar3;
  CVector3f *pCVar4;
  byte bVar5;
  int in_stack_00000004;
  float local_114 [12];
  CVector3f local_e4 [4];
  CMatrix3x4f local_b4;
  CMatrix3x4f local_84;
  float local_54 [18];
  
  bVar5 = 0;
  iVar1 = *(int *)(in_stack_00000004 + 0x1fc2c);
  if (((iVar1 != 0) && (iVar1 != *(int *)(in_stack_00000004 + 0x24b4))) &&
     (iVar1 != *(int *)(in_stack_00000004 + 0x24f8))) {
    core_stranger_cpp_CStranger_FUN_005c07b0();
    pfVar2 = local_114;
    pCVar3 = &local_b4;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar3->m[0].w = *pfVar2;
      pfVar2 = pfVar2 + (uint)bVar5 * -2 + 1;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
    }
    core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
              (&local_84,(CVector3f *)(in_stack_00000004 + 0x20),
               (CVector3f *)(in_stack_00000004 + 0x30));
    core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10(&local_b4,&local_84,unaff_ESI);
    pfVar2 = local_54;
    pCVar4 = local_e4;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar4->x = *pfVar2;
      pfVar2 = pfVar2 + (uint)bVar5 * -2 + 1;
      pCVar4 = (CVector3f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    iVar1 = *(int *)(*(int *)(in_stack_00000004 + 0x1fc2c) + 0x154);
    core_xform_cpp_matrixToEulerAngles_FUN_005f5690(local_e4,(CMatrix3x3f *)(local_54 + 0xc));
    core_xform_cpp_getTranslation_FUN_005f6110(local_e4,(CMatrix3x4f *)(local_54 + 0xf));
    (**(code **)(iVar1 + 0x60))();
  }
  return;
}


// Assembly code:
// 005c06b0: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c06b0
// 005c06b1: PUSH EDI
// 005c06b2: PUSH EBP
// 005c06b3: SUB ESP,0x108
// 005c06b9: MOV EBX,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x4] (READ)
// 005c06c0: MOV EDX,dword ptr [EBX + 0x1fc2c]
// 005c06c6: TEST EDX,EDX
// 005c06c8: JZ 0x005c07a3
//   XREF to: 005c07a3 (CONDITIONAL_JUMP)
// 005c06ce: CMP EDX,dword ptr [EBX + 0x24b4]
// 005c06d4: JZ 0x005c07a3
//   XREF to: 005c07a3 (CONDITIONAL_JUMP)
// 005c06da: CMP EDX,dword ptr [EBX + 0x24f8]
// 005c06e0: JZ 0x005c07a3
//   XREF to: 005c07a3 (CONDITIONAL_JUMP)
// 005c06e6: MOV EDI,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x8] (READ)
// 005c06ed: MOV EAX,0x1
// 005c06f2: TEST EDI,EDI
// 005c06f4: JZ 0x005c06f8
//   XREF to: 005c06f8 (CONDITIONAL_JUMP)
// 005c06f6: XOR EAX,EAX
// 005c06f8: PUSH ESI
//   Label: LAB_005c06f8
// 005c06f9: PUSH EAX
// 005c06fa: MOV EBP,dword ptr [EBX + 0x1fc2c]
// 005c0700: PUSH EBP
// 005c0701: PUSH EBX
// 005c0702: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x114] (DATA)
// 005c0706: CALL core_stranger.cpp_CStranger_FUN_005c07b0
//   XREF to: 005c07b0 (UNCONDITIONAL_CALL)
// 005c070b: ADD ESP,0xc
// 005c070e: LEA EAX,[EBX + 0x30]
// 005c0711: LEA EDI,[ESP + 0x64]
//   XREF to: Stack[-0xb4] (DATA)
// 005c0715: PUSH EAX
// 005c0716: LEA EAX,[EBX + 0x20]
// 005c0719: MOV ECX,0xc
// 005c071e: PUSH EAX
// 005c071f: LEA EAX,[ESP + 0x9c]
//   XREF to: Stack[-0x84] (DATA)
// 005c0726: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x114] (DATA)
// 005c072a: PUSH EAX
// 005c072b: MOVSD.REP ES:EDI,ESI
// 005c072d: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 005c0732: ADD ESP,0xc
// 005c0735: LEA EAX,[ESP + 0x94]
//   XREF to: Stack[-0x84] (DATA)
// 005c073c: PUSH EAX
// 005c073d: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0xb4] (DATA)
// 005c0741: PUSH EAX
// 005c0742: LEA ESI,[ESP + 0xcc]
//   XREF to: Stack[-0x54] (DATA)
// 005c0749: LEA EDI,[ESP + 0x3c]
//   XREF to: Stack[-0xe4] (DATA)
// 005c074d: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 005c0752: MOV ECX,0xc
// 005c0757: ADD ESP,0x8
// 005c075a: LEA EAX,[ESP + 0xf4]
//   XREF to: Stack[-0x24] (DATA)
// 005c0761: LEA ESI,[ESP + 0xc4]
//   XREF to: Stack[-0x54] (DATA)
// 005c0768: PUSH EAX
// 005c0769: MOVSD.REP ES:EDI,ESI
// 005c076b: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0xe4] (DATA)
// 005c076f: MOV EBX,dword ptr [EBX + 0x1fc2c]
// 005c0775: PUSH EAX
// 005c0776: MOV ESI,dword ptr [EBX + 0x154]
// 005c077c: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 005c0781: ADD ESP,0x8
// 005c0784: PUSH EAX
// 005c0785: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x18] (DATA)
// 005c078c: PUSH EAX
// 005c078d: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0xe4] (DATA)
// 005c0791: PUSH EAX
// 005c0792: CALL core_xform.cpp_getTranslation_FUN_005f6110
//   XREF to: 005f6110 (UNCONDITIONAL_CALL)
// 005c0797: ADD ESP,0x8
// 005c079a: PUSH EAX
// 005c079b: PUSH EBX
// 005c079c: CALL dword ptr [ESI + 0x60]
// 005c079f: ADD ESP,0xc
// 005c07a2: POP ESI
// 005c07a3: ADD ESP,0x108
//   Label: LAB_005c07a3
// 005c07a9: POP EBP
// 005c07aa: POP EDI
// 005c07ab: POP EBX
// 005c07ac: RET
