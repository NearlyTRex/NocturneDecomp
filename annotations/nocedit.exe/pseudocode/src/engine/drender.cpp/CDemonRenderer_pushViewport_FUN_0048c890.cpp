// Name: engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
// Address: 0048c890
// Address Range: [[0048c890, 0048c8b0]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890(CDemonRenderer * this_ptr, int x, int y, int width, int height)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_beginBackgroundScene_FUN_0044cc70 (0044cc70) at 0044cd7b [UNCONDITIONAL_CALL]
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 (0044c430) at 0044c598 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 (00472a80) at 00472ac8 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_renderItemModel_FUN_004fee00 (004fee00) at 004feed0 [UNCONDITIONAL_CALL]
//   core_level.cpp_CLevelLoader_update_FUN_00504160 (00504160) at 005041b1 [UNCONDITIONAL_CALL]
//   core_morph.cpp_Select1stModel_Select2ndModel_Loading_FUN_0052bcb0 (0052bcb0) at 0052c032 [UNCONDITIONAL_CALL]
//   core_setdir.cpp_CZThumb_pushRenderingContext_FUN_00574e70 (00574e70) at 00574eab [UNCONDITIONAL_CALL]
//   core_setedit.cpp_SomethingMemoryConstructorMaybe_FUN_00580310 (00580310) at 005803dc [UNCONDITIONAL_CALL]
//   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 (0057ce80) at 0057cff5 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_matrix.c_pushViewport_FUN_0050e320

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0048c890
          (CDemonRenderer *this_ptr,int x,int y,int width,int height)

{
  engine_matrix_c_pushViewport_FUN_0050e320(x,y,width,height);
  return;
}


// Assembly code:
// 0048c890: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_pushViewport_FUN_0048c890
// 0048c891: PUSH ESI
// 0048c892: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 0048c896: PUSH EDX
// 0048c897: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 0048c89b: PUSH ECX
// 0048c89c: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0048c8a0: PUSH EBX
// 0048c8a1: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0048c8a5: PUSH ESI
// 0048c8a6: CALL engine_matrix.c_pushViewport_FUN_0050e320
//   XREF to: 0050e320 (UNCONDITIONAL_CALL)
// 0048c8ab: ADD ESP,0x10
// 0048c8ae: POP ESI
// 0048c8af: POP EBX
// 0048c8b0: RET
