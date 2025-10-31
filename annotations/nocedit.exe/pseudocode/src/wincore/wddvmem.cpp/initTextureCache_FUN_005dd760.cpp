// Name: wincore_wddvmem.cpp_initTextureCache_FUN_005dd760
// Address: 00403790
// Address Range: [[00403790, 00403794]]
// Convention: __cdecl
// Signature: CTextureCache * wincore_wddvmem.cpp_initTextureCache_FUN_005dd760(void)
// Cross-references:
//   core_main.c_initializeGameSystems_FUN_00507a60 (00507a60) at 00507bc6 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CTextureCache * __cdecl wincore_wddvmem_cpp_initTextureCache_FUN_005dd760(void)

{
  CTextureCache *this_ptr;
  
  this_ptr = (CTextureCache *)
             shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x1400c,"..\\engine\\texture.cpp",0x278);
  if (this_ptr == (CTextureCache *)0x0) {
    g_TextureCacheInstance = this_ptr;
    return (CTextureCache *)0x0;
  }
  g_TextureCacheInstance = engine_texture_cpp_CTextureCache_ctor_FUN_005dcab0(this_ptr,0x400);
  return g_TextureCacheInstance;
}


// Assembly code:
// 00403790: JMP 0x005dd760
//   Label: wincore_wddvmem.cpp_initTextureCache_FUN_005dd760
//   XREF to: 005dd760 (UNCONDITIONAL_JUMP)
