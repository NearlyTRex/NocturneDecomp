// Name: shape_meshlod.cpp_FUN_00516a40
// Address: 00516a40
// Address Range: [[00516a40, 00516b37]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_FUN_00516a40()
// Cross-references:
//   shape_meshlod.cpp_FUN_0051b330 (0051b330) at 0051b398 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_LodMesh_getLOD_FUN_0051b920 (0051b920) at 0051b9da [UNCONDITIONAL_CALL]

#include "nocturne.h"

/* Signature: undefined1 shape_meshlod.cpp_FUN_00516a40(undefined4 param_1) */

void shape_meshlod_cpp_FUN_00516a40(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int in_stack_00000004;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  
  local_24 = 0;
  if (0 < *(int *)(in_stack_00000004 + 8)) {
    local_28 = 0;
    do {
      iVar2 = local_28 + *(int *)(in_stack_00000004 + 0xc);
      if ((*(int *)(iVar2 + 0x40) == 0) &&
         (local_1c = local_24 + 1, local_1c < *(int *)(in_stack_00000004 + 8))) {
        local_20 = local_1c * 0x8c;
        do {
          iVar6 = *(int *)(in_stack_00000004 + 0xc) + local_20;
          if (*(int *)(iVar6 + 0x40) == 0) {
            iVar4 = 0;
            do {
              iVar3 = 0;
              iVar1 = iVar4;
              iVar5 = iVar2;
              do {
                if (*(int *)(iVar5 + 0x10) != *(int *)(iVar6 + 0x10 + (iVar1 % 3) * 4)) break;
                iVar1 = iVar1 + 1;
                iVar3 = iVar3 + 1;
                iVar5 = iVar5 + 4;
              } while (iVar3 < 3);
              if (iVar3 == 3) {
                *(undefined4 *)(iVar6 + 0x40) = 1;
                break;
              }
              iVar4 = iVar4 + 1;
            } while (iVar4 < 3);
          }
          local_20 = local_20 + 0x8c;
          local_1c = local_1c + 1;
        } while (local_1c < *(int *)(in_stack_00000004 + 8));
      }
      local_28 = local_28 + 0x8c;
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(in_stack_00000004 + 8));
  }
  return;
}


