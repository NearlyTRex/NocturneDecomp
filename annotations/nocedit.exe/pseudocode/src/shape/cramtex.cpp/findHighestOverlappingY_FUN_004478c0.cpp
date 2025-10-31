// Name: shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0
// Address: 004478c0
// Address Range: [[004478c0, 00447920]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0(SCramWorkingEntry * reference_entry)
// Cross-references:
//   shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590 (00447590) at 004476a2 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 (00446160) at 0044677b [UNCONDITIONAL_CALL]
// Globals:
//   SCramWorkingEntry[1] g_CramSortedTextureEntries
//   undefined4 g_CramSortedTextureEntries[0].assigned_map_number
//   undefined4 DAT_0083c20c
//   undefined4 DAT_0083c214
//   undefined4 DAT_0083c218
//   undefined4 DAT_0083c238
//   undefined4 DAT_0083c258
//   undefined4 DAT_0083c260
//   undefined4 DAT_0083c264
//   uint g_CramTextureCount
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

int __cdecl
shape_cramtex_cpp_findHighestOverlappingY_FUN_004478c0(SCramWorkingEntry *reference_entry)

{
  SCramWorkingEntry *pSVar1;
  int iVar2;
  int iVar3;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x14);
  iVar2 = 0;
  iVar3 = 0;
  if (0 < (int)g_CramTextureCount) {
    pSVar1 = g_CramSortedTextureEntries;
    do {
      if ((((reference_entry->assigned_map_number == pSVar1->assigned_map_number) &&
           (iVar3 < pSVar1->final_bottom)) && (pSVar1->final_bottom <= reference_entry->final_top))
         && ((pSVar1->final_left < reference_entry->final_right &&
             (reference_entry->final_left < pSVar1->final_right)))) {
        iVar3 = pSVar1->final_bottom;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < (int)g_CramTextureCount);
  }
  return iVar3;
}


// Assembly code:
// 004478c0: PUSH 0x14
//   Label: shape_cramtex.cpp_findHighestOverlappingY_FUN_004478c0
// 004478c5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 004478ca: PUSH EBX
// 004478cb: PUSH ESI
// 004478cc: PUSH EDI
// 004478cd: PUSH EBP
// 004478ce: MOV EDI,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 004478d4: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004478d8: XOR ECX,ECX
// 004478da: XOR EBX,EBX
// 004478dc: TEST EDI,EDI
// 004478de: JLE 0x00447914
//   XREF to: 00447914 (CONDITIONAL_JUMP)
// 004478e0: MOV EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 004478e5: MOV EBP,dword ptr [EDX + 0x10]
//   Label: LAB_004478e5
// 004478e8: CMP EBP,dword ptr [EAX + 0x10]
//   XREF to: 0083c1ec (READ)
//   XREF to: 0083c238 (READ)
// 004478eb: JNZ 0x0044790c
//   XREF to: 0044790c (CONDITIONAL_JUMP)
// 004478ed: MOV ESI,dword ptr [EAX + 0x3c]
//   XREF to: 0083c218 (READ)
//   XREF to: 0083c264 (READ)
// 004478f0: CMP EBX,ESI
// 004478f2: JGE 0x0044790c
//   XREF to: 0044790c (CONDITIONAL_JUMP)
// 004478f4: CMP ESI,dword ptr [EDX + 0x34]
// 004478f7: JG 0x0044790c
//   XREF to: 0044790c (CONDITIONAL_JUMP)
// 004478f9: MOV EBP,dword ptr [EDX + 0x38]
// 004478fc: CMP EBP,dword ptr [EAX + 0x30]
//   XREF to: 0083c20c (READ)
//   XREF to: 0083c258 (READ)
// 004478ff: JLE 0x0044790c
//   XREF to: 0044790c (CONDITIONAL_JUMP)
// 00447901: MOV EBP,dword ptr [EDX + 0x30]
// 00447904: CMP EBP,dword ptr [EAX + 0x38]
//   XREF to: 0083c214 (READ)
//   XREF to: 0083c260 (READ)
// 00447907: JGE 0x0044790c
//   XREF to: 0044790c (CONDITIONAL_JUMP)
// 00447909: MOV EBX,dword ptr [EAX + 0x3c]
//   XREF to: 0083c218 (READ)
//   XREF to: 0083c264 (READ)
// 0044790c: INC ECX
//   Label: LAB_0044790c
// 0044790d: ADD EAX,0x4c
// 00447910: CMP ECX,EDI
// 00447912: JL 0x004478e5
//   XREF to: 004478e5 (CONDITIONAL_JUMP)
// 00447914: MOV EAX,EBX
//   Label: LAB_00447914
// 00447916: MOV dword ptr [0x0084a854],EDI
//   XREF to: 0084a854 (WRITE)
// 0044791c: POP EBP
// 0044791d: POP EDI
// 0044791e: POP ESI
// 0044791f: POP EBX
// 00447920: RET
