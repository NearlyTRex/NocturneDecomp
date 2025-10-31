// Name: shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0
// Address: 004479a0
// Address Range: [[004479a0, 00447a00]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0(SCramWorkingEntry * bounds_entry)
// Cross-references:
//   shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590 (00447590) at 00447659 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 (00446160) at 0044672d [UNCONDITIONAL_CALL]
// Globals:
//   SCramWorkingEntry[1] g_CramSortedTextureEntries
//   undefined4 g_CramSortedTextureEntries[0].assigned_map_number
//   undefined4 DAT_0083c210
//   undefined4 DAT_0083c214
//   undefined4 DAT_0083c218
//   undefined4 DAT_0083c238
//   undefined4 DAT_0083c25c
//   undefined4 DAT_0083c260
//   undefined4 DAT_0083c264
//   uint g_CramTextureCount
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

int __cdecl
shape_cramtex_cpp_findRightmostOverlappingX_FUN_004479a0(SCramWorkingEntry *bounds_entry)

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
      if ((((bounds_entry->assigned_map_number == pSVar1->assigned_map_number) &&
           (iVar3 < pSVar1->final_right)) && (pSVar1->final_right <= bounds_entry->final_left)) &&
         ((pSVar1->final_top < bounds_entry->final_bottom &&
          (bounds_entry->final_top < pSVar1->final_bottom)))) {
        iVar3 = pSVar1->final_right;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < (int)g_CramTextureCount);
  }
  return iVar3;
}


// Assembly code:
// 004479a0: PUSH 0x14
//   Label: shape_cramtex.cpp_findRightmostOverlappingX_FUN_004479a0
// 004479a5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 004479aa: PUSH EBX
// 004479ab: PUSH ESI
// 004479ac: PUSH EDI
// 004479ad: PUSH EBP
// 004479ae: MOV EDI,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 004479b4: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004479b8: XOR ECX,ECX
// 004479ba: XOR EBX,EBX
// 004479bc: TEST EDI,EDI
// 004479be: JLE 0x004479f4
//   XREF to: 004479f4 (CONDITIONAL_JUMP)
// 004479c0: MOV EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 004479c5: MOV EBP,dword ptr [EDX + 0x10]
//   Label: LAB_004479c5
// 004479c8: CMP EBP,dword ptr [EAX + 0x10]
//   XREF to: 0083c1ec (READ)
//   XREF to: 0083c238 (READ)
// 004479cb: JNZ 0x004479ec
//   XREF to: 004479ec (CONDITIONAL_JUMP)
// 004479cd: MOV ESI,dword ptr [EAX + 0x38]
//   XREF to: 0083c214 (READ)
//   XREF to: 0083c260 (READ)
// 004479d0: CMP EBX,ESI
// 004479d2: JGE 0x004479ec
//   XREF to: 004479ec (CONDITIONAL_JUMP)
// 004479d4: CMP ESI,dword ptr [EDX + 0x30]
// 004479d7: JG 0x004479ec
//   XREF to: 004479ec (CONDITIONAL_JUMP)
// 004479d9: MOV EBP,dword ptr [EDX + 0x3c]
// 004479dc: CMP EBP,dword ptr [EAX + 0x34]
//   XREF to: 0083c210 (READ)
//   XREF to: 0083c25c (READ)
// 004479df: JLE 0x004479ec
//   XREF to: 004479ec (CONDITIONAL_JUMP)
// 004479e1: MOV EBP,dword ptr [EDX + 0x34]
// 004479e4: CMP EBP,dword ptr [EAX + 0x3c]
//   XREF to: 0083c218 (READ)
//   XREF to: 0083c264 (READ)
// 004479e7: JGE 0x004479ec
//   XREF to: 004479ec (CONDITIONAL_JUMP)
// 004479e9: MOV EBX,dword ptr [EAX + 0x38]
//   XREF to: 0083c214 (READ)
//   XREF to: 0083c260 (READ)
// 004479ec: INC ECX
//   Label: LAB_004479ec
// 004479ed: ADD EAX,0x4c
// 004479f0: CMP ECX,EDI
// 004479f2: JL 0x004479c5
//   XREF to: 004479c5 (CONDITIONAL_JUMP)
// 004479f4: MOV EAX,EBX
//   Label: LAB_004479f4
// 004479f6: MOV dword ptr [0x0084a854],EDI
//   XREF to: 0084a854 (WRITE)
// 004479fc: POP EBP
// 004479fd: POP EDI
// 004479fe: POP ESI
// 004479ff: POP EBX
// 00447a00: RET
