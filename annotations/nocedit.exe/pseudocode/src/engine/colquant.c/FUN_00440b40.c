// Name: engine_colquant.c_FUN_00440b40
// Address: 00440b40
// Address Range: [[00440b40, 00440c71]]
// Convention: unknown
// Signature: undefined engine_colquant.c_FUN_00440b40()
// Cross-references:
//   engine_colquant.c_FUN_004406c0 (004406c0) at 00440926 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_colquant.c_FUN_00441110
//   engine_colquant.c_FUN_00441260

#include "nocturne.h"

void engine_colquant_c_FUN_00440b40(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar5 = in_stack_00000008 * 0x40;
  local_14 = *(int *)(iVar5 + 0x4040 + in_stack_00000004);
  iVar4 = local_14 + *(int *)(iVar5 + 0x4044 + in_stack_00000004) + -1;
  iVar5 = *(int *)(iVar5 + 0x4006 + in_stack_00000004) >> 0x10;
  if (local_14 < iVar4) {
    local_18 = local_14 << 2;
    do {
      if (iVar5 < (int)(uint)*(byte *)(*(int *)(in_stack_00000004 + 0x2004) + local_18)) {
        for (iVar2 = iVar4 * 4;
            (local_14 * 4 < iVar2 &&
            (iVar5 < (int)(uint)*(byte *)(*(int *)(in_stack_00000004 + 0x2004) + iVar2)));
            iVar2 = iVar2 + -4) {
          iVar4 = iVar4 + -1;
        }
        puVar3 = (undefined4 *)(local_18 + *(int *)(in_stack_00000004 + 0x2004));
        uVar1 = *puVar3;
        *puVar3 = *(undefined4 *)(*(int *)(in_stack_00000004 + 0x2004) + iVar4 * 4);
        *(undefined4 *)(*(int *)(in_stack_00000004 + 0x2004) + iVar4 * 4) = uVar1;
      }
      local_18 = local_18 + 4;
      local_14 = local_14 + 1;
    } while (local_14 < iVar4);
  }
  in_stack_00000008 = in_stack_00000008 * 0x40;
  *(int *)(in_stack_00000004 + 0x4040 + in_stack_0000000c * 0x40) = iVar4;
  iVar5 = *(int *)(in_stack_00000008 + 0x4044 + in_stack_00000004);
  *(int *)(in_stack_00000004 + 0x4044 + in_stack_0000000c * 0x40) =
       iVar5 - (iVar4 - *(int *)(in_stack_00000008 + 0x4040 + in_stack_00000004));
  *(int *)(in_stack_00000008 + 0x4044 + in_stack_00000004) =
       iVar4 - *(int *)(in_stack_00000008 + 0x4040 + in_stack_00000004);
  engine_colquant_c_FUN_00441260();
  engine_colquant_c_FUN_00441260();
  *(int *)(in_stack_00000008 + 0x4044 + in_stack_00000004) = iVar5;
  engine_colquant_c_FUN_00441110();
  return;
}


