// Name: wincore_windll.cpp_masterZBuffer_FUN_005b7d00
// Address: 005b7d00
// Address Range: [[005b7d00, 005b7d1a]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_masterZBuffer_FUN_005b7d00(int z_buffer_mode)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0 (0044cdf0) at 0044cf0f [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 (0044cb80) at 0044cc55 [UNCONDITIONAL_CALL]
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_masterZBuffer* g_APIDLL_masterZBuffer

#include "nocturne.h"

int __cdecl wincore_windll_cpp_masterZBuffer_FUN_005b7d00(int z_buffer_mode)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_masterZBuffer)(z_buffer_mode);
  return iVar1;
}


// Assembly code:
// 005b7d00: CMP dword ptr [0x02d03e94],0x0
//   Label: wincore_windll.cpp_masterZBuffer_FUN_005b7d00
//   XREF to: 02d03e94 (READ)
// 005b7d07: JNZ 0x005b7d0c
//   XREF to: 005b7d0c (CONDITIONAL_JUMP)
// 005b7d09: XOR EAX,EAX
// 005b7d0b: RET
// 005b7d0c: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_005b7d0c
//   XREF to: Stack[0x4] (READ)
// 005b7d10: PUSH ECX
// 005b7d11: CALL dword ptr [g_APIDLL_masterZBuffer]
//   XREF to: 03f6b90c (READ)
// 005b7d17: ADD ESP,0x4
// 005b7d1a: RET
