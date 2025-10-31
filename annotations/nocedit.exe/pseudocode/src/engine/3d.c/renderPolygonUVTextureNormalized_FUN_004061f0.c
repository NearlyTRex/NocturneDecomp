// Name: engine_3d.c_renderPolygonUVTextureNormalized_FUN_004061f0
// Address: 004061f0
// Address Range: [[004061f0, 00406286]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonUVTextureNormalized_FUN_004061f0(SMRGLHeaderPrimitive * polygon_info)
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
engine_3d_c_renderPolygonUVTextureNormalized_FUN_004061f0(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlags = RENDER_TEXTURE_ENABLE;
    g_RenderStateFlag2 = PREPROCESS_TEXTURE_COORD_NORMALIZE;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 004061f0: PUSH EBX
//   Label: engine_3d.c_renderPolygonUVTextureNormalized_FUN_004061f0
// 004061f1: PUSH ESI
// 004061f2: PUSH EBP
// 004061f3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004061f7: LEA ESI,[EBX + 0x18]
// 004061fa: LEA EAX,[EBX + 0x8]
// 004061fd: PUSH EAX
// 004061fe: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00406203: ADD ESP,0x4
// 00406206: TEST EAX,EAX
// 00406208: JZ 0x0040624b
//   XREF to: 0040624b (CONDITIONAL_JUMP)
// 0040620a: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00406211: JNZ 0x00406266
//   XREF to: 00406266 (CONDITIONAL_JUMP)
// 00406213: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 0040621a: JNZ 0x0040625a
//   XREF to: 0040625a (CONDITIONAL_JUMP)
// 0040621c: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00406226: PUSH EDI
//   Label: LAB_00406226
// 00406227: MOV EDI,0x1
// 0040622c: PUSH ESI
// 0040622d: MOV EAX,dword ptr [EBX + 0x4]
// 00406230: MOV EBP,0x2
// 00406235: PUSH EAX
// 00406236: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 0040623c: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00406242: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00406247: ADD ESP,0x8
// 0040624a: POP EDI
// 0040624b: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_0040624b
// 0040624e: ADD EBX,0x18
// 00406251: SHL EAX,0x2
// 00406254: ADD EAX,EBX
// 00406256: POP EBP
// 00406257: POP ESI
// 00406258: POP EBX
// 00406259: RET
// 0040625a: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_0040625a
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00406264: JMP 0x00406226
//   XREF to: 00406226 (UNCONDITIONAL_JUMP)
// 00406266: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00406266
//   XREF to: 0067939c (READ)
// 0040626d: JNZ 0x0040627b
//   XREF to: 0040627b (CONDITIONAL_JUMP)
// 0040626f: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00406279: JMP 0x00406226
//   XREF to: 00406226 (UNCONDITIONAL_JUMP)
// 0040627b: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0040627b
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00406285: JMP 0x00406226
//   XREF to: 00406226 (UNCONDITIONAL_JUMP)
