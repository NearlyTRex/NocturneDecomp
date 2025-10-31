// Name: core_zombie.cpp_FUN_005fce40
// Address: 005fce40
// Address Range: [[005fce40, 005fcf77]]
// Convention: unknown
// Signature: undefined core_zombie.cpp_FUN_005fce40()
// Globals:
//   int g_RasterizerEdgeCount
//   SEdgeData[16] g_RasterizerEdgeArray
//   undefined4 g_RasterizerEdgeArray[0].y_end
//   undefined4 g_RasterizerEdgeArray[0].x_current
//   undefined4 g_RasterizerEdgeArray[0].x_delta
//   undefined4 g_RasterizerEdgeArray[0].light_current
//   undefined4 g_RasterizerEdgeArray[0].light_delta
//   undefined4 g_RasterizerEdgeArray[0].z_current
//   undefined4 g_RasterizerEdgeArray[0].z_delta
//   int g_RasterizerMinY
//   int g_RasterizerMaxY

#include "nocturne.h"

void core_zombie_cpp_FUN_005fce40(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar2 = g_RasterizerEdgeCount;
  iVar5 = *(int *)(in_stack_00000008 + 0x14) >> 0x10;
  iVar3 = *(int *)(in_stack_00000004 + 0x14) >> 0x10;
  if (iVar3 != iVar5) {
    iVar4 = iVar3;
    iVar7 = in_stack_00000004;
    if (*(int *)(in_stack_00000008 + 0x14) < *(int *)(in_stack_00000004 + 0x14)) {
      iVar4 = iVar5;
      iVar5 = iVar3;
      iVar7 = in_stack_00000008;
      in_stack_00000008 = in_stack_00000004;
    }
    g_RasterizerEdgeArray[g_RasterizerEdgeCount].y_start = iVar4;
    iVar3 = g_RasterizerMinY;
    g_RasterizerEdgeArray[iVar2].y_end = iVar5;
    if (iVar4 < iVar3) {
      g_RasterizerMinY = iVar4;
    }
    if (g_RasterizerMaxY < iVar5) {
      g_RasterizerMaxY = iVar5;
    }
    g_RasterizerEdgeArray[iVar2].x_current = *(int *)(iVar7 + 0x10);
    g_RasterizerEdgeArray[iVar2].z_current = *(int *)(iVar7 + 8) << 8;
    g_RasterizerEdgeArray[iVar2].light_current = *(int *)(iVar7 + 0x20);
    uVar6 = *(int *)(in_stack_00000008 + 0x14) - *(int *)(iVar7 + 0x14);
    if (uVar6 < 0x10000) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(0xffffffff / (ulonglong)uVar6);
    }
    lVar1 = (longlong)iVar5 *
            (longlong)(*(int *)(in_stack_00000008 + 0x10) - *(int *)(iVar7 + 0x10));
    g_RasterizerEdgeArray[iVar2].x_delta =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 *
            (longlong)((*(int *)(in_stack_00000008 + 8) - *(int *)(iVar7 + 8)) * 0x100);
    g_RasterizerEdgeArray[iVar2].z_delta =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    lVar1 = (longlong)iVar5 *
            (longlong)(*(int *)(in_stack_00000008 + 0x20) - *(int *)(iVar7 + 0x20));
    g_RasterizerEdgeArray[iVar2].light_delta =
         (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
    uVar6 = (uint)(ushort)((ushort)*(undefined4 *)(iVar7 + 0x14) ^ 0xffff);
    lVar1 = (longlong)(int)uVar6 * (longlong)g_RasterizerEdgeArray[iVar2].x_delta;
    iVar5 = g_RasterizerEdgeArray[iVar2].z_delta;
    g_RasterizerEdgeArray[iVar2].x_current =
         g_RasterizerEdgeArray[iVar2].x_current +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)iVar5;
    g_RasterizerEdgeArray[iVar2].z_current =
         g_RasterizerEdgeArray[iVar2].z_current +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    lVar1 = (longlong)(int)uVar6 * (longlong)g_RasterizerEdgeArray[iVar2].light_delta;
    g_RasterizerEdgeCount = g_RasterizerEdgeCount + 1;
    g_RasterizerEdgeArray[iVar2].light_current =
         g_RasterizerEdgeArray[iVar2].light_current +
         ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  }
  return;
}


