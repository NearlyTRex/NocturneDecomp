// Name: engine_3d.c_renderPolygonTextureNormalized_FUN_004044a0
// Address: 004044a0
// Address Range: [[004044a0, 00404536]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonTextureNormalized_FUN_004044a0(SMRGLHeaderPrimitive * primitive)
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
engine_3d_c_renderPolygonTextureNormalized_FUN_004044a0(SMRGLHeaderPrimitive *primitive)

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
    g_RenderStateFlags = RENDER_TEXTURE_ENABLE;
    g_RenderStateFlag2 = PREPROCESS_TEXTURE_COORD_NORMALIZE;
    engine_clipper_c_clipAndRasterize_FUN_004371b0((primitive->base).count,(int *)(primitive + 1));
  }
  return (SMRGLHeaderExtended *)(&primitive[1].base.type + (primitive->base).count);
}


// Assembly code:
// 004044a0: PUSH EBX
//   Label: engine_3d.c_renderPolygonTextureNormalized_FUN_004044a0
// 004044a1: PUSH ESI
// 004044a2: PUSH EBP
// 004044a3: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004044a7: LEA ESI,[EBX + 0x18]
// 004044aa: LEA EAX,[EBX + 0x8]
// 004044ad: PUSH EAX
// 004044ae: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 004044b3: ADD ESP,0x4
// 004044b6: TEST EAX,EAX
// 004044b8: JZ 0x004044fb
//   XREF to: 004044fb (CONDITIONAL_JUMP)
// 004044ba: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 004044c1: JNZ 0x00404516
//   XREF to: 00404516 (CONDITIONAL_JUMP)
// 004044c3: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 004044ca: JNZ 0x0040450a
//   XREF to: 0040450a (CONDITIONAL_JUMP)
// 004044cc: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 004044d6: PUSH EDI
//   Label: LAB_004044d6
// 004044d7: MOV EDI,0x1
// 004044dc: PUSH ESI
// 004044dd: MOV EAX,dword ptr [EBX + 0x4]
// 004044e0: MOV EBP,0x2
// 004044e5: PUSH EAX
// 004044e6: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 004044ec: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 004044f2: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 004044f7: ADD ESP,0x8
// 004044fa: POP EDI
// 004044fb: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_004044fb
// 004044fe: ADD EBX,0x18
// 00404501: SHL EAX,0x2
// 00404504: ADD EAX,EBX
// 00404506: POP EBP
// 00404507: POP ESI
// 00404508: POP EBX
// 00404509: RET
// 0040450a: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_0040450a
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00404514: JMP 0x004044d6
//   XREF to: 004044d6 (UNCONDITIONAL_JUMP)
// 00404516: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00404516
//   XREF to: 0067939c (READ)
// 0040451d: JNZ 0x0040452b
//   XREF to: 0040452b (CONDITIONAL_JUMP)
// 0040451f: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00404529: JMP 0x004044d6
//   XREF to: 004044d6 (UNCONDITIONAL_JUMP)
// 0040452b: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_0040452b
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00404535: JMP 0x004044d6
//   XREF to: 004044d6 (UNCONDITIONAL_JUMP)
