// Name: shape_meshlod.cpp_FUN_0051d0e0
// Address: 0051d0e0
// Address Range: [[0051d0e0, 0051d17c]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051d0e0()
// Cross-references:
//   shape_meshlod.cpp_FUN_00516d50 (00516d50) at 00516ded [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_006380b5
//   TerminatedCString s_d_d_lg_g_006380b9
//   double DOUBLE_006380cd = 0.990000000000000
//   undefined4 DAT_00661388
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_meshlod_cpp_FUN_0051d0e0(void)

{
  double dVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int in_stack_00000004;
  FILE *in_stack_00000008;
  
  if (in_stack_00000008 != (FILE *)0x0) {
    iVar3 = 0;
    crt_stdio_c_fprintf_FUN_005fe6d0
              (in_stack_00000008,"%d\n",*(undefined4 *)(in_stack_00000004 + 0x44));
    if (0 < *(int *)(in_stack_00000004 + 0x44)) {
      dVar1 = _DAT_00661388 * DOUBLE_006380cd;
      iVar4 = 0;
      do {
        puVar2 = (undefined4 *)(*(int *)(in_stack_00000004 + 0x48) + iVar4);
        if (dVar1 <= *(double *)(puVar2 + 2)) {
          puVar2[4] = 0;
        }
        iVar4 = iVar4 + 0xf0;
        iVar3 = iVar3 + 1;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (in_stack_00000008,"%d,%d,%lg,%g\n",*puVar2,puVar2[1],puVar2[2],puVar2[3],
                   (double)(float)puVar2[4]);
      } while (iVar3 < *(int *)(in_stack_00000004 + 0x44));
    }
  }
  return;
}


// Assembly code:
// 0051d0e0: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051d0e0
// 0051d0e1: PUSH ESI
// 0051d0e2: PUSH EDI
// 0051d0e3: PUSH EBP
// 0051d0e4: MOV EBP,ESP
// 0051d0e6: SUB ESP,0x8
// 0051d0e9: AND ESP,0xfffffff8
// 0051d0ec: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0051d0ef: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051d0f2: TEST EDX,EDX
// 0051d0f4: JNZ 0x0051d0fd
//   XREF to: 0051d0fd (CONDITIONAL_JUMP)
// 0051d0f6: MOV ESP,EBP
//   Label: LAB_0051d0f6
// 0051d0f8: POP EBP
// 0051d0f9: POP EDI
// 0051d0fa: POP ESI
// 0051d0fb: POP EBX
// 0051d0fc: RET
// 0051d0fd: MOV ECX,dword ptr [EDI + 0x44]
//   Label: LAB_0051d0fd
// 0051d100: PUSH ECX
// 0051d101: PUSH 0x6380b5
//   XREF to: 006380b5 (DATA)
// 0051d106: PUSH EDX
// 0051d107: XOR EBX,EBX
// 0051d109: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0051d10e: MOV ESI,dword ptr [EDI + 0x44]
// 0051d111: ADD ESP,0xc
// 0051d114: TEST ESI,ESI
// 0051d116: JLE 0x0051d0f6
//   XREF to: 0051d0f6 (CONDITIONAL_JUMP)
// 0051d118: FLD double ptr [0x00661388]
//   XREF to: 00661388 (READ)
// 0051d11e: FMUL double ptr [0x006380cd]
//   XREF to: 006380cd (READ)
// 0051d124: XOR ESI,ESI
// 0051d126: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0051d129: MOV EDX,dword ptr [EDI + 0x48]
//   Label: LAB_0051d129
// 0051d12c: ADD EDX,ESI
// 0051d12e: FLD double ptr [EDX + 0x8]
// 0051d131: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0051d134: FNSTSW AX
// 0051d136: SAHF
// 0051d137: JC 0x0051d140
//   XREF to: 0051d140 (CONDITIONAL_JUMP)
// 0051d139: MOV dword ptr [EDX + 0x10],0x0
// 0051d140: SUB ESP,0x8
//   Label: LAB_0051d140
// 0051d143: FLD float ptr [EDX + 0x10]
// 0051d146: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0051d149: MOV EAX,dword ptr [EDX + 0xc]
// 0051d14c: PUSH EAX
// 0051d14d: MOV ECX,dword ptr [EDX + 0x8]
// 0051d150: PUSH ECX
// 0051d151: MOV EAX,dword ptr [EDX + 0x4]
// 0051d154: PUSH EAX
// 0051d155: MOV ECX,dword ptr [EDX]
// 0051d157: PUSH ECX
// 0051d158: PUSH 0x6380b9
//   XREF to: 006380b9 (DATA)
// 0051d15d: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051d160: PUSH EAX
// 0051d161: ADD ESI,0xf0
// 0051d167: INC EBX
// 0051d168: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0051d16d: MOV EDX,dword ptr [EDI + 0x44]
// 0051d170: ADD ESP,0x20
// 0051d173: CMP EBX,EDX
// 0051d175: JGE 0x0051d0f6
//   XREF to: 0051d0f6 (CONDITIONAL_JUMP)
// 0051d17b: JMP 0x0051d129
//   XREF to: 0051d129 (UNCONDITIONAL_JUMP)
