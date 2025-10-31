// Name: shape_meshlod.cpp_FUN_0051d250
// Address: 0051d250
// Address Range: [[0051d250, 0051d2c1]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_0051d250()
// Cross-references:
//   shape_meshlod.cpp_FUN_00516ba0 (00516ba0) at 00516d2f [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_00638135
//   TerminatedCString s_d_d_lg_g_00638139
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void shape_meshlod_cpp_FUN_0051d250(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int in_stack_00000004;
  FILE *in_stack_00000008;
  
  if (in_stack_00000008 != (FILE *)0x0) {
    iVar7 = 0;
    crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n");
    if (0 < *(int *)(in_stack_00000004 + 0x4c)) {
      iVar8 = 0;
      do {
        iVar6 = *(int *)(in_stack_00000004 + 0x50);
        iVar2 = iVar8 + 0x10;
        iVar3 = iVar8 + 0xc;
        iVar4 = iVar8 + 8;
        iVar5 = iVar8 + 4;
        puVar1 = (undefined4 *)(iVar8 + iVar6);
        iVar8 = iVar8 + 0xf0;
        iVar7 = iVar7 + 1;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (in_stack_00000008,"%d,%d,%lg,%g\n",*puVar1,*(undefined4 *)(iVar5 + iVar6),
                   *(undefined4 *)(iVar4 + iVar6),*(undefined4 *)(iVar3 + iVar6),
                   (double)*(float *)(iVar2 + iVar6));
      } while (iVar7 < *(int *)(in_stack_00000004 + 0x4c));
      return;
    }
  }
  return;
}


// Assembly code:
// 0051d250: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_0051d250
// 0051d251: PUSH EDI
// 0051d252: PUSH EBP
// 0051d253: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0051d257: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0051d25b: TEST EBP,EBP
// 0051d25d: JNZ 0x0051d263
//   XREF to: 0051d263 (CONDITIONAL_JUMP)
// 0051d25f: POP EBP
//   Label: LAB_0051d25f
// 0051d260: POP EDI
// 0051d261: POP EBX
// 0051d262: RET
// 0051d263: MOV EDX,dword ptr [EDI + 0x4c]
//   Label: LAB_0051d263
// 0051d266: PUSH EDX
// 0051d267: PUSH 0x638135
//   XREF to: 00638135 (DATA)
// 0051d26c: PUSH EBP
// 0051d26d: XOR EBX,EBX
// 0051d26f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0051d274: MOV ECX,dword ptr [EDI + 0x4c]
// 0051d277: ADD ESP,0xc
// 0051d27a: TEST ECX,ECX
// 0051d27c: JLE 0x0051d25f
//   XREF to: 0051d25f (CONDITIONAL_JUMP)
// 0051d27e: PUSH ESI
// 0051d27f: XOR ESI,ESI
// 0051d281: MOV EAX,dword ptr [EDI + 0x50]
//   Label: LAB_0051d281
// 0051d284: SUB ESP,0x8
// 0051d287: FLD float ptr [ESI + EAX*0x1 + 0x10]
// 0051d28b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0051d28e: MOV EDX,dword ptr [ESI + EAX*0x1 + 0xc]
// 0051d292: PUSH EDX
// 0051d293: MOV ECX,dword ptr [ESI + EAX*0x1 + 0x8]
// 0051d297: PUSH ECX
// 0051d298: MOV EDX,dword ptr [ESI + EAX*0x1 + 0x4]
// 0051d29c: PUSH EDX
// 0051d29d: MOV ECX,dword ptr [ESI + EAX*0x1]
// 0051d2a0: PUSH ECX
// 0051d2a1: PUSH 0x638139
//   XREF to: 00638139 (DATA)
// 0051d2a6: PUSH EBP
// 0051d2a7: ADD ESI,0xf0
// 0051d2ad: INC EBX
// 0051d2ae: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0051d2b3: MOV EAX,dword ptr [EDI + 0x4c]
// 0051d2b6: ADD ESP,0x20
// 0051d2b9: CMP EBX,EAX
// 0051d2bb: JL 0x0051d281
//   XREF to: 0051d281 (CONDITIONAL_JUMP)
// 0051d2bd: POP ESI
// 0051d2be: POP EBP
// 0051d2bf: POP EDI
// 0051d2c0: POP EBX
// 0051d2c1: RET
