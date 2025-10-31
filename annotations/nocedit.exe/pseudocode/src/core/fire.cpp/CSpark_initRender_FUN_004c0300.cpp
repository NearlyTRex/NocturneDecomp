// Name: core_fire.cpp_CSpark_initRender_FUN_004c0300
// Address: 004c0300
// Address Range: [[004c0300, 004c041c]]
// Convention: __cdecl
// Signature: int core_fire.cpp_CSpark_initRender_FUN_004c0300(CSpark * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_render_FUN_004c7180 (004c7180) at 004c732a [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00629c6b = -65536
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   undefined4 g_RenderVertexBuffer[1].u
//   undefined4 g_RenderVertexBuffer[1].v
//   undefined4 g_RenderVertexBuffer[2].u
//   undefined4 g_RenderVertexBuffer[2].v
//   undefined4 g_RenderVertexBuffer[3].u
//   undefined4 g_RenderVertexBuffer[3].v
//   CDemonCamera* g_CurrentSceneCamera
//   undefined4 DAT_00f80000
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

int __cdecl core_fire_cpp_CSpark_initRender_FUN_004c0300(CSpark *this_ptr)

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
  g_RenderVertexBuffer[0].u = 7.34684e-40;
  g_RenderVertexBuffer[0].v = 2.2775203e-38;
  g_RenderVertexBuffer[1].u = 2.2775203e-38;
  g_RenderVertexBuffer[1].v = 2.2775203e-38;
  g_RenderVertexBuffer[2].u = 2.2775203e-38;
  g_RenderVertexBuffer[2].v = 7.34684e-40;
  g_RenderVertexBuffer[3].u = 7.34684e-40;
  g_RenderVertexBuffer[3].v = 7.34684e-40;
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
    *piVar3 = pCVar2->m[0][0];
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
  fVar6 = (float10)DOUBLE_00629c6b;
  fVar7 = (float10)fStack_5c * fVar6;
  fVar8 = (float10)fStack_50 * fVar6;
  fVar6 = (float10)fStack_44 * fVar6;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  iStack_64 = 0x4c03f9;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  local_60 = 0x4c0400;
  dVar9 = crt_math_c_round_FUN_005fe6b0(dVar9);
  g_BillboardCameraUp.x = (int)ROUND(fVar7);
  g_BillboardCameraUp.y = (int)ROUND(fVar8);
  g_BillboardCameraUp.z = (int)ROUND(fVar6);
  return SUB84(dVar9,0);
}


