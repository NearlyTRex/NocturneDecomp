// Name: wincore_windll.cpp_unlockFrameX_FUN_005b7f40
// Address: 005b7f40
// Address Range: [[005b7f40, 005b7f65]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_unlockFrameX_FUN_005b7f40(void)
// Globals:
//   int g_BitsPerPixel = 0x8
//   APIDLL_unlockFrameX* g_APIDLL_unlockFrameX
//   int g_SavedBitsPerPixel

#include "nocturne.h"

int __cdecl wincore_windll_cpp_unlockFrameX_FUN_005b7f40(void)

{
  int iVar1;
  
  if (g_APIDLL_unlockFrameX == (APIDLL_unlockFrameX *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*g_APIDLL_unlockFrameX)();
    if (iVar1 != 0) {
      g_BitsPerPixel = g_SavedBitsPerPixel;
      return 1;
    }
  }
  return iVar1;
}


// Assembly code:
// 005b7f40: CMP dword ptr [0x03f6b940],0x0
//   Label: wincore_windll.cpp_unlockFrameX_FUN_005b7f40
//   XREF to: 03f6b940 (READ)
// 005b7f47: JNZ 0x005b7f4c
//   XREF to: 005b7f4c (CONDITIONAL_JUMP)
// 005b7f49: XOR EAX,EAX
// 005b7f4b: RET
//   Label: LAB_005b7f4b
// 005b7f4c: CALL dword ptr [g_APIDLL_unlockFrameX]
//   Label: LAB_005b7f4c
//   XREF to: 03f6b940 (READ)
// 005b7f52: TEST EAX,EAX
// 005b7f54: JZ 0x005b7f4b
//   XREF to: 005b7f4b (CONDITIONAL_JUMP)
// 005b7f56: MOV EAX,[0x03f6b998]
//   XREF to: 03f6b998 (READ)
// 005b7f5b: MOV [0x0067939c],EAX
//   XREF to: 0067939c (WRITE)
// 005b7f60: MOV EAX,0x1
// 005b7f65: RET
