// Name: core_flamecan.cpp_FUN_004cb580
// Address: 004cb580
// Address Range: [[004cb580, 004cb610]]
// Convention: unknown
// Signature: undefined core_flamecan.cpp_FUN_004cb580()
// Globals:
//   float FLOAT_0062a2ec = 0.5

#include "nocturne.h"

/* Signature: undefined1 actors_other_flame.cpp_FUN_004cb580(undefined4 param_1, undefined4 param_2)
    */

undefined4 core_flamecan_cpp_FUN_004cb580(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  float *in_stack_00000008;
  float afStack_10 [3];
  
  pfVar3 = (float *)(**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
  fVar1 = (pfVar3[1] + pfVar3[4]) * FLOAT_0062a2ec;
  fVar2 = (pfVar3[2] + pfVar3[5]) * FLOAT_0062a2ec;
  if (in_stack_00000008 == afStack_10) {
    return 1;
  }
  *in_stack_00000008 = (*pfVar3 + pfVar3[3]) * FLOAT_0062a2ec;
  in_stack_00000008[1] = fVar1;
  in_stack_00000008[2] = fVar2;
  return 1;
}


// Assembly code:
// 004cb580: PUSH EBX
//   Label: core_flamecan.cpp_FUN_004cb580
// 004cb581: SUB ESP,0x30
// 004cb584: MOV ECX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 004cb588: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 004cb58c: MOV EDX,ESP
// 004cb58e: PUSH EDX
// 004cb58f: MOV EAX,dword ptr [ECX + 0x154]
// 004cb595: PUSH ECX
// 004cb596: CALL dword ptr [EAX + 0x14]
// 004cb599: LEA EDX,[EAX + 0xc]
// 004cb59c: FLD float ptr [EAX]
// 004cb59e: FADD float ptr [EDX]
// 004cb5a0: ADD ESP,0x8
// 004cb5a3: FST float ptr [ESP + 0x18]
// 004cb5a7: FLD float ptr [EAX + 0x4]
// 004cb5aa: FADD float ptr [EDX + 0x4]
// 004cb5ad: FXCH
// 004cb5af: FLD float ptr [0x0062a2ec]
//   XREF to: 0062a2ec (READ)
// 004cb5b5: FXCH
// 004cb5b7: FMUL ST1
// 004cb5b9: FXCH ST2
// 004cb5bb: FST float ptr [ESP + 0x1c]
// 004cb5bf: FLD float ptr [EAX + 0x8]
// 004cb5c2: FADD float ptr [EDX + 0x8]
// 004cb5c5: FXCH
// 004cb5c7: FMUL ST2
// 004cb5c9: FXCH
// 004cb5cb: FST float ptr [ESP + 0x20]
// 004cb5cf: FMULP ST2
// 004cb5d1: LEA EAX,[ESP + 0x24]
// 004cb5d5: FXCH ST2
// 004cb5d7: FSTP float ptr [ESP + 0x24]
// 004cb5db: FXCH
// 004cb5dd: FSTP float ptr [ESP + 0x28]
// 004cb5e1: FSTP float ptr [ESP + 0x2c]
// 004cb5e5: CMP EBX,EAX
// 004cb5e7: JNZ 0x004cb5f3
//   XREF to: 004cb5f3 (CONDITIONAL_JUMP)
// 004cb5e9: MOV EAX,0x1
// 004cb5ee: ADD ESP,0x30
// 004cb5f1: POP EBX
// 004cb5f2: RET
// 004cb5f3: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_004cb5f3
// 004cb5f7: MOV dword ptr [EBX],EAX
// 004cb5f9: MOV EAX,dword ptr [ESP + 0x28]
// 004cb5fd: MOV dword ptr [EBX + 0x4],EAX
// 004cb600: MOV EAX,dword ptr [ESP + 0x2c]
// 004cb604: MOV dword ptr [EBX + 0x8],EAX
// 004cb607: MOV EAX,0x1
// 004cb60c: ADD ESP,0x30
// 004cb60f: POP EBX
// 004cb610: RET
