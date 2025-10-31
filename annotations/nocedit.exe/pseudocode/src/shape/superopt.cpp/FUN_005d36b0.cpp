// Name: shape_superopt.cpp_FUN_005d36b0
// Address: 005d36b0
// Address Range: [[005d36b0, 005d375f]]
// Convention: unknown
// Signature: undefined shape_superopt.cpp_FUN_005d36b0()

#include "nocturne.h"

/* Signature: undefined1 shape_superopt.cpp_FUN_005d36b0(undefined4 param_1, undefined4 param_2) */

void shape_superopt_cpp_FUN_005d36b0(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int in_stack_00000004;
  uint in_stack_00000008;
  uint local_1c;
  uint local_18;
  
  uVar4 = *(uint *)(in_stack_00000004 + 0xc);
  bVar1 = true;
  local_1c = 0;
  if (*(int *)(in_stack_00000004 + 8) != 0) {
    local_18 = uVar4 + 0xc;
    do {
      iVar3 = 0;
      uVar2 = uVar4;
      do {
        if ((*(uint *)(*(int *)(in_stack_00000004 + 4) + 0x34 + *(int *)(uVar2 + 4) * 0x38) &
            in_stack_00000008) != in_stack_00000008) break;
        uVar2 = uVar2 + 4;
        iVar3 = iVar3 + 1;
      } while (uVar2 < local_18);
      if (iVar3 == 3) {
        *(uint *)(uVar4 + 0x60) = *(uint *)(uVar4 + 0x60) | in_stack_00000008;
      }
      else {
        *(uint *)(uVar4 + 0x60) = *(uint *)(uVar4 + 0x60) & ~in_stack_00000008;
        bVar1 = false;
      }
      uVar4 = uVar4 + 0x68;
      local_1c = local_1c + 1;
      local_18 = local_18 + 0x68;
    } while (local_1c < *(uint *)(in_stack_00000004 + 8));
  }
  if (!bVar1) {
    *(uint *)(in_stack_00000004 + 0x10) = *(uint *)(in_stack_00000004 + 0x10) & ~in_stack_00000008;
    return;
  }
  *(uint *)(in_stack_00000004 + 0x10) = *(uint *)(in_stack_00000004 + 0x10) | in_stack_00000008;
  return;
}


// Assembly code:
// 005d36b0: PUSH EBX
//   Label: shape_superopt.cpp_FUN_005d36b0
// 005d36b1: PUSH ESI
// 005d36b2: PUSH EDI
// 005d36b3: PUSH EBP
// 005d36b4: SUB ESP,0x10
// 005d36b7: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005d36bb: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 005d36bf: MOV ECX,0x1
// 005d36c4: MOV ESI,dword ptr [EDI + 0x8]
// 005d36c7: MOV EBP,dword ptr [EDI + 0xc]
// 005d36ca: XOR EBX,EBX
// 005d36cc: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x20] (DATA)
// 005d36cf: MOV dword ptr [ESP + 0x4],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005d36d3: TEST ESI,ESI
// 005d36d5: JBE 0x005d3721
//   XREF to: 005d3721 (CONDITIONAL_JUMP)
// 005d36d7: LEA EAX,[EBP + 0xc]
// 005d36da: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005d36de: MOV EBX,dword ptr [ESP + 0x8]
//   Label: LAB_005d36de
//   XREF to: Stack[-0x18] (READ)
// 005d36e2: MOV EAX,EBP
// 005d36e4: XOR ECX,ECX
// 005d36e6: MOV dword ptr [ESP + 0xc],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 005d36ea: IMUL EBX,dword ptr [EAX + 0x4],0x38
//   Label: LAB_005d36ea
// 005d36ee: MOV ESI,dword ptr [EDI + 0x4]
// 005d36f1: MOV EBX,dword ptr [ESI + EBX*0x1 + 0x34]
// 005d36f5: AND EBX,EDX
// 005d36f7: CMP EBX,EDX
// 005d36f9: JZ 0x005d3732
//   XREF to: 005d3732 (CONDITIONAL_JUMP)
// 005d36fb: CMP ECX,0x3
//   Label: LAB_005d36fb
// 005d36fe: JNZ 0x005d3740
//   XREF to: 005d3740 (CONDITIONAL_JUMP)
// 005d3700: OR dword ptr [EBP + 0x60],EDX
// 005d3703: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_005d3703
//   XREF to: Stack[-0x1c] (READ)
// 005d3707: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005d370b: ADD EBP,0x68
// 005d370e: MOV EBX,dword ptr [EDI + 0x8]
// 005d3711: INC EAX
// 005d3712: ADD ECX,0x68
// 005d3715: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005d3719: MOV dword ptr [ESP + 0x8],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 005d371d: CMP EAX,EBX
// 005d371f: JC 0x005d36de
//   XREF to: 005d36de (CONDITIONAL_JUMP)
// 005d3721: CMP dword ptr [ESP],0x0
//   Label: LAB_005d3721
//   XREF to: Stack[-0x20] (DATA)
// 005d3725: JZ 0x005d3753
//   XREF to: 005d3753 (CONDITIONAL_JUMP)
// 005d3727: OR dword ptr [EDI + 0x10],EDX
// 005d372a: ADD ESP,0x10
// 005d372d: POP EBP
// 005d372e: POP EDI
// 005d372f: POP ESI
// 005d3730: POP EBX
// 005d3731: RET
// 005d3732: MOV EBX,dword ptr [ESP + 0xc]
//   Label: LAB_005d3732
//   XREF to: Stack[-0x14] (READ)
// 005d3736: ADD EAX,0x4
// 005d3739: INC ECX
// 005d373a: CMP EAX,EBX
// 005d373c: JC 0x005d36ea
//   XREF to: 005d36ea (CONDITIONAL_JUMP)
// 005d373e: JMP 0x005d36fb
//   XREF to: 005d36fb (UNCONDITIONAL_JUMP)
// 005d3740: MOV EAX,EDX
//   Label: LAB_005d3740
// 005d3742: MOV ESI,dword ptr [EBP + 0x60]
// 005d3745: NOT EAX
// 005d3747: AND ESI,EAX
// 005d3749: XOR EAX,EAX
// 005d374b: MOV dword ptr [EBP + 0x60],ESI
// 005d374e: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x20] (DATA)
// 005d3751: JMP 0x005d3703
//   XREF to: 005d3703 (UNCONDITIONAL_JUMP)
// 005d3753: NOT EDX
//   Label: LAB_005d3753
// 005d3755: AND dword ptr [EDI + 0x10],EDX
// 005d3758: ADD ESP,0x10
// 005d375b: POP EBP
// 005d375c: POP EDI
// 005d375d: POP ESI
// 005d375e: POP EBX
// 005d375f: RET
