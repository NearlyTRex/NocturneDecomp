// Name: engine_texture.cpp_renderTextureAtlas_FUN_005dd990
// Address: 005dd990
// Address Range: [[005dd990, 005dd9bf]]
// Convention: __cdecl
// Signature: void engine_texture.cpp_renderTextureAtlas_FUN_005dd990(void)
// Globals:
//   int g_UseExternalRenderer
//   CTextureCache* g_TextureCacheInstance
// Function calls:
//   engine_texture.cpp_CTextureCache_renderAllTextures_FUN_005dd580
//   wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
//   wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl engine_texture_cpp_renderTextureAtlas_FUN_005dd990(void)

{
  undefined4 uStack00000004;
  undefined4 uStack00000008;
  
  if (g_UseExternalRenderer == 0) {
    return;
  }
  wincore_wddvmem_cpp_openScreenDevice_FUN_005ed580();
  engine_texture_cpp_CTextureCache_renderAllTextures_FUN_005dd580(g_TextureCacheInstance);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  uStack00000004 = 0x5dd9b9;
  wincore_wddvmem_cpp_closeScreenDevice_FUN_005ed630();
  uStack00000008 = 0x5dd9be;
  wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
  return;
}


// Assembly code:
// 005dd990: CMP dword ptr [0x02d03e94],0x0
//   Label: engine_texture.cpp_renderTextureAtlas_FUN_005dd990
//   XREF to: 02d03e94 (READ)
// 005dd997: JNZ 0x005dd99a
//   XREF to: 005dd99a (CONDITIONAL_JUMP)
// 005dd999: RET
// 005dd99a: PUSH EBX
//   Label: LAB_005dd99a
// 005dd99b: CALL wincore_wddvmem.cpp_openScreenDevice_FUN_005ed580
//   XREF to: 005ed580 (UNCONDITIONAL_CALL)
// 005dd9a0: MOV ECX,dword ptr [0x03f87358]
//   XREF to: 03f87358 (READ)
// 005dd9a6: PUSH ECX
// 005dd9a7: CALL engine_texture.cpp_CTextureCache_renderAllTextures_FUN_005dd580
//   XREF to: 005dd580 (UNCONDITIONAL_CALL)
// 005dd9ac: ADD ESP,0x4
// 005dd9af: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 005dd9b4: CALL wincore_wddvmem.cpp_closeScreenDevice_FUN_005ed630
//   XREF to: 005ed630 (UNCONDITIONAL_CALL)
// 005dd9b9: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005dd9be: POP EBX
// 005dd9bf: RET
