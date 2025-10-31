// Name: crt_unknown.c_FUN_00600a64
// Address: 00600a64
// Address Range: [[00600a64, 00600acf]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00600a64()
// Cross-references:
//   crt_unknown.c_FUN_00600ad0 (00600ad0) at 00600b36 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_03f9b1f0

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x00600ac1) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint crt_unknown_c_FUN_00600a64(void)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  byte *in_stack_00000004;
  
  _DAT_03f9b1f0 = in_stack_00000004;
  if ((*in_stack_00000004 & 1) != 0) {
    return 3;
  }
  iVar1 = *(int *)(in_stack_00000004 + 8);
  uVar2 = *(uint *)(in_stack_00000004 + 4);
  if ((in_stack_00000004 == *(byte **)(iVar1 + 4)) &&
     (*(byte **)(iVar1 + 4) == *(byte **)(uVar2 + 8))) {
    if ((iVar1 == *(int *)(*(int *)(iVar1 + 8) + 4)) &&
       (uVar3 = *(uint *)(*(int *)(uVar2 + 4) + 8), uVar2 == uVar3)) {
      return uVar2 ^ uVar3;
    }
    return 3;
  }
  return 3;
}


// Assembly code:
// 00600a64: PUSH EBX
//   Label: crt_unknown.c_FUN_00600a64
// 00600a65: PUSH EDI
// 00600a66: PUSH EBP
// 00600a67: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00600a6b: MOV AH,byte ptr [EBX]
// 00600a6d: MOV dword ptr [0x03f9b1f0],EBX
//   XREF to: 03f9b1f0 (WRITE)
// 00600a73: TEST AH,0x1
// 00600a76: JZ 0x00600a81
//   XREF to: 00600a81 (CONDITIONAL_JUMP)
// 00600a78: MOV EAX,0x3
// 00600a7d: POP EBP
// 00600a7e: POP EDI
// 00600a7f: POP EBX
// 00600a80: RET
// 00600a81: MOV EDX,dword ptr [EBX + 0x8]
//   Label: LAB_00600a81
// 00600a84: MOV ECX,dword ptr [EDX + 0x4]
// 00600a87: MOV EAX,dword ptr [EBX + 0x4]
// 00600a8a: CMP EBX,ECX
// 00600a8c: JNZ 0x00600a93
//   XREF to: 00600a93 (CONDITIONAL_JUMP)
// 00600a8e: CMP ECX,dword ptr [EAX + 0x8]
// 00600a91: JZ 0x00600a9c
//   XREF to: 00600a9c (CONDITIONAL_JUMP)
// 00600a93: MOV EAX,0x3
//   Label: LAB_00600a93
// 00600a98: POP EBP
// 00600a99: POP EDI
// 00600a9a: POP EBX
// 00600a9b: RET
// 00600a9c: MOV ECX,dword ptr [EDX + 0x8]
//   Label: LAB_00600a9c
// 00600a9f: MOV EDI,dword ptr [ECX + 0x4]
// 00600aa2: MOV EBX,dword ptr [EAX + 0x4]
// 00600aa5: CMP EDX,EDI
// 00600aa7: JNZ 0x00600ab0
//   XREF to: 00600ab0 (CONDITIONAL_JUMP)
// 00600aa9: MOV EBP,dword ptr [EBX + 0x8]
// 00600aac: CMP EAX,EBP
// 00600aae: JZ 0x00600ab9
//   XREF to: 00600ab9 (CONDITIONAL_JUMP)
// 00600ab0: MOV EAX,0x3
//   Label: LAB_00600ab0
// 00600ab5: POP EBP
// 00600ab6: POP EDI
// 00600ab7: POP EBX
// 00600ab8: RET
// 00600ab9: CMP EDI,EDI
//   Label: LAB_00600ab9
// 00600abb: JNZ 0x00600ac1
//   XREF to: 00600ac1 (CONDITIONAL_JUMP)
// 00600abd: CMP EBP,EBP
// 00600abf: JZ 0x00600aca
//   XREF to: 00600aca (CONDITIONAL_JUMP)
// 00600ac1: MOV EAX,0x3
//   Label: LAB_00600ac1
// 00600ac6: POP EBP
// 00600ac7: POP EDI
// 00600ac8: POP EBX
// 00600ac9: RET
// 00600aca: XOR EAX,EBP
//   Label: LAB_00600aca
// 00600acc: POP EBP
// 00600acd: POP EDI
// 00600ace: POP EBX
// 00600acf: RET
