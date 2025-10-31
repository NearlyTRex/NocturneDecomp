// Name: engine_3d.c_renderPolygonVertexLit_FUN_00404120
// Address: 00404120
// Address Range: [[00404120, 004041c0]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonVertexLit_FUN_00404120(SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   int g_BitsPerPixel = 0x8
//   RenderScanlineFunc* g_ScanlineRenderFunc
//   BOOL g_MMXSupported
//   int g_RenderStateFlags
//   int g_RenderStateFlag2
// Function calls:
//   engine_3d.c_isVisiblePlane_FUN_00403950
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_clipper.c_clipAndRasterize_FUN_004371b0

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonVertexLit_FUN_00404120(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlags = RENDER_VERTEX_LIGHTING;
    engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
    g_RenderStateFlag2 = PREPROCESS_NONE;
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00404120: PUSH EBX
//   Label: engine_3d.c_renderPolygonVertexLit_FUN_00404120
// 00404121: PUSH ESI
// 00404122: PUSH EBP
// 00404123: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00404127: LEA ESI,[EBX + 0x18]
// 0040412a: LEA EAX,[EBX + 0x8]
// 0040412d: PUSH EAX
// 0040412e: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00404133: ADD ESP,0x4
// 00404136: TEST EAX,EAX
// 00404138: JZ 0x00404185
//   XREF to: 00404185 (CONDITIONAL_JUMP)
// 0040413a: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00404141: JNZ 0x004041a0
//   XREF to: 004041a0 (CONDITIONAL_JUMP)
// 00404143: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 0040414a: JNZ 0x00404194
//   XREF to: 00404194 (CONDITIONAL_JUMP)
// 0040414c: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00404156: PUSH EDI
//   Label: LAB_00404156
// 00404157: MOV EDI,0x3
// 0040415c: PUSH 0xffff
// 00404161: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00404167: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 0040416c: ADD ESP,0x4
// 0040416f: PUSH ESI
// 00404170: MOV EAX,dword ptr [EBX + 0x4]
// 00404173: XOR EBP,EBP
// 00404175: PUSH EAX
// 00404176: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 0040417c: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00404181: ADD ESP,0x8
// 00404184: POP EDI
// 00404185: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_00404185
// 00404188: ADD EBX,0x18
// 0040418b: SHL EAX,0x2
// 0040418e: ADD EAX,EBX
// 00404190: POP EBP
// 00404191: POP ESI
// 00404192: POP EBX
// 00404193: RET
// 00404194: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00404194
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 0040419e: JMP 0x00404156
//   XREF to: 00404156 (UNCONDITIONAL_JUMP)
// 004041a0: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_004041a0
//   XREF to: 0067939c (READ)
// 004041a7: JNZ 0x004041b5
//   XREF to: 004041b5 (CONDITIONAL_JUMP)
// 004041a9: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 004041b3: JMP 0x00404156
//   XREF to: 00404156 (UNCONDITIONAL_JUMP)
// 004041b5: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_004041b5
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 004041bf: JMP 0x00404156
//   XREF to: 00404156 (UNCONDITIONAL_JUMP)
