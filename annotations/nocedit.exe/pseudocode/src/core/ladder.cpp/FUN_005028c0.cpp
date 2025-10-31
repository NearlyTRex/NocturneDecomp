// Name: core_ladder.cpp_FUN_005028c0
// Address: 005028c0
// Address Range: [[005028c0, 005029bb]]
// Convention: unknown
// Signature: undefined core_ladder.cpp_FUN_005028c0()
// Globals:
//   double DOUBLE_00630e28 = 0.5
//   double DOUBLE_00630e30 = 0.100000000000000
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_ladder.cpp_FUN_005028c0(undefined4 param_1, undefined4
   param_2) */

float * core_ladder_cpp_FUN_005028c0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  CKeyFramedModel *pCVar7;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  if (pCVar7->poly_count < 1) {
    fVar5 = (float)DOUBLE_00630e28;
    fVar1 = *(float *)(in_stack_00000004 + 0x2dc);
    fVar2 = *(float *)(in_stack_00000004 + 0x2d4);
    fVar3 = *(float *)(in_stack_00000004 + 0x2d8);
    fVar6 = (float)DOUBLE_00630e30;
    fVar4 = *(float *)(in_stack_00000004 + 0x2dc);
    *in_stack_00000008 = -*(float *)(in_stack_00000004 + 0x2d4) * fVar5;
    in_stack_00000008[1] = -0.1;
    in_stack_00000008[2] = -fVar1 * fVar5;
    in_stack_00000008[3] = fVar2 * fVar5;
    in_stack_00000008[4] = fVar3 + fVar6;
    in_stack_00000008[5] = fVar5 * fVar4;
    return in_stack_00000008;
  }
  pCVar7 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  *in_stack_00000008 = (pCVar7->bounds_min).x;
  in_stack_00000008[1] = (pCVar7->bounds_min).y;
  in_stack_00000008[2] = (pCVar7->bounds_min).z;
  in_stack_00000008[3] = (pCVar7->bounds_max).x;
  in_stack_00000008[4] = (pCVar7->bounds_max).y;
  in_stack_00000008[5] = (pCVar7->bounds_max).z;
  return in_stack_00000008;
}


// Assembly code:
// 005028c0: PUSH EBX
//   Label: core_ladder.cpp_FUN_005028c0
// 005028c1: PUSH ESI
// 005028c2: SUB ESP,0x18
// 005028c5: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005028c9: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005028cd: LEA EAX,[EBX + 0x158]
// 005028d3: PUSH EAX
// 005028d4: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005028d9: MOV EDX,dword ptr [EAX + 0x110]
// 005028df: ADD ESP,0x4
// 005028e2: CMP EDX,0x1
// 005028e5: JGE 0x0050296f
//   XREF to: 0050296f (CONDITIONAL_JUMP)
// 005028eb: FLD float ptr [EBX + 0x2d4]
// 005028f1: MOV ECX,0xbdcccccd
// 005028f6: FCHS
// 005028f8: FLD double ptr [0x00630e28]
//   XREF to: 00630e28 (READ)
// 005028fe: FXCH
// 00502900: FMUL ST1
// 00502902: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00502906: FSTP float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00502909: FLD float ptr [EBX + 0x2dc]
// 0050290f: FCHS
// 00502911: FMUL ST1
// 00502913: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 00502917: FLD float ptr [EBX + 0x2d4]
// 0050291d: FMUL ST1
// 0050291f: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (WRITE)
// 00502923: FLD float ptr [EBX + 0x2d8]
// 00502929: FADD double ptr [0x00630e30]
//   XREF to: 00630e30 (READ)
// 0050292f: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (WRITE)
// 00502933: FMUL float ptr [EBX + 0x2dc]
// 00502939: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0050293c: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0xc] (WRITE)
// 00502940: MOV dword ptr [ESI],EAX
// 00502942: LEA EBX,[ESI + 0x4]
// 00502945: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 00502949: MOV dword ptr [EBX],EAX
// 0050294b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0050294f: MOV dword ptr [EBX + 0x4],EAX
// 00502952: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 00502956: MOV dword ptr [EBX + 0x8],EAX
// 00502959: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x10] (READ)
// 0050295d: MOV dword ptr [EBX + 0xc],EAX
// 00502960: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0xc] (READ)
// 00502964: MOV dword ptr [EBX + 0x10],EAX
// 00502967: MOV EAX,ESI
// 00502969: ADD ESP,0x18
// 0050296c: POP ESI
// 0050296d: POP EBX
// 0050296e: RET
// 0050296f: ADD EBX,0x158
//   Label: LAB_0050296f
// 00502975: PUSH EBX
// 00502976: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 0050297b: MOV EDX,dword ptr [EAX + 0x5678]
// 00502981: ADD EAX,0x5678
// 00502986: MOV dword ptr [ESI],EDX
// 00502988: LEA EDX,[EAX + 0x4]
// 0050298b: LEA EBX,[ESI + 0x4]
// 0050298e: MOV EDX,dword ptr [EDX]
// 00502990: MOV dword ptr [EBX],EDX
// 00502992: LEA EDX,[EAX + 0x8]
// 00502995: MOV EDX,dword ptr [EDX]
// 00502997: MOV dword ptr [EBX + 0x4],EDX
// 0050299a: MOV EDX,dword ptr [EAX + 0xc]
// 0050299d: ADD EAX,0xc
// 005029a0: MOV dword ptr [EBX + 0x8],EDX
// 005029a3: LEA EDX,[EAX + 0x4]
// 005029a6: MOV EDX,dword ptr [EDX]
// 005029a8: MOV dword ptr [EBX + 0xc],EDX
// 005029ab: MOV EAX,dword ptr [EAX + 0x8]
// 005029ae: ADD ESP,0x4
// 005029b1: MOV dword ptr [EBX + 0x10],EAX
// 005029b4: MOV EAX,ESI
// 005029b6: ADD ESP,0x18
// 005029b9: POP ESI
// 005029ba: POP EBX
// 005029bb: RET
