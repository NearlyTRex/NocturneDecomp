// Name: engine_3d.c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0
// Address: 004067a0
// Address Range: [[004067a0, 0040685e]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0(SMRGLHeaderPrimitive * polygon_info)
// Globals:
//   int g_BitsPerPixel = 0x8
//   int g_CurrentAlphaValue = 0xff
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
engine_3d_c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0(SMRGLHeaderPrimitive *polygon_info)

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
    if (g_CurrentAlphaValue < 0xff) {
      g_RenderStateFlags = RENDER_ALPHA_PERSPECTIVE;
    }
    g_RenderStateFlag2 = PREPROCESS_DEPTH_BUFFER_PREP;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 004067a0: PUSH EBX
//   Label: engine_3d.c_renderPolygonPerspectiveAlphaSpecial_FUN_004067a0
// 004067a1: PUSH ESI
// 004067a2: PUSH EBP
// 004067a3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004067a7: LEA ESI,[EBX + 0x18]
// 004067aa: LEA EAX,[EBX + 0x8]
// 004067ad: PUSH EAX
// 004067ae: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 004067b3: ADD ESP,0x4
// 004067b6: TEST EAX,EAX
// 004067b8: JZ 0x00406820
//   XREF to: 00406820 (CONDITIONAL_JUMP)
// 004067ba: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 004067c1: JNZ 0x0040683b
//   XREF to: 0040683b (CONDITIONAL_JUMP)
// 004067c7: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 004067ce: JNZ 0x0040682f
//   XREF to: 0040682f (CONDITIONAL_JUMP)
// 004067d0: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 004067da: PUSH EDI
//   Label: LAB_004067da
// 004067db: MOV EDI,0xc3
// 004067e0: MOV EBP,dword ptr [0x006793b4]
//   XREF to: 006793b4 (READ)
// 004067e6: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 004067ec: CMP EBP,0xff
// 004067f2: JGE 0x004067fe
//   XREF to: 004067fe (CONDITIONAL_JUMP)
// 004067f4: MOV dword ptr [0x02d052a0],0xe3
//   XREF to: 02d052a0 (WRITE)
// 004067fe: MOV EDX,0x1
//   Label: LAB_004067fe
// 00406803: PUSH EBX
// 00406804: MOV dword ptr [0x02d052a4],EDX
//   XREF to: 02d052a4 (WRITE)
// 0040680a: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 0040680f: ADD ESP,0x4
// 00406812: PUSH ESI
// 00406813: MOV ECX,dword ptr [EBX + 0x4]
// 00406816: PUSH ECX
// 00406817: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 0040681c: ADD ESP,0x8
// 0040681f: POP EDI
// 00406820: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_00406820
// 00406823: LEA EAX,[EBX + 0x18]
// 00406826: SHL ESI,0x2
// 00406829: ADD EAX,ESI
// 0040682b: POP EBP
// 0040682c: POP ESI
// 0040682d: POP EBX
// 0040682e: RET
// 0040682f: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_0040682f
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00406839: JMP 0x004067da
//   XREF to: 004067da (UNCONDITIONAL_JUMP)
// 0040683b: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_0040683b
//   XREF to: 0067939c (READ)
// 00406842: JNZ 0x00406850
//   XREF to: 00406850 (CONDITIONAL_JUMP)
// 00406844: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 0040684e: JMP 0x004067da
//   XREF to: 004067da (UNCONDITIONAL_JUMP)
// 00406850: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00406850
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0040685a: JMP 0x004067da
//   XREF to: 004067da (UNCONDITIONAL_JUMP)