// Assembly code:
// 004c0300: PUSH EBX
//   Label: core_fire.cpp_CSpark_initRender_FUN_004c0300
// 004c0301: PUSH ESI
// 004c0302: PUSH EDI
// 004c0303: SUB ESP,0x5c
// 004c0306: MOV EDX,0x4
// 004c030b: MOV EAX,0x1
// 004c0310: MOV EBX,0x80000
// 004c0315: MOV ESI,0xf80000
//   XREF to: 00f80000 (DATA)
// 004c031a: MOV EDI,0x2d12db4
//   XREF to: 02d12db4 (DATA)
// 004c031f: XOR ECX,ECX
// 004c0321: MOV dword ptr [0x02d12dd0],EDX
//   XREF to: 02d12dd0 (WRITE)
// 004c0327: MOV dword ptr [0x02d12dd4],ECX
//   XREF to: 02d12dd4 (WRITE)
// 004c032d: MOV dword ptr [0x02d12dd8],ECX
//   XREF to: 02d12dd8 (WRITE)
// 004c0333: MOV dword ptr [0x02d12ddc],ECX
//   XREF to: 02d12ddc (WRITE)
// 004c0339: MOV dword ptr [0x02d12de0],ECX
//   XREF to: 02d12de0 (WRITE)
// 004c033f: MOV dword ptr [0x02d12de4],ECX
//   XREF to: 02d12de4 (WRITE)
// 004c0345: MOV [0x02d12de8],EAX
//   XREF to: 02d12de8 (WRITE)
// 004c034a: MOV dword ptr [0x0068802c],EBX
//   XREF to: 0068802c (WRITE)
// 004c0350: MOV dword ptr [0x00688030],ESI
//   XREF to: 00688030 (WRITE)
// 004c0356: MOV dword ptr [0x0068805c],ESI
//   XREF to: 0068805c (WRITE)
// 004c035c: MOV dword ptr [0x00688060],ESI
//   XREF to: 00688060 (WRITE)
// 004c0362: MOV dword ptr [0x0068808c],ESI
//   XREF to: 0068808c (WRITE)
// 004c0368: MOV dword ptr [0x00688090],EBX
//   XREF to: 00688090 (WRITE)
// 004c036e: MOV dword ptr [0x006880bc],EBX
//   XREF to: 006880bc (WRITE)
// 004c0374: MOV dword ptr [0x006880c0],EBX
//   XREF to: 006880c0 (WRITE)
// 004c037a: MOV EDX,0x2
// 004c037f: MOV ECX,0x3
// 004c0384: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c038a: MOV dword ptr [0x02d12dec],EDX
//   XREF to: 02d12dec (WRITE)
// 004c0390: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004c0391: LEA ESI,[ESP + 0x54]
//   XREF to: Stack[-0x18] (DATA)
// 004c0395: MOV dword ptr [0x02d12df0],ECX
//   XREF to: 02d12df0 (WRITE)
// 004c039b: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationToBuffer_FUN_0048c7e0
//   XREF to: 0048c7e0 (UNCONDITIONAL_CALL)
// 004c03a0: LEA ESI,[ESP + 0x54]
//   XREF to: Stack[-0x18] (DATA)
// 004c03a4: ADD ESP,0x4
// 004c03a7: MOVSD ES:EDI,ESI
//   XREF to: 02d12db4 (WRITE)
// 004c03a8: MOVSD ES:EDI,ESI
//   XREF to: 02d12db8 (WRITE)
// 004c03a9: MOVSD ES:EDI,ESI
//   XREF to: 02d12dbc (WRITE)
// 004c03aa: MOV ESI,dword ptr [0x00823a74]
//   XREF to: 00823a74 (READ)
// 004c03b0: MOV ECX,0xa
// 004c03b5: XOR EDI,EDI
// 004c03b7: LEA ESI,[ESI + 0x10]
// 004c03ba: MOV dword ptr [0x02d12db8],EDI
//   XREF to: 02d12db8 (WRITE)
// 004c03c0: LEA EDI,[ESP + 0x28]
//   XREF to: Stack[-0x40] (DATA)
// 004c03c4: MOVSD.REP ES:EDI,ESI
// 004c03c6: MOV ECX,0xa
// 004c03cb: MOV EDI,ESP
// 004c03cd: LEA ESI,[ESP + 0x28]
//   XREF to: Stack[-0x40] (DATA)
// 004c03d1: MOVSD.REP ES:EDI,ESI
// 004c03d3: FLD double ptr [0x00629c6b]
//   XREF to: 00629c6b (READ)
// 004c03d9: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (READ)
// 004c03dd: FMUL ST1
// 004c03df: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (READ)
// 004c03e3: FMUL ST2
// 004c03e5: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 004c03e9: FMULP ST3
// 004c03eb: FXCH
// 004c03ed: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c03f2: FXCH
// 004c03f4: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c03f9: FXCH ST2
// 004c03fb: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c0400: FXCH
// 004c0402: FISTP dword ptr [0x02d12dc0]
//   XREF to: 02d12dc0 (WRITE)
// 004c0408: FXCH
// 004c040a: FISTP dword ptr [0x02d12dc4]
//   XREF to: 02d12dc4 (WRITE)
// 004c0410: FISTP dword ptr [0x02d12dc8]
//   XREF to: 02d12dc8 (WRITE)
// 004c0416: ADD ESP,0x5c
// 004c0419: POP EDI
// 004c041a: POP ESI
// 004c041b: POP EBX
// 004c041c: RET