// Assembly code:
// 00440b40: PUSH EBX
//   Label: engine_colquant.c_FUN_00440b40
// 00440b41: PUSH ESI
// 00440b42: PUSH EDI
// 00440b43: PUSH EBP
// 00440b44: SUB ESP,0x8
// 00440b47: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00440b4b: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00440b4f: SHL EDI,0x6
// 00440b52: MOV EAX,dword ptr [EDI + EBX*0x1 + 0x4040]
// 00440b59: MOV ECX,dword ptr [EDI + EBX*0x1 + 0x4044]
// 00440b60: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00440b64: LEA EDX,[EAX + ECX*0x1]
// 00440b67: MOV EDI,dword ptr [EDI + EBX*0x1 + 0x4006]
// 00440b6e: DEC EDX
// 00440b6f: SAR EDI,0x10
// 00440b72: CMP EDX,EAX
// 00440b74: JLE 0x00440bf2
//   XREF to: 00440bf2 (CONDITIONAL_JUMP)
// 00440b7a: SHL EAX,0x2
// 00440b7d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00440b80: MOV ESI,dword ptr [ESP]
//   Label: LAB_00440b80
//   XREF to: Stack[-0x18] (DATA)
// 00440b83: MOV EAX,dword ptr [EBX + 0x2004]
// 00440b89: ADD EAX,ESI
// 00440b8b: MOV AL,byte ptr [EAX]
// 00440b8d: AND EAX,0xff
// 00440b92: CMP EAX,EDI
// 00440b94: JLE 0x00440bdc
//   XREF to: 00440bdc (CONDITIONAL_JUMP)
// 00440b96: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00440b9a: LEA EAX,[EDX*0x4 + 0x0]
// 00440ba1: SHL ESI,0x2
// 00440ba4: CMP ESI,EAX
//   Label: LAB_00440ba4
// 00440ba6: JGE 0x00440bc1
//   XREF to: 00440bc1 (CONDITIONAL_JUMP)
// 00440ba8: MOV ECX,dword ptr [EBX + 0x2004]
// 00440bae: MOV CL,byte ptr [ECX + EAX*0x1]
// 00440bb1: AND ECX,0xff
// 00440bb7: CMP ECX,EDI
// 00440bb9: JLE 0x00440bc1
//   XREF to: 00440bc1 (CONDITIONAL_JUMP)
// 00440bbb: DEC EDX
// 00440bbc: SUB EAX,0x4
// 00440bbf: JMP 0x00440ba4
//   XREF to: 00440ba4 (UNCONDITIONAL_JUMP)
// 00440bc1: MOV ECX,dword ptr [ESP]
//   Label: LAB_00440bc1
//   XREF to: Stack[-0x18] (DATA)
// 00440bc4: MOV ESI,dword ptr [EBX + 0x2004]
// 00440bca: ADD ECX,ESI
// 00440bcc: MOV ESI,dword ptr [ESI + EDX*0x4]
// 00440bcf: MOV EBP,dword ptr [ECX]
// 00440bd1: MOV dword ptr [ECX],ESI
// 00440bd3: MOV ECX,dword ptr [EBX + 0x2004]
// 00440bd9: MOV dword ptr [ECX + EDX*0x4],EBP
// 00440bdc: MOV EBP,dword ptr [ESP]
//   Label: LAB_00440bdc
//   XREF to: Stack[-0x18] (DATA)
// 00440bdf: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00440be3: ADD EBP,0x4
// 00440be6: INC EAX
// 00440be7: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x18] (DATA)
// 00440bea: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00440bee: CMP EDX,EAX
// 00440bf0: JG 0x00440b80
//   XREF to: 00440b80 (CONDITIONAL_JUMP)
// 00440bf2: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00440bf2
//   XREF to: Stack[0xc] (READ)
// 00440bf6: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00440bfa: SHL EAX,0x6
// 00440bfd: SHL ESI,0x6
// 00440c00: MOV dword ptr [EBX + EAX*0x1 + 0x4040],EDX
// 00440c07: MOV ECX,EDX
// 00440c09: MOV EBP,dword ptr [ESI + EBX*0x1 + 0x4040]
// 00440c10: MOV EDI,dword ptr [ESI + EBX*0x1 + 0x4044]
// 00440c17: SUB ECX,EBP
// 00440c19: MOV EBP,EDI
// 00440c1b: SUB EBP,ECX
// 00440c1d: MOV dword ptr [EBX + EAX*0x1 + 0x4044],EBP
// 00440c24: MOV EAX,dword ptr [ESI + EBX*0x1 + 0x4040]
// 00440c2b: SUB EDX,EAX
// 00440c2d: MOV dword ptr [ESI + EBX*0x1 + 0x4044],EDX
// 00440c34: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00440c38: PUSH EDX
// 00440c39: PUSH EBX
// 00440c3a: CALL engine_colquant.c_FUN_00441260
//   XREF to: 00441260 (UNCONDITIONAL_CALL)
// 00440c3f: ADD ESP,0x8
// 00440c42: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00440c46: PUSH ECX
// 00440c47: PUSH EBX
// 00440c48: CALL engine_colquant.c_FUN_00441260
//   XREF to: 00441260 (UNCONDITIONAL_CALL)
// 00440c4d: ADD ESP,0x8
// 00440c50: MOV dword ptr [ESI + EBX*0x1 + 0x4044],EDI
// 00440c57: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00440c5b: PUSH ESI
// 00440c5c: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00440c60: PUSH EDI
// 00440c61: PUSH EBX
// 00440c62: CALL engine_colquant.c_FUN_00441110
//   XREF to: 00441110 (UNCONDITIONAL_CALL)
// 00440c67: ADD ESP,0xc
// 00440c6a: ADD ESP,0x8
// 00440c6d: POP EBP
// 00440c6e: POP EDI
// 00440c6f: POP ESI
// 00440c70: POP EBX
// 00440c71: RET
