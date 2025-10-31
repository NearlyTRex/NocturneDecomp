// Name: engine_3d.c_renderPolygonUVMappedComplex_FUN_00404d50
// Address: 00404d50
// Address Range: [[00404d50, 00404de6]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonUVMappedComplex_FUN_00404d50(SMRGLHeaderPrimitive * polygon_info)
// Cross-references:
//   shape_design.c_renderSinglePolygon_FUN_0045ce20 (0045ce20) at 0045d184 [UNCONDITIONAL_CALL]
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
engine_3d_c_renderPolygonUVMappedComplex_FUN_00404d50(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlags = RENDER_TEXTURE_COMPLEX;
    g_RenderStateFlag2 = RENDER_TEXTURE_ENABLE;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00404d50: PUSH EBX
//   Label: engine_3d.c_renderPolygonUVMappedComplex_FUN_00404d50
// 00404d51: PUSH ESI
// 00404d52: PUSH EBP
// 00404d53: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00404d57: LEA ESI,[EBX + 0x18]
// 00404d5a: LEA EAX,[EBX + 0x8]
// 00404d5d: PUSH EAX
// 00404d5e: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00404d63: ADD ESP,0x4
// 00404d66: TEST EAX,EAX
// 00404d68: JZ 0x00404dab
//   XREF to: 00404dab (CONDITIONAL_JUMP)
// 00404d6a: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00404d71: JNZ 0x00404dc6
//   XREF to: 00404dc6 (CONDITIONAL_JUMP)
// 00404d73: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 00404d7a: JNZ 0x00404dba
//   XREF to: 00404dba (CONDITIONAL_JUMP)
// 00404d7c: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00404d86: PUSH EDI
//   Label: LAB_00404d86
// 00404d87: MOV EDI,0xc4
// 00404d8c: PUSH ESI
// 00404d8d: MOV EAX,dword ptr [EBX + 0x4]
// 00404d90: MOV EBP,0x1
// 00404d95: PUSH EAX
// 00404d96: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00404d9c: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 00404da2: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00404da7: ADD ESP,0x8
// 00404daa: POP EDI
// 00404dab: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00404dab
// 00404dae: ADD EBX,0x18
// 00404db1: SHL EAX,0x2
// 00404db4: ADD EAX,EBX
// 00404db6: POP EBP
// 00404db7: POP ESI
// 00404db8: POP EBX
// 00404db9: RET
// 00404dba: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00404dba
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00404dc4: JMP 0x00404d86
//   XREF to: 00404d86 (UNCONDITIONAL_JUMP)
// 00404dc6: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00404dc6
//   XREF to: 0067939c (READ)
// 00404dcd: JNZ 0x00404ddb
//   XREF to: 00404ddb (CONDITIONAL_JUMP)
// 00404dcf: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00404dd9: JMP 0x00404d86
//   XREF to: 00404d86 (UNCONDITIONAL_JUMP)
// 00404ddb: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00404ddb
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00404de5: JMP 0x00404d86
//   XREF to: 00404d86 (UNCONDITIONAL_JUMP)
