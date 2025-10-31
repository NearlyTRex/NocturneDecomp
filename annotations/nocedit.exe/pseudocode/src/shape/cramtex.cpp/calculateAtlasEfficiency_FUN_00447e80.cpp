// Name: shape_cramtex.cpp_calculateAtlasEfficiency_FUN_00447e80
// Address: 00447e80
// Address Range: [[00447e80, 00447f15]]
// Convention: __cdecl
// Signature: double shape_cramtex.cpp_calculateAtlasEfficiency_FUN_00447e80(void)
// Globals:
//   double g_CramPercentMultiplier = 100
//   SCramWorkingEntry[1] g_CramSortedTextureEntries
//   undefined4 DAT_0083c20c
//   undefined4 DAT_0083c210
//   undefined4 DAT_0083c214
//   undefined4 DAT_0083c218
//   undefined4 DAT_0083c228
//   undefined4 DAT_0083c258
//   undefined4 DAT_0083c25c
//   undefined4 DAT_0083c260
//   undefined4 DAT_0083c264
//   uint g_CramTextureCount
//   int g_CramTotalMaps
//   int g_CramPaddingCalculation
//   int g_CramCurrentAcceptableSize
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

double __cdecl shape_cramtex_cpp_calculateAtlasEfficiency_FUN_00447e80(void)

{
  SCramWorkingEntry *pSVar1;
  int iVar2;
  int iVar3;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x20);
  iVar2 = 0;
  iVar3 = 0;
  if (0 < (int)g_CramTextureCount) {
    pSVar1 = g_CramSortedTextureEntries;
    do {
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + ((pSVar1->final_bottom - pSVar1->final_top) - g_CramPaddingCalculation) *
                      ((pSVar1->final_right - pSVar1->final_left) - g_CramPaddingCalculation);
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < (int)g_CramTextureCount);
  }
  return (double)CONCAT44(g_CramTextureCount,
                          ((float)iVar3 * (float)g_CramPercentMultiplier) /
                          (float)(g_CramCurrentAcceptableSize * g_CramCurrentAcceptableSize *
                                 g_CramTotalMaps));
}


// Assembly code:
// 00447e80: PUSH 0x20
//   Label: shape_cramtex.cpp_calculateAtlasEfficiency_FUN_00447e80
// 00447e85: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00447e8a: PUSH EBX
// 00447e8b: PUSH ESI
// 00447e8c: PUSH EDI
// 00447e8d: PUSH EBP
// 00447e8e: MOV EBP,ESP
// 00447e90: SUB ESP,0xc
// 00447e93: AND ESP,0xfffffff8
// 00447e96: MOV EDX,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00447e9c: XOR ECX,ECX
// 00447e9e: XOR EBX,EBX
// 00447ea0: TEST EDX,EDX
// 00447ea2: JLE 0x00447ee0
//   XREF to: 00447ee0 (CONDITIONAL_JUMP)
// 00447ea4: MOV EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00447ea9: MOV EDX,dword ptr [EAX + 0x38]
//   Label: LAB_00447ea9
//   XREF to: 0083c214 (READ)
//   XREF to: 0083c260 (READ)
// 00447eac: SUB EDX,dword ptr [EAX + 0x30]
//   XREF to: 0083c20c (READ)
//   XREF to: 0083c258 (READ)
// 00447eaf: MOV EDI,dword ptr [0x0084a880]
//   XREF to: 0084a880 (READ)
// 00447eb5: MOV ESI,EDX
// 00447eb7: MOV EDX,dword ptr [EAX + 0x3c]
//   XREF to: 0083c218 (READ)
//   XREF to: 0083c264 (READ)
// 00447eba: SUB ESI,EDI
// 00447ebc: SUB EDX,dword ptr [EAX + 0x34]
//   XREF to: 0083c210 (READ)
//   XREF to: 0083c25c (READ)
// 00447ebf: SUB EDX,dword ptr [0x0084a880]
//   XREF to: 0084a880 (READ)
// 00447ec5: IMUL EDX,ESI
// 00447ec8: INC ECX
// 00447ec9: ADD EBX,EDX
// 00447ecb: MOV EDX,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00447ed1: ADD EAX,0x4c
// 00447ed4: CMP ECX,EDX
// 00447ed6: JL 0x00447ea9
//   XREF to: 00447ea9 (CONDITIONAL_JUMP)
// 00447ed8: LEA EAX,[EAX]
//   XREF to: 0083c228 (DATA)
// 00447ede: MOV EDX,EDX
// 00447ee0: MOV EAX,[0x0084a884]
//   Label: LAB_00447ee0
//   XREF to: 0084a884 (READ)
// 00447ee5: IMUL EAX,EAX
// 00447ee8: MOV ESI,dword ptr [0x0084a858]
//   XREF to: 0084a858 (READ)
// 00447eee: IMUL EAX,ESI
// 00447ef1: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00447ef5: MOV dword ptr [ESP + 0x8],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 00447ef9: FILD dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 00447efd: FILD dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 00447f01: FMUL double ptr [0x00619a2a]
//   XREF to: 00619a2a (READ)
// 00447f07: FDIVRP
// 00447f09: FSTP float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00447f0c: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00447f0f: MOV ESP,EBP
// 00447f11: POP EBP
// 00447f12: POP EDI
// 00447f13: POP ESI
// 00447f14: POP EBX
// 00447f15: RET
