// Name: engine_3d.c_renderPolygonPerspectiveNormalized_FUN_004055b0
// Address: 004055b0
// Address Range: [[004055b0, 00405683]]
// Convention: __cdecl
// Signature: SMRGLHeaderExtended * engine_3d.c_renderPolygonPerspectiveNormalized_FUN_004055b0(SMRGLHeaderPrimitive * polygon_info)
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
engine_3d_c_renderPolygonPerspectiveNormalized_FUN_004055b0(SMRGLHeaderPrimitive *polygon_info)

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
// 004055b0: PUSH EBX
//   Label: engine_3d.c_renderPolygonPerspectiveNormalized_FUN_004055b0
// 004055b1: PUSH ESI
// 004055b2: PUSH EDI
// 004055b3: PUSH EBP
// 004055b4: SUB ESP,0x18
// 004055b7: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 004055bb: MOV EAX,dword ptr [EBX + 0x8]
// 004055be: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 004055c1: MOV EAX,dword ptr [EBX + 0xc]
// 004055c4: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004055c8: MOV EAX,dword ptr [EBX + 0x10]
// 004055cb: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004055cf: MOV EAX,ESP
// 004055d1: PUSH EAX
// 004055d2: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x1c] (DATA)
// 004055d6: LEA EDI,[ESP + 0x4]
//   XREF to: Stack[-0x28] (DATA)
// 004055da: CALL engine_matrix.c_normalizeVector3DFixed_FUN_0050d970
//   XREF to: 0050d970 (UNCONDITIONAL_CALL)
// 004055df: LEA ESI,[ESP + 0x10]
//   XREF to: Stack[-0x1c] (DATA)
// 004055e3: ADD ESP,0x4
// 004055e6: MOVSD ES:EDI,ESI
// 004055e7: MOVSD ES:EDI,ESI
// 004055e8: MOVSD ES:EDI,ESI
// 004055e9: LEA ESI,[EBX + 0x18]
// 004055ec: LEA EAX,[EBX + 0x8]
// 004055ef: PUSH EAX
// 004055f0: CALL engine_3d.c_isVisiblePlane_FUN_00403950
//   XREF to: 00403950 (UNCONDITIONAL_CALL)
// 004055f5: ADD ESP,0x4
// 004055f8: TEST EAX,EAX
// 004055fa: JZ 0x00405644
//   XREF to: 00405644 (CONDITIONAL_JUMP)
// 004055fc: CMP dword ptr [0x02d05248],0x0
//   XREF to: 02d05248 (READ)
// 00405603: JNZ 0x00405663
//   XREF to: 00405663 (CONDITIONAL_JUMP)
// 00405605: CMP dword ptr [0x0067939c],0x20
//   XREF to: 0067939c (READ)
// 0040560c: JNZ 0x00405657
//   XREF to: 00405657 (CONDITIONAL_JUMP)
// 0040560e: MOV dword ptr [0x02d0257c],0x5b50ec
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b50ec (DATA)
// 00405618: MOV EDI,0x1
//   Label: LAB_00405618
// 0040561d: MOV EBP,0x2
// 00405622: PUSH EBX
// 00405623: MOV dword ptr [0x02d052a0],EDI
//   XREF to: 02d052a0 (WRITE)
// 00405629: MOV dword ptr [0x02d052a4],EBP
//   XREF to: 02d052a4 (WRITE)
// 0040562f: CALL engine_3d.c_calculatePolygonLighting_FUN_00403a00
//   XREF to: 00403a00 (UNCONDITIONAL_CALL)
// 00405634: ADD ESP,0x4
// 00405637: PUSH ESI
// 00405638: MOV EAX,dword ptr [EBX + 0x4]
// 0040563b: PUSH EAX
// 0040563c: CALL engine_clipper.c_clipAndRasterize_FUN_004371b0
//   XREF to: 004371b0 (UNCONDITIONAL_CALL)
// 00405641: ADD ESP,0x8
// 00405644: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_00405644
// 00405647: LEA EAX,[EBX + 0x18]
// 0040564a: SHL ESI,0x2
// 0040564d: ADD EAX,ESI
// 0040564f: ADD ESP,0x18
// 00405652: POP EBP
// 00405653: POP EDI
// 00405654: POP ESI
// 00405655: POP EBX
// 00405656: RET
// 00405657: MOV dword ptr [0x02d0257c],0x5b5322
//   Label: LAB_00405657
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b5322 (DATA)
// 00405661: JMP 0x00405618
//   XREF to: 00405618 (UNCONDITIONAL_JUMP)
// 00405663: CMP dword ptr [0x0067939c],0x20
//   Label: LAB_00405663
//   XREF to: 0067939c (READ)
// 0040566a: JNZ 0x00405678
//   XREF to: 00405678 (CONDITIONAL_JUMP)
// 0040566c: MOV dword ptr [0x02d0257c],0x5b4031
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4031 (DATA)
// 00405676: JMP 0x00405618
//   XREF to: 00405618 (UNCONDITIONAL_JUMP)
// 00405678: MOV dword ptr [0x02d0257c],0x5b4823
//   Label: LAB_00405678
//   XREF to: 02d0257c (WRITE)
//   XREF to: 005b4823 (DATA)
// 00405682: JMP 0x00405618
//   XREF to: 00405618 (UNCONDITIONAL_JUMP)
