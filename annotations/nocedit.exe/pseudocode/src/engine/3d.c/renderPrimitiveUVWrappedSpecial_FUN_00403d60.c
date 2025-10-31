// Name: engine_3d.c_renderPrimitiveUVWrappedSpecial_FUN_00403d60
// Address: 00403d60
// Address Range: [[00403d60, 00403df6]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPrimitiveUVWrappedSpecial_FUN_00403d60(SMRGLHeaderPrimitive * primitive)
// Globals:
//   int g_BitsPerPixel = 0x8
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_clipper.c_clipAndRasterize_FUN_004371b0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPrimitiveUVWrappedSpecial_FUN_00403d60(SMRGLHeaderPrimitive *primitive)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&primitive->surface_normal);
  if (iVar1 != 0) {
    if (g_MMXSupported == 0) {
      if (g_BitsPerPixel == 0x20) {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline32_FUN_005b50ec;
      }
      else {
        g_ScanlineRenderFunc = wincore_windll_cpp_renderPerspectiveCorrectScanline16_FUN_005b5322;
      }
    }
    else if (g_BitsPerPixel == 0x20) {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline32_FUN_005b4031;
    }
    else {
      g_ScanlineRenderFunc = wincore_windll_cpp_renderMMXPerspectiveScanline16_FUN_005b4823;
    }
    g_RenderStateFlags = RENDER_UV_WRAP_U;
    g_RenderStateFlag2 = PREPROCESS_PRIMITIVE_SPECIAL;
    engine_clipper_c_clipAndRasterize_FUN_004371b0((primitive->base).count,(int *)(primitive + 1));
  }
  return (SMRGLHeaderExtended *)(&primitive[1].base.type + (primitive->base).count);
}


// Assembly code:
// 00403d60: PUSH EBX
//   Label: engine_3d.c_renderPrimitiveUVWrappedSpecial_FUN_00403d60
// 00403d61: PUSH ESI
// 00403d62: PUSH EBP
// 00403d63: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00403d67: LEA ESI,[EBX + 0x18]
// 00403d6a: LEA EAX,[EBX + 0x8]
// 00403d6d: PUSH EAX
// 00403d6e: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00403d73: ADD ESP,0x4
// 00403d76: TEST EAX,EAX
// 00403d78: JZ 0x00403dbb
//   XREF to: 00403dbb (CONDITIONAL_JUMP)
// 00403d7a: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00403d81: JNZ 0x00403dd6
//   XREF to: 00403dd6 (CONDITIONAL_JUMP)
// 00403d83: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00403d8a: JNZ 0x00403dca
//   XREF to: 00403dca (CONDITIONAL_JUMP)
// 00403d8c: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00403d96: PUSH EDI
//   Label: LAB_00403d96
// 00403d97: MOV EDI,0x5
// 00403d9c: PUSH ESI
// 00403d9d: MOV EAX,dword ptr [EBX + 0x4]
// 00403da0: MOV EBP,0x4
// 00403da5: PUSH EAX
// 00403da6: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00403dac: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00403db2: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00403db7: ADD ESP,0x8
// 00403dba: POP EDI
// 00403dbb: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00403dbb
// 00403dbe: ADD EBX,0x18
// 00403dc1: SHL EAX,0x2
// 00403dc4: ADD EAX,EBX
// 00403dc6: POP EBP
// 00403dc7: POP ESI
// 00403dc8: POP EBX
// 00403dc9: RET
// 00403dca: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00403dca
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00403dd4: JMP 0x00403d96
//   XREF to: 00403d96 (UNCONDITIONAL_JUMP)
// 00403dd6: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00403dd6
//   XREF to: 0067939c (READ)
// 00403ddd: JNZ 0x00403deb
//   XREF to: 00403deb (CONDITIONAL_JUMP)
// 00403ddf: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00403de9: JMP 0x00403d96
//   XREF to: 00403d96 (UNCONDITIONAL_JUMP)
// 00403deb: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00403deb
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00403df5: JMP 0x00403d96
//   XREF to: 00403d96 (UNCONDITIONAL_JUMP)
