// Name: engine_3d.c_renderPolygonTextureWrappedLit_FUN_00406150
// Address: 00406150
// Address Range: [[00406150, 004061ef]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonTextureWrappedLit_FUN_00406150(SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   int g_BitsPerPixel = 0x8
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_clipper.c_clipAndRasterize_FUN_004371b0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonTextureWrappedLit_FUN_00406150(SMRGLHeaderPrimitive *polygon_info)

{
  int iVar1;
  
  iVar1 = engine_3d_c_isVisiblePlane_FUN_00403950(&polygon_info->surface_normal);
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
    g_RenderStateFlags = RENDER_TEXTURE_LIT;
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00406150: PUSH EBX
//   Label: engine_3d.c_renderPolygonTextureWrappedLit_FUN_00406150
// 00406151: PUSH ESI
// 00406152: PUSH EBP
// 00406153: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00406157: LEA ESI,[EBX + 0x18]
// 0040615a: LEA EAX,[EBX + 0x8]
// 0040615d: PUSH EAX
// 0040615e: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00406163: ADD ESP,0x4
// 00406166: TEST EAX,EAX
// 00406168: JZ 0x004061b4
//   XREF to: 004061b4 (CONDITIONAL_JUMP)
// 0040616a: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00406171: JNZ 0x004061cf
//   XREF to: 004061cf (CONDITIONAL_JUMP)
// 00406173: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 0040617a: JNZ 0x004061c3
//   XREF to: 004061c3 (CONDITIONAL_JUMP)
// 0040617c: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00406186: PUSH EDI
//   Label: LAB_00406186
// 00406187: MOV EDI,0xc1
// 0040618c: MOV EBP,0x1
// 00406191: PUSH EBX
// 00406192: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00406198: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 0040619e: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 004061a3: ADD ESP,0x4
// 004061a6: PUSH ESI
// 004061a7: MOV EAX,dword ptr [EBX + 0x4]
// 004061aa: PUSH EAX
// 004061ab: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 004061b0: ADD ESP,0x8
// 004061b3: POP EDI
// 004061b4: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_004061b4
// 004061b7: ADD EBX,0x18
// 004061ba: SHL EAX,0x2
// 004061bd: ADD EAX,EBX
// 004061bf: POP EBP
// 004061c0: POP ESI
// 004061c1: POP EBX
// 004061c2: RET
// 004061c3: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_004061c3
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 004061cd: JMP 0x00406186
//   XREF to: 00406186 (UNCONDITIONAL_JUMP)
// 004061cf: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_004061cf
//   XREF to: 0067939c (READ)
// 004061d6: JNZ 0x004061e4
//   XREF to: 004061e4 (CONDITIONAL_JUMP)
// 004061d8: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 004061e2: JMP 0x00406186
//   XREF to: 00406186 (UNCONDITIONAL_JUMP)
// 004061e4: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_004061e4
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 004061ee: JMP 0x00406186
//   XREF to: 00406186 (UNCONDITIONAL_JUMP)
