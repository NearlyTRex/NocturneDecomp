// Name: wincore_windll.cpp_lockFrameX_FUN_005b7f0b
// Address: 005b7f0b
// Address Range: [[005b7f0b, 005b7f3f]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_lockFrameX_FUN_005b7f0b(void)
// Globals:
//   int g_BitsPerPixel = 0x8
//   APIDLL_lockFrameX* g_APIDLL_lockFrameX
//   int g_SavedBitsPerPixel
//   int g_VideoModeXBPP

#include "nocturne.h"

int __cdecl wincore_windll_cpp_lockFrameX_FUN_005b7f0b(void)

{
  int iVar1;
  
  if (g_APIDLL_lockFrameX == (APIDLL_lockFrameX *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*g_APIDLL_lockFrameX)();
    if (iVar1 != 0) {
      g_SavedBitsPerPixel = g_BitsPerPixel;
      g_BitsPerPixel = g_VideoModeXBPP;
      return 1;
    }
  }
  return iVar1;
}


// Assembly code:
// 005b7f0b: LEA EAX,[EAX]
//   Label: wincore_windll.cpp_lockFrameX_FUN_005b7f0b
// 005b7f0e: MOV ECX,ECX
// 005b7f10: CMP dword ptr [0x03f6b93c],0x0
//   XREF to: 03f6b93c (READ)
// 005b7f17: JNZ 0x005b7f1c
//   XREF to: 005b7f1c (CONDITIONAL_JUMP)
// 005b7f19: XOR EAX,EAX
// 005b7f1b: RET
//   Label: LAB_005b7f1b
// 005b7f1c: CALL dword ptr [g_APIDLL_lockFrameX]
//   Label: LAB_005b7f1c
//   XREF to: 03f6b93c (READ)
// 005b7f22: TEST EAX,EAX
// 005b7f24: JZ 0x005b7f1b
//   XREF to: 005b7f1b (CONDITIONAL_JUMP)
// 005b7f26: MOV EAX,[0x0067939c]
//   XREF to: 0067939c (READ)
// 005b7f2b: MOV [0x03f6b998],EAX
//   XREF to: 03f6b998 (WRITE)
// 005b7f30: MOV EAX,[0x03f6b9a0]
//   XREF to: 03f6b9a0 (READ)
// 005b7f35: MOV [0x0067939c],EAX
//   XREF to: 0067939c (WRITE)
// 005b7f3a: MOV EAX,0x1
// 005b7f3f: RET
