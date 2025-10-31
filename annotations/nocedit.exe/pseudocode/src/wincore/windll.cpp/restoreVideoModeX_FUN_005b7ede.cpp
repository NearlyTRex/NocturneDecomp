// Name: wincore_windll.cpp_restoreVideoModeX_FUN_005b7ede
// Address: 005b7ede
// Address Range: [[005b7ede, 005b7f0a]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_restoreVideoModeX_FUN_005b7ede(void)
// Globals:
//   APIDLL_restoreVideoModeX* g_APIDLL_restoreVideoModeX
//   int g_VideoModeXBPP

#include "nocturne.h"

int __cdecl wincore_windll_cpp_restoreVideoModeX_FUN_005b7ede(void)

{
  if ((g_APIDLL_restoreVideoModeX != (APIDLL_restoreVideoModeX *)0x0) && (g_VideoModeXBPP != 0)) {
    (*g_APIDLL_restoreVideoModeX)();
    g_VideoModeXBPP = 0;
    return 1;
  }
  return 0;
}


// Assembly code:
// 005b7ede: MOV EAX,EAX
//   Label: wincore_windll.cpp_restoreVideoModeX_FUN_005b7ede
// 005b7ee0: CMP dword ptr [0x03f6b938],0x0
//   XREF to: 03f6b938 (READ)
// 005b7ee7: JZ 0x005b7ef2
//   XREF to: 005b7ef2 (CONDITIONAL_JUMP)
// 005b7ee9: CMP dword ptr [0x03f6b9a0],0x0
//   XREF to: 03f6b9a0 (READ)
// 005b7ef0: JNZ 0x005b7ef5
//   XREF to: 005b7ef5 (CONDITIONAL_JUMP)
// 005b7ef2: XOR EAX,EAX
//   Label: LAB_005b7ef2
// 005b7ef4: RET
// 005b7ef5: PUSH EBX
//   Label: LAB_005b7ef5
// 005b7ef6: CALL dword ptr [g_APIDLL_restoreVideoModeX]
//   XREF to: 03f6b938 (READ)
// 005b7efc: XOR EBX,EBX
// 005b7efe: MOV EAX,0x1
// 005b7f03: MOV dword ptr [0x03f6b9a0],EBX
//   XREF to: 03f6b9a0 (WRITE)
// 005b7f09: POP EBX
// 005b7f0a: RET
