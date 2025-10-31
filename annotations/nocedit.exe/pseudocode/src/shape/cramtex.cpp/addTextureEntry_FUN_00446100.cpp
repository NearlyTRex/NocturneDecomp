// Name: shape_cramtex.cpp_addTextureEntry_FUN_00446100
// Address: 00446100
// Address Range: [[00446100, 0044613a]]
// Convention: __cdecl
// Signature: int shape_cramtex.cpp_addTextureEntry_FUN_00446100(SCramWorkingEntry * texture_entry)
// Globals:
//   SCramWorkingEntry[1] g_CramSortedTextureEntries
//   int g_CramPlacedTextureCount
// Function calls:
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160

#include "nocturne.h"

int __cdecl shape_cramtex_cpp_addTextureEntry_FUN_00446100(SCramWorkingEntry *texture_entry)

{
  int iVar1;
  SCramWorkingEntry *pSStack00000004;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(8);
  pSStack00000004 = g_CramSortedTextureEntries + g_CramPlacedTextureCount;
  iVar1 = shape_cramtex_cpp_runInteractiveAtlasGeneration_FUN_00446160(texture_entry);
  if (0 < iVar1) {
    iVar1 = iVar1 + -1;
  }
  return iVar1;
}


// Assembly code:
// 00446100: PUSH 0x8
//   Label: shape_cramtex.cpp_addTextureEntry_FUN_00446100
// 00446105: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0044610a: MOV EDX,dword ptr [0x0084a85c]
//   XREF to: 0084a85c (READ)
// 00446110: LEA EAX,[EDX*0x4 + 0x0]
// 00446117: ADD EAX,EDX
// 00446119: SHL EAX,0x2
// 0044611c: SUB EAX,EDX
// 0044611e: SHL EAX,0x2
// 00446121: ADD EAX,0x83c1dc
//   XREF to: 0083c1dc (DATA)
// 00446126: PUSH EAX
// 00446127: CALL shape_cramtex.cpp_runInteractiveAtlasGeneration_FUN_00446160
//   XREF to: 00446160 (UNCONDITIONAL_CALL)
// 0044612c: ADD ESP,0x4
// 0044612f: MOV EDX,EAX
// 00446131: TEST EAX,EAX
// 00446133: JLE 0x00446138
//   XREF to: 00446138 (CONDITIONAL_JUMP)
// 00446135: LEA EDX,[EAX + -0x1]
// 00446138: MOV EAX,EDX
//   Label: LAB_00446138
// 0044613a: RET
