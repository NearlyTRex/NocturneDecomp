// Name: engine_texture.cpp_freeTextureCache_FUN_005dd7a0
// Address: 005dd7a0
// Address Range: [[005dd7a0, 005dd7fb]]
// Convention: __cdecl
// Signature: void engine_texture.cpp_freeTextureCache_FUN_005dd7a0(void)
// Cross-references:
//   wincore_wddvmem.cpp_freeTextureCache_FUN_005dd7a0 (004037a0) at 004037a0 [UNCONDITIONAL_JUMP]
// Globals:
//   TerminatedCString s_engine_texture_cpp_0065546b
//   char* g_CurrentDebugFilename = 0067d200
//   int g_CurrentDebugLine
//   CTextureCache* g_TextureCacheInstance
// Function calls:
//   engine_texture.cpp_CTextureCache_dtor_FUN_005dcb20
//   engine_texture.cpp_CTextureCache_free_FUN_005dcb30
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

void __cdecl engine_texture_cpp_freeTextureCache_FUN_005dd7a0(void)

{
  CTextureCache *ptr;
  
  engine_texture_cpp_CTextureCache_dtor_FUN_005dcb20(g_TextureCacheInstance);
  ptr = g_TextureCacheInstance;
  g_CurrentDebugLine = 0x284;
  g_CurrentDebugFilename = "..\\engine\\texture.cpp";
  if (g_TextureCacheInstance == (CTextureCache *)0x0) {
    g_TextureCacheInstance = (CTextureCache *)0x0;
    return;
  }
  engine_texture_cpp_CTextureCache_free_FUN_005dcb30(g_TextureCacheInstance);
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  g_TextureCacheInstance = (CTextureCache *)0x0;
  return;
}


// Assembly code:
// 005dd7a0: PUSH EBX
//   Label: engine_texture.cpp_freeTextureCache_FUN_005dd7a0
// 005dd7a1: PUSH ESI
// 005dd7a2: PUSH EDI
// 005dd7a3: MOV EDX,dword ptr [0x03f87358]
//   XREF to: 03f87358 (READ)
// 005dd7a9: PUSH EDX
// 005dd7aa: MOV EBX,0x284
// 005dd7af: CALL engine_texture.cpp_CTextureCache_dtor_FUN_005dcb20
//   XREF to: 005dcb20 (UNCONDITIONAL_CALL)
// 005dd7b4: MOV ECX,0x65546b
//   XREF to: 0065546b (PARAM)
// 005dd7b9: MOV ESI,dword ptr [0x03f87358]
//   XREF to: 03f87358 (READ)
// 005dd7bf: ADD ESP,0x4
// 005dd7c2: MOV dword ptr [0x02f0d944],EBX
//   XREF to: 02f0d944 (WRITE)
// 005dd7c8: MOV dword ptr [0x0067d20c],ECX
//   XREF to: 0067d20c (WRITE)
// 005dd7ce: TEST ESI,ESI
// 005dd7d0: JNZ 0x005dd7de
//   XREF to: 005dd7de (CONDITIONAL_JUMP)
// 005dd7d2: XOR EDI,EDI
// 005dd7d4: MOV dword ptr [0x03f87358],EDI
//   XREF to: 03f87358 (WRITE)
// 005dd7da: POP EDI
// 005dd7db: POP ESI
// 005dd7dc: POP EBX
// 005dd7dd: RET
// 005dd7de: PUSH ESI
//   Label: LAB_005dd7de
// 005dd7df: CALL engine_texture.cpp_CTextureCache_free_FUN_005dcb30
//   XREF to: 005dcb30 (UNCONDITIONAL_CALL)
// 005dd7e4: ADD ESP,0x4
// 005dd7e7: PUSH ESI
// 005dd7e8: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005dd7ed: ADD ESP,0x4
// 005dd7f0: XOR EDI,EDI
// 005dd7f2: MOV dword ptr [0x03f87358],EDI
//   XREF to: 03f87358 (WRITE)
// 005dd7f8: POP EDI
// 005dd7f9: POP ESI
// 005dd7fa: POP EBX
// 005dd7fb: RET
