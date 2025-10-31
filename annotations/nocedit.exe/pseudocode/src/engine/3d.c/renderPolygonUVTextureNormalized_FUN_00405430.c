// Name: engine_3d.c_renderPolygonUVTextureNormalized_FUN_00405430
// Address: 00405430
// Address Range: [[00405430, 00405503]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonUVTextureNormalized_FUN_00405430(SMRGLHeaderPrimitive * polygon_info)
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
engine_3d_c_renderPolygonUVTextureNormalized_FUN_00405430(SMRGLHeaderPrimitive *polygon_info)

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
    g_RenderStateFlag2 = PREPROCESS_TEXTURE_COORD_NORMALIZE;
    engine_3d_c_calculatePolygonLighting_FUN_00403a00(polygon_info);
    engine_clipper_c_clipAndRasterize_FUN_004371b0
              ((polygon_info->base).count,(int *)(polygon_info + 1));
  }
  return (SMRGLHeaderExtended *)(&polygon_info[1].base.type + (polygon_info->base).count);
}


// Assembly code:
// 00405430: PUSH EBX
//   Label: engine_3d.c_renderPolygonUVTextureNormalized_FUN_00405430
// 00405431: PUSH ESI
// 00405432: PUSH EDI
// 00405433: PUSH EBP
// 00405434: SUB ESP,0x18
// 00405437: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0040543b: MOV EAX,dword ptr [EBX + 0x8]
// 0040543e: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 00405441: MOV EAX,dword ptr [EBX + 0xc]
// 00405444: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00405448: MOV EAX,dword ptr [EBX + 0x10]
// 0040544b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0040544f: MOV EAX,ESP
// 00405451: PUSH EAX
// 00405452: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x1c] (DATA)
// 00405456: LEA EDI,[ESP + 0x4]
//   XREF to: Stack[-0x28] (DATA)
// 0040545a: CALL engine_matrix.c_normalizeVector3DFixed_FUN_0050d970
//   XREF to: 0050d970 (UNCONDITIONAL_CALL)
// 0040545f: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x1c] (DATA)
// 00405463: ADD ESP,0x4
// 00405466: MOVSD ES:EDI,ESI
// 00405467: MOVSD ES:EDI,ESI
// 00405468: MOVSD ES:EDI,ESI
// 00405469: LEA ESI,[EBX + 0x18]
// 0040546c: LEA EAX,[EBX + 0x8]
// 0040546f: PUSH EAX
// 00405470: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 00405475: ADD ESP,0x4
// 00405478: TEST EAX,EAX
// 0040547a: JZ 0x004054c4
//   XREF to: 004054c4 (CONDITIONAL_JUMP)
// 0040547c: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00405483: JNZ 0x004054e3
//   XREF to: 004054e3 (CONDITIONAL_JUMP)
// 00405485: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 0040548c: JNZ 0x004054d7
//   XREF to: 004054d7 (CONDITIONAL_JUMP)
// 0040548e: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00405498: MOV EDI,0x1
//   Label: LAB_00405498
// 0040549d: MOV EBP,0x2
// 004054a2: PUSH EBX
// 004054a3: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 004054a9: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 004054af: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 004054b4: ADD ESP,0x4
// 004054b7: PUSH ESI
// 004054b8: MOV EAX,dword ptr [EBX + 0x4]
// 004054bb: PUSH EAX
// 004054bc: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 004054c1: ADD ESP,0x8
// 004054c4: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_004054c4
// 004054c7: LEA EAX,[EBX + 0x18]
// 004054ca: SHL ESI,0x2
// 004054cd: ADD EAX,ESI
// 004054cf: ADD ESP,0x18
// 004054d2: POP EBP
// 004054d3: POP EDI
// 004054d4: POP ESI
// 004054d5: POP EBX
// 004054d6: RET
// 004054d7: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_004054d7
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 004054e1: JMP 0x00405498
//   XREF to: 00405498 (UNCONDITIONAL_JUMP)
// 004054e3: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_004054e3
//   XREF to: 0067939c (READ)
// 004054ea: JNZ 0x004054f8
//   XREF to: 004054f8 (CONDITIONAL_JUMP)
// 004054ec: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 004054f6: JMP 0x00405498
//   XREF to: 00405498 (UNCONDITIONAL_JUMP)
// 004054f8: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_004054f8
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00405502: JMP 0x00405498
//   XREF to: 00405498 (UNCONDITIONAL_JUMP)
