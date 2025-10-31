// Name: core_zombie.cpp_FUN_005fcd20
// Address: 005fcd20
// Address Range: [[005fcd20, 005fce3b]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_FUN_005fcd20()
// Globals:
//   int g_RasterizerDepthBias
//   int g_RasterizerEdgeCount
//   SEdgeData[16] g_RasterizerEdgeArray
//   undefined4 g_RasterizerEdgeArray[0].y_end
//   undefined4 g_RasterizerEdgeArray[0].x_current
//   undefined4 g_RasterizerEdgeArray[0].x_delta
//   undefined4 g_RasterizerEdgeArray[0].z_current
//   undefined4 g_RasterizerEdgeArray[0].z_delta
//   int g_RasterizerMinY
//   int g_RasterizerMaxY

#include "nocturne.h"

void core_zombie_cpp_FUN_005fcd20(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar2 = g_RasterizerEdgeCount;
  iVar6 = *(int *)(in_stack_00000008 + 0x14) >> 0x10;
  iVar3 = *(int *)(in_stack_00000004 + 0x14) >> 0x10;
  if (iVar3 != iVar6) {
    iVar4 = iVar3;
    iVar7 = in_stack_00000004;
    if (*(int *)(in_stack_00000008 + 0x14) < *(int *)(in_stack_00000004 + 0x14)) {
      iVar4 = iVar6;
      iVar6 = iVar3;
      iVar7 = in_stack_00000008;
      in_stack_00000008 = in_stack_00000004;
    }
    g_RasterizerEdgeArray[g_RasterizerEdgeCount].y_start = iVar4;
    iVar3 = g_RasterizerMinY;
    g_RasterizerEdgeArray[iVar2].y_end = iVar6;
    if (iVar4 < iVar3) {
      g_RasterizerMinY = iVar4;
    }
    if (g_RasterizerMaxY < iVar6) {
      g_RasterizerMaxY = iVar6;
    }
    uVar5 = *(int *)(in_stack_00000008 + 0x14) - *(int *)(iVar7 + 0x14);
    if (uVar5 < 0x10000) {
      iVar6 = 0;
    }
    else {
      iVar6 = (int)(0xffffffff / (ulonglong)uVar5);
    }
    uVar8 = *(uint *)(iVar7 + 0x14) & 0xffff ^ 0xffff;
    lVar1 = (longlong)iVar6 *
            (longlong)(*(int *)(in_stack_00000008 + 0x10) - *(int *)(iVar7 + 0x10));
    uVar5 = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    g_RasterizerEdgeArray[iVar2].x_delta = uVar5;
    lVar1 = (longlong)(int)uVar8 * (longlong)(int)uVar5;
    g_RasterizerEdgeArray[iVar2].x_current =
         *(int *)(iVar7 + 0x10) + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)iVar6 *
            (longlong)((*(int *)(in_stack_00000008 + 8) - *(int *)(iVar7 + 8)) * 0x100);
    g_RasterizerEdgeArray[iVar2].z_delta =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)(int)uVar8 * (longlong)g_RasterizerEdgeArray[iVar2].z_delta;
    g_RasterizerEdgeCount = g_RasterizerEdgeCount + 1;
    g_RasterizerEdgeArray[iVar2].z_current =
         (*(int *)(iVar7 + 8) * 0x100 - g_RasterizerDepthBias) +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}


