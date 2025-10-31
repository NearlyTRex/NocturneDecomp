// Name: crt_unknown.c_FUN_00607958
// Address: 00607958
// Address Range: [[00607958, 006079b0]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00607958()
// Cross-references:
//   crt_time.c_determine_dst_status_FUN_006079b4 (006079b4) at 006079de [UNCONDITIONAL_CALL]
// Function calls:
//   crt_unknown.c_FUN_00607858

#include "nocturne.h"

/* Signature: undefined1 FUN_00607958(undefined4 param_1, undefined4 param_2, undefined4 param_3) */

undefined4 crt_unknown_c_FUN_00607958(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  
  if ((*(int *)(in_stack_00000004 + 0x20) == 0) && (*(int *)(in_stack_00000008 + 0x20) == 0)) {
    if (*(int *)(in_stack_00000008 + 0x10) < *(int *)(in_stack_00000004 + 0x10)) {
      return 1;
    }
    if (*(int *)(in_stack_00000004 + 0x10) < *(int *)(in_stack_00000008 + 0x10)) {
      return 0;
    }
  }
  iVar1 = crt_unknown_c_FUN_00607858();
  iVar2 = crt_unknown_c_FUN_00607858();
  if (iVar1 <= iVar2) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 00607958: PUSH EBX
//   Label: crt_unknown.c_FUN_00607958
// 00607959: PUSH ESI
// 0060795a: PUSH EBP
// 0060795b: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0060795f: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00607963: CMP dword ptr [EAX + 0x20],0x0
// 00607967: JNZ 0x00607984
//   XREF to: 00607984 (CONDITIONAL_JUMP)
// 00607969: CMP dword ptr [ESI + 0x20],0x0
// 0060796d: JNZ 0x00607984
//   XREF to: 00607984 (CONDITIONAL_JUMP)
// 0060796f: MOV EBX,dword ptr [EAX + 0x10]
// 00607972: MOV ECX,dword ptr [ESI + 0x10]
// 00607975: CMP EBX,ECX
// 00607977: JLE 0x00607982
//   XREF to: 00607982 (CONDITIONAL_JUMP)
// 00607979: MOV EAX,0x1
// 0060797e: POP EBP
// 0060797f: POP ESI
// 00607980: POP EBX
// 00607981: RET
// 00607982: JL 0x006079ab
//   Label: LAB_00607982
//   XREF to: 006079ab (CONDITIONAL_JUMP)
// 00607984: MOV EBP,dword ptr [ESP + 0x18]
//   Label: LAB_00607984
//   XREF to: Stack[0xc] (READ)
// 00607988: PUSH EBP
// 00607989: PUSH EAX
// 0060798a: CALL crt_unknown.c_FUN_00607858
//   XREF to: 00607858 (UNCONDITIONAL_CALL)
// 0060798f: ADD ESP,0x8
// 00607992: PUSH EBP
// 00607993: PUSH ESI
// 00607994: MOV EBX,EAX
// 00607996: CALL crt_unknown.c_FUN_00607858
//   XREF to: 00607858 (UNCONDITIONAL_CALL)
// 0060799b: ADD ESP,0x8
// 0060799e: CMP EBX,EAX
// 006079a0: JLE 0x006079ab
//   XREF to: 006079ab (CONDITIONAL_JUMP)
// 006079a2: MOV EAX,0x1
// 006079a7: POP EBP
// 006079a8: POP ESI
// 006079a9: POP EBX
// 006079aa: RET
// 006079ab: XOR EAX,EAX
//   Label: LAB_006079ab
// 006079ad: POP EBP
// 006079ae: POP ESI
// 006079af: POP EBX
// 006079b0: RET