// Assembly code:
// 005fce40: PUSH EBX
//   Label: core_zombie.cpp_FUN_005fce40
// 005fce41: PUSH ESI
// 005fce42: PUSH EDI
// 005fce43: PUSH EBP
// 005fce44: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005fce48: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005fce4c: MOV EBX,dword ptr [EDI + 0x14]
// 005fce4f: MOV EAX,dword ptr [ESI + 0x14]
// 005fce52: SAR EBX,0x10
// 005fce55: SAR EAX,0x10
// 005fce58: CMP EAX,EBX
// 005fce5a: JZ 0x005fcf63
//   XREF to: 005fcf63 (CONDITIONAL_JUMP)
// 005fce60: MOV ECX,dword ptr [EDI + 0x14]
// 005fce63: CMP ECX,dword ptr [ESI + 0x14]
// 005fce66: JGE 0x005fce74
//   XREF to: 005fce74 (CONDITIONAL_JUMP)
// 005fce68: MOV EDX,ESI
// 005fce6a: MOV ESI,EDI
// 005fce6c: MOV EDI,EDX
// 005fce6e: MOV EDX,EAX
// 005fce70: MOV EAX,EBX
// 005fce72: MOV EBX,EDX
// 005fce74: MOV EDX,dword ptr [0x03f9ad5c]
//   Label: LAB_005fce74
//   XREF to: 03f9ad5c (READ)
// 005fce7a: LEA ECX,[EDX*0x8 + 0x0]
// 005fce81: ADD ECX,EDX
// 005fce83: SHL ECX,0x3
// 005fce86: ADD ECX,0x3f9ad60
//   XREF to: 03f9ad60 (DATA)
// 005fce8c: MOV dword ptr [ECX],EAX
//   XREF to: 03f9ad60 (DATA)
// 005fce8e: MOV EBP,dword ptr [0x03f9b1e0]
//   XREF to: 03f9b1e0 (READ)
// 005fce94: MOV dword ptr [ECX + 0x4],EBX
//   XREF to: 03f9ad64 (DATA)
// 005fce97: CMP EAX,EBP
// 005fce99: JGE 0x005fcea0
//   XREF to: 005fcea0 (CONDITIONAL_JUMP)
// 005fce9b: MOV [0x03f9b1e0],EAX
//   XREF to: 03f9b1e0 (WRITE)
// 005fcea0: CMP EBX,dword ptr [0x03f9b1e4]
//   Label: LAB_005fcea0
//   XREF to: 03f9b1e4 (READ)
// 005fcea6: JLE 0x005fceae
//   XREF to: 005fceae (CONDITIONAL_JUMP)
// 005fcea8: MOV dword ptr [0x03f9b1e4],EBX
//   XREF to: 03f9b1e4 (WRITE)
// 005fceae: MOV EAX,dword ptr [ESI + 0x10]
//   Label: LAB_005fceae
// 005fceb1: MOV dword ptr [ECX + 0x8],EAX
//   XREF to: 03f9ad68 (DATA)
// 005fceb4: MOV EAX,dword ptr [ESI + 0x8]
// 005fceb7: SHL EAX,0x8
// 005fceba: MOV dword ptr [ECX + 0x28],EAX
//   XREF to: 03f9ad88 (DATA)
// 005fcebd: MOV EAX,dword ptr [ESI + 0x20]
// 005fcec0: MOV dword ptr [ECX + 0x10],EAX
//   XREF to: 03f9ad70 (DATA)
// 005fcec3: MOV EBX,dword ptr [EDI + 0x14]
// 005fcec6: SUB EBX,dword ptr [ESI + 0x14]
// 005fcec9: CMP EBX,0x10000
// 005fcecf: JNC 0x005fcf68
//   XREF to: 005fcf68 (CONDITIONAL_JUMP)
// 005fced5: XOR EBX,EBX
// 005fced7: MOV EDX,dword ptr [EDI + 0x10]
//   Label: LAB_005fced7
// 005fceda: MOV EBP,dword ptr [ESI + 0x10]
// 005fcedd: MOV EAX,EBX
// 005fcedf: SUB EDX,EBP
// 005fcee1: IMUL EDX
// 005fcee3: SHRD EAX,EDX,0x10
// 005fcee7: MOV dword ptr [ECX + 0xc],EAX
//   XREF to: 03f9ad6c (DATA)
// 005fceea: MOV EAX,dword ptr [EDI + 0x8]
// 005fceed: MOV EDX,dword ptr [ESI + 0x8]
// 005fcef0: SUB EAX,EDX
// 005fcef2: MOV EDX,EAX
// 005fcef4: SHL EDX,0x8
// 005fcef7: MOV EAX,EBX
// 005fcef9: IMUL EDX
// 005fcefb: SHRD EAX,EDX,0x10
// 005fceff: MOV dword ptr [ECX + 0x2c],EAX
//   XREF to: 03f9ad8c (DATA)
// 005fcf02: MOV EDX,dword ptr [EDI + 0x20]
// 005fcf05: MOV EDI,dword ptr [ESI + 0x20]
// 005fcf08: MOV EAX,EBX
// 005fcf0a: SUB EDX,EDI
// 005fcf0c: IMUL EDX
// 005fcf0e: SHRD EAX,EDX,0x10
// 005fcf12: MOV dword ptr [ECX + 0x14],EAX
//   XREF to: 03f9ad74 (DATA)
// 005fcf15: MOV EBX,dword ptr [ESI + 0x14]
// 005fcf18: AND EBX,0xffff
// 005fcf1e: XOR BX,0xffff
// 005fcf22: MOV EDX,dword ptr [ECX + 0xc]
//   XREF to: 03f9ad6c (DATA)
// 005fcf25: MOV EAX,EBX
// 005fcf27: IMUL EDX
// 005fcf29: SHRD EAX,EDX,0x10
// 005fcf2d: MOV EBP,dword ptr [ECX + 0x8]
//   XREF to: 03f9ad68 (DATA)
// 005fcf30: MOV EDX,dword ptr [ECX + 0x2c]
//   XREF to: 03f9ad8c (DATA)
// 005fcf33: ADD EBP,EAX
// 005fcf35: MOV EAX,EBX
// 005fcf37: MOV dword ptr [ECX + 0x8],EBP
//   XREF to: 03f9ad68 (DATA)
// 005fcf3a: IMUL EDX
// 005fcf3c: SHRD EAX,EDX,0x10
// 005fcf40: ADD dword ptr [ECX + 0x28],EAX
//   XREF to: 03f9ad88 (DATA)
// 005fcf43: MOV EAX,EBX
// 005fcf45: MOV EDX,dword ptr [ECX + 0x14]
//   XREF to: 03f9ad74 (DATA)
// 005fcf48: IMUL EDX
// 005fcf4a: SHRD EAX,EDX,0x10
// 005fcf4e: MOV ESI,dword ptr [0x03f9ad5c]
//   XREF to: 03f9ad5c (READ)
// 005fcf54: MOV EBX,dword ptr [ECX + 0x10]
//   XREF to: 03f9ad70 (DATA)
// 005fcf57: INC ESI
// 005fcf58: ADD EBX,EAX
// 005fcf5a: MOV dword ptr [0x03f9ad5c],ESI
//   XREF to: 03f9ad5c (WRITE)
// 005fcf60: MOV dword ptr [ECX + 0x10],EBX
//   XREF to: 03f9ad70 (DATA)
// 005fcf63: POP EBP
//   Label: LAB_005fcf63
// 005fcf64: POP EDI
// 005fcf65: POP ESI
// 005fcf66: POP EBX
// 005fcf67: RET
// 005fcf68: MOV EAX,0xffffffff
//   Label: LAB_005fcf68
// 005fcf6d: XOR EDX,EDX
// 005fcf6f: DIV EBX
// 005fcf71: MOV EBX,EAX
// 005fcf73: JMP 0x005fced7
//   XREF to: 005fced7 (UNCONDITIONAL_JUMP)
