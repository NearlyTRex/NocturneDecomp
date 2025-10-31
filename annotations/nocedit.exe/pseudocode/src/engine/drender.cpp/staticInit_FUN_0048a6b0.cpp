// Name: engine_drender.cpp_staticInit_FUN_0048a6b0
// Address: 0048a6b0
// Address Range: [[0048a6b0, 0048a6bd]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_staticInit_FUN_0048a6b0(void)
// Globals:
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   engine_drender.cpp_CDemonRenderer_ctor_FUN_0048a6c0

#include "nocturne.h"

void __cdecl engine_drender_cpp_staticInit_FUN_0048a6b0(void)

{
  engine_drender_cpp_CDemonRenderer_ctor_FUN_0048a6c0(&g_CDemonRendererInstance);
  return;
}


// Assembly code:
// 0048a6b0: PUSH 0x2c6d578
//   Label: engine_drender.cpp_staticInit_FUN_0048a6b0
//   XREF to: 02c6d578 (DATA)
// 0048a6b5: CALL engine_drender.cpp_CDemonRenderer_ctor_FUN_0048a6c0
//   XREF to: 0048a6c0 (UNCONDITIONAL_CALL)
// 0048a6ba: ADD ESP,0x4
// 0048a6bd: RET
