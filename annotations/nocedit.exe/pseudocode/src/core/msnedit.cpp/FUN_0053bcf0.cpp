// Name: core_msnedit.cpp_FUN_0053bcf0
// Address: 0053bcf0
// Address Range: [[0053bcf0, 0053bd79]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053bcf0()
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053abc5 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80 (0053bc80) at 0053bc9b [UNCONDITIONAL_CALL]
// Function calls:
//   core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_0053bcf0(undefined4 param_1) */

void core_msnedit_cpp_FUN_0053bcf0(void)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int in_stack_00000004;
  undefined4 local_10;
  
  local_10 = 1e+30;
  for (iVar1 = *(int *)(in_stack_00000004 + 0x548); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14c)) {
    iVar2 = *(int *)(in_stack_00000004 + 0x28);
    if ((((iVar1 != iVar2) && (*(int *)(iVar1 + 0x2c) == *(int *)(iVar2 + 0x2c))) &&
        (*(int *)(iVar1 + 0x148) == 0)) &&
       (fVar3 = *(float *)(iVar1 + 0x20) - *(float *)(iVar2 + 0x20),
       fVar5 = *(float *)(iVar1 + 0x24) - *(float *)(iVar2 + 0x24),
       fVar4 = *(float *)(iVar1 + 0x28) - *(float *)(iVar2 + 0x28),
       fVar3 = SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3), fVar3 < local_10)) {
      local_10 = fVar3;
    }
  }
  core_msnedit_cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140();
  return;
}


// Assembly code:
// 0053bcf0: PUSH EBX
//   Label: core_msnedit.cpp_FUN_0053bcf0
// 0053bcf1: PUSH ESI
// 0053bcf2: SUB ESP,0x14
// 0053bcf5: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0053bcf9: MOV dword ptr [ESP + 0xc],0x7149f2ca
//   XREF to: Stack[-0x10] (WRITE)
// 0053bd01: MOV EDX,dword ptr [EBX + 0x548]
// 0053bd07: XOR ESI,ESI
// 0053bd09: TEST EDX,EDX
// 0053bd0b: JZ 0x0053bd1e
//   XREF to: 0053bd1e (CONDITIONAL_JUMP)
// 0053bd0d: MOV ECX,dword ptr [EBX + 0x28]
//   Label: LAB_0053bd0d
// 0053bd10: CMP EDX,ECX
// 0053bd12: JNZ 0x0053bd2e
//   XREF to: 0053bd2e (CONDITIONAL_JUMP)
// 0053bd14: MOV EDX,dword ptr [EDX + 0x14c]
//   Label: LAB_0053bd14
// 0053bd1a: TEST EDX,EDX
// 0053bd1c: JNZ 0x0053bd0d
//   XREF to: 0053bd0d (CONDITIONAL_JUMP)
// 0053bd1e: PUSH ESI
//   Label: LAB_0053bd1e
// 0053bd1f: PUSH EBX
// 0053bd20: CALL core_msnedit.cpp_UndoTmp_BuildActorList_CreateTmp_FUN_0053c140
//   XREF to: 0053c140 (UNCONDITIONAL_CALL)
// 0053bd25: ADD ESP,0x8
// 0053bd28: ADD ESP,0x14
// 0053bd2b: POP ESI
// 0053bd2c: POP EBX
// 0053bd2d: RET
// 0053bd2e: MOV EAX,dword ptr [EDX + 0x2c]
//   Label: LAB_0053bd2e
// 0053bd31: CMP EAX,dword ptr [ECX + 0x2c]
// 0053bd34: JNZ 0x0053bd14
//   XREF to: 0053bd14 (CONDITIONAL_JUMP)
// 0053bd36: CMP dword ptr [EDX + 0x148],0x0
// 0053bd3d: JNZ 0x0053bd14
//   XREF to: 0053bd14 (CONDITIONAL_JUMP)
// 0053bd3f: LEA EAX,[EDX + 0x20]
// 0053bd42: FLD float ptr [EAX]
// 0053bd44: FSUB float ptr [ECX + 0x20]
// 0053bd47: FMUL ST0
// 0053bd49: FLD float ptr [EAX + 0x4]
// 0053bd4c: FSUB float ptr [ECX + 0x24]
// 0053bd4f: FMUL ST0
// 0053bd51: FLD float ptr [EAX + 0x8]
// 0053bd54: FXCH
// 0053bd56: FADDP ST2,ST0
// 0053bd58: FSUB float ptr [ECX + 0x28]
// 0053bd5b: FMUL ST0
// 0053bd5d: FADDP
// 0053bd5f: FSQRT
// 0053bd61: FST float ptr [ESP + 0x10]
//   XREF to: Stack[-0xc] (WRITE)
// 0053bd65: FCOMP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x10] (READ)
// 0053bd69: FNSTSW AX
// 0053bd6b: SAHF
// 0053bd6c: JNC 0x0053bd14
//   XREF to: 0053bd14 (CONDITIONAL_JUMP)
// 0053bd6e: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xc] (READ)
// 0053bd72: MOV ESI,EDX
// 0053bd74: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0053bd78: JMP 0x0053bd14
//   XREF to: 0053bd14 (UNCONDITIONAL_JUMP)
