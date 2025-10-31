// Name: engine_3d.c_renderPolygonUVTextureEnable_FUN_00405350
// Address: 00405350
// Address Range: [[00405350, 00405420]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonUVTextureEnable_FUN_00405350(SMRGLHeaderPrimitive * polygon_info)
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
//   engine_matrix.c_normalizeVector3DFixed_FUN_0050d970

#include "nocturne.h"

SMRGLHeaderExtended * __cdecl
engine_3d_c_renderPolygonUVTextureEnable_FUN_00405350(SMRGLHeaderPrimitive *polygon_info)

{
  CVector3i vector;
  int iVar1;
  BADSPACEBASE *in_ESP;
  byte bVar2;
  undefined4 auStackY_1010 [1017];
  
  bVar2 = 0;
  vector.y = (polygon_info->surface_normal).A;
  vector.x = (int)&stack0xffffffd8;
  vector.z = (polygon_info->surface_normal).B;
  engine_matrix_c_normalizeVector3DFixed_FUN_0050d970(vector);
  *(undefined4 *)(&stack0xffffffdc + (uint)bVar2 * -8) =
       *(undefined4 *)(&stack0xffffffec + (uint)bVar2 * -8);
  *(undefined4 *)(&stack0xffffffe0 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
       *(undefined4 *)(&stack0xfffffff0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
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
    g_RenderStateFlag2 = PREPROCESS_NONE;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00405350: PUSH EBX
//   Label: engine_3d.c_renderPolygonUVTextureEnable_FUN_00405350
// 00405351: PUSH ESI
// 00405352: PUSH EDI
// 00405353: PUSH EBP
// 00405354: SUB ESP,0x18
// 00405357: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0040535b: MOV EAX,dword ptr [EBX + 0x8]
// 0040535e: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 00405361: MOV EAX,dword ptr [EBX + 0xc]
// 00405364: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00405368: MOV EAX,dword ptr [EBX + 0x10]
// 0040536b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0040536f: MOV EAX,ESP
// 00405371: PUSH EAX
// 00405372: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x1c] (DATA)
// 00405376: LEA EDI,[ESP + 0x4]
//   XREF to: Stack[-0x28] (DATA)
// 0040537a: CALL engine_matrix.c_normalizeVector3DFixed_FUN_0050d970
//   XREF to: 0050d970 (UNCONDITIONAL_CALL)
// 0040537f: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x1c] (DATA)
// 00405383: ADD ESP,0x4
// 00405386: MOVSD ES:EDI,ESI
// 00405387: MOVSD ES:EDI,ESI
// 00405388: MOVSD ES:EDI,ESI
// 00405389: LEA ESI,[EBX + 0x18]
// 0040538c: LEA EAX,[EBX + 0x8]
// 0040538f: PUSH EAX
// 00405390: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00405395: ADD ESP,0x4
// 00405398: TEST EAX,EAX
// 0040539a: JZ 0x004053e1
//   XREF to: 004053e1 (CONDITIONAL_JUMP)
// 0040539c: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 004053a3: JNZ 0x00405400
//   XREF to: 00405400 (CONDITIONAL_JUMP)
// 004053a5: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 004053ac: JNZ 0x004053f4
//   XREF to: 004053f4 (CONDITIONAL_JUMP)
// 004053ae: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 004053b8: MOV EDI,0x1
//   Label: LAB_004053b8
// 004053bd: PUSH EBX
// 004053be: XOR EBP,EBP
// 004053c0: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 004053c6: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 004053cc: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 004053d1: ADD ESP,0x4
// 004053d4: PUSH ESI
// 004053d5: MOV EAX,dword ptr [EBX + 0x4]
// 004053d8: PUSH EAX
// 004053d9: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 004053de: ADD ESP,0x8
// 004053e1: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_004053e1
// 004053e4: LEA EAX,[EBX + 0x18]
// 004053e7: SHL ESI,0x2
// 004053ea: ADD EAX,ESI
// 004053ec: ADD ESP,0x18
// 004053ef: POP EBP
// 004053f0: POP EDI
// 004053f1: POP ESI
// 004053f2: POP EBX
// 004053f3: RET
// 004053f4: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_004053f4
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 004053fe: JMP 0x004053b8
//   XREF to: 004053b8 (UNCONDITIONAL_JUMP)
// 00405400: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00405400
//   XREF to: 0067939c (READ)
// 00405407: JNZ 0x00405415
//   XREF to: 00405415 (CONDITIONAL_JUMP)
// 00405409: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00405413: JMP 0x004053b8
//   XREF to: 004053b8 (UNCONDITIONAL_JUMP)
// 00405415: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00405415
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 0040541f: JMP 0x004053b8
//   XREF to: 004053b8 (UNCONDITIONAL_JUMP)
