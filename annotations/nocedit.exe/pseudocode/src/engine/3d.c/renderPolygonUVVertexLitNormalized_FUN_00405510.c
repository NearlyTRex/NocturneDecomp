// Name: engine_3d.c_renderPolygonUVVertexLitNormalized_FUN_00405510
// Address: 00405510
// Address Range: [[00405510, 004055af]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonUVVertexLitNormalized_FUN_00405510(SMRGLHeaderPrimitive * polygon_info)
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
engine_3d_c_renderPolygonUVVertexLitNormalized_FUN_00405510(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlags = RENDER_ADVANCED_TEXTURED;
    g_RenderStateFlag2 = PREPROCESS_TEXTURE_COORD_NORMALIZE;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00405510: PUSH EBX
//   Label: engine_3d.c_renderPolygonUVVertexLitNormalized_FUN_00405510
// 00405511: PUSH ESI
// 00405512: PUSH EBP
// 00405513: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00405517: LEA ESI,[EBX + 0x18]
// 0040551a: LEA EAX,[EBX + 0x8]
// 0040551d: PUSH EAX
// 0040551e: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00405523: ADD ESP,0x4
// 00405526: TEST EAX,EAX
// 00405528: JZ 0x00405574
//   XREF to: 00405574 (CONDITIONAL_JUMP)
// 0040552a: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00405531: JNZ 0x0040558f
//   XREF to: 0040558f (CONDITIONAL_JUMP)
// 00405533: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 0040553a: JNZ 0x00405583
//   XREF to: 00405583 (CONDITIONAL_JUMP)
// 0040553c: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00405546: PUSH EDI
//   Label: LAB_00405546
// 00405547: MOV EDI,0x9
// 0040554c: MOV EBP,0x2
// 00405551: PUSH EBX
// 00405552: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00405558: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 0040555e: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 00405563: ADD ESP,0x4
// 00405566: PUSH ESI
// 00405567: MOV EAX,dword ptr [EBX + 0x4]
// 0040556a: PUSH EAX
// 0040556b: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00405570: ADD ESP,0x8
// 00405573: POP EDI
// 00405574: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00405574
// 00405577: ADD EBX,0x18
// 0040557a: SHL EAX,0x2
// 0040557d: ADD EAX,EBX
// 0040557f: POP EBP
// 00405580: POP ESI
// 00405581: POP EBX
// 00405582: RET
// 00405583: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00405583
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 0040558d: JMP 0x00405546
//   XREF to: 00405546 (UNCONDITIONAL_JUMP)
// 0040558f: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0040558f
//   XREF to: 0067939c (READ)
// 00405596: JNZ 0x004055a4
//   XREF to: 004055a4 (CONDITIONAL_JUMP)
// 00405598: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 004055a2: JMP 0x00405546
//   XREF to: 00405546 (UNCONDITIONAL_JUMP)
// 004055a4: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_004055a4
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 004055ae: JMP 0x00405546
//   XREF to: 00405546 (UNCONDITIONAL_JUMP)
