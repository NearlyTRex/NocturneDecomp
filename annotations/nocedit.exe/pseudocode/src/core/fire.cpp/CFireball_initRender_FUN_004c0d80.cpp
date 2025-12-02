// Name: core_fire.cpp_CFireball_initRender_FUN_004c0d80
// Address: 004c0d80
// Address Range: [[004c0d80, 004c0e62]]
// Convention: __cdecl
// Signature: int core_fire.cpp_CFireball_initRender_FUN_004c0d80(CFireball * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_render_FUN_004c7180 (004c7180) at 004c71e7 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00629ca3 = -65536
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonCamera* g_CurrentSceneCamera
//   CDemonRenderer g_CDemonRendererInstance
//   CVector3i g_BillboardCameraRight
//   undefined4 g_BillboardCameraRight.y
//   undefined4 DAT_02d12dbc
//   CVector3i g_BillboardCameraUp
//   undefined4 g_BillboardCameraUp.y
//   undefined4 g_BillboardCameraUp.z
//   undefined4 g_BillboardPrimitive.base.base.count
//   undefined4 g_BillboardPrimitive.base.surface_normal.A
//   undefined4 g_BillboardPrimitive.base.surface_normal.B
//   undefined4 g_BillboardPrimitive.base.surface_normal.C
//   undefined4 g_BillboardPrimitive.base.surface_normal.D
//   undefined4 g_BillboardPrimitive.vertices[0]
//   undefined4 g_BillboardPrimitive.vertices[1]
//   undefined4 g_BillboardPrimitive.vertices[2]
//   undefined4 g_BillboardPrimitive.vertices[3]
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0

#include "nocturne.h"

int __cdecl core_fire_cpp_CFireball_initRender_FUN_004c0d80(CFireball *this_ptr)

{
  undefined4 extraout_EAX;
  int iVar1;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  CMatrix3x3i *pCVar2;
  int *piVar3;
  int *piVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  float afStackY_ffc [996];
  CVector3i *in_stack_ffffff98;
  int iStack_64;
  undefined4 local_60;
  float fStack_5c;
  float fStack_50;
  float fStack_44;
  int aiStack_3c [10];
  int iStack_14;
  undefined4 uStack_10;
  
  bVar5 = 0;
  g_BillboardPrimitive.base.base.count = 4;
  g_BillboardPrimitive.base.surface_normal.A = 0;
  g_BillboardPrimitive.base.surface_normal.B = 0;
  g_BillboardPrimitive.base.surface_normal.C = 0;
  g_BillboardPrimitive.base.surface_normal.D = 0;
  g_BillboardPrimitive.vertices[0] = 0;
  g_BillboardPrimitive.vertices[1] = 1;
  g_BillboardPrimitive.vertices[2] = 2;
  g_BillboardPrimitive.vertices[3] = 3;
  engine_drender_cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
            (g_CDemonRendererPtr,in_stack_ffffff98);
  g_BillboardCameraRight.x = iStack_14;
  *(undefined4 *)((int)&g_BillboardCameraRight + (uint)bVar5 * -8 + 4) =
       (&uStack_10)[(uint)bVar5 * -2];
  *(undefined4 *)((uint)bVar5 * -8 + 0x2d12dbc + (uint)bVar5 * -8) =
       *(undefined4 *)(&stack0xfffffff4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  g_BillboardCameraRight.y = 0;
  pCVar2 = &(g_CurrentSceneCamera->base).rotation_matrix;
  piVar3 = aiStack_3c;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar3 = pCVar2->m[0].x;
    pCVar2 = (CMatrix3x3i *)((int)pCVar2 + (uint)bVar5 * -8 + 4);
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
  }
  piVar3 = aiStack_3c;
  piVar4 = &stack0xffffff9c;
  for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar4 = *piVar3;
    piVar3 = piVar3 + (uint)bVar5 * -2 + 1;
    piVar4 = piVar4 + (uint)bVar5 * -2 + 1;
  }
  fVar6 = (float10)DOUBLE_00629ca3;
  fVar7 = (float10)fStack_5c * fVar6;
  fVar8 = (float10)fStack_50 * fVar6;
  fVar6 = (float10)fStack_44 * fVar6;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  iStack_64 = 0x4c0e3f;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  local_60 = 0x4c0e46;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  g_BillboardCameraUp.x = (int)ROUND(fVar7);
  g_BillboardCameraUp.y = (int)ROUND(fVar8);
  g_BillboardCameraUp.z = (int)ROUND(fVar6);
  return SUB84(dVar9,0);
}


