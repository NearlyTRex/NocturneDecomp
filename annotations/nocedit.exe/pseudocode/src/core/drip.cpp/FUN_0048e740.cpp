// Name: core_drip.cpp_FUN_0048e740
// Address: 0048e740
// Address Range: [[0048e740, 0048e81b]]
// Convention: unknown
// Signature: undefined core_drip.cpp_FUN_0048e740()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_drip.cpp_FUN_0048e740(undefined4 param_1, undefined4 param_2)
    */

float * core_drip_cpp_FUN_0048e740(void)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  float *unaff_EBP;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0x2d4) != 2) {
    *in_stack_00000008 = -0.5;
    in_stack_00000008[1] = 0.0;
    in_stack_00000008[2] = -0.5;
    in_stack_00000008[3] = 0.5;
    in_stack_00000008[4] = 1.0;
    in_stack_00000008[5] = 1.0;
    return in_stack_00000008;
  }
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  pCVar1 = pCVar2->frame_bounds;
  *in_stack_00000008 = pCVar1->x;
  in_stack_00000008[1] = pCVar1->y;
  in_stack_00000008[3] = pCVar1->z;
  *unaff_EBP = pCVar1[1].x;
  in_stack_00000008[4] = pCVar1[1].y;
  in_stack_00000008[5] = pCVar1[1].z;
  return in_stack_00000008;
}


// Assembly code:
// 0048e740: PUSH EBX
//   Label: core_drip.cpp_FUN_0048e740
// 0048e741: PUSH ESI
// 0048e742: PUSH EDI
// 0048e743: PUSH EBP
// 0048e744: SUB ESP,0x20
// 0048e747: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 0048e74b: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 0048e74f: LEA EDI,[EBX + 0x4]
// 0048e752: LEA EDX,[EBX + 0x8]
// 0048e755: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0048e759: LEA EDX,[EBX + 0xc]
// 0048e75c: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0048e760: LEA ESI,[EBX + 0x10]
// 0048e763: MOV EDX,dword ptr [EAX + 0x2d4]
// 0048e769: LEA EBP,[EBX + 0x14]
// 0048e76c: CMP EDX,0x2
// 0048e76f: JZ 0x0048e7cf
//   XREF to: 0048e7cf (CONDITIONAL_JUMP)
// 0048e771: MOV ECX,0xbf000000
// 0048e776: XOR EAX,EAX
// 0048e778: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 0048e77c: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x30] (DATA)
// 0048e77f: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0048e783: MOV ECX,0x3f000000
// 0048e788: MOV EAX,0x3f800000
// 0048e78d: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0048e791: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0048e795: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0048e799: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0048e79c: MOV dword ptr [EBX],EAX
// 0048e79e: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 0048e7a2: MOV dword ptr [EDI],EAX
// 0048e7a4: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 0048e7a8: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 0048e7ac: MOV dword ptr [EDX],EAX
// 0048e7ae: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0048e7b2: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 0048e7b6: MOV dword ptr [EDX],EAX
// 0048e7b8: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 0048e7bc: MOV dword ptr [ESI],EAX
// 0048e7be: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 0048e7c2: MOV dword ptr [EBP],EAX
// 0048e7c5: MOV EAX,EBX
// 0048e7c7: ADD ESP,0x20
// 0048e7ca: POP EBP
// 0048e7cb: POP EDI
// 0048e7cc: POP ESI
// 0048e7cd: POP EBX
// 0048e7ce: RET
// 0048e7cf: ADD EAX,0x158
//   Label: LAB_0048e7cf
// 0048e7d4: PUSH EAX
// 0048e7d5: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 0048e7da: MOV EAX,dword ptr [EAX + 0x5690]
// 0048e7e0: MOV EDX,dword ptr [EAX]
// 0048e7e2: MOV dword ptr [EBX],EDX
// 0048e7e4: LEA EDX,[EAX + 0x4]
// 0048e7e7: MOV EDX,dword ptr [EDX]
// 0048e7e9: ADD ESP,0x4
// 0048e7ec: MOV dword ptr [EDI],EDX
// 0048e7ee: LEA EDX,[EAX + 0x8]
// 0048e7f1: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 0048e7f5: MOV EDX,dword ptr [EDX]
// 0048e7f7: MOV dword ptr [EDI],EDX
// 0048e7f9: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x14] (READ)
// 0048e7fd: MOV EDX,dword ptr [EAX + 0xc]
// 0048e800: ADD EAX,0xc
// 0048e803: MOV dword ptr [EDI],EDX
// 0048e805: LEA EDI,[EAX + 0x4]
// 0048e808: MOV EDI,dword ptr [EDI]
// 0048e80a: MOV dword ptr [ESI],EDI
// 0048e80c: MOV EAX,dword ptr [EAX + 0x8]
// 0048e80f: MOV dword ptr [EBP],EAX
// 0048e812: MOV EAX,EBX
// 0048e814: ADD ESP,0x20
// 0048e817: POP EBP
// 0048e818: POP EDI
// 0048e819: POP ESI
// 0048e81a: POP EBX
// 0048e81b: RET
