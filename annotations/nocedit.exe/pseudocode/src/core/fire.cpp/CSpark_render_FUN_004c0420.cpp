// Name: core_fire.cpp_CSpark_render_FUN_004c0420
// Address: 004c0420
// Address Range: [[004c0420, 004c0578] [004c08e3, 004c0ab5]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CSpark_render_FUN_004c0420(CSpark * this_ptr)
// Globals:
//   undefined4 DAT_0065dca8
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic DAT_0067a7ac
//   SMRGLTextureBasic DAT_0067a7c4
//   SMRGLTextureBasic DAT_0067a7dc
//   undefined4 g_RenderVertexBuffer[0].light
//   undefined4 g_RenderVertexBuffer[0].color
//   undefined4 g_RenderVertexBuffer[0].fog
//   undefined4 g_RenderVertexBuffer[0].w_recip
//   undefined4 g_RenderVertexBuffer[1].light
//   undefined4 g_RenderVertexBuffer[1].color
//   undefined4 g_RenderVertexBuffer[1].fog
//   undefined4 g_RenderVertexBuffer[1].w_recip
//   undefined4 g_RenderVertexBuffer[2].light
//   undefined4 g_RenderVertexBuffer[2].color
//   undefined4 g_RenderVertexBuffer[2].fog
//   undefined4 g_RenderVertexBuffer[2].w_recip
//   undefined4 g_RenderVertexBuffer[3].light
//   undefined4 g_RenderVertexBuffer[3].fog
//   undefined4 g_RenderVertexBuffer[3].w_recip
//   CDemonCamera* g_CurrentSceneCamera
//   CDemonRenderer g_CDemonRendererInstance
//   float g_PerspectiveReciprocal
//   undefined4 DAT_02d12db4
//   undefined4 DAT_02d12dcc
// Function calls:
//   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   wincore_windll.cpp_transformPoint_FUN_005b5a25

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004c0a9d) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CSpark_render_FUN_004c0420(CSpark *this_ptr)

