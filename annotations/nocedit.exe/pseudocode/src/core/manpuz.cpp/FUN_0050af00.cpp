// Name: core_manpuz.cpp_FUN_0050af00
// Address: 0050af00
// Address Range: [[0050af00, 0050af7d]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050af00()
// Cross-references:
//   core_manpuz.cpp_FUN_005091d0 (005091d0) at 0050920d [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00660d9c

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050af00(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_manpuz_cpp_FUN_0050af00(void)

{
  float fVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
  
  iVar2 = in_stack_00000004 + 0x1340 + in_stack_00000008 * 0x60;
  if (*(int *)(in_stack_00000004 + 0x5f0 + *(int *)(iVar2 + 0x5c) * 100) == 0) {
    fVar1 = in_stack_0000000c / _DAT_00660d9c + *(float *)(iVar2 + 0x18);
    *(float *)(iVar2 + 0x18) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(iVar2 + 0x18) = 0x3f800000;
      return;
    }
  }
  else {
    fVar1 = *(float *)(iVar2 + 0x18) - in_stack_0000000c / _DAT_00660d9c;
    *(float *)(iVar2 + 0x18) = fVar1;
    if (fVar1 < 0.0) {
      *(undefined4 *)(iVar2 + 0x18) = 0;
      return;
    }
  }
  return;
}


// Assembly code:
// 0050af00: MOV EDX,dword ptr [ESP + 0x8]
//   Label: core_manpuz.cpp_FUN_0050af00
//   XREF to: Stack[0x8] (READ)
// 0050af04: LEA EAX,[EDX*0x4 + 0x0]
// 0050af0b: SUB EAX,EDX
// 0050af0d: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0050af11: SHL EAX,0x5
// 0050af14: ADD EDX,0x1340
// 0050af1a: ADD EDX,EAX
// 0050af1c: MOV ECX,dword ptr [EDX + 0x5c]
// 0050af1f: LEA EAX,[ECX*0x4 + 0x0]
// 0050af26: SUB EAX,ECX
// 0050af28: SHL EAX,0x3
// 0050af2b: ADD EAX,ECX
// 0050af2d: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 0050af31: CMP dword ptr [ECX + EAX*0x4 + 0x5f0],0x0
// 0050af39: JZ 0x0050af5d
//   XREF to: 0050af5d (CONDITIONAL_JUMP)
// 0050af3b: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0050af3f: FDIV float ptr [0x00660d9c]
//   XREF to: 00660d9c (READ)
// 0050af45: FSUBR float ptr [EDX + 0x18]
// 0050af48: FST float ptr [EDX + 0x18]
// 0050af4b: FLDZ
// 0050af4d: FCOMPP
// 0050af4f: FNSTSW AX
// 0050af51: SAHF
// 0050af52: JA 0x0050af55
//   XREF to: 0050af55 (CONDITIONAL_JUMP)
// 0050af54: RET
//   Label: LAB_0050af54
// 0050af55: MOV dword ptr [EDX + 0x18],0x0
//   Label: LAB_0050af55
// 0050af5c: RET
// 0050af5d: FLD float ptr [ESP + 0xc]
//   Label: LAB_0050af5d
//   XREF to: Stack[0xc] (READ)
// 0050af61: FDIV float ptr [0x00660d9c]
//   XREF to: 00660d9c (READ)
// 0050af67: FADD float ptr [EDX + 0x18]
// 0050af6a: FST float ptr [EDX + 0x18]
// 0050af6d: FLD1
// 0050af6f: FCOMPP
// 0050af71: FNSTSW AX
// 0050af73: SAHF
// 0050af74: JNC 0x0050af54
//   XREF to: 0050af54 (CONDITIONAL_JUMP)
// 0050af76: MOV dword ptr [EDX + 0x18],0x3f800000
// 0050af7d: RET
