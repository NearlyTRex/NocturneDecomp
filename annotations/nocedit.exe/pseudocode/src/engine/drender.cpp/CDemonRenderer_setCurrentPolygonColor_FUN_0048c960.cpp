// Name: engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
// Address: 0048c960
// Address Range: [[0048c960, 0048c969]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(CDemonRenderer * this_ptr, int color)
// Cross-references:
//   core_bugs.cpp_FUN_00425340 (00425340) at 0042543c [UNCONDITIONAL_CALL]
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043cc4b [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043b790 (0043b790) at 0043b7a4 [UNCONDITIONAL_CALL]
//   core_cloth.cpp_LockVerticesMaybe_FUN_0043d590 (0043d590) at 0043d769 [UNCONDITIONAL_CALL]
//   core_dpart.cpp_CDemonPart_renderFaces_FUN_004828b0 (004828b0) at 00482997 [UNCONDITIONAL_CALL]
//   core_dtrace.cpp_CDemonRaytrace_renderGridCube_FUN_00496e70 (00496e70) at 00497235 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_FUN_00583170 (00583170) at 005839ae [UNCONDITIONAL_CALL]
//   core_setedit.cpp_FUN_00582930 (00582930) at 00582bda [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_FUN_005e4d80 (005e4d80) at 005e4e42 [UNCONDITIONAL_CALL]
//   core_water.cpp_CWater_render_FUN_005ea320 (005ea320) at 005ea7d8 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051e990 (0051e990) at 0051e9c6 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_FUN_0051ead0 (0051ead0) at 0051ecab [UNCONDITIONAL_CALL]
// Globals:
//   int g_CurrentPolygonColor

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
          (CDemonRenderer *this_ptr,int color)

{
  g_CurrentPolygonColor = color;
  return;
}


// Assembly code:
// 0048c960: MOV EAX,dword ptr [ESP + 0x8]
//   Label: engine_drender.cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
//   XREF to: Stack[0x8] (READ)
// 0048c964: MOV [0x00772a5c],EAX
//   XREF to: 00772a5c (WRITE)
// 0048c969: RET
