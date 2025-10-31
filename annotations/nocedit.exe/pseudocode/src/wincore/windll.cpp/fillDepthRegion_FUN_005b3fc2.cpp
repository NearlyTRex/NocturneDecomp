// Name: wincore_windll.cpp_fillDepthRegion_FUN_005b3fc2
// Address: 005b3fc2
// Address Range: [[005b3fc2, 005b4030]]
// Convention: __cdecl
// Signature: void wincore_windll.cpp_fillDepthRegion_FUN_005b3fc2(int left, int right, int top, int bottom)
// Globals:
//   double g_SelectedClearColor = 0.0
//   double g_ClearColor = 0.0
//   uint*[1024] g_ZBufferScanlineArray
//   int g_UseExternalRenderer
// Function calls:
//   wincore_windll.cpp_clearZBox_FUN_005b7c00

#include "nocturne.h"

void __cdecl wincore_windll_cpp_fillDepthRegion_FUN_005b3fc2(int left,int right,int top,int bottom)

{
  bool bVar1;
  double dVar2;
  uint uVar3;
  double *pdVar4;
  
  dVar2 = g_SelectedClearColor;
  if (g_UseExternalRenderer != 0) {
    wincore_windll_cpp_clearZBox_FUN_005b7c00(left,right,top,bottom);
    return;
  }
  do {
    pdVar4 = (double *)((uint)(g_ZBufferScanlineArray[top] + left) & 0xfffffff8);
    uVar3 = (right - left) + 1U >> 1;
    do {
      *pdVar4 = dVar2;
      pdVar4 = pdVar4 + 1;
      bVar1 = 0 < (int)uVar3;
      uVar3 = uVar3 - 1;
    } while (bVar1);
    top = top + 1;
  } while ((uint)top <= (uint)bottom);
  g_ClearColor = dVar2;
  return;
}


// Assembly code:
// 005b3fc2: PUSH EBP
//   Label: wincore_windll.cpp_fillDepthRegion_FUN_005b3fc2
// 005b3fc3: MOV EBP,ESP
// 005b3fc5: PUSH ESI
// 005b3fc6: PUSH EDI
// 005b3fc7: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b3fce: JZ 0x005b3fe9
//   XREF to: 005b3fe9 (CONDITIONAL_JUMP)
// 005b3fd0: PUSH dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005b3fd3: PUSH dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005b3fd6: PUSH dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005b3fd9: PUSH dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005b3fdc: CALL wincore_windll.cpp_clearZBox_FUN_005b7c00
//   XREF to: 005b7c00 (UNCONDITIONAL_CALL)
// 005b3fe1: POP EAX
// 005b3fe2: POP EAX
// 005b3fe3: POP EAX
// 005b3fe4: POP EAX
// 005b3fe5: POP EDI
// 005b3fe6: POP ESI
// 005b3fe7: LEAVE
// 005b3fe8: RET
// 005b3fe9: PUSHAD
//   Label: LAB_005b3fe9
// 005b3fea: CLD
// 005b3feb: PUSH DS
// 005b3fec: POP ES
// 005b3fed: MOV ECX,dword ptr [EBP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005b3ff0: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005b3ff3: SUB ECX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005b3ff6: MOV EAX,0x0
// 005b3ffb: INC ECX
// 005b3ffc: MOV EDX,dword ptr [EBP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005b3fff: SHL EDX,0x2
// 005b4002: FLD double ptr [0x0068261c]
//   XREF to: 0068261c (READ)
// 005b4008: PUSH ECX
//   Label: LAB_005b4008
// 005b4009: MOV EDI,dword ptr [EBX*0x4 + 0x2cf7d5c]
//   XREF to: 02cf7d5c (DATA)
// 005b4010: ADD EDI,EDX
// 005b4012: AND EDI,0xfffffff8
// 005b4015: SHR ECX,0x1
// 005b4017: FST double ptr [EDI]
//   Label: LAB_005b4017
// 005b4019: ADD EDI,0x8
// 005b401c: DEC ECX
// 005b401d: JGE 0x005b4017
//   XREF to: 005b4017 (CONDITIONAL_JUMP)
// 005b401f: POP ECX
// 005b4020: INC EBX
// 005b4021: CMP EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x10] (READ)
// 005b4024: JBE 0x005b4008
//   XREF to: 005b4008 (CONDITIONAL_JUMP)
// 005b4026: FSTP double ptr [0x00682624]
//   XREF to: 00682624 (WRITE)
// 005b402c: POPAD
// 005b402d: POP EDI
// 005b402e: POP ESI
// 005b402f: LEAVE
// 005b4030: RET
