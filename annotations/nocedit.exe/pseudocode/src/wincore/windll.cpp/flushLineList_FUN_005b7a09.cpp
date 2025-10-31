// Name: wincore_windll.cpp_flushLineList_FUN_005b7a09
// Address: 005b7a09
// Address Range: [[005b7a09, 005b7a22]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_flushLineList_FUN_005b7a09(void)
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_flushLineList* g_APIDLL_flushLineList

#include "nocturne.h"

int __cdecl wincore_windll_cpp_flushLineList_FUN_005b7a09(void)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_flushLineList)();
  return iVar1;
}


// Assembly code:
// 005b7a09: LEA EAX,[EAX]
//   Label: wincore_windll.cpp_flushLineList_FUN_005b7a09
// 005b7a0f: NOP
// 005b7a10: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b7a17: JNZ 0x005b7a1c
//   XREF to: 005b7a1c (CONDITIONAL_JUMP)
// 005b7a19: XOR EAX,EAX
// 005b7a1b: RET
// 005b7a1c: CALL dword ptr [g_APIDLL_flushLineList]
//   Label: LAB_005b7a1c
//   XREF to: 03f6b8e8 (READ)
// 005b7a22: RET
