// Name: wincore_windll.cpp_setFogColor_FUN_005b7b80
// Address: 005b7b80
// Address Range: [[005b7b80, 005b7bb9]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_setFogColor_FUN_005b7b80(int red, int green, int blue)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_generateGammaPalette_FUN_00453bd0 (00453bd0) at 00453c7d [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_initCameraFog_FUN_00453640 (00453640) at 0045368a [UNCONDITIONAL_CALL]
//   engine_2d.c_setSolidColor_FUN_004033a0 (004033a0) at 00403418 [UNCONDITIONAL_CALL]
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_setFogColor* g_APIDLL_setFogColor
//   int g_FogColorRed
//   int g_FogColorGreen
//   int g_FogColorBlue

#include "nocturne.h"

int __cdecl wincore_windll_cpp_setFogColor_FUN_005b7b80(int red,int green,int blue)

{
  int iVar1;
  
  g_FogColorGreen = green;
  g_FogColorBlue = blue;
  g_FogColorRed = red;
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_setFogColor)(red,green,blue);
  return iVar1;
}


// Assembly code:
// 005b7b80: PUSH EBX
//   Label: wincore_windll.cpp_setFogColor_FUN_005b7b80
// 005b7b81: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005b7b85: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005b7b89: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0xc] (READ)
// 005b7b8d: MOV EBX,dword ptr [0x02d03e94]
//   XREF to: 02d03e94 (READ)
// 005b7b93: MOV dword ptr [0x03f6b984],EDX
//   XREF to: 03f6b984 (WRITE)
// 005b7b99: MOV dword ptr [0x03f6b988],ECX
//   XREF to: 03f6b988 (WRITE)
// 005b7b9f: MOV [0x03f6b980],EAX
//   XREF to: 03f6b980 (WRITE)
// 005b7ba4: TEST EBX,EBX
// 005b7ba6: JNZ 0x005b7bac
//   XREF to: 005b7bac (CONDITIONAL_JUMP)
// 005b7ba8: XOR EAX,EAX
// 005b7baa: POP EBX
// 005b7bab: RET
// 005b7bac: PUSH ECX
//   Label: LAB_005b7bac
// 005b7bad: PUSH EDX
// 005b7bae: PUSH EAX
// 005b7baf: CALL dword ptr [g_APIDLL_setFogColor]
//   XREF to: 03f6b8f0 (READ)
// 005b7bb5: ADD ESP,0xc
// 005b7bb8: POP EBX
// 005b7bb9: RET
