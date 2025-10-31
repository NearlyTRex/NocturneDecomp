// Name: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
// Address: 0048c200
// Address Range: [[0048c200, 0048c41d]]
// Convention: __cdecl
// Signature: void engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200(CDemonRenderer * this_ptr, CMatrix3x3f * transform_matrix, CVector3f * rotation_angles)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_beginScene_FUN_0044c430 (0044c430) at 0044c639 [UNCONDITIONAL_CALL]
//   core_dlight.cpp_CDemonLight_beginScene_FUN_00472a80 (00472a80) at 00472b3d [UNCONDITIONAL_CALL]
//   core_mirror.cpp_setupMirrorCamera_FUN_00521480 (00521480) at 005214b5 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_WriteActBackdrop_FUN_0057ce80 (0057ce80) at 0057d05b [UNCONDITIONAL_CALL]
//   engine_drender.cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0 (0048c1d0) at 0048c1ed [UNCONDITIONAL_CALL]
// Globals:
//   double g_CameraRotationInvPi = 0.318309886192889
//   double g_CameraRotationFixedPoint = 32768
//   double g_FixedPointMatrixScale = 65536
//   int g_ProjectionScale = 0x10000
//   int g_ClipLeft
//   int g_ClipTop
//   int g_ClipRight
//   int g_ClipBottom
//   int g_CameraRotationPitch
//   int g_CameraRotationYaw
//   int g_CameraRotationRoll
//   CMatrix3x3i g_TransformMatrix
//   undefined4 g_TransformMatrix[0][1]
//   undefined4 g_TransformMatrix[0][2]
//   undefined4 g_TransformMatrix[1][0]
//   undefined4 g_TransformMatrix[1][1]
//   undefined4 g_TransformMatrix[1][2]
//   undefined4 g_TransformMatrix[2][0]
//   undefined4 g_TransformMatrix[2][1]
//   undefined4 g_TransformMatrix[2][2]
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   crt_math.c_round_FUN_005fe6b0
//   engine_matrix.c_invertTransformMatrix_FUN_0050c640

#include "nocturne.h"

