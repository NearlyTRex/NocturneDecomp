// Name: shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930
// Address: 00447930
// Address Range: [[00447930, 00447994]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930(SCramWorkingEntry * bounds_entry)
// Cross-references:
//   shape_cramtex.cpp_performGapFillingOptimization_FUN_00447590 (00447590) at 004476b4 [UNCONDITIONAL_CALL]
//   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160 (00446160) at 0044667c [UNCONDITIONAL_CALL]
// Globals:
//   SCramWorkingEntry[1] g_CramSortedTextureEntries
//   undefined4 g_CramSortedTextureEntries[0].assigned_map_number
//   undefined4 DAT_0083c20c
//   undefined4 DAT_0083c210
//   undefined4 DAT_0083c214
//   undefined4 DAT_0083c238
//   undefined4 DAT_0083c258
//   undefined4 DAT_0083c25c
//   undefined4 DAT_0083c260
//   uint g_CramTextureCount
//   int g_CramCurrentAcceptableSize
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3

#include "nocturne.h"

int __cdecl shape_cramtex_cpp_findLowestOverlappingY_FUN_00447930(SCramWorkingEntry *bounds_entry)

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
           (pSVar1->final_top < iVar3)) && (bounds_entry->final_bottom <= pSVar1->final_top)) &&
         ((pSVar1->final_left < bounds_entry->final_right &&
          (bounds_entry->final_left < pSVar1->final_right)))) {
        iVar3 = pSVar1->final_top;
      }
      iVar2 = iVar2 + 1;
      pSVar1 = pSVar1 + 1;
    } while (iVar2 < (int)g_CramTextureCount);
  }
  return iVar3;
}


// Assembly code:
// 00447930: PUSH 0x14
//   Label: shape_cramtex.cpp_findLowestOverlappingY_FUN_00447930
// 00447935: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0044793a: PUSH EBX
// 0044793b: PUSH ESI
// 0044793c: PUSH EDI
// 0044793d: PUSH EBP
// 0044793e: MOV EDI,dword ptr [0x0084a854]
//   XREF to: 0084a854 (READ)
// 00447944: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00447948: MOV EBX,dword ptr [0x0084a884]
//   XREF to: 0084a884 (READ)
// 0044794e: XOR ECX,ECX
// 00447950: TEST EDI,EDI
// 00447952: JLE 0x00447988
//   XREF to: 00447988 (CONDITIONAL_JUMP)
// 00447954: MOV EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00447959: MOV EBP,dword ptr [EDX + 0x10]
//   Label: LAB_00447959
// 0044795c: CMP EBP,dword ptr [EAX + 0x10]
//   XREF to: 0083c1ec (READ)
//   XREF to: 0083c238 (READ)
// 0044795f: JNZ 0x00447980
//   XREF to: 00447980 (CONDITIONAL_JUMP)
// 00447961: MOV ESI,dword ptr [EAX + 0x34]
//   XREF to: 0083c210 (READ)
//   XREF to: 0083c25c (READ)
// 00447964: CMP EBX,ESI
// 00447966: JLE 0x00447980
//   XREF to: 00447980 (CONDITIONAL_JUMP)
// 00447968: CMP ESI,dword ptr [EDX + 0x3c]
// 0044796b: JL 0x00447980
//   XREF to: 00447980 (CONDITIONAL_JUMP)
// 0044796d: MOV EBP,dword ptr [EDX + 0x38]
// 00447970: CMP EBP,dword ptr [EAX + 0x30]
//   XREF to: 0083c20c (READ)
//   XREF to: 0083c258 (READ)
// 00447973: JLE 0x00447980
//   XREF to: 00447980 (CONDITIONAL_JUMP)
// 00447975: MOV EBP,dword ptr [EDX + 0x30]
// 00447978: CMP EBP,dword ptr [EAX + 0x38]
//   XREF to: 0083c214 (READ)
//   XREF to: 0083c260 (READ)
// 0044797b: JGE 0x00447980
//   XREF to: 00447980 (CONDITIONAL_JUMP)
// 0044797d: MOV EBX,dword ptr [EAX + 0x34]
//   XREF to: 0083c210 (READ)
//   XREF to: 0083c25c (READ)
// 00447980: INC ECX
//   Label: LAB_00447980
// 00447981: ADD EAX,0x4c
// 00447984: CMP ECX,EDI
// 00447986: JL 0x00447959
//   XREF to: 00447959 (CONDITIONAL_JUMP)
// 00447988: MOV EAX,EBX
//   Label: LAB_00447988
// 0044798a: MOV dword ptr [0x0084a854],EDI
//   XREF to: 0084a854 (WRITE)
// 00447990: POP EBP
// 00447991: POP EDI
// 00447992: POP ESI
// 00447993: POP EBX
// 00447994: RET
