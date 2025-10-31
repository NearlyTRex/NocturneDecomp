// Name: engine_texture.cpp_initTextureCache_FUN_005dd760
// Address: 005dd760
// Address Range: [[005dd760, 005dd794]]
// Convention: __cdecl
// Signature: CTextureCache * engine_texture.cpp_initTextureCache_FUN_005dd760(void)
// Cross-references:
//   wincore_wddvmem.cpp_initTextureCache_FUN_005dd760 (00403790) at 00403790 [UNCONDITIONAL_JUMP]
// Globals:
//   TerminatedCString s_engine_texture_cpp_00655455
//   CTextureCache* g_TextureCacheInstance
// Function calls:
//   engine_texture.cpp_CTextureCache_ctor_FUN_005dcab0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

CTextureCache * __cdecl engine_texture_cpp_initTextureCache_FUN_005dd760(void)

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
// 005dd760: PUSH 0x278
//   Label: engine_texture.cpp_initTextureCache_FUN_005dd760
// 005dd765: PUSH 0x655455
//   XREF to: 00655455 (DATA)
// 005dd76a: PUSH 0x1400c
// 005dd76f: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 005dd774: ADD ESP,0xc
// 005dd777: TEST EAX,EAX
// 005dd779: JNZ 0x005dd781
//   XREF to: 005dd781 (CONDITIONAL_JUMP)
// 005dd77b: MOV [0x03f87358],EAX
//   XREF to: 03f87358 (WRITE)
// 005dd780: RET
// 005dd781: PUSH 0x400
//   Label: LAB_005dd781
// 005dd786: PUSH EAX
// 005dd787: CALL engine_texture.cpp_CTextureCache_ctor_FUN_005dcab0
//   XREF to: 005dcab0 (UNCONDITIONAL_CALL)
// 005dd78c: ADD ESP,0x8
// 005dd78f: MOV [0x03f87358],EAX
//   XREF to: 03f87358 (WRITE)
// 005dd794: RET
