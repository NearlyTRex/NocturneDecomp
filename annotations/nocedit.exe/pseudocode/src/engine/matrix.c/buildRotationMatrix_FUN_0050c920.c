// Name: engine_matrix.c_buildRotationMatrix_FUN_0050c920
// Address: 0050c920
// Address Range: [[0050c920, 0050cc34]]
// Convention: __cdecl
// Signature: void engine_matrix.c_buildRotationMatrix_FUN_0050c920(ushort pitch, ushort yaw, ushort roll)
// Cross-references:
//   engine_matrix.c_setCameraRotation_FUN_0050e290 (0050e290) at 0050e2b0 [UNCONDITIONAL_CALL]
//   shape_design.c_setupViewMatrix_FUN_0045ba60 (0045ba60) at 0045bb54 [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
//   int g_ProjectionScale = 0x10000
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   CMatrix3x3i g_TransformMatrix
//   undefined4 g_TransformMatrix[0][1]
//   undefined4 g_TransformMatrix[0][2]
//   undefined4 g_TransformMatrix[1][0]
//   undefined4 g_TransformMatrix[1][1]
//   undefined4 g_TransformMatrix[1][2]
//   undefined4 g_TransformMatrix[2][0]
//   undefined4 g_TransformMatrix[2][1]
//   undefined4 g_TransformMatrix[2][2]
//   int g_PixelAspectCorrection
// Function calls:
//   engine_matrix.c_interpolatedCos_FUN_0050c600
//   engine_matrix.c_interpolatedSin_FUN_0050c5c0
//   engine_matrix.c_invertTransformMatrix_FUN_0050c640

#include "nocturne.h"