// Assembly code:
// 004c0d80: PUSH EBX
//   Label: core_fire.cpp_CFireball_initRender_FUN_004c0d80
// 004c0d81: PUSH ESI
// 004c0d82: PUSH EDI
// 004c0d83: SUB ESP,0x5c
// 004c0d86: MOV EDX,0x4
// 004c0d8b: MOV EAX,0x1
// 004c0d90: LEA ESI,[ESP + 0x50]
//   XREF to: Stack[-0x18] (DATA)
// 004c0d94: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004c0d9a: MOV EDI,0x2d12db4
//   XREF to: 02d12db4 (DATA)
// 004c0d9f: XOR ECX,ECX
// 004c0da1: MOV dword ptr [0x02d12dd0],EDX
//   XREF to: 02d12dd0 (WRITE)
// 004c0da7: MOV dword ptr [0x02d12dd4],ECX
//   XREF to: 02d12dd4 (WRITE)
// 004c0dad: MOV dword ptr [0x02d12dd8],ECX
//   XREF to: 02d12dd8 (WRITE)
// 004c0db3: MOV dword ptr [0x02d12ddc],ECX
//   XREF to: 02d12ddc (WRITE)
// 004c0db9: MOV dword ptr [0x02d12de0],ECX
//   XREF to: 02d12de0 (WRITE)
// 004c0dbf: MOV dword ptr [0x02d12de4],ECX
//   XREF to: 02d12de4 (WRITE)
// 004c0dc5: MOV [0x02d12de8],EAX
//   XREF to: 02d12de8 (WRITE)
// 004c0dca: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c0dcb: MOV EDX,0x2
// 004c0dd0: MOV ECX,0x3
// 004c0dd5: MOV dword ptr [0x02d12dec],EDX
//   XREF to: 02d12dec (WRITE)
// 004c0ddb: MOV dword ptr [0x02d12df0],ECX
//   XREF to: 02d12df0 (WRITE)
// 004c0de1: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
//   XREF to: 0048c7e0 (UNCONDITIONAL_CALL)
// 004c0de6: LEA ESI,[ESP + 0x54]
//   XREF to: Stack[-0x18] (DATA)
// 004c0dea: ADD ESP,0x4
// 004c0ded: MOVSD ES:EDI,ESI
//   XREF to: 02d12db4 (WRITE)
// 004c0dee: MOVSD ES:EDI,ESI
//   XREF to: 02d12db8 (WRITE)
// 004c0def: MOVSD ES:EDI,ESI
//   XREF to: 02d12dbc (WRITE)
// 004c0df0: XOR ESI,ESI
// 004c0df2: MOV dword ptr [0x02d12db8],ESI
//   XREF to: 02d12db8 (WRITE)
// 004c0df8: MOV ESI,dword ptr [0x00823a74]
//   XREF to: 00823a74 (READ)
// 004c0dfe: MOV ECX,0xa
// 004c0e03: LEA EDI,[ESP + 0x28]
//   XREF to: Stack[-0x40] (DATA)
// 004c0e07: LEA ESI,[ESI + 0x10]
// 004c0e0a: MOVSD.REP ES:EDI,ESI
// 004c0e0c: MOV ECX,0xa
// 004c0e11: MOV EDI,ESP
// 004c0e13: LEA ESI,[ESP + 0x28]
//   XREF to: Stack[-0x40] (DATA)
// 004c0e17: MOVSD.REP ES:EDI,ESI
// 004c0e19: FLD double ptr [0x00629ca3]
//   XREF to: 00629ca3 (READ)
// 004c0e1f: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (READ)
// 004c0e23: FMUL ST1
// 004c0e25: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (READ)
// 004c0e29: FMUL ST2
// 004c0e2b: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 004c0e2f: FMULP ST3
// 004c0e31: FXCH
// 004c0e33: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c0e38: FXCH
// 004c0e3a: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c0e3f: FXCH ST2
// 004c0e41: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c0e46: FXCH
// 004c0e48: FISTP dword ptr [0x02d12dc0]
//   XREF to: 02d12dc0 (WRITE)
// 004c0e4e: FXCH
// 004c0e50: FISTP dword ptr [0x02d12dc4]
//   XREF to: 02d12dc4 (WRITE)
// 004c0e56: FISTP dword ptr [0x02d12dc8]
//   XREF to: 02d12dc8 (WRITE)
// 004c0e5c: ADD ESP,0x5c
// 004c0e5f: POP EDI
// 004c0e60: POP ESI
// 004c0e61: POP EBX
// 004c0e62: RET
