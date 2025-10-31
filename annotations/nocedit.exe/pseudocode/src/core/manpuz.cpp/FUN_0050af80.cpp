// Name: core_manpuz.cpp_FUN_0050af80
// Address: 0050af80
// Address Range: [[0050af80, 0050b037]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050af80()
// Cross-references:
//   core_manpuz.cpp_FUN_005091d0 (005091d0) at 0050925d [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050af80(undefined4 param_1, undefined4
   param_2) */

void core_manpuz_cpp_FUN_0050af80(void)

{
  float *pfVar1;
  float fVar2;
  float *pfVar3;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  int in_stack_00000008;
  float local_1c [7];
  
  pfVar3 = (float *)(in_stack_00000004 + 0x1340 + in_stack_00000008 * 0x60);
  pfVar1 = pfVar3 + 6;
  fVar2 = 1.0 - pfVar3[6];
  if (pfVar3 + 7 == local_1c) {
    return;
  }
  pfVar3[7] = *pfVar3 * fVar2 + pfVar3[3] * *pfVar1;
  pfVar3[8] = pfVar3[1] * fVar2 + pfVar3[4] * *pfVar1;
  pfVar3[9] = pfVar3[2] * fVar2 + pfVar3[5] * *pfVar1;
  return;
}


// Assembly code:
// 0050af80: SUB ESP,0x28
//   Label: core_manpuz.cpp_FUN_0050af80
// 0050af83: MOV EDX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0050af87: LEA EAX,[EDX*0x4 + 0x0]
// 0050af8e: SUB EAX,EDX
// 0050af90: MOV EDX,EAX
// 0050af92: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0050af96: SHL EDX,0x5
// 0050af99: ADD EAX,0x1340
// 0050af9e: ADD EAX,EDX
// 0050afa0: LEA ECX,[EAX + 0xc]
// 0050afa3: LEA EDX,[EAX + 0x18]
// 0050afa6: FLD float ptr [ECX]
// 0050afa8: FMUL float ptr [EDX]
// 0050afaa: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x10] (WRITE)
// 0050afae: FLD float ptr [ECX + 0x4]
// 0050afb1: FMUL float ptr [EDX]
// 0050afb3: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc] (WRITE)
// 0050afb7: FLD float ptr [ECX + 0x8]
// 0050afba: FMUL float ptr [EDX]
// 0050afbc: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x8] (WRITE)
// 0050afc0: FLD float ptr [EAX + 0x18]
// 0050afc3: FLD1
// 0050afc5: FSUBRP
// 0050afc7: FLD float ptr [EAX]
// 0050afc9: FXCH
// 0050afcb: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x4] (WRITE)
// 0050afcf: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x4] (READ)
// 0050afd3: FSTP float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0050afd6: FLD float ptr [EAX + 0x4]
// 0050afd9: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x4] (READ)
// 0050afdd: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (WRITE)
// 0050afe1: FLD float ptr [EAX + 0x8]
// 0050afe4: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x4] (READ)
// 0050afe8: LEA EDX,[EAX + 0x1c]
// 0050afeb: FLD float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0050afee: FADD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x10] (READ)
// 0050aff2: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0050aff6: FXCH
// 0050aff8: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 0050affc: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1c] (DATA)
// 0050b000: FADD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0xc] (READ)
// 0050b004: FXCH
// 0050b006: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (WRITE)
// 0050b00a: FADD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x8] (READ)
// 0050b00e: FXCH
// 0050b010: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (WRITE)
// 0050b014: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (WRITE)
// 0050b018: CMP EDX,EAX
// 0050b01a: JNZ 0x0050b020
//   XREF to: 0050b020 (CONDITIONAL_JUMP)
// 0050b01c: ADD ESP,0x28
// 0050b01f: RET
// 0050b020: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0050b020
//   XREF to: Stack[-0x1c] (DATA)
// 0050b024: MOV dword ptr [EDX],EAX
// 0050b026: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0050b02a: MOV dword ptr [EDX + 0x4],EAX
// 0050b02d: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0050b031: MOV dword ptr [EDX + 0x8],EAX
// 0050b034: ADD ESP,0x28
// 0050b037: RET
