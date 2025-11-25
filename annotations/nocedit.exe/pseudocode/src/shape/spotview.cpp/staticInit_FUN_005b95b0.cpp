// Name: shape_spotview.cpp_staticInit_FUN_005b95b0
// Address: 005b95b0
// Address Range: [[005b95b0, 005b95bd]]
// Convention: __cdecl
// Signature: void shape_spotview.cpp_staticInit_FUN_005b95b0(void)
// Globals:
//   CSpotView g_CSpotViewInstance
// Function calls:
//   shape_spotview.cpp_CSpotView_ctor_FUN_005b95c0

#include "nocturne.h"

void __cdecl shape_spotview_cpp_staticInit_FUN_005b95b0(void)

{
  shape_spotview_cpp_CSpotView_ctor_FUN_005b95c0(&g_CSpotViewInstance);
  return;
}


// Assembly code:
// 005b95b0: PUSH 0x3f6b9e0
//   Label: shape_spotview.cpp_staticInit_FUN_005b95b0
//   XREF to: 03f6b9e0 (DATA)
// 005b95b5: CALL shape_spotview.cpp_CSpotView_ctor_FUN_005b95c0
//   XREF to: 005b95c0 (UNCONDITIONAL_CALL)
// 005b95ba: ADD ESP,0x4
// 005b95bd: RET