void __cdecl
engine_drender_cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
          (CDemonRenderer *this_ptr,CMatrix3x3f *transform_matrix,CVector3f *rotation_angles)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  CVector3f *pCVar4;
  int iVar5;
  undefined4 extraout_EDX;
  int iVar6;
  BADSPACEBASE *in_ESP;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  undefined4 uStack00000010;
  CVector3f local_20;
  float fStack_14;
  
  pCVar4 = core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160(transform_matrix,&local_20);
  fVar7 = (float10)transform_matrix->m[0].x * (float10)g_FixedPointMatrixScale;
  fVar8 = (float10)transform_matrix->m[0].y * (float10)g_FixedPointMatrixScale;
  fVar9 = (float10)transform_matrix->m[0].z * (float10)g_FixedPointMatrixScale;
  fVar10 = (float10)transform_matrix->m[1].x * (float10)g_FixedPointMatrixScale;
  fVar11 = (float10)local_20.y * (float10)g_CameraRotationInvPi *
           (float10)g_CameraRotationFixedPoint;
  fVar12 = (float10)fStack_14 * (float10)g_CameraRotationInvPi * (float10)g_CameraRotationFixedPoint
  ;
  fVar13 = (float10)local_20.z * (float10)g_CameraRotationInvPi *
           (float10)g_CameraRotationFixedPoint;
  local_20.x = 6.681925e-39;
  dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,pCVar4));
  g_TransformMatrix.m[0][0] = (int)ROUND(fVar7);
  fVar7 = (float10)transform_matrix->m[1].y * (float10)g_FixedPointMatrixScale;
  local_20.y = 6.681956e-39;
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  g_TransformMatrix.m[0][1] = (int)ROUND(fVar8);
  fVar8 = (float10)transform_matrix->m[1].z * (float10)g_FixedPointMatrixScale;
  local_20.z = 6.681987e-39;
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  g_TransformMatrix.m[0][2] = (int)ROUND(fVar9);
  fVar9 = (float10)transform_matrix->m[2].x * (float10)g_FixedPointMatrixScale;
  fStack_14 = 6.682017e-39;
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  g_TransformMatrix.m[1][0] = (int)ROUND(fVar10);
  fVar10 = (float10)transform_matrix->m[2].y * (float10)g_FixedPointMatrixScale;
  crt_math_c_round_FUN_005fe6b0(dVar14);
  iVar2 = g_ProjectionScale;
  g_TransformMatrix.m[1][1] = (int)ROUND(fVar7);
  fVar7 = (float10)transform_matrix->m[2].z * (float10)g_FixedPointMatrixScale;
  dVar14 = crt_math_c_round_FUN_005fe6b0(1.39067116189079e-309);
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  g_TransformMatrix.m[1][2] = (int)ROUND(fVar8);
  g_TransformMatrix.m[2][0] = (int)ROUND(fVar9);
  g_TransformMatrix.m[2][1] = (int)ROUND(fVar10);
  g_TransformMatrix.m[2][2] = (int)ROUND(fVar7);
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  iVar3 = g_ClipBottom;
  iVar5 = g_ClipTop;
  g_CameraRotationPitch = (int)ROUND(fVar11);
  g_CameraRotationYaw = (int)ROUND(fVar12);
  g_CameraRotationRoll = (int)ROUND(fVar13);
  iVar6 = g_ClipRight - g_ClipLeft;
  this_ptr[1].vertex_buffer_ptr =
       (SRenderVertex *)
       (((longlong)SUB84(dVar14,0) * (longlong)(int)((ulonglong)dVar14 >> 0x20)) / (longlong)iVar2);
  iVar2 = g_ProjectionScale;
  iVar5 = ((iVar6 + 1) * 0x10000) / ((iVar3 - iVar5) + 1);
  this_ptr[1].face_count = iVar5;
  this_ptr[1].face_count = (int)(((longlong)iVar5 * 0x10000) / (longlong)iVar2);
  lVar1 = (longlong)(int)this_ptr[1].vertex_buffer_ptr * (longlong)g_TransformMatrix.m[0][0];
  g_TransformMatrix.m[0][0] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)(int)this_ptr[1].vertex_buffer_ptr * (longlong)g_TransformMatrix.m[1][0];
  g_TransformMatrix.m[1][0] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)(int)this_ptr[1].vertex_buffer_ptr * (longlong)g_TransformMatrix.m[2][0];
  g_TransformMatrix.m[2][0] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr[1].face_count * (longlong)g_TransformMatrix.m[0][1];
  g_TransformMatrix.m[0][1] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr[1].face_count * (longlong)g_TransformMatrix.m[1][1];
  g_TransformMatrix.m[1][1] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  lVar1 = (longlong)this_ptr[1].face_count * (longlong)g_TransformMatrix.m[2][1];
  g_TransformMatrix.m[2][1] = (uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10;
  uStack00000010 = 0x48c417;
  engine_matrix_c_invertTransformMatrix_FUN_0050c640();
  return;
}


