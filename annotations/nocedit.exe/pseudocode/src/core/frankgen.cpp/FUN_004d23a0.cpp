// Name: core_frankgen.cpp_FUN_004d23a0
// Address: 004d23a0
// Address Range: [[004d23a0, 004d2426]]
// Convention: unknown
// Signature: undefined core_frankgen.cpp_FUN_004d23a0()
// Cross-references:
//   core_frankgen.cpp_LoadModel_FUN_004d2190 (004d2190) at 004d22c4 [UNCONDITIONAL_CALL]
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_frankgen.cpp_FUN_004d23a0(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_frankgen_cpp_FUN_004d23a0(void)

{
  int iVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  int in_stack_00000004;
  float in_stack_0000000c;
  float in_stack_00000010;
  
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x184));
  iVar1 = pCVar3->frame_count;
  fVar2 = ((float)iVar1 * (*(float *)(in_stack_00000004 + 0x15c) - in_stack_0000000c)) /
          (in_stack_00000010 - in_stack_0000000c);
  *(float *)(in_stack_00000004 + 0x180) = fVar2;
  if (fVar2 < 0.0) {
    *(undefined4 *)(in_stack_00000004 + 0x180) = 0;
  }
  fVar2 = (float)(iVar1 + -1);
  if (*(float *)(in_stack_00000004 + 0x180) <= fVar2) {
    return;
  }
  *(float *)(in_stack_00000004 + 0x180) = fVar2;
  return;
}


// Assembly code:
// 004d23a0: PUSH EBX
//   Label: core_frankgen.cpp_FUN_004d23a0
// 004d23a1: SUB ESP,0x8
// 004d23a4: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004d23a8: LEA EAX,[EBX + 0x184]
// 004d23ae: PUSH EAX
// 004d23af: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004d23b4: FLD float ptr [EBX + 0x15c]
// 004d23ba: ADD ESP,0x4
// 004d23bd: MOV EAX,dword ptr [EAX + 0x100]
// 004d23c3: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004d23c7: FXCH
// 004d23c9: FSUB ST0,ST1
// 004d23cb: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 004d23cf: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 004d23d3: FMULP
// 004d23d5: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004d23d9: FSUBRP ST2,ST0
// 004d23db: FDIVRP
// 004d23dd: MOV EDX,EAX
// 004d23df: FST float ptr [EBX + 0x180]
// 004d23e5: FLDZ
// 004d23e7: FCOMPP
// 004d23e9: FNSTSW AX
// 004d23eb: SAHF
// 004d23ec: JA 0x004d240d
//   XREF to: 004d240d (CONDITIONAL_JUMP)
// 004d23ee: DEC EDX
//   Label: LAB_004d23ee
// 004d23ef: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x8] (WRITE)
// 004d23f3: FLD float ptr [EBX + 0x180]
// 004d23f9: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (READ)
// 004d23fd: FSTP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 004d2400: FCOMP float ptr [ESP]
//   XREF to: Stack[-0xc] (DATA)
// 004d2403: FNSTSW AX
// 004d2405: SAHF
// 004d2406: JA 0x004d2419
//   XREF to: 004d2419 (CONDITIONAL_JUMP)
// 004d2408: ADD ESP,0x8
// 004d240b: POP EBX
// 004d240c: RET
// 004d240d: MOV dword ptr [EBX + 0x180],0x0
//   Label: LAB_004d240d
// 004d2417: JMP 0x004d23ee
//   XREF to: 004d23ee (UNCONDITIONAL_JUMP)
// 004d2419: MOV EAX,dword ptr [ESP]
//   Label: LAB_004d2419
//   XREF to: Stack[-0xc] (DATA)
// 004d241c: MOV dword ptr [EBX + 0x180],EAX
// 004d2422: ADD ESP,0x8
// 004d2425: POP EBX
// 004d2426: RET
