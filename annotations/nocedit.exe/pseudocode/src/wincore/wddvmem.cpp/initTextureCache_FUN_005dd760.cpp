// Name: wincore_wddvmem.cpp_initTextureCache_FUN_005dd760
// Address: 00403790
// Address Range: [[00403790, 00403794]]
// Convention: __cdecl
// Signature: CTextureCache * wincore_wddvmem.cpp_initTextureCache_FUN_005dd760(void)

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
