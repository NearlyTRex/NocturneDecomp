// Name: engine_3d.c_makeGrayscaleColor_FUN_004039c0
// Address: 004039c0
// Address Range: [[004039c0, 004039f6]]
// Convention: __cdecl
// Signature: uint engine_3d.c_makeGrayscaleColor_FUN_004039c0(int intensity)
// Cross-references:
//   engine_3d.c_renderPolygonAdaptiveDepthMode_FUN_00404ae0 (00404ae0) at 00404b5e [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonLastPixelMode_FUN_00403ad0 (00403ad0) at 00403b3f [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonLastPixelMode_FUN_004066d0 (004066d0) at 0040673f [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPolygonTextureAdaptiveWrapped_FUN_00406430 (00406430) at 00406655 [UNCONDITIONAL_CALL]
//   engine_3d.c_renderPrimitiveAdaptivePlaneMasked_FUN_00404840 (00404840) at 004049d0 [UNCONDITIONAL_CALL]

#include "nocturne.h"

uint __cdecl engine_3d_c_makeGrayscaleColor_FUN_004039c0(int intensity)

{
  if (-1 < intensity) {
    return 0xffffffff;
  }
  return intensity * -0x1010101;
}


// Assembly code:
// 004039c0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: engine_3d.c_makeGrayscaleColor_FUN_004039c0
//   XREF to: Stack[0x4] (READ)
// 004039c4: TEST EAX,EAX
// 004039c6: JL 0x004039e1
//   XREF to: 004039e1 (CONDITIONAL_JUMP)
// 004039c8: MOV EAX,0xff
// 004039cd: MOV EDX,EAX
// 004039cf: MOV ECX,EAX
// 004039d1: SHL EDX,0x8
// 004039d4: SHL ECX,0x10
// 004039d7: ADD EDX,EAX
// 004039d9: SHL EAX,0x18
// 004039dc: ADD EDX,ECX
// 004039de: ADD EAX,EDX
// 004039e0: RET
// 004039e1: NEG EAX
//   Label: LAB_004039e1
// 004039e3: MOV EDX,EAX
// 004039e5: MOV ECX,EAX
// 004039e7: SHL EDX,0x8
// 004039ea: SHL ECX,0x10
// 004039ed: ADD EDX,EAX
// 004039ef: SHL EAX,0x18
// 004039f2: ADD EDX,ECX
// 004039f4: ADD EAX,EDX
// 004039f6: RET
