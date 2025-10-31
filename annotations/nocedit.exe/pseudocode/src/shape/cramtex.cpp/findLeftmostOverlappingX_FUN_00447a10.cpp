// Name: shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10
// Address: 00447a10
// Address Range: [[00447a10, 00447a74]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10(SCramWorkingEntry * bounds_entry)
// Cross-references:
//   shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590 (00447590) at 004475eb [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 (00446160) at 004466af [UNCONDITIONAL_CALL]
// Globals:
//   SCramWorkingEntry[1] g_CramSortedTextureEntries
//   undefined4 g_CramSortedTextureEntries[0].assigned_map_number
//   undefined4 DAT_0083c20c
//   undefined4 DAT_0083c210
//   undefined4 DAT_0083c218
//   undefined4 DAT_0083c238
//   undefined4 DAT_0083c258
//   undefined4 DAT_0083c25c
//   undefined4 DAT_0083c264
//   uint g_CramTextureCount
//   int g_CramCurrentAcceptableSize
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

int __cdecl shape_cramtex_cpp_findLeftmostOverlappingX_FUN_00447a10(SCramWorkingEntry *bounds_entry)

{
  SCramWorkingEntry *pSVar1;
  int iVar2;
  int iVar3;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x14);
  iVar2 = 0;
  iVar3 = g_CramCurrentAcceptableSize;
  if (0 < (int)g_CramTextureCount) {
    pSVar1 = g_CramSortedTextureEntries;
    do {
      if ((((bounds_entry->assigned_map_number == pSVar1->assigned_map_number) &&
           (pSVar1->final_left < iVar3)) && (bounds_entry->final_right <= pSVar1->final_left)) &&
         ((pSVar1->final_top < bounds_entry->final_bottom &&
          (bounds_entry->final_top < pSVar1->final_bottom)))) {
        iVar3 = pSVar1->final_left;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < (int)g_CramTextureCount);
  }
  return iVar3;
}


// Assembly code:
// 00447a10: PUSH 0x14
//   Label: shape_cramtex.cpp_findLeftmostOverlappingX_FUN_00447a10
// 00447a15: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 00447a1a: PUSH EBX
// 00447a1b: PUSH ESI
// 00447a1c: PUSH EDI
// 00447a1d: PUSH EBP
// 00447a1e: MOV EDI,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00447a24: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00447a28: MOV EBX,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 00447a2e: XOR ECX,ECX
// 00447a30: TEST EDI,EDI
// 00447a32: JLE 0x00447a68
//   XREF to: 00447a68 (CONDITIONAL_JUMP)
// 00447a34: MOV EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00447a39: MOV EBP,dword ptr [EDX + 0x10]
//   Label: LAB_00447a39
// 00447a3c: CMP EBP,dword ptr [EAX + 0x10]
//   XREF to: 0083c1ec (READ)
//   XREF to: 0083c238 (READ)
// 00447a3f: JNZ 0x00447a60
//   XREF to: 00447a60 (CONDITIONAL_JUMP)
// 00447a41: MOV ESI,dword ptr [EAX + 0x30]
//   XREF to: 0083c20c (READ)
//   XREF to: 0083c258 (READ)
// 00447a44: CMP EBX,ESI
// 00447a46: JLE 0x00447a60
//   XREF to: 00447a60 (CONDITIONAL_JUMP)
// 00447a48: CMP ESI,dword ptr [EDX + 0x38]
// 00447a4b: JL 0x00447a60
//   XREF to: 00447a60 (CONDITIONAL_JUMP)
// 00447a4d: MOV EBP,dword ptr [EDX + 0x3c]
// 00447a50: CMP EBP,dword ptr [EAX + 0x34]
//   XREF to: 0083c210 (READ)
//   XREF to: 0083c25c (READ)
// 00447a53: JLE 0x00447a60
//   XREF to: 00447a60 (CONDITIONAL_JUMP)
// 00447a55: MOV EBP,dword ptr [EDX + 0x34]
// 00447a58: CMP EBP,dword ptr [EAX + 0x3c]
//   XREF to: 0083c218 (READ)
//   XREF to: 0083c264 (READ)
// 00447a5b: JGE 0x00447a60
//   XREF to: 00447a60 (CONDITIONAL_JUMP)
// 00447a5d: MOV EBX,dword ptr [EAX + 0x30]
//   XREF to: 0083c20c (READ)
//   XREF to: 0083c258 (READ)
// 00447a60: INC ECX
//   Label: LAB_00447a60
// 00447a61: ADD EAX,0x4c
// 00447a64: CMP ECX,EDI
// 00447a66: JL 0x00447a39
//   XREF to: 00447a39 (CONDITIONAL_JUMP)
// 00447a68: MOV EAX,EBX
//   Label: LAB_00447a68
// 00447a6a: MOV dword ptr [0x0084a854],EDI
//   XREF to: 0084a854 (WRITE)
// 00447a70: POP EBP
// 00447a71: POP EDI
// 00447a72: POP ESI
// 00447a73: POP EBX
// 00447a74: RET
