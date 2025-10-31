// Name: engine_colquant.c_FUN_00440dc0
// Address: 00440dc0
// Address Range: [[00440dc0, 00440ef3]]
// Convention: unknown
// Signature: undefined engine_colquant.c_FUN_00440dc0()
// Cross-references:
//   engine_colquant.c_FUN_004406c0 (004406c0) at 00440946 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_colquant.c_FUN_00441110
//   engine_colquant.c_FUN_00441260

#include "nocturne.h"

void engine_colquant_c_FUN_00440dc0(void)

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
  iVar5 = *(int *)(iVar5 + 0x400a + in_stack_00000004) >> 0x10;
  if (local_14 < iVar4) {
    local_18 = local_14 << 2;
    do {
      if (iVar5 < (int)(uint)*(byte *)(*(int *)(in_stack_00000004 + 0x2004) + local_18 + 2)) {
        for (iVar2 = iVar4 * 4;
            (local_14 * 4 < iVar2 &&
            (iVar5 < (int)(uint)*(byte *)(*(int *)(in_stack_00000004 + 0x2004) + 2 + iVar2)));
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
// 00440dc0: PUSH EBX
//   Label: engine_colquant.c_FUN_00440dc0
// 00440dc1: PUSH ESI
// 00440dc2: PUSH EDI
// 00440dc3: PUSH EBP
// 00440dc4: SUB ESP,0x8
// 00440dc7: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00440dcb: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00440dcf: SHL EDI,0x6
// 00440dd2: MOV EAX,dword ptr [EDI + EBX*0x1 + 0x4040]
// 00440dd9: MOV ECX,dword ptr [EDI + EBX*0x1 + 0x4044]
// 00440de0: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00440de4: LEA EDX,[EAX + ECX*0x1]
// 00440de7: MOV EDI,dword ptr [EDI + EBX*0x1 + 0x400a]
// 00440dee: DEC EDX
// 00440def: SAR EDI,0x10
// 00440df2: CMP EDX,EAX
// 00440df4: JLE 0x00440e74
//   XREF to: 00440e74 (CONDITIONAL_JUMP)
// 00440dfa: SHL EAX,0x2
// 00440dfd: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00440e00: MOV ESI,dword ptr [ESP]
//   Label: LAB_00440e00
//   XREF to: Stack[-0x18] (DATA)
// 00440e03: MOV EAX,dword ptr [EBX + 0x2004]
// 00440e09: ADD EAX,ESI
// 00440e0b: MOV AL,byte ptr [EAX + 0x2]
// 00440e0e: AND EAX,0xff
// 00440e13: CMP EAX,EDI
// 00440e15: JLE 0x00440e5e
//   XREF to: 00440e5e (CONDITIONAL_JUMP)
// 00440e17: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00440e1b: LEA EAX,[EDX*0x4 + 0x0]
// 00440e22: SHL ESI,0x2
// 00440e25: CMP ESI,EAX
//   Label: LAB_00440e25
// 00440e27: JGE 0x00440e43
//   XREF to: 00440e43 (CONDITIONAL_JUMP)
// 00440e29: MOV ECX,dword ptr [EBX + 0x2004]
// 00440e2f: MOV CL,byte ptr [ECX + EAX*0x1 + 0x2]
// 00440e33: AND ECX,0xff
// 00440e39: CMP ECX,EDI
// 00440e3b: JLE 0x00440e43
//   XREF to: 00440e43 (CONDITIONAL_JUMP)
// 00440e3d: DEC EDX
// 00440e3e: SUB EAX,0x4
// 00440e41: JMP 0x00440e25
//   XREF to: 00440e25 (UNCONDITIONAL_JUMP)
// 00440e43: MOV ECX,dword ptr [ESP]
//   Label: LAB_00440e43
//   XREF to: Stack[-0x18] (DATA)
// 00440e46: MOV ESI,dword ptr [EBX + 0x2004]
// 00440e4c: ADD ECX,ESI
// 00440e4e: MOV ESI,dword ptr [ESI + EDX*0x4]
// 00440e51: MOV EBP,dword ptr [ECX]
// 00440e53: MOV dword ptr [ECX],ESI
// 00440e55: MOV ECX,dword ptr [EBX + 0x2004]
// 00440e5b: MOV dword ptr [ECX + EDX*0x4],EBP
// 00440e5e: MOV EBP,dword ptr [ESP]
//   Label: LAB_00440e5e
//   XREF to: Stack[-0x18] (DATA)
// 00440e61: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00440e65: ADD EBP,0x4
// 00440e68: INC EAX
// 00440e69: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x18] (DATA)
// 00440e6c: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00440e70: CMP EDX,EAX
// 00440e72: JG 0x00440e00
//   XREF to: 00440e00 (CONDITIONAL_JUMP)
// 00440e74: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00440e74
//   XREF to: Stack[0xc] (READ)
// 00440e78: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00440e7c: SHL EAX,0x6
// 00440e7f: SHL ESI,0x6
// 00440e82: MOV dword ptr [EBX + EAX*0x1 + 0x4040],EDX
// 00440e89: MOV ECX,EDX
// 00440e8b: MOV EBP,dword ptr [ESI + EBX*0x1 + 0x4040]
// 00440e92: MOV EDI,dword ptr [ESI + EBX*0x1 + 0x4044]
// 00440e99: SUB ECX,EBP
// 00440e9b: MOV EBP,EDI
// 00440e9d: SUB EBP,ECX
// 00440e9f: MOV dword ptr [EBX + EAX*0x1 + 0x4044],EBP
// 00440ea6: MOV EAX,dword ptr [ESI + EBX*0x1 + 0x4040]
// 00440ead: SUB EDX,EAX
// 00440eaf: MOV dword ptr [ESI + EBX*0x1 + 0x4044],EDX
// 00440eb6: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00440eba: PUSH EDX
// 00440ebb: PUSH EBX
// 00440ebc: CALL engine_colquant.c_FUN_00441260
//   XREF to: 00441260 (UNCONDITIONAL_CALL)
// 00440ec1: ADD ESP,0x8
// 00440ec4: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00440ec8: PUSH ECX
// 00440ec9: PUSH EBX
// 00440eca: CALL engine_colquant.c_FUN_00441260
//   XREF to: 00441260 (UNCONDITIONAL_CALL)
// 00440ecf: ADD ESP,0x8
// 00440ed2: MOV dword ptr [ESI + EBX*0x1 + 0x4044],EDI
// 00440ed9: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00440edd: PUSH ESI
// 00440ede: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00440ee2: PUSH EDI
// 00440ee3: PUSH EBX
// 00440ee4: CALL engine_colquant.c_FUN_00441110
//   XREF to: 00441110 (UNCONDITIONAL_CALL)
// 00440ee9: ADD ESP,0xc
// 00440eec: ADD ESP,0x8
// 00440eef: POP EBP
// 00440ef0: POP EDI
// 00440ef1: POP ESI
// 00440ef2: POP EBX
// 00440ef3: RET
