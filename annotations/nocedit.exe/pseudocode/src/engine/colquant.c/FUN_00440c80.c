// Name: engine_colquant.c_FUN_00440c80
// Address: 00440c80
// Address Range: [[00440c80, 00440db3]]
// Convention: unknown
// Signature: undefined engine_colquant.c_FUN_00440c80()
// Cross-references:
//   engine_colquant.c_FUN_004406c0 (004406c0) at 00440936 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_colquant.c_FUN_00441110
//   engine_colquant.c_FUN_00441260

#include "nocturne.h"

void engine_colquant_c_FUN_00440c80(void)

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
  iVar5 = *(int *)(iVar5 + 0x4008 + in_stack_00000004) >> 0x10;
  if (local_14 < iVar4) {
    local_18 = local_14 << 2;
    do {
      if (iVar5 < (int)(uint)*(byte *)(*(int *)(in_stack_00000004 + 0x2004) + local_18 + 1)) {
        for (iVar2 = iVar4 * 4;
            (local_14 * 4 < iVar2 &&
            (iVar5 < (int)(uint)*(byte *)(*(int *)(in_stack_00000004 + 0x2004) + 1 + iVar2)));
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
// 00440c80: PUSH EBX
//   Label: engine_colquant.c_FUN_00440c80
// 00440c81: PUSH ESI
// 00440c82: PUSH EDI
// 00440c83: PUSH EBP
// 00440c84: SUB ESP,0x8
// 00440c87: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00440c8b: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00440c8f: SHL EDI,0x6
// 00440c92: MOV EAX,dword ptr [EDI + EBX*0x1 + 0x4040]
// 00440c99: MOV ECX,dword ptr [EDI + EBX*0x1 + 0x4044]
// 00440ca0: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00440ca4: LEA EDX,[EAX + ECX*0x1]
// 00440ca7: MOV EDI,dword ptr [EDI + EBX*0x1 + 0x4008]
// 00440cae: DEC EDX
// 00440caf: SAR EDI,0x10
// 00440cb2: CMP EDX,EAX
// 00440cb4: JLE 0x00440d34
//   XREF to: 00440d34 (CONDITIONAL_JUMP)
// 00440cba: SHL EAX,0x2
// 00440cbd: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00440cc0: MOV ESI,dword ptr [ESP]
//   Label: LAB_00440cc0
//   XREF to: Stack[-0x18] (DATA)
// 00440cc3: MOV EAX,dword ptr [EBX + 0x2004]
// 00440cc9: ADD EAX,ESI
// 00440ccb: MOV AL,byte ptr [EAX + 0x1]
// 00440cce: AND EAX,0xff
// 00440cd3: CMP EAX,EDI
// 00440cd5: JLE 0x00440d1e
//   XREF to: 00440d1e (CONDITIONAL_JUMP)
// 00440cd7: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00440cdb: LEA EAX,[EDX*0x4 + 0x0]
// 00440ce2: SHL ESI,0x2
// 00440ce5: CMP ESI,EAX
//   Label: LAB_00440ce5
// 00440ce7: JGE 0x00440d03
//   XREF to: 00440d03 (CONDITIONAL_JUMP)
// 00440ce9: MOV ECX,dword ptr [EBX + 0x2004]
// 00440cef: MOV CL,byte ptr [ECX + EAX*0x1 + 0x1]
// 00440cf3: AND ECX,0xff
// 00440cf9: CMP ECX,EDI
// 00440cfb: JLE 0x00440d03
//   XREF to: 00440d03 (CONDITIONAL_JUMP)
// 00440cfd: DEC EDX
// 00440cfe: SUB EAX,0x4
// 00440d01: JMP 0x00440ce5
//   XREF to: 00440ce5 (UNCONDITIONAL_JUMP)
// 00440d03: MOV ECX,dword ptr [ESP]
//   Label: LAB_00440d03
//   XREF to: Stack[-0x18] (DATA)
// 00440d06: MOV ESI,dword ptr [EBX + 0x2004]
// 00440d0c: ADD ECX,ESI
// 00440d0e: MOV ESI,dword ptr [ESI + EDX*0x4]
// 00440d11: MOV EBP,dword ptr [ECX]
// 00440d13: MOV dword ptr [ECX],ESI
// 00440d15: MOV ECX,dword ptr [EBX + 0x2004]
// 00440d1b: MOV dword ptr [ECX + EDX*0x4],EBP
// 00440d1e: MOV EBP,dword ptr [ESP]
//   Label: LAB_00440d1e
//   XREF to: Stack[-0x18] (DATA)
// 00440d21: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00440d25: ADD EBP,0x4
// 00440d28: INC EAX
// 00440d29: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x18] (DATA)
// 00440d2c: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00440d30: CMP EDX,EAX
// 00440d32: JG 0x00440cc0
//   XREF to: 00440cc0 (CONDITIONAL_JUMP)
// 00440d34: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00440d34
//   XREF to: Stack[0xc] (READ)
// 00440d38: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00440d3c: SHL EAX,0x6
// 00440d3f: SHL ESI,0x6
// 00440d42: MOV dword ptr [EBX + EAX*0x1 + 0x4040],EDX
// 00440d49: MOV ECX,EDX
// 00440d4b: MOV EBP,dword ptr [ESI + EBX*0x1 + 0x4040]
// 00440d52: MOV EDI,dword ptr [ESI + EBX*0x1 + 0x4044]
// 00440d59: SUB ECX,EBP
// 00440d5b: MOV EBP,EDI
// 00440d5d: SUB EBP,ECX
// 00440d5f: MOV dword ptr [EBX + EAX*0x1 + 0x4044],EBP
// 00440d66: MOV EAX,dword ptr [ESI + EBX*0x1 + 0x4040]
// 00440d6d: SUB EDX,EAX
// 00440d6f: MOV dword ptr [ESI + EBX*0x1 + 0x4044],EDX
// 00440d76: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00440d7a: PUSH EDX
// 00440d7b: PUSH EBX
// 00440d7c: CALL engine_colquant.c_FUN_00441260
//   XREF to: 00441260 (UNCONDITIONAL_CALL)
// 00440d81: ADD ESP,0x8
// 00440d84: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00440d88: PUSH ECX
// 00440d89: PUSH EBX
// 00440d8a: CALL engine_colquant.c_FUN_00441260
//   XREF to: 00441260 (UNCONDITIONAL_CALL)
// 00440d8f: ADD ESP,0x8
// 00440d92: MOV dword ptr [ESI + EBX*0x1 + 0x4044],EDI
// 00440d99: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00440d9d: PUSH ESI
// 00440d9e: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00440da2: PUSH EDI
// 00440da3: PUSH EBX
// 00440da4: CALL engine_colquant.c_FUN_00441110
//   XREF to: 00441110 (UNCONDITIONAL_CALL)
// 00440da9: ADD ESP,0xc
// 00440dac: ADD ESP,0x8
// 00440daf: POP EBP
// 00440db0: POP EDI
// 00440db1: POP ESI
// 00440db2: POP EBX
// 00440db3: RET
