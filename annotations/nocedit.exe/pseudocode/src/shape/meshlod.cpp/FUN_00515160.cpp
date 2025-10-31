// Name: shape_meshlod.cpp_FUN_00515160
// Address: 00515160
// Address Range: [[00515160, 00515187]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00515160()
// Function calls:
//   crt_stdio.c_fgetc_FUN_005fe840

#include "nocturne.h"

void shape_meshlod_cpp_FUN_00515160(void)

{
  int iVar1;
  FILE *in_stack_00000004;
  int in_stack_00000008;
  
  if (0 < in_stack_00000008) {
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000004);
      if (iVar1 < 0) {
        return;
      }
    } while ((iVar1 != 10) || (in_stack_00000008 = in_stack_00000008 + -1, 0 < in_stack_00000008));
  }
  return;
}


// Assembly code:
// 00515160: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00515160
// 00515161: PUSH ESI
// 00515162: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00515166: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0051516a: TEST ESI,ESI
// 0051516c: JLE 0x00515185
//   XREF to: 00515185 (CONDITIONAL_JUMP)
// 0051516e: PUSH EBX
//   Label: LAB_0051516e
// 0051516f: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00515174: ADD ESP,0x4
// 00515177: TEST EAX,EAX
// 00515179: JL 0x00515185
//   XREF to: 00515185 (CONDITIONAL_JUMP)
// 0051517b: CMP EAX,0xa
// 0051517e: JNZ 0x0051516e
//   XREF to: 0051516e (CONDITIONAL_JUMP)
// 00515180: DEC ESI
// 00515181: TEST ESI,ESI
// 00515183: JG 0x0051516e
//   XREF to: 0051516e (CONDITIONAL_JUMP)
// 00515185: POP ESI
//   Label: LAB_00515185
// 00515186: POP EBX
// 00515187: RET
