// Name: engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_004060a0
// Address: 004060a0
// Address Range: [[004060a0, 0040614c]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_004060a0(SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   int g_BitsPerPixel = 0x8
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_clipper.c_clipAndRasterize_FUN_004371b0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonTexturePerspectiveCorrect_FUN_004060a0(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlags = RENDER_TEXTURE_PERSPECTIVE;
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 004060a0: PUSH EBX
//   Label: engine_3d.c_renderPolygonTexturePerspectiveCorrect_FUN_004060a0
// 004060a1: PUSH ESI
// 004060a2: PUSH EBP
// 004060a3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004060a7: LEA ESI,[EBX + 0x18]
// 004060aa: LEA EAX,[EBX + 0x8]
// 004060ad: PUSH EAX
// 004060ae: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 004060b3: ADD ESP,0x4
// 004060b6: TEST EAX,EAX
// 004060b8: JZ 0x00406111
//   XREF to: 00406111 (CONDITIONAL_JUMP)
// 004060ba: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 004060c1: JNZ 0x0040612c
//   XREF to: 0040612c (CONDITIONAL_JUMP)
// 004060c3: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 004060ca: JNZ 0x00406120
//   XREF to: 00406120 (CONDITIONAL_JUMP)
// 004060cc: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 004060d6: PUSH EDI
//   Label: LAB_004060d6
// 004060d7: MOV EDI,0xc3
// 004060dc: PUSH 0xffff
// 004060e1: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 004060e7: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 004060ec: ADD ESP,0x4
// 004060ef: MOV EBP,0x1
// 004060f4: PUSH EBX
// 004060f5: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 004060fb: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 00406100: ADD ESP,0x4
// 00406103: PUSH ESI
// 00406104: MOV EAX,dword ptr [EBX + 0x4]
// 00406107: PUSH EAX
// 00406108: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 0040610d: ADD ESP,0x8
// 00406110: POP EDI
// 00406111: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00406111
// 00406114: ADD EBX,0x18
// 00406117: SHL EAX,0x2
// 0040611a: ADD EAX,EBX
// 0040611c: POP EBP
// 0040611d: POP ESI
// 0040611e: POP EBX
// 0040611f: RET
// 00406120: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00406120
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 0040612a: JMP 0x004060d6
//   XREF to: 004060d6 (UNCONDITIONAL_JUMP)
// 0040612c: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0040612c
//   XREF to: 0067939c (READ)
// 00406133: JNZ 0x00406141
//   XREF to: 00406141 (CONDITIONAL_JUMP)
// 00406135: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0040613f: JMP 0x004060d6
//   XREF to: 004060d6 (UNCONDITIONAL_JUMP)
// 00406141: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00406141
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0040614b: JMP 0x004060d6
//   XREF to: 004060d6 (UNCONDITIONAL_JUMP)
