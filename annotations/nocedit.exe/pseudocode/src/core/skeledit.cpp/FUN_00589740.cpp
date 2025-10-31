// Name: core_skeledit.cpp_FUN_00589740
// Address: 00589740
// Address Range: [[00589740, 005897ae]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589740()
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_stdio.c_fgetc_FUN_005fe840

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589740(void)

{
  int iVar1;
  int iVar2;
  FILE *in_stack_0000000c;
  undefined1 *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x10);
  *in_stack_00000010 = 0;
  while( true ) {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_0000000c);
    if (iVar1 < 0) {
      return;
    }
    if (iVar1 == 10) break;
    if (iVar1 == 0x22) {
      while( true ) {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_0000000c);
        if (iVar1 < 0) {
          return;
        }
        if (iVar1 == 10) break;
        if (iVar1 == 0x22) {
          iVar1 = 1;
          do {
            iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_0000000c);
            if (iVar2 < 0) {
              return;
            }
          } while ((iVar2 != 10) || (iVar1 = iVar1 + -1, 0 < iVar1));
          return;
        }
        *in_stack_00000010 = (char)iVar1;
        in_stack_00000010[1] = 0;
        in_stack_00000010 = in_stack_00000010 + 1;
      }
      return;
    }
  }
  return;
}


// Assembly code:
// 00589740: PUSH 0x10
//   Label: core_skeledit.cpp_FUN_00589740
// 00589745: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058974a: PUSH EBX
// 0058974b: PUSH ESI
// 0058974c: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00589750: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00589754: MOV byte ptr [EBX],0x0
// 00589757: PUSH ESI
//   Label: LAB_00589757
// 00589758: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0058975d: ADD ESP,0x4
// 00589760: TEST EAX,EAX
// 00589762: JL 0x005897a3
//   XREF to: 005897a3 (CONDITIONAL_JUMP)
// 00589764: CMP EAX,0xa
// 00589767: JZ 0x005897a3
//   XREF to: 005897a3 (CONDITIONAL_JUMP)
// 00589769: CMP EAX,0x22
// 0058976c: JNZ 0x00589757
//   XREF to: 00589757 (CONDITIONAL_JUMP)
// 0058976e: PUSH ESI
//   Label: LAB_0058976e
// 0058976f: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00589774: ADD ESP,0x4
// 00589777: MOV EDX,EAX
// 00589779: TEST EAX,EAX
// 0058977b: JL 0x005897a3
//   XREF to: 005897a3 (CONDITIONAL_JUMP)
// 0058977d: CMP EAX,0xa
// 00589780: JZ 0x005897a3
//   XREF to: 005897a3 (CONDITIONAL_JUMP)
// 00589782: CMP EAX,0x22
// 00589785: JNZ 0x005897a6
//   XREF to: 005897a6 (CONDITIONAL_JUMP)
// 00589787: MOV EBX,0x1
// 0058978c: PUSH ESI
//   Label: LAB_0058978c
// 0058978d: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00589792: ADD ESP,0x4
// 00589795: TEST EAX,EAX
// 00589797: JL 0x005897a3
//   XREF to: 005897a3 (CONDITIONAL_JUMP)
// 00589799: CMP EAX,0xa
// 0058979c: JNZ 0x0058978c
//   XREF to: 0058978c (CONDITIONAL_JUMP)
// 0058979e: DEC EBX
// 0058979f: TEST EBX,EBX
// 005897a1: JG 0x0058978c
//   XREF to: 0058978c (CONDITIONAL_JUMP)
// 005897a3: POP ESI
//   Label: LAB_005897a3
// 005897a4: POP EBX
// 005897a5: RET
// 005897a6: INC EBX
//   Label: LAB_005897a6
// 005897a7: MOV byte ptr [EBX + -0x1],DL
// 005897aa: MOV byte ptr [EBX],0x0
// 005897ad: JMP 0x0058976e
//   XREF to: 0058976e (UNCONDITIONAL_JUMP)