// Assembly code:
// 00516a40: PUSH EBX
//   Label: shape_meshlod.cpp_FUN_00516a40
// 00516a41: PUSH ESI
// 00516a42: PUSH EDI
// 00516a43: PUSH EBP
// 00516a44: SUB ESP,0x18
// 00516a47: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00516a4b: XOR EDX,EDX
// 00516a4d: MOV ECX,dword ptr [EAX + 0x8]
// 00516a50: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00516a54: TEST ECX,ECX
// 00516a56: JLE 0x00516a91
//   XREF to: 00516a91 (CONDITIONAL_JUMP)
// 00516a58: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x28] (DATA)
// 00516a5b: MOV EAX,dword ptr [ESP + 0x2c]
//   Label: LAB_00516a5b
//   XREF to: Stack[0x4] (READ)
// 00516a5f: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00516a62: MOV EAX,dword ptr [EAX + 0xc]
// 00516a65: ADD EDX,EAX
// 00516a67: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 00516a6b: CMP dword ptr [EDX + 0x40],0x0
// 00516a6f: JZ 0x00516a99
//   XREF to: 00516a99 (CONDITIONAL_JUMP)
// 00516a71: MOV EBX,dword ptr [ESP]
//   Label: LAB_00516a71
//   XREF to: Stack[-0x28] (DATA)
// 00516a74: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 00516a78: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00516a7c: ADD EBX,0x8c
// 00516a82: INC ESI
// 00516a83: MOV EDI,dword ptr [EDX + 0x8]
// 00516a86: MOV dword ptr [ESP],EBX
//   XREF to: Stack[-0x28] (DATA)
// 00516a89: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 00516a8d: CMP ESI,EDI
// 00516a8f: JL 0x00516a5b
//   XREF to: 00516a5b (CONDITIONAL_JUMP)
// 00516a91: ADD ESP,0x18
//   Label: LAB_00516a91
// 00516a94: POP EBP
// 00516a95: POP EDI
// 00516a96: POP ESI
// 00516a97: POP EBX
// 00516a98: RET
// 00516a99: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_00516a99
//   XREF to: Stack[-0x24] (READ)
// 00516a9d: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00516aa1: INC EAX
// 00516aa2: MOV ECX,dword ptr [EDX + 0x8]
// 00516aa5: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00516aa9: CMP EAX,ECX
// 00516aab: JGE 0x00516a71
//   XREF to: 00516a71 (CONDITIONAL_JUMP)
// 00516aad: IMUL EAX,EAX,0x8c
// 00516ab3: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00516ab7: MOV EDI,dword ptr [ESP + 0x2c]
//   Label: LAB_00516ab7
//   XREF to: Stack[0x4] (READ)
// 00516abb: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 00516abf: MOV EDI,dword ptr [EDI + 0xc]
// 00516ac2: ADD EDI,EAX
// 00516ac4: CMP dword ptr [EDI + 0x40],0x0
// 00516ac8: JNZ 0x00516afc
//   XREF to: 00516afc (CONDITIONAL_JUMP)
// 00516aca: XOR EBP,EBP
// 00516acc: MOV ESI,dword ptr [ESP + 0x10]
//   Label: LAB_00516acc
//   XREF to: Stack[-0x18] (READ)
// 00516ad0: MOV ECX,EBP
// 00516ad2: XOR EBX,EBX
// 00516ad4: MOV dword ptr [ESP + 0x14],0x3
//   Label: LAB_00516ad4
//   XREF to: Stack[-0x14] (WRITE)
// 00516adc: MOV EDX,ECX
// 00516ade: MOV EAX,ECX
// 00516ae0: SAR EDX,0x1f
// 00516ae3: IDIV dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00516ae7: MOV EAX,dword ptr [ESI + 0x10]
// 00516aea: CMP EAX,dword ptr [EDI + EDX*0x4 + 0x10]
// 00516aee: JZ 0x00516b2c
//   XREF to: 00516b2c (CONDITIONAL_JUMP)
// 00516af0: CMP EBX,0x3
//   Label: LAB_00516af0
// 00516af3: JNZ 0x00516b24
//   XREF to: 00516b24 (CONDITIONAL_JUMP)
// 00516af5: MOV dword ptr [EDI + 0x40],0x1
// 00516afc: MOV EBX,dword ptr [ESP + 0x8]
//   Label: LAB_00516afc
//   XREF to: Stack[-0x20] (READ)
// 00516b00: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00516b04: MOV EDX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 00516b08: ADD EBX,0x8c
// 00516b0e: INC ESI
// 00516b0f: MOV EDI,dword ptr [EDX + 0x8]
// 00516b12: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 00516b16: MOV dword ptr [ESP + 0xc],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 00516b1a: CMP ESI,EDI
// 00516b1c: JGE 0x00516a71
//   XREF to: 00516a71 (CONDITIONAL_JUMP)
// 00516b22: JMP 0x00516ab7
//   XREF to: 00516ab7 (UNCONDITIONAL_JUMP)
// 00516b24: INC EBP
//   Label: LAB_00516b24
// 00516b25: CMP EBP,0x3
// 00516b28: JL 0x00516acc
//   XREF to: 00516acc (CONDITIONAL_JUMP)
// 00516b2a: JMP 0x00516afc
//   XREF to: 00516afc (UNCONDITIONAL_JUMP)
// 00516b2c: INC ECX
//   Label: LAB_00516b2c
// 00516b2d: INC EBX
// 00516b2e: ADD ESI,0x4
// 00516b31: CMP EBX,0x3
// 00516b34: JL 0x00516ad4
//   XREF to: 00516ad4 (CONDITIONAL_JUMP)
// 00516b36: JMP 0x00516af0
//   XREF to: 00516af0 (UNCONDITIONAL_JUMP)
