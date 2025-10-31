// Name: wincore_windll.cpp_setMipMapLevel_FUN_005b7436
// Address: 005b7436
// Address Range: [[005b7436, 005b745a]]
// Convention: __cdecl
// Signature: int wincore_windll.cpp_setMipMapLevel_FUN_005b7436(int mipmap_level)
// Globals:
//   int g_UseExternalRenderer
//   APIDLL_setMipMapLevel* g_APIDLL_setMipMapLevel

#include "nocturne.h"

int __cdecl wincore_windll_cpp_setMipMapLevel_FUN_005b7436(int mipmap_level)

{
  int iVar1;
  
  if (g_UseExternalRenderer == 0) {
    return 0;
  }
  iVar1 = (*g_APIDLL_setMipMapLevel)(mipmap_level);
  return iVar1;
}


// Assembly code:
// 005b7436: LEA EAX,[EAX]
//   Label: wincore_windll.cpp_setMipMapLevel_FUN_005b7436
// 005b743c: LEA EDX,[EDX]
// 005b7440: CMP dword ptr [0x02d03e94],0x0
//   XREF to: 02d03e94 (READ)
// 005b7447: JNZ 0x005b744c
//   XREF to: 005b744c (CONDITIONAL_JUMP)
// 005b7449: XOR EAX,EAX
// 005b744b: RET
// 005b744c: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_005b744c
//   XREF to: Stack[0x4] (READ)
// 005b7450: PUSH ECX
// 005b7451: CALL dword ptr [g_APIDLL_setMipMapLevel]
//   XREF to: 03f6b8c4 (READ)
// 005b7457: ADD ESP,0x4
// 005b745a: RET