// Assembly code:
// 005fcd20: PUSH EBX
//   Label: core_zombie.cpp_FUN_005fcd20
// 005fcd21: PUSH EDI
// 005fcd22: PUSH EBP
// 005fcd23: SUB ESP,0x4
// 005fcd26: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005fcd2a: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005fcd2e: MOV EDX,dword ptr [EDI + 0x14]
// 005fcd31: MOV EAX,dword ptr [EBX + 0x14]
// 005fcd34: SAR EDX,0x10
// 005fcd37: SAR EAX,0x10
// 005fcd3a: CMP EAX,EDX
// 005fcd3c: JZ 0x005fce25
//   XREF to: 005fce25 (CONDITIONAL_JUMP)
// 005fcd42: PUSH ESI
// 005fcd43: MOV ESI,dword ptr [EDI + 0x14]
// 005fcd46: CMP ESI,dword ptr [EBX + 0x14]
// 005fcd49: JGE 0x005fcd57
//   XREF to: 005fcd57 (CONDITIONAL_JUMP)
// 005fcd4b: MOV ECX,EBX
// 005fcd4d: MOV EBX,EDI
// 005fcd4f: MOV EDI,ECX
// 005fcd51: MOV ECX,EAX
// 005fcd53: MOV EAX,EDX
// 005fcd55: MOV EDX,ECX
// 005fcd57: MOV ESI,dword ptr [0x03f9ad5c]
//   Label: LAB_005fcd57
//   XREF to: 03f9ad5c (READ)
// 005fcd5d: LEA ECX,[ESI*0x8 + 0x0]
// 005fcd64: ADD ECX,ESI
// 005fcd66: MOV ESI,0x3f9ad60
//   XREF to: 03f9ad60 (DATA)
// 005fcd6b: SHL ECX,0x3
// 005fcd6e: ADD ESI,ECX
// 005fcd70: MOV dword ptr [ESI],EAX
//   XREF to: 03f9ad60 (DATA)
// 005fcd72: MOV EBP,dword ptr [0x03f9b1e0]
//   XREF to: 03f9b1e0 (READ)
// 005fcd78: MOV dword ptr [ESI + 0x4],EDX
//   XREF to: 03f9ad64 (DATA)
// 005fcd7b: CMP EAX,EBP
// 005fcd7d: JGE 0x005fcd84
//   XREF to: 005fcd84 (CONDITIONAL_JUMP)
// 005fcd7f: MOV [0x03f9b1e0],EAX
//   XREF to: 03f9b1e0 (WRITE)
// 005fcd84: CMP EDX,dword ptr [0x03f9b1e4]
//   Label: LAB_005fcd84
//   XREF to: 03f9b1e4 (READ)
// 005fcd8a: JLE 0x005fcd92
//   XREF to: 005fcd92 (CONDITIONAL_JUMP)
// 005fcd8c: MOV dword ptr [0x03f9b1e4],EDX
//   XREF to: 03f9b1e4 (WRITE)
// 005fcd92: MOV EDX,dword ptr [EBX + 0x14]
//   Label: LAB_005fcd92
// 005fcd95: MOV ECX,dword ptr [EDI + 0x14]
// 005fcd98: SUB ECX,EDX
// 005fcd9a: CMP ECX,0x10000
// 005fcda0: JNC 0x005fce2c
//   XREF to: 005fce2c (CONDITIONAL_JUMP)
// 005fcda6: XOR ECX,ECX
// 005fcda8: MOV EAX,dword ptr [EDI + 0x10]
//   Label: LAB_005fcda8
// 005fcdab: MOV EDX,dword ptr [EBX + 0x10]
// 005fcdae: MOV EBP,dword ptr [EBX + 0x14]
// 005fcdb1: SUB EAX,EDX
// 005fcdb3: AND EBP,0xffff
// 005fcdb9: MOV EDX,EAX
// 005fcdbb: MOV EAX,ECX
// 005fcdbd: XOR EBP,0xffff
// 005fcdc3: IMUL EDX
// 005fcdc5: SHRD EAX,EDX,0x10
// 005fcdc9: MOV EDX,EAX
// 005fcdcb: MOV dword ptr [ESI + 0xc],EAX
//   XREF to: 03f9ad6c (DATA)
// 005fcdce: MOV EAX,EBP
// 005fcdd0: IMUL EDX
// 005fcdd2: SHRD EAX,EDX,0x10
// 005fcdd6: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005fcdda: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x10] (READ)
// 005fcdde: MOV EAX,dword ptr [EBX + 0x10]
// 005fcde1: ADD EAX,EDX
// 005fcde3: MOV dword ptr [ESI + 0x8],EAX
//   XREF to: 03f9ad68 (DATA)
// 005fcde6: MOV EDX,dword ptr [EDI + 0x8]
// 005fcde9: SUB EDX,dword ptr [EBX + 0x8]
// 005fcdec: MOV EAX,ECX
// 005fcdee: SHL EDX,0x8
// 005fcdf1: IMUL EDX
// 005fcdf3: SHRD EAX,EDX,0x10
// 005fcdf7: MOV dword ptr [ESI + 0x2c],EAX
//   XREF to: 03f9ad8c (DATA)
// 005fcdfa: MOV ECX,dword ptr [EBX + 0x8]
// 005fcdfd: MOV EAX,[0x02c6d03c]
//   XREF to: 02c6d03c (READ)
// 005fce02: SHL ECX,0x8
// 005fce05: MOV EDX,dword ptr [ESI + 0x2c]
//   XREF to: 03f9ad8c (DATA)
// 005fce08: SUB ECX,EAX
// 005fce0a: MOV EAX,EBP
// 005fce0c: IMUL EDX
// 005fce0e: SHRD EAX,EDX,0x10
// 005fce12: MOV EDX,dword ptr [0x03f9ad5c]
//   XREF to: 03f9ad5c (READ)
// 005fce18: ADD ECX,EAX
// 005fce1a: INC EDX
// 005fce1b: MOV dword ptr [ESI + 0x28],ECX
//   XREF to: 03f9ad88 (DATA)
// 005fce1e: MOV dword ptr [0x03f9ad5c],EDX
//   XREF to: 03f9ad5c (WRITE)
// 005fce24: POP ESI
// 005fce25: ADD ESP,0x4
//   Label: LAB_005fce25
// 005fce28: POP EBP
// 005fce29: POP EDI
// 005fce2a: POP EBX
// 005fce2b: RET
// 005fce2c: MOV EAX,0xffffffff
//   Label: LAB_005fce2c
// 005fce31: XOR EDX,EDX
// 005fce33: DIV ECX
// 005fce35: MOV ECX,EAX
// 005fce37: JMP 0x005fcda8
//   XREF to: 005fcda8 (UNCONDITIONAL_JUMP)