void __cdecl engine_matrix_c_buildRotationMatrix_FUN_0050c920(ushort pitch,ushort yaw,ushort roll)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined2 in_stack_0000000a;
  ushort in_stack_0000001c;
  ushort in_stack_00000020;
  
  iVar6 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(pitch);
  engine_matrix_c_interpolatedCos_FUN_0050c600(pitch);
  iVar7 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(yaw);
  iVar8 = engine_matrix_c_interpolatedCos_FUN_0050c600(yaw);
  iVar9 = engine_matrix_c_interpolatedSin_FUN_0050c5c0(in_stack_0000001c);
  iVar10 = engine_matrix_c_interpolatedCos_FUN_0050c600(in_stack_00000020);
  lVar1 = (longlong)
          (int)((uint)((longlong)iVar7 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar7 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar9;
  lVar2 = (longlong)
          (int)((uint)((longlong)iVar8 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar8 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar9;
  g_TransformMatrix.m[0].z =
       (uint)((longlong)_yaw * (longlong)iVar9) >> 0x10 |
       (int)((ulonglong)((longlong)_yaw * (longlong)iVar9) >> 0x20) << 0x10;
  g_TransformMatrix.m[1].z = -iVar6;
  lVar3 = (longlong)
          (int)((uint)((longlong)iVar7 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar7 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar10;
  lVar4 = (longlong)
          (int)((uint)((longlong)iVar8 * (longlong)iVar6) >> 0x10 |
               (int)((ulonglong)((longlong)iVar8 * (longlong)iVar6) >> 0x20) << 0x10) *
          (longlong)iVar10;
  g_TransformMatrix.m[2].z =
       (uint)((longlong)_yaw * (longlong)iVar10) >> 0x10 |
       (int)((ulonglong)((longlong)_yaw * (longlong)iVar10) >> 0x20) << 0x10;
  if (199 < (uint)g_WindowHeight) {
    if ((uint)g_WindowHeight < 0xc9) {
      g_PixelAspectCorrection = 0x15555;
      goto LAB_0050ca9c;
    }
    if (g_WindowHeight == 400) {
      g_PixelAspectCorrection = 0xaaaa;
      goto LAB_0050ca9c;
    }
  }
  g_PixelAspectCorrection = 0x10000;
LAB_0050ca9c:
  iVar6 = (g_WindowWidth *
           -(int)(((longlong)g_ViewportCenterYFixed * 0x10000) / (longlong)g_ViewportCenterXFixed) *
          3) / (g_WindowHeight << 2);
  lVar1 = (longlong)iVar6 *
          (longlong)
          (int)(((uint)((longlong)iVar8 * (longlong)iVar10) >> 0x10 |
                (int)((ulonglong)((longlong)iVar8 * (longlong)iVar10) >> 0x20) << 0x10) +
               ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10));
  lVar5 = (longlong)iVar6 *
          (longlong)
          (int)((uint)((longlong)_yaw * (longlong)iVar7) >> 0x10 |
               (int)((ulonglong)((longlong)_yaw * (longlong)iVar7) >> 0x20) << 0x10);
  lVar3 = (longlong)iVar6 *
          (longlong)
          (int)(((uint)((longlong)iVar8 * (longlong)-iVar9) >> 0x10 |
                (int)((ulonglong)((longlong)iVar8 * (longlong)-iVar9) >> 0x20) << 0x10) +
               ((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10));
  iVar6 = ((((g_ClipRight - g_ClipLeft) * 0x280) / g_WindowWidth) * 0x30000) /
          (((g_ClipBottom - g_ClipTop) * 0x1e0) / g_WindowHeight);
  iVar11 = iVar6 >> 0x1f;
  iVar6 = (int)((iVar6 + iVar11 * -4) - (uint)(iVar11 << 1 < 0)) >> 2;
  g_TransformMatrix.m[0].x =
       (int)(((longlong)(int)((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10) *
             (longlong)iVar6) / (longlong)g_ProjectionScale);
  g_TransformMatrix.m[0].y =
       (int)(((longlong)
              (int)(((uint)((longlong)iVar7 * (longlong)-iVar10) >> 0x10 |
                    (int)((ulonglong)((longlong)iVar7 * (longlong)-iVar10) >> 0x20) << 0x10) +
                   ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10)) *
             (longlong)iVar6) / (longlong)g_ProjectionScale);
  g_TransformMatrix.m[1].x =
       (int)(((longlong)(int)((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10) *
             (longlong)iVar6) / (longlong)g_ProjectionScale);
  g_TransformMatrix.m[1].y =
       (int)(((longlong)
              (int)((uint)((longlong)_yaw * (longlong)iVar8) >> 0x10 |
                   (int)((ulonglong)((longlong)_yaw * (longlong)iVar8) >> 0x20) << 0x10) *
             (longlong)iVar6) / (longlong)g_ProjectionScale);
  g_TransformMatrix.m[2].x =
       (int)(((longlong)(int)((uint)lVar3 >> 0x10 | (int)((ulonglong)lVar3 >> 0x20) << 0x10) *
             (longlong)iVar6) / (longlong)g_ProjectionScale);
  g_TransformMatrix.m[2].y =
       (int)(((longlong)
              (int)(((uint)((longlong)iVar9 * (longlong)iVar7) >> 0x10 |
                    (int)((ulonglong)((longlong)iVar9 * (longlong)iVar7) >> 0x20) << 0x10) +
                   ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10)) *
             (longlong)iVar6) / (longlong)g_ProjectionScale);
  engine_matrix_c_invertTransformMatrix_FUN_0050c640();
  return;
}


// Assembly code:
// 0050c920: PUSH EBX
//   Label: engine_matrix.c_buildRotationMatrix_FUN_0050c920
// 0050c921: PUSH ESI
// 0050c922: PUSH EBP
// 0050c923: SUB ESP,0x8
// 0050c926: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0050c92a: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0050c92e: PUSH EDI
// 0050c92f: PUSH EBX
// 0050c930: CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0
//   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)
// 0050c935: ADD ESP,0x4
// 0050c938: PUSH EBX
// 0050c939: MOV EBP,EAX
// 0050c93b: CALL engine_matrix.c_interpolatedCos_FUN_0050c600
//   XREF to: 0050c600 (UNCONDITIONAL_CALL)
// 0050c940: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0050c944: ADD ESP,0x4
// 0050c947: PUSH ESI
// 0050c948: CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0
//   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)
// 0050c94d: ADD ESP,0x4
// 0050c950: PUSH ESI
// 0050c951: MOV EBX,EAX
// 0050c953: CALL engine_matrix.c_interpolatedCos_FUN_0050c600
//   XREF to: 0050c600 (UNCONDITIONAL_CALL)
// 0050c958: ADD ESP,0x4
// 0050c95b: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0050c95f: PUSH EDX
// 0050c960: MOV ESI,EAX
// 0050c962: CALL engine_matrix.c_interpolatedSin_FUN_0050c5c0
//   XREF to: 0050c5c0 (UNCONDITIONAL_CALL)
// 0050c967: ADD ESP,0x4
// 0050c96a: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 0050c96e: PUSH ECX
// 0050c96f: MOV EDI,EAX
// 0050c971: CALL engine_matrix.c_interpolatedCos_FUN_0050c600
//   XREF to: 0050c600 (UNCONDITIONAL_CALL)
// 0050c976: MOV ECX,EAX
// 0050c978: ADD ESP,0x4
// 0050c97b: MOV EAX,ESI
// 0050c97d: MOV EDX,ECX
// 0050c97f: IMUL EDX
// 0050c981: SHRD EAX,EDX,0x10
// 0050c985: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0050c989: MOV EDX,EBP
// 0050c98b: MOV EAX,EBX
// 0050c98d: IMUL EDX
// 0050c98f: SHRD EAX,EDX,0x10
// 0050c993: MOV EDX,EDI
// 0050c995: IMUL EDX
// 0050c997: SHRD EAX,EDX,0x10
// 0050c99b: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0050c99f: ADD EDX,EAX
// 0050c9a1: MOV dword ptr [0x02d052e8],EDX
//   XREF to: 02d052e8 (WRITE)
// 0050c9a7: MOV EDX,ECX
// 0050c9a9: MOV EAX,EBX
// 0050c9ab: NEG EDX
// 0050c9ad: IMUL EDX
// 0050c9af: SHRD EAX,EDX,0x10
// 0050c9b3: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0050c9b7: MOV EDX,EBP
// 0050c9b9: MOV EAX,ESI
// 0050c9bb: IMUL EDX
// 0050c9bd: SHRD EAX,EDX,0x10
// 0050c9c1: MOV EDX,EDI
// 0050c9c3: IMUL EDX
// 0050c9c5: SHRD EAX,EDX,0x10
// 0050c9c9: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0050c9cd: ADD EDX,EAX
// 0050c9cf: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 0050c9d3: MOV dword ptr [0x02d052ec],EDX
//   XREF to: 02d052ec (WRITE)
// 0050c9d9: MOV EDX,EDI
// 0050c9db: IMUL EDX
// 0050c9dd: SHRD EAX,EDX,0x10
// 0050c9e1: MOV [0x02d052f0],EAX
//   XREF to: 02d052f0 (WRITE)
// 0050c9e6: MOV EDX,EBX
// 0050c9e8: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 0050c9ec: IMUL EDX
// 0050c9ee: SHRD EAX,EDX,0x10
// 0050c9f2: MOV [0x02d052f4],EAX
//   XREF to: 02d052f4 (WRITE)
// 0050c9f7: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 0050c9fb: MOV EDX,ESI
// 0050c9fd: IMUL EDX
// 0050c9ff: SHRD EAX,EDX,0x10
// 0050ca03: MOV [0x02d052f8],EAX
//   XREF to: 02d052f8 (WRITE)
// 0050ca08: MOV dword ptr [0x02d052fc],EBP
//   XREF to: 02d052fc (WRITE)
// 0050ca0e: MOV EAX,EBP
// 0050ca10: MOV EDX,EDI
// 0050ca12: NEG EAX
// 0050ca14: NEG EDX
// 0050ca16: MOV [0x02d052fc],EAX
//   XREF to: 02d052fc (WRITE)
// 0050ca1b: MOV EAX,ESI
// 0050ca1d: IMUL EDX
// 0050ca1f: SHRD EAX,EDX,0x10
// 0050ca23: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0050ca27: MOV EDX,EBP
// 0050ca29: MOV EAX,EBX
// 0050ca2b: IMUL EDX
// 0050ca2d: SHRD EAX,EDX,0x10
// 0050ca31: MOV EDX,ECX
// 0050ca33: IMUL EDX
// 0050ca35: SHRD EAX,EDX,0x10
// 0050ca39: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0050ca3d: ADD EDX,EAX
// 0050ca3f: MOV dword ptr [0x02d05300],EDX
//   XREF to: 02d05300 (WRITE)
// 0050ca45: MOV EAX,EDI
// 0050ca47: MOV EDX,EBX
// 0050ca49: IMUL EDX
// 0050ca4b: SHRD EAX,EDX,0x10
// 0050ca4f: MOV EBX,EAX
// 0050ca51: MOV EDX,EBP
// 0050ca53: MOV EAX,ESI
// 0050ca55: IMUL EDX
// 0050ca57: SHRD EAX,EDX,0x10
// 0050ca5b: MOV EDX,ECX
// 0050ca5d: IMUL EDX
// 0050ca5f: SHRD EAX,EDX,0x10
// 0050ca63: MOV EDX,ECX
// 0050ca65: ADD EBX,EAX
// 0050ca67: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x10] (READ)
// 0050ca6b: MOV dword ptr [0x02d05304],EBX
//   XREF to: 02d05304 (WRITE)
// 0050ca71: IMUL EDX
// 0050ca73: SHRD EAX,EDX,0x10
// 0050ca77: MOV [0x02d05308],EAX
//   XREF to: 02d05308 (WRITE)
// 0050ca7c: MOV EAX,[0x00679398]
//   XREF to: 00679398 (READ)
// 0050ca81: CMP EAX,0xc8
// 0050ca86: JC 0x0050cc26
//   XREF to: 0050cc26 (CONDITIONAL_JUMP)
// 0050ca8c: JA 0x0050cc1f
//   XREF to: 0050cc1f (CONDITIONAL_JUMP)
// 0050ca92: MOV dword ptr [0x02f0d3bc],0x15555
//   XREF to: 02f0d3bc (WRITE)
// 0050ca9c: MOV EAX,0x10000
//   Label: LAB_0050ca9c
// 0050caa1: MOV EBX,dword ptr [0x02d02548]
//   XREF to: 02d02548 (READ)
// 0050caa7: MOV EDX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 0050caad: IMUL EDX
// 0050caaf: IDIV EBX
// 0050cab1: MOV ECX,EAX
// 0050cab3: MOV EDX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0050cab9: NEG ECX
// 0050cabb: IMUL EDX,ECX
// 0050cabe: LEA EAX,[EDX*0x4 + 0x0]
// 0050cac5: SUB EAX,EDX
// 0050cac7: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0050cacd: MOV EDX,EAX
// 0050cacf: SHL ECX,0x2
// 0050cad2: SAR EDX,0x1f
// 0050cad5: IDIV ECX
// 0050cad7: MOV EDX,dword ptr [0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 0050cadd: MOV ECX,EAX
// 0050cadf: IMUL EDX
// 0050cae1: SHRD EAX,EDX,0x10
// 0050cae5: MOV EDX,dword ptr [0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 0050caeb: MOV [0x02d052e8],EAX
//   XREF to: 02d052e8 (WRITE)
// 0050caf0: MOV EAX,ECX
// 0050caf2: IMUL EDX
// 0050caf4: SHRD EAX,EDX,0x10
// 0050caf8: MOV EDX,dword ptr [0x02d05300]
//   XREF to: 02d05300 (READ)
// 0050cafe: MOV [0x02d052f4],EAX
//   XREF to: 02d052f4 (WRITE)
// 0050cb03: MOV EAX,ECX
// 0050cb05: IMUL EDX
// 0050cb07: SHRD EAX,EDX,0x10
// 0050cb0b: MOV ESI,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0050cb11: MOV [0x02d05300],EAX
//   XREF to: 02d05300 (WRITE)
// 0050cb16: MOV EAX,[0x02d02560]
//   XREF to: 02d02560 (READ)
// 0050cb1b: SUB EAX,ESI
// 0050cb1d: LEA EDX,[EAX*0x4 + 0x0]
// 0050cb24: ADD EDX,EAX
// 0050cb26: SHL EDX,0x7
// 0050cb29: MOV EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0050cb2f: MOV EAX,EDX
// 0050cb31: SAR EDX,0x1f
// 0050cb34: IDIV EDI
// 0050cb36: MOV ECX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 0050cb3c: SUB ECX,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 0050cb42: SHL ECX,0x5
// 0050cb45: MOV EDX,ECX
// 0050cb47: LEA EBX,[EAX*0x4 + 0x0]
// 0050cb4e: SHL EDX,0x4
// 0050cb51: SUB EBX,EAX
// 0050cb53: SUB EDX,ECX
// 0050cb55: MOV ECX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0050cb5b: MOV EAX,EDX
// 0050cb5d: SAR EDX,0x1f
// 0050cb60: IDIV ECX
// 0050cb62: SHL EBX,0x10
// 0050cb65: MOV ECX,EAX
// 0050cb67: MOV EDX,EBX
// 0050cb69: MOV EAX,EBX
// 0050cb6b: SAR EDX,0x1f
// 0050cb6e: IDIV ECX
// 0050cb70: MOV EDX,EAX
// 0050cb72: SAR EDX,0x1f
// 0050cb75: SHL EDX,0x2
// 0050cb78: SBB EAX,EDX
// 0050cb7a: SAR EAX,0x2
// 0050cb7d: MOV EBX,dword ptr [0x006793c0]
//   XREF to: 006793c0 (READ)
// 0050cb83: MOV ECX,EAX
// 0050cb85: MOV EAX,[0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 0050cb8a: MOV EDX,ECX
// 0050cb8c: IMUL EDX
// 0050cb8e: IDIV EBX
// 0050cb90: MOV EBX,dword ptr [0x006793c0]
//   XREF to: 006793c0 (READ)
// 0050cb96: MOV [0x02d052e8],EAX
//   XREF to: 02d052e8 (WRITE)
// 0050cb9b: MOV EDX,ECX
// 0050cb9d: MOV EAX,[0x02d052ec]
//   XREF to: 02d052ec (READ)
// 0050cba2: IMUL EDX
// 0050cba4: IDIV EBX
// 0050cba6: MOV EBX,dword ptr [0x006793c0]
//   XREF to: 006793c0 (READ)
// 0050cbac: MOV [0x02d052ec],EAX
//   XREF to: 02d052ec (WRITE)
// 0050cbb1: MOV EDX,ECX
// 0050cbb3: MOV EAX,[0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 0050cbb8: IMUL EDX
// 0050cbba: IDIV EBX
// 0050cbbc: MOV EBX,dword ptr [0x006793c0]
//   XREF to: 006793c0 (READ)
// 0050cbc2: MOV [0x02d052f4],EAX
//   XREF to: 02d052f4 (WRITE)
// 0050cbc7: MOV EDX,ECX
// 0050cbc9: MOV EAX,[0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 0050cbce: IMUL EDX
// 0050cbd0: IDIV EBX
// 0050cbd2: MOV [0x02d052f8],EAX
//   XREF to: 02d052f8 (WRITE)
// 0050cbd7: POP EDI
// 0050cbd8: MOV EBX,dword ptr [0x006793c0]
//   XREF to: 006793c0 (READ)
// 0050cbde: MOV EAX,[0x02d05300]
//   XREF to: 02d05300 (READ)
// 0050cbe3: MOV EDX,ECX
// 0050cbe5: IMUL EDX
// 0050cbe7: IDIV EBX
// 0050cbe9: MOV EBX,dword ptr [0x006793c0]
//   XREF to: 006793c0 (READ)
// 0050cbef: MOV [0x02d05300],EAX
//   XREF to: 02d05300 (WRITE)
// 0050cbf4: MOV EDX,ECX
// 0050cbf6: MOV EAX,[0x02d05304]
//   XREF to: 02d05304 (READ)
// 0050cbfb: IMUL EDX
// 0050cbfd: IDIV EBX
// 0050cbff: MOV [0x02d05304],EAX
//   XREF to: 02d05304 (WRITE)
// 0050cc04: CALL engine_matrix.c_invertTransformMatrix_FUN_0050c640
//   XREF to: 0050c640 (UNCONDITIONAL_CALL)
// 0050cc09: ADD ESP,0x8
// 0050cc0c: POP EBP
// 0050cc0d: POP ESI
// 0050cc0e: POP EBX
// 0050cc0f: RET
// 0050cc10: MOV dword ptr [0x02f0d3bc],0xaaaa
//   Label: LAB_0050cc10
//   XREF to: 02f0d3bc (WRITE)
// 0050cc1a: JMP 0x0050ca9c
//   XREF to: 0050ca9c (UNCONDITIONAL_JUMP)
// 0050cc1f: CMP EAX,0x190
//   Label: LAB_0050cc1f
// 0050cc24: JZ 0x0050cc10
//   XREF to: 0050cc10 (CONDITIONAL_JUMP)
// 0050cc26: MOV dword ptr [0x02f0d3bc],0x10000
//   Label: LAB_0050cc26
//   XREF to: 02f0d3bc (WRITE)
// 0050cc30: JMP 0x0050ca9c
//   XREF to: 0050ca9c (UNCONDITIONAL_JUMP)