// Assembly code:
// 0048c200: PUSH EBX
//   Label: engine_drender.cpp_CDemonRenderer_setupCameraAndProjection_FUN_0048c200
// 0048c201: PUSH ESI
// 0048c202: PUSH EDI
// 0048c203: PUSH EBP
// 0048c204: MOV EBP,ESP
// 0048c206: SUB ESP,0xc
// 0048c209: AND ESP,0xfffffff8
// 0048c20c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048c20f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048c212: MOV EAX,ESP
// 0048c214: PUSH EAX
// 0048c215: PUSH EBX
// 0048c216: CALL core_dirmat.cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
//   XREF to: 00472160 (UNCONDITIONAL_CALL)
// 0048c21b: FLD float ptr [EBX]
// 0048c21d: FMUL double ptr [0x0062200d]
//   XREF to: 0062200d (READ)
// 0048c223: FLD float ptr [EBX + 0x4]
// 0048c226: FMUL double ptr [0x0062200d]
//   XREF to: 0062200d (READ)
// 0048c22c: FLD float ptr [EBX + 0x8]
// 0048c22f: FMUL double ptr [0x0062200d]
//   XREF to: 0062200d (READ)
// 0048c235: FLD float ptr [EBX + 0xc]
// 0048c238: ADD ESP,0x8
// 0048c23b: FMUL double ptr [0x0062200d]
//   XREF to: 0062200d (READ)
// 0048c241: FLD float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0048c244: FMUL double ptr [0x00621ffd]
//   XREF to: 00621ffd (READ)
// 0048c24a: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 0048c24e: FMUL double ptr [0x00621ffd]
//   XREF to: 00621ffd (READ)
// 0048c254: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 0048c258: FMUL double ptr [0x00621ffd]
//   XREF to: 00621ffd (READ)
// 0048c25e: FXCH ST2
// 0048c260: FMUL double ptr [0x00622005]
//   XREF to: 00622005 (READ)
// 0048c266: FXCH
// 0048c268: FMUL double ptr [0x00622005]
//   XREF to: 00622005 (READ)
// 0048c26e: FXCH ST2
// 0048c270: FMUL double ptr [0x00622005]
//   XREF to: 00622005 (READ)
// 0048c276: FXCH ST6
// 0048c278: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c27d: FISTP dword ptr [0x02d052e8]
//   XREF to: 02d052e8 (WRITE)
// 0048c283: FLD float ptr [EBX + 0x10]
// 0048c286: FMUL double ptr [0x0062200d]
//   XREF to: 0062200d (READ)
// 0048c28c: FXCH ST5
// 0048c28e: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c293: FISTP dword ptr [0x02d052ec]
//   XREF to: 02d052ec (WRITE)
// 0048c299: FLD float ptr [EBX + 0x14]
// 0048c29c: FMUL double ptr [0x0062200d]
//   XREF to: 0062200d (READ)
// 0048c2a2: FXCH ST4
// 0048c2a4: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c2a9: FISTP dword ptr [0x02d052f0]
//   XREF to: 02d052f0 (WRITE)
// 0048c2af: FLD float ptr [EBX + 0x18]
// 0048c2b2: FMUL double ptr [0x0062200d]
//   XREF to: 0062200d (READ)
// 0048c2b8: FXCH ST3
// 0048c2ba: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c2bf: FISTP dword ptr [0x02d052f4]
//   XREF to: 02d052f4 (WRITE)
// 0048c2c5: FLD float ptr [EBX + 0x1c]
// 0048c2c8: FMUL double ptr [0x0062200d]
//   XREF to: 0062200d (READ)
// 0048c2ce: FXCH ST5
// 0048c2d0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c2d5: FISTP dword ptr [0x02d052f8]
//   XREF to: 02d052f8 (WRITE)
// 0048c2db: FLD float ptr [EBX + 0x20]
// 0048c2de: FMUL double ptr [0x0062200d]
//   XREF to: 0062200d (READ)
// 0048c2e4: MOV EDX,0x10000
// 0048c2e9: MOV EBX,dword ptr [0x006793c0]
//   XREF to: 006793c0 (READ)
// 0048c2ef: MOV EAX,EDX
// 0048c2f1: FXCH ST4
// 0048c2f3: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c2f8: FXCH ST3
// 0048c2fa: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c2ff: FXCH ST5
// 0048c301: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c306: FXCH ST4
// 0048c308: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c30d: FXCH ST3
// 0048c30f: FISTP dword ptr [0x02d052fc]
//   XREF to: 02d052fc (WRITE)
// 0048c315: FXCH ST4
// 0048c317: FISTP dword ptr [0x02d05300]
//   XREF to: 02d05300 (WRITE)
// 0048c31d: FXCH ST2
// 0048c31f: FISTP dword ptr [0x02d05304]
//   XREF to: 02d05304 (WRITE)
// 0048c325: FISTP dword ptr [0x02d05308]
//   XREF to: 02d05308 (WRITE)
// 0048c32b: FXCH
// 0048c32d: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c332: FXCH
// 0048c334: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c339: FXCH ST2
// 0048c33b: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0048c340: FXCH
// 0048c342: FISTP dword ptr [0x02d052d0]
//   XREF to: 02d052d0 (WRITE)
// 0048c348: FXCH
// 0048c34a: FISTP dword ptr [0x02d052d4]
//   XREF to: 02d052d4 (WRITE)
// 0048c350: FISTP dword ptr [0x02d052d8]
//   XREF to: 02d052d8 (WRITE)
// 0048c356: IMUL EDX
// 0048c358: IDIV EBX
// 0048c35a: MOV EDX,dword ptr [0x02d02560]
//   XREF to: 02d02560 (READ)
// 0048c360: MOV ECX,dword ptr [0x02d02558]
//   XREF to: 02d02558 (READ)
// 0048c366: MOV EBX,dword ptr [0x02d02564]
//   XREF to: 02d02564 (READ)
// 0048c36c: MOV EDI,dword ptr [0x02d0255c]
//   XREF to: 02d0255c (READ)
// 0048c372: SUB EDX,ECX
// 0048c374: MOV dword ptr [ESI + 0x24],EAX
// 0048c377: INC EDX
// 0048c378: SUB EBX,EDI
// 0048c37a: SHL EDX,0x10
// 0048c37d: INC EBX
// 0048c37e: MOV EAX,EDX
// 0048c380: SAR EDX,0x1f
// 0048c383: IDIV EBX
// 0048c385: MOV EDX,0x10000
// 0048c38a: MOV EBX,dword ptr [0x006793c0]
//   XREF to: 006793c0 (READ)
// 0048c390: MOV dword ptr [ESI + 0x28],EAX
// 0048c393: IMUL EDX
// 0048c395: IDIV EBX
// 0048c397: MOV dword ptr [ESI + 0x28],EAX
// 0048c39a: MOV EDX,dword ptr [0x02d052e8]
//   XREF to: 02d052e8 (READ)
// 0048c3a0: MOV EAX,dword ptr [ESI + 0x24]
// 0048c3a3: IMUL EDX
// 0048c3a5: SHRD EAX,EDX,0x10
// 0048c3a9: MOV [0x02d052e8],EAX
//   XREF to: 02d052e8 (WRITE)
// 0048c3ae: MOV EDX,dword ptr [0x02d052f4]
//   XREF to: 02d052f4 (READ)
// 0048c3b4: MOV EAX,dword ptr [ESI + 0x24]
// 0048c3b7: IMUL EDX
// 0048c3b9: SHRD EAX,EDX,0x10
// 0048c3bd: MOV EDX,dword ptr [0x02d05300]
//   XREF to: 02d05300 (READ)
// 0048c3c3: MOV [0x02d052f4],EAX
//   XREF to: 02d052f4 (WRITE)
// 0048c3c8: MOV EAX,dword ptr [ESI + 0x24]
// 0048c3cb: IMUL EDX
// 0048c3cd: SHRD EAX,EDX,0x10
// 0048c3d1: MOV EDX,dword ptr [0x02d052ec]
//   XREF to: 02d052ec (READ)
// 0048c3d7: MOV [0x02d05300],EAX
//   XREF to: 02d05300 (WRITE)
// 0048c3dc: MOV EAX,dword ptr [ESI + 0x28]
// 0048c3df: IMUL EDX
// 0048c3e1: SHRD EAX,EDX,0x10
// 0048c3e5: MOV EDX,dword ptr [0x02d052f8]
//   XREF to: 02d052f8 (READ)
// 0048c3eb: MOV [0x02d052ec],EAX
//   XREF to: 02d052ec (WRITE)
// 0048c3f0: MOV EAX,dword ptr [ESI + 0x28]
// 0048c3f3: IMUL EDX
// 0048c3f5: SHRD EAX,EDX,0x10
// 0048c3f9: MOV EDX,dword ptr [0x02d05304]
//   XREF to: 02d05304 (READ)
// 0048c3ff: MOV [0x02d052f8],EAX
//   XREF to: 02d052f8 (WRITE)
// 0048c404: MOV EAX,dword ptr [ESI + 0x28]
// 0048c407: IMUL EDX
// 0048c409: SHRD EAX,EDX,0x10
// 0048c40d: MOV [0x02d05304],EAX
//   XREF to: 02d05304 (WRITE)
// 0048c412: CALL engine_matrix.c_invertTransformMatrix_FUN_0050c640
//   XREF to: 0050c640 (UNCONDITIONAL_CALL)
// 0048c417: MOV ESP,EBP
// 0048c419: POP EBP
// 0048c41a: POP EDI
// 0048c41b: POP ESI
// 0048c41c: POP EBX
// 0048c41d: RET