{
  SRenderVertex *vertex_ptr;
  uint uVar1;
  longlong lVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  SMRGLTextureBasic *texture;
  float fStack_d8;
  float fStack_d4;
  CVector3i local_d0;
  CVector3i CStack_c4;
  float local_b8;
  float local_b4;
  undefined4 local_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  CVector3i local_a0;
  CVector3i CStack_94;
  CVector3f CStack_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  CVector3i local_70;
  CVector3i local_64;
  CVector3i CStack_58;
  CVector3i local_4c;
  CVector3i aCStack_40 [2];
  float local_20;
  float fStack_1c;
  float fStack_18;
  
  vertex_ptr = g_CDemonRendererPtr->vertex_buffer_ptr;
  local_64.x = (int)ROUND((this_ptr->base).position.x * _DAT_0065dca8);
  local_64.y = (int)ROUND((this_ptr->base).position.y * _DAT_0065dca8);
  local_64.z = (int)ROUND((this_ptr->base).position.z * _DAT_0065dca8);
  local_20 = 0.4;
  wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr->projected_vertex,&local_64);
  iVar3 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50(g_CDemonRendererPtr,vertex_ptr);
  if (iVar3 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr,(CVector3i *)&DAT_02d12db4,(CVector3i *)0x0);
  local_b8 = -0.4;
  local_b4 = -0.4;
  local_b0 = 0;
  local_d0.x = (int)ROUND(_DAT_0065dca8 * -0.4);
  local_d0.y = (int)ROUND(_DAT_0065dca8 * -0.4);
  local_d0.z = (int)ROUND(_DAT_0065dca8 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_d0);
  local_b8 = 0.4;
  local_b0 = 0;
  local_b4 = -0.4;
  local_4c.x = (int)ROUND(_DAT_0065dca8 * 0.4);
  local_4c.y = (int)ROUND(_DAT_0065dca8 * -0.4);
  local_4c.z = (int)ROUND(_DAT_0065dca8 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_4c);
  local_b8 = 0.4;
  local_b4 = 0.4;
  local_b0 = 0;
  local_a0.x = (int)ROUND(_DAT_0065dca8 * 0.4);
  local_a0.y = (int)ROUND(_DAT_0065dca8 * 0.4);
  local_a0.z = (int)ROUND(_DAT_0065dca8 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_a0);
  local_b8 = -0.4;
  local_b4 = 0.4;
  local_b0 = 0;
  local_70.x = (int)ROUND(_DAT_0065dca8 * -0.4);
  local_70.y = (int)ROUND(_DAT_0065dca8 * 0.4);
  local_70.z = (int)ROUND(_DAT_0065dca8 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_70);
  uVar1 = this_ptr->field4_0x44;
  if (uVar1 == 0) {
    texture = &DAT_0067a7ac;
  }
  else if (uVar1 < 2) {
    texture = &DAT_0067a7c4;
  }
  else {
    if (uVar1 != 2) goto LAB_004c04af;
    texture = &DAT_0067a7dc;
  }
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,texture);
LAB_004c04af:
  (*(code *)((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
  lVar2 = (longlong)this_ptr->intensity_current * (longlong)(0xffff - (int)g_PerspectiveReciprocal);
  g_RenderVertexBuffer[0].w_recip =
       (float)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  g_RenderVertexBuffer[0].light = 9.18341e-41;
  g_RenderVertexBuffer[0].color = 0xffff;
  g_RenderVertexBuffer[0].fog = 9.18341e-41;
  g_RenderVertexBuffer[1].light = 9.18341e-41;
  g_RenderVertexBuffer[1].color = 0xffff;
  g_RenderVertexBuffer[1].fog = 9.18341e-41;
  g_RenderVertexBuffer[2].light = 9.18341e-41;
  g_RenderVertexBuffer[2].color = 0xffff;
  g_RenderVertexBuffer[2].fog = 9.18341e-41;
  g_RenderVertexBuffer[3].light = 9.18341e-41;
  g_RenderVertexBuffer[3].color = 0xffff;
  g_RenderVertexBuffer[3].fog = 9.18341e-41;
  g_RenderVertexBuffer[1].w_recip = g_RenderVertexBuffer[0].w_recip;
  g_RenderVertexBuffer[2].w_recip = g_RenderVertexBuffer[0].w_recip;
  g_RenderVertexBuffer[3].w_recip = g_RenderVertexBuffer[0].w_recip;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&DAT_02d12dcc);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  CStack_88.x = (this_ptr->base).position.x;
  CStack_88.y = (this_ptr->base).position.y;
  CStack_88.z = (this_ptr->base).position.z;
  fStack_7c = (this_ptr->base).velocity.x;
  fStack_78 = (this_ptr->base).velocity.y;
  fStack_74 = (this_ptr->base).velocity.z;
  fStack_d4 = 1.0;
  iVar3 = 0;
  fStack_d8 = 0.025;
  do {
    fStack_d8 = fStack_d8 * (float)DOUBLE_00629c73;
    fStack_d4 = (float)DOUBLE_00629c73 * fStack_d4;
    fStack_ac = fStack_7c * fStack_d8;
    fStack_78 = fStack_78 - fStack_d8 * (this_ptr->base).gravity_acceleration;
    fStack_a4 = fStack_74 * fStack_d8;
    fStack_a8 = fStack_78 * fStack_d8;
    CStack_88.x = CStack_88.x - fStack_ac;
    CStack_88.z = CStack_88.z - fStack_a4;
    CStack_88.y = CStack_88.y - fStack_a8;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&CStack_88);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
              (g_CDemonRendererPtr,(CVector3i *)&DAT_02d12db4,(CVector3i *)0x0);
    local_b8 = -local_20 * fStack_d4;
    local_b0 = 0;
    CStack_58.x = (int)ROUND(local_b8 * _DAT_0065dca8);
    CStack_58.y = (int)ROUND(local_b8 * _DAT_0065dca8);
    CStack_58.z = (int)ROUND(_DAT_0065dca8 * 0.0);
    local_b4 = local_b8;
    fStack_1c = local_b8;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&CStack_58);
    local_b8 = local_20 * fStack_d4;
    local_b4 = fStack_1c;
    local_b0 = 0;
    aCStack_40[0].x = (int)ROUND(local_b8 * _DAT_0065dca8);
    aCStack_40[0].y = (int)ROUND(fStack_1c * _DAT_0065dca8);
    aCStack_40[0].z = (int)ROUND(_DAT_0065dca8 * 0.0);
    fStack_18 = local_b8;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,aCStack_40);
    local_b0 = 0;
    local_b8 = fStack_18;
    local_b4 = fStack_18;
    CStack_c4.x = (int)ROUND(fStack_18 * _DAT_0065dca8);
    CStack_c4.y = (int)ROUND(fStack_18 * _DAT_0065dca8);
    CStack_c4.z = (int)ROUND(_DAT_0065dca8 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&CStack_c4);
    local_b8 = fStack_1c;
    local_b4 = fStack_18;
    local_b0 = 0;
    CStack_94.x = (int)ROUND(fStack_1c * _DAT_0065dca8);
    CStack_94.y = (int)ROUND(fStack_18 * _DAT_0065dca8);
    CStack_94.z = (int)ROUND(_DAT_0065dca8 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&CStack_94);
    (*(code *)((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
    lVar2 = (longlong)this_ptr->intensity_current *
            (longlong)(0xffff - (int)g_PerspectiveReciprocal);
    g_RenderVertexBuffer[0].w_recip =
         (float)((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
    g_RenderVertexBuffer[0].light = 9.18341e-41;
    g_RenderVertexBuffer[0].color = 0xffff;
    g_RenderVertexBuffer[0].fog = 9.18341e-41;
    g_RenderVertexBuffer[1].light = 9.18341e-41;
    g_RenderVertexBuffer[1].color = 0xffff;
    g_RenderVertexBuffer[1].fog = 9.18341e-41;
    g_RenderVertexBuffer[2].light = 9.18341e-41;
    g_RenderVertexBuffer[2].color = 0xffff;
    g_RenderVertexBuffer[2].fog = 9.18341e-41;
    g_RenderVertexBuffer[3].light = 9.18341e-41;
    g_RenderVertexBuffer[3].color = 0xffff;
    g_RenderVertexBuffer[3].fog = 9.18341e-41;
    g_RenderVertexBuffer[1].w_recip = g_RenderVertexBuffer[0].w_recip;
    g_RenderVertexBuffer[2].w_recip = g_RenderVertexBuffer[0].w_recip;
    g_RenderVertexBuffer[3].w_recip = g_RenderVertexBuffer[0].w_recip;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
              (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&DAT_02d12dcc);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
    iVar3 = iVar3 + 1;
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  } while (iVar3 < 3);
  return;
}


// Assembly code:
// 004c0420: PUSH EBX
//   Label: core_fire.cpp_CSpark_render_FUN_004c0420
// 004c0421: PUSH ESI
// 004c0422: PUSH EDI
// 004c0423: PUSH EBP
// 004c0424: MOV EBP,ESP
// 004c0426: SUB ESP,0xc4
// 004c042c: AND ESP,0xfffffff8
// 004c042f: MOV ESI,dword ptr [EBP + 0x14]
// 004c0432: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c0438: LEA EBX,[ESP + 0x74]
// 004c043c: MOV EAX,ESI
// 004c043e: MOV EDI,dword ptr [EDI]
//   XREF to: 02c6d578 (READ)
// 004c0440: FLD float ptr [EAX]
// 004c0442: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c0448: FISTP dword ptr [EBX]
// 004c044a: FLD float ptr [EAX + 0x4]
// 004c044d: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c0453: FISTP dword ptr [EBX + 0x4]
// 004c0456: FLD float ptr [EAX + 0x8]
// 004c0459: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c045f: FISTP dword ptr [EBX + 0x8]
// 004c0462: LEA EAX,[ESP + 0x74]
// 004c0466: PUSH EAX
// 004c0467: MOV EDX,0x3ecccccd
// 004c046c: PUSH EDI
// 004c046d: MOV dword ptr [ESP + 0xc0],EDX
// 004c0474: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004c0479: ADD ESP,0x8
// 004c047c: PUSH EDI
// 004c047d: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c0483: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c0484: CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
//   XREF to: 0048dc50 (UNCONDITIONAL_CALL)
// 004c0489: ADD ESP,0x8
// 004c048c: TEST EAX,EAX
// 004c048e: JNZ 0x004c0905
//   XREF to: 004c0905 (CONDITIONAL_JUMP)
// 004c0494: MOV ESP,EBP
//   Label: LAB_004c0494
// 004c0496: POP EBP
// 004c0497: POP EDI
// 004c0498: POP ESI
// 004c0499: POP EBX
// 004c049a: RET
// 004c049b: PUSH 0x67a7ac
//   Label: LAB_004c049b
//   XREF to: 0067a7ac (DATA)
// 004c04a0: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c04a6: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004c04a7: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   Label: LAB_004c04a7
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004c04ac: ADD ESP,0x8
// 004c04af: PUSH 0x0
//   Label: LAB_004c04af
// 004c04b1: MOV EAX,[0x00823a74]
//   XREF to: 00823a74 (READ)
// 004c04b6: PUSH ESI
// 004c04b7: MOV EDX,dword ptr [EAX + 0x3c]
// 004c04ba: PUSH EAX
// 004c04bb: CALL dword ptr [EDX + 0x4]
// 004c04be: MOV EDX,0xffff
// 004c04c3: MOV ECX,dword ptr [0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 004c04c9: ADD ESP,0xc
// 004c04cc: MOV EAX,dword ptr [ESI + 0x38]
// 004c04cf: SUB EDX,ECX
// 004c04d1: MOV EBX,0xffff
// 004c04d6: IMUL EDX
// 004c04d8: SHRD EAX,EDX,0x10
// 004c04dc: PUSH 0x1
// 004c04de: MOV [0x00688040],EAX
//   XREF to: 00688040 (WRITE)
// 004c04e3: MOV [0x00688070],EAX
//   XREF to: 00688070 (WRITE)
// 004c04e8: MOV [0x006880a0],EAX
//   XREF to: 006880a0 (WRITE)
// 004c04ed: MOV [0x006880d0],EAX
//   XREF to: 006880d0 (WRITE)
// 004c04f2: MOV dword ptr [0x00688034],EBX
//   XREF to: 00688034 (WRITE)
// 004c04f8: MOV dword ptr [0x00688038],EBX
//   XREF to: 00688038 (WRITE)
// 004c04fe: MOV dword ptr [0x0068803c],EBX
//   XREF to: 0068803c (WRITE)
// 004c0504: MOV dword ptr [0x00688064],EBX
//   XREF to: 00688064 (WRITE)
// 004c050a: MOV dword ptr [0x00688068],EBX
//   XREF to: 00688068 (WRITE)
// 004c0510: MOV dword ptr [0x0068806c],EBX
//   XREF to: 0068806c (WRITE)
// 004c0516: MOV dword ptr [0x00688094],EBX
//   XREF to: 00688094 (WRITE)
// 004c051c: MOV dword ptr [0x00688098],EBX
//   XREF to: 00688098 (WRITE)
// 004c0522: MOV dword ptr [0x0068809c],EBX
//   XREF to: 0068809c (WRITE)
// 004c0528: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c052d: MOV dword ptr [0x006880c4],EBX
//   XREF to: 006880c4 (WRITE)
// 004c0533: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004c0534: MOV dword ptr [0x006880c8],EBX
//   XREF to: 006880c8 (WRITE)
// 004c053a: MOV dword ptr [0x006880cc],EBX
//   XREF to: 006880cc (WRITE)
// 004c0540: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004c0545: ADD ESP,0x8
// 004c0548: PUSH 0x2d12dcc
//   XREF to: 02d12dcc (DATA)
// 004c054d: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c0553: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c0554: CALL engine_drender.cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
//   XREF to: 0048bad0 (UNCONDITIONAL_CALL)
// 004c0559: ADD ESP,0x8
// 004c055c: PUSH 0x0
// 004c055e: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c0564: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c0565: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004c056a: ADD ESP,0x8
// 004c056d: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c0573: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c0574: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004c08e3: PUSH 0x67a7c4
//   Label: LAB_004c08e3
//   XREF to: 0067a7c4 (DATA)
// 004c08e8: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c08ee: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c08ef: JMP 0x004c04a7
//   XREF to: 004c04a7 (UNCONDITIONAL_JUMP)
// 004c08f4: PUSH 0x67a7dc
//   Label: LAB_004c08f4
//   XREF to: 0067a7dc (DATA)
// 004c08f9: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c08ff: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c0900: JMP 0x004c04a7
//   XREF to: 004c04a7 (UNCONDITIONAL_JUMP)
// 004c0905: PUSH ESI
//   Label: LAB_004c0905
// 004c0906: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c090c: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c090d: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c0912: ADD ESP,0x8
// 004c0915: PUSH 0x0
// 004c0917: PUSH 0x2d12db4
//   XREF to: 02d12db4 (DATA)
// 004c091c: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c0922: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004c0923: LEA EBX,[ESP + 0x14]
// 004c0927: CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
//   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)
// 004c092c: MOV EAX,0xbecccccd
// 004c0931: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c0937: ADD ESP,0xc
// 004c093a: XOR ECX,ECX
// 004c093c: MOV dword ptr [ESP + 0x20],EAX
// 004c0940: MOV dword ptr [ESP + 0x24],EAX
// 004c0944: LEA EAX,[ESP + 0x20]
// 004c0948: MOV dword ptr [ESP + 0x28],ECX
// 004c094c: FLD float ptr [EAX]
// 004c094e: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c0954: FISTP dword ptr [EBX]
// 004c0956: FLD float ptr [EAX + 0x4]
// 004c0959: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c095f: FISTP dword ptr [EBX + 0x4]
// 004c0962: FLD float ptr [EAX + 0x8]
// 004c0965: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c096b: FISTP dword ptr [EBX + 0x8]
// 004c096e: LEA EAX,[ESP + 0x8]
// 004c0972: PUSH EAX
// 004c0973: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c0975: PUSH EAX
// 004c0976: MOV EDI,0xbecccccd
// 004c097b: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c0980: MOV EBX,0x3ecccccd
// 004c0985: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c098b: ADD ESP,0x8
// 004c098e: XOR EAX,EAX
// 004c0990: MOV dword ptr [ESP + 0x20],EBX
// 004c0994: MOV dword ptr [ESP + 0x28],EAX
// 004c0998: LEA EBX,[ESP + 0x8c]
// 004c099f: LEA EAX,[ESP + 0x20]
// 004c09a3: MOV dword ptr [ESP + 0x24],EDI
// 004c09a7: FLD float ptr [EAX]
// 004c09a9: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c09af: FISTP dword ptr [EBX]
// 004c09b1: FLD float ptr [EAX + 0x4]
// 004c09b4: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c09ba: FISTP dword ptr [EBX + 0x4]
// 004c09bd: FLD float ptr [EAX + 0x8]
// 004c09c0: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c09c6: FISTP dword ptr [EBX + 0x8]
// 004c09c9: LEA EAX,[ESP + 0x8c]
// 004c09d0: PUSH EAX
// 004c09d1: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c09d3: ADD EAX,0x30
// 004c09d6: PUSH EAX
// 004c09d7: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c09dc: MOV EDX,0x3ecccccd
// 004c09e1: LEA EAX,[ESP + 0x28]
// 004c09e5: ADD ESP,0x8
// 004c09e8: XOR EBX,EBX
// 004c09ea: MOV dword ptr [ESP + 0x20],EDX
// 004c09ee: MOV dword ptr [ESP + 0x24],EDX
// 004c09f2: MOV dword ptr [ESP + 0x28],EBX
// 004c09f6: LEA EBX,[ESP + 0x38]
// 004c09fa: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c0a00: FLD float ptr [EAX]
// 004c0a02: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c0a08: FISTP dword ptr [EBX]
// 004c0a0a: FLD float ptr [EAX + 0x4]
// 004c0a0d: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c0a13: FISTP dword ptr [EBX + 0x4]
// 004c0a16: FLD float ptr [EAX + 0x8]
// 004c0a19: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c0a1f: FISTP dword ptr [EBX + 0x8]
// 004c0a22: LEA EAX,[ESP + 0x38]
// 004c0a26: PUSH EAX
// 004c0a27: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c0a29: ADD EAX,0x60
// 004c0a2c: PUSH EAX
// 004c0a2d: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c0a32: MOV EAX,0x3ecccccd
// 004c0a37: LEA EBX,[ESP + 0x70]
// 004c0a3b: ADD ESP,0x8
// 004c0a3e: XOR EDX,EDX
// 004c0a40: MOV dword ptr [ESP + 0x20],EDI
// 004c0a44: MOV dword ptr [ESP + 0x24],EAX
// 004c0a48: MOV dword ptr [ESP + 0x28],EDX
// 004c0a4c: LEA EAX,[ESP + 0x20]
// 004c0a50: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c0a56: FLD float ptr [EAX]
// 004c0a58: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c0a5e: FISTP dword ptr [EBX]
// 004c0a60: FLD float ptr [EAX + 0x4]
// 004c0a63: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c0a69: FISTP dword ptr [EBX + 0x4]
// 004c0a6c: FLD float ptr [EAX + 0x8]
// 004c0a6f: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c0a75: FISTP dword ptr [EBX + 0x8]
// 004c0a78: LEA EAX,[ESP + 0x68]
// 004c0a7c: PUSH EAX
// 004c0a7d: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c0a7f: ADD EAX,0x90
// 004c0a84: PUSH EAX
// 004c0a85: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c0a8a: MOV EAX,dword ptr [ESI + 0x44]
// 004c0a8d: ADD ESP,0x8
// 004c0a90: CMP EAX,0x1
// 004c0a93: JNC 0x004c0aa2
//   XREF to: 004c0aa2 (CONDITIONAL_JUMP)
// 004c0a95: TEST EAX,EAX
// 004c0a97: JZ 0x004c049b
//   XREF to: 004c049b (CONDITIONAL_JUMP)
// 004c0a9d: JMP 0x004c04af
//   XREF to: 004c04af (UNCONDITIONAL_JUMP)
// 004c0aa2: JBE 0x004c08e3
//   Label: LAB_004c0aa2
//   XREF to: 004c08e3 (CONDITIONAL_JUMP)
// 004c0aa8: CMP EAX,0x2
// 004c0aab: JZ 0x004c08f4
//   XREF to: 004c08f4 (CONDITIONAL_JUMP)
// 004c0ab1: JMP 0x004c04af
//   XREF to: 004c04af (UNCONDITIONAL_JUMP)
