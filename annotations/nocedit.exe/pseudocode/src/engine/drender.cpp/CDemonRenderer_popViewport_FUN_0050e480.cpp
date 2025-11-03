// Name: engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
// Address: 0048c8c0
// Address Range: [[0048c8c0, 0048c8c4]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480(CDemonRenderer * this_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_endBackgroundScene_FUN_0044cdf0 (0044cdf0) at 0044ce13 [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_endScene_FUN_0044cb80 (0044cb80) at 0044cc17 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_endScene_FUN_00472d30 (00472d30) at 00472db2 [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_update_FUN_00504160 (00504160) at 00504599 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c344 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0 (00574ef0) at 00574ef7 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310 (00580310) at 005804fd [UNCONDITIONAL_CALL]
//   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 (0057ce80) at 0057d21e [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl engine_drender_cpp_CDemonRenderer_popViewport_FUN_0050e480(CDemonRenderer *this_ptr)

{
  engine_matrix_c_popViewport_FUN_0050e480(this_ptr);
  return;
}


// Assembly code:
// 0048c8c0: JMP 0x0050e480
//   Label: engine_drender.cpp_CDemonRenderer_popViewport_FUN_0050e480
//   XREF to: 0050e480 (UNCONDITIONAL_JUMP)
