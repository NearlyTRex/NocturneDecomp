// Name: engine_colquant.c_FUN_00440f00
// Address: 00440f00
// Address Range: [[00440f00, 00441033]]
// Convention: unknown
// Signature: undefined engine_colquant.c_FUN_00440f00()
// Cross-references:
//   engine_colquant.c_FUN_004406c0 (004406c0) at 00440956 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_colquant.c_FUN_00441110
//   engine_colquant.c_FUN_00441260

#include "nocturne.h"

void engine_colquant_c_FUN_00440f00(void)

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
  iVar5 = *(int *)(iVar5 + 0x400c + in_stack_00000004) >> 0x10;
  if (local_14 < iVar4) {
    local_18 = local_14 << 2;
    do {
      if (iVar5 < (int)(uint)*(byte *)(*(int *)(in_stack_00000004 + 0x2004) + local_18 + 3)) {
        for (iVar2 = iVar4 * 4;
            (local_14 * 4 < iVar2 &&
            (iVar5 < (int)(uint)*(byte *)(*(int *)(in_stack_00000004 + 0x2004) + 3 + iVar2)));
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
// 00440f00: PUSH EBX
//   Label: engine_colquant.c_FUN_00440f00
// 00440f01: PUSH ESI
// 00440f02: PUSH EDI
// 00440f03: PUSH EBP
// 00440f04: SUB ESP,0x8
// 00440f07: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00440f0b: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00440f0f: SHL EDI,0x6
// 00440f12: MOV EAX,dword ptr [EDI + EBX*0x1 + 0x4040]
// 00440f19: MOV ECX,dword ptr [EDI + EBX*0x1 + 0x4044]
// 00440f20: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00440f24: LEA EDX,[EAX + ECX*0x1]
// 00440f27: MOV EDI,dword ptr [EDI + EBX*0x1 + 0x400c]
// 00440f2e: DEC EDX
// 00440f2f: SAR EDI,0x10
// 00440f32: CMP EDX,EAX
// 00440f34: JLE 0x00440fb4
//   XREF to: 00440fb4 (CONDITIONAL_JUMP)
// 00440f3a: SHL EAX,0x2
// 00440f3d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 00440f40: MOV ESI,dword ptr [ESP]
//   Label: LAB_00440f40
//   XREF to: Stack[-0x18] (DATA)
// 00440f43: MOV EAX,dword ptr [EBX + 0x2004]
// 00440f49: ADD EAX,ESI
// 00440f4b: MOV AL,byte ptr [EAX + 0x3]
// 00440f4e: AND EAX,0xff
// 00440f53: CMP EAX,EDI
// 00440f55: JLE 0x00440f9e
//   XREF to: 00440f9e (CONDITIONAL_JUMP)
// 00440f57: MOV ESI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00440f5b: LEA EAX,[EDX*0x4 + 0x0]
// 00440f62: SHL ESI,0x2
// 00440f65: CMP ESI,EAX
//   Label: LAB_00440f65
// 00440f67: JGE 0x00440f83
//   XREF to: 00440f83 (CONDITIONAL_JUMP)
// 00440f69: MOV ECX,dword ptr [EBX + 0x2004]
// 00440f6f: MOV CL,byte ptr [ECX + EAX*0x1 + 0x3]
// 00440f73: AND ECX,0xff
// 00440f79: CMP ECX,EDI
// 00440f7b: JLE 0x00440f83
//   XREF to: 00440f83 (CONDITIONAL_JUMP)
// 00440f7d: DEC EDX
// 00440f7e: SUB EAX,0x4
// 00440f81: JMP 0x00440f65
//   XREF to: 00440f65 (UNCONDITIONAL_JUMP)
// 00440f83: MOV ECX,dword ptr [ESP]
//   Label: LAB_00440f83
//   XREF to: Stack[-0x18] (DATA)
// 00440f86: MOV ESI,dword ptr [EBX + 0x2004]
// 00440f8c: ADD ECX,ESI
// 00440f8e: MOV ESI,dword ptr [ESI + EDX*0x4]
// 00440f91: MOV EBP,dword ptr [ECX]
// 00440f93: MOV dword ptr [ECX],ESI
// 00440f95: MOV ECX,dword ptr [EBX + 0x2004]
// 00440f9b: MOV dword ptr [ECX + EDX*0x4],EBP
// 00440f9e: MOV EBP,dword ptr [ESP]
//   Label: LAB_00440f9e
//   XREF to: Stack[-0x18] (DATA)
// 00440fa1: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00440fa5: ADD EBP,0x4
// 00440fa8: INC EAX
// 00440fa9: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x18] (DATA)
// 00440fac: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00440fb0: CMP EDX,EAX
// 00440fb2: JG 0x00440f40
//   XREF to: 00440f40 (CONDITIONAL_JUMP)
// 00440fb4: MOV EAX,dword ptr [ESP + 0x24]
//   Label: LAB_00440fb4
//   XREF to: Stack[0xc] (READ)
// 00440fb8: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00440fbc: SHL EAX,0x6
// 00440fbf: SHL ESI,0x6
// 00440fc2: MOV dword ptr [EBX + EAX*0x1 + 0x4040],EDX
// 00440fc9: MOV ECX,EDX
// 00440fcb: MOV EBP,dword ptr [ESI + EBX*0x1 + 0x4040]
// 00440fd2: MOV EDI,dword ptr [ESI + EBX*0x1 + 0x4044]
// 00440fd9: SUB ECX,EBP
// 00440fdb: MOV EBP,EDI
// 00440fdd: SUB EBP,ECX
// 00440fdf: MOV dword ptr [EBX + EAX*0x1 + 0x4044],EBP
// 00440fe6: MOV EAX,dword ptr [ESI + EBX*0x1 + 0x4040]
// 00440fed: SUB EDX,EAX
// 00440fef: MOV dword ptr [ESI + EBX*0x1 + 0x4044],EDX
// 00440ff6: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 00440ffa: PUSH EDX
// 00440ffb: PUSH EBX
// 00440ffc: CALL engine_colquant.c_FUN_00441260
//   XREF to: 00441260 (UNCONDITIONAL_CALL)
// 00441001: ADD ESP,0x8
// 00441004: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00441008: PUSH ECX
// 00441009: PUSH EBX
// 0044100a: CALL engine_colquant.c_FUN_00441260
//   XREF to: 00441260 (UNCONDITIONAL_CALL)
// 0044100f: ADD ESP,0x8
// 00441012: MOV dword ptr [ESI + EBX*0x1 + 0x4044],EDI
// 00441019: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0044101d: PUSH ESI
// 0044101e: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00441022: PUSH EDI
// 00441023: PUSH EBX
// 00441024: CALL engine_colquant.c_FUN_00441110
//   XREF to: 00441110 (UNCONDITIONAL_CALL)
// 00441029: ADD ESP,0xc
// 0044102c: ADD ESP,0x8
// 0044102f: POP EBP
// 00441030: POP EDI
// 00441031: POP ESI
// 00441032: POP EBX
// 00441033: RET
