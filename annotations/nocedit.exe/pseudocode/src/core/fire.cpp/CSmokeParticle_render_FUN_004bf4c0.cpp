// Name: core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0
// Address: 004bf4c0
// Address Range: [[004bf4c0, 004bf7e2] [004bf7e6, 004bf7ed]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0(CSmokeParticle * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_render_FUN_004c7180 (004c7180) at 004c72bc [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_fire_cpp_00629c0f
//   TerminatedCString s_CSmokeParticle_render_Fr_00629c20
//   float FLOAT_0065dca8 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic[40] g_FireEffectSmokeParticleTextures
//   CDemonSet* g_CDemonSetPtr = 03114278
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
//   float g_PerspectiveReciprocal
//   CVector3i g_BillboardCameraRight
//   CVector3i g_BillboardCameraUp
//   SMRGLPrimitiveQuadIndex g_BillboardPrimitive
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
//   crt_math.c_round_FUN_005fe6b0
//   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   wincore_windll.cpp_transformPoint_FUN_005b5a25

#include "nocturne.h"

void __cdecl core_fire_cpp_CSmokeParticle_render_FUN_004bf4c0(CSmokeParticle *this_ptr)

{
  SRenderVertex *vertex_ptr;
  longlong lVar1;
  int iVar2;
  undefined4 extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  CVector3i local_70;
  CVector3i local_64;
  float local_58;
  float local_54;
  undefined4 local_50;
  CVector3i local_4c;
  CVector3i local_40;
  CVector3i local_34;
  CVector3i local_28;
  float local_1c;
  int local_18;
  float local_14;
  
  vertex_ptr = g_CDemonRendererPtr->vertex_buffer_ptr;
  local_64.x = (int)ROUND((this_ptr->position).x * FLOAT_0065dca8);
  local_64.y = (int)ROUND((this_ptr->position).y * FLOAT_0065dca8);
  local_64.z = (int)ROUND((this_ptr->position).z * FLOAT_0065dca8);
  wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr->projected_vertex,&local_64);
  iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50(g_CDemonRendererPtr,vertex_ptr);
  if (iVar2 != 0) {
    fVar3 = (float10)this_ptr->age;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,iVar2));
    local_18 = (int)ROUND(fVar3);
    if ((local_18 < 0) || (0x27 < local_18)) {
      g_CurrentFilename = "..\\core\\fire.cpp";
      g_CurrentLineNumber = 0x11c;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CSmokeParticle::render - Frame out of range");
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,g_FireEffectSmokeParticleTextures + local_18);
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&this_ptr->position);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
              (g_CDemonRendererPtr,&g_BillboardCameraRight,(CVector3i *)0x0);
    local_14 = this_ptr->drag_factor;
    local_50 = 0;
    local_58 = -local_14;
    local_28.x = (int)ROUND(local_58 * FLOAT_0065dca8);
    local_28.y = (int)ROUND(local_58 * FLOAT_0065dca8);
    local_28.z = (int)ROUND(FLOAT_0065dca8 * 0.0);
    local_54 = local_58;
    local_1c = local_58;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_28);
    local_58 = local_14;
    local_54 = local_1c;
    local_50 = 0;
    local_70.x = (int)ROUND(local_14 * FLOAT_0065dca8);
    local_70.y = (int)ROUND(local_1c * FLOAT_0065dca8);
    local_70.z = (int)ROUND(FLOAT_0065dca8 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_70);
    local_50 = 0;
    local_58 = local_14;
    local_54 = local_14;
    local_34.x = (int)ROUND(local_14 * FLOAT_0065dca8);
    local_34.y = (int)ROUND(local_14 * FLOAT_0065dca8);
    local_34.z = (int)ROUND(FLOAT_0065dca8 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_34);
    local_58 = local_1c;
    local_54 = local_14;
    local_50 = 0;
    local_4c.x = (int)ROUND(local_1c * FLOAT_0065dca8);
    local_4c.y = (int)ROUND(local_14 * FLOAT_0065dca8);
    local_4c.z = (int)ROUND(FLOAT_0065dca8 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_4c);
    g_RenderVertexBuffer[0].u = 7.34684e-40;
    g_RenderVertexBuffer[0].v = 2.2775203e-38;
    g_RenderVertexBuffer[1].u = 2.2775203e-38;
    g_RenderVertexBuffer[1].v = 2.2775203e-38;
    g_RenderVertexBuffer[2].u = 2.2775203e-38;
    g_RenderVertexBuffer[2].v = 7.34684e-40;
    g_RenderVertexBuffer[3].u = 7.34684e-40;
    g_RenderVertexBuffer[3].v = 7.34684e-40;
    local_40.x = (int)ROUND((this_ptr->position).x * FLOAT_0065dca8);
    local_40.y = (int)ROUND((this_ptr->position).y * FLOAT_0065dca8);
    local_40.z = (int)ROUND((this_ptr->position).z * FLOAT_0065dca8);
    core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
              (g_CDemonSetPtr,&local_40,&g_BillboardCameraUp,0,4);
    (*(code *)((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
    lVar1 = (longlong)(0xffff - (int)g_PerspectiveReciprocal) * (longlong)this_ptr->alpha_value;
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr,(uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (g_CDemonRendererPtr,&g_BillboardPrimitive.base);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  return;
}


// Assembly code:
// 004bf4c0: PUSH EBX
//   Label: core_fire.cpp_CSmokeParticle_render_FUN_004bf4c0
// 004bf4c1: PUSH ESI
// 004bf4c2: PUSH EDI
// 004bf4c3: PUSH EBP
// 004bf4c4: SUB ESP,0x60
// 004bf4c7: MOV EDI,dword ptr [ESP + 0x74]
// 004bf4cb: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bf4d1: LEA EBX,[ESP + 0xc]
// 004bf4d5: LEA EAX,[EDI + 0x4]
// 004bf4d8: MOV ESI,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004bf4da: FLD float ptr [EAX]
// 004bf4dc: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bf4e2: FISTP dword ptr [EBX]
// 004bf4e4: FLD float ptr [EAX + 0x4]
// 004bf4e7: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bf4ed: FISTP dword ptr [EBX + 0x4]
// 004bf4f0: FLD float ptr [EAX + 0x8]
// 004bf4f3: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bf4f9: FISTP dword ptr [EBX + 0x8]
// 004bf4fc: LEA EAX,[ESP + 0xc]
// 004bf500: PUSH EAX
// 004bf501: PUSH ESI
// 004bf502: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004bf507: ADD ESP,0x8
// 004bf50a: PUSH ESI
// 004bf50b: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bf511: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004bf512: CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
//   XREF to: 0048dc50 (UNCONDITIONAL_CALL)
// 004bf517: ADD ESP,0x8
// 004bf51a: TEST EAX,EAX
// 004bf51c: JZ 0x004bf7e6
//   XREF to: 004bf7e6 (CONDITIONAL_JUMP)
// 004bf522: FLD float ptr [EDI + 0x18]
// 004bf525: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004bf52a: FISTP dword ptr [ESP + 0x58]
// 004bf52e: MOV ECX,dword ptr [ESP + 0x58]
// 004bf532: TEST ECX,ECX
// 004bf534: JL 0x004bf53b
//   XREF to: 004bf53b (CONDITIONAL_JUMP)
// 004bf536: CMP ECX,0x28
// 004bf539: JL 0x004bf55e
//   XREF to: 004bf55e (CONDITIONAL_JUMP)
// 004bf53b: MOV ESI,0x629c0f
//   Label: LAB_004bf53b
//   XREF to: 00629c0f (DATA)
// 004bf540: MOV EBP,0x11c
// 004bf545: PUSH 0x629c20
//   XREF to: 00629c20 (DATA)
// 004bf54a: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004bf550: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 004bf556: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004bf55b: ADD ESP,0x4
// 004bf55e: MOV EBX,dword ptr [ESP + 0x58]
//   Label: LAB_004bf55e
// 004bf562: LEA EAX,[EBX*0x4 + 0x0]
// 004bf569: SUB EAX,EBX
// 004bf56b: SHL EAX,0x3
// 004bf56e: ADD EAX,0x67a3d4
//   XREF to: 0067a3d4 (DATA)
// 004bf573: PUSH EAX
// 004bf574: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004bf579: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004bf57a: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004bf57f: ADD ESP,0x8
// 004bf582: LEA ESI,[EDI + 0x4]
// 004bf585: PUSH ESI
// 004bf586: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bf58c: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004bf58d: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004bf592: ADD ESP,0x8
// 004bf595: PUSH 0x0
// 004bf597: PUSH 0x2d12db4
//   XREF to: 02d12db4 (DATA)
// 004bf59c: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bf5a2: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004bf5a3: CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
//   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)
// 004bf5a8: ADD ESP,0xc
// 004bf5ab: MOV EAX,dword ptr [EDI + 0x14]
// 004bf5ae: XOR EBX,EBX
// 004bf5b0: MOV dword ptr [ESP + 0x5c],EAX
// 004bf5b4: MOV dword ptr [ESP + 0x20],EBX
// 004bf5b8: FLD float ptr [ESP + 0x5c]
// 004bf5bc: FCHS
// 004bf5be: FSTP float ptr [ESP + 0x18]
// 004bf5c2: MOV EAX,dword ptr [ESP + 0x18]
// 004bf5c6: LEA EBX,[ESP + 0x48]
// 004bf5ca: MOV dword ptr [ESP + 0x54],EAX
// 004bf5ce: MOV dword ptr [ESP + 0x1c],EAX
// 004bf5d2: LEA EAX,[ESP + 0x18]
// 004bf5d6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bf5dc: FLD float ptr [EAX]
// 004bf5de: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bf5e4: FISTP dword ptr [EBX]
// 004bf5e6: FLD float ptr [EAX + 0x4]
// 004bf5e9: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bf5ef: FISTP dword ptr [EBX + 0x4]
// 004bf5f2: FLD float ptr [EAX + 0x8]
// 004bf5f5: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bf5fb: FISTP dword ptr [EBX + 0x8]
// 004bf5fe: LEA EAX,[ESP + 0x48]
// 004bf602: PUSH EAX
// 004bf603: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004bf605: PUSH EAX
// 004bf606: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004bf60b: ADD ESP,0x8
// 004bf60e: XOR EBP,EBP
// 004bf610: MOV EAX,dword ptr [ESP + 0x5c]
// 004bf614: MOV EBX,ESP
// 004bf616: MOV dword ptr [ESP + 0x18],EAX
// 004bf61a: MOV EAX,dword ptr [ESP + 0x54]
// 004bf61e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bf624: MOV dword ptr [ESP + 0x1c],EAX
// 004bf628: LEA EAX,[ESP + 0x18]
// 004bf62c: MOV dword ptr [ESP + 0x20],EBP
// 004bf630: FLD float ptr [EAX]
// 004bf632: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bf638: FISTP dword ptr [EBX]
// 004bf63a: FLD float ptr [EAX + 0x4]
// 004bf63d: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bf643: FISTP dword ptr [EBX + 0x4]
// 004bf646: FLD float ptr [EAX + 0x8]
// 004bf649: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bf64f: FISTP dword ptr [EBX + 0x8]
// 004bf652: MOV EAX,ESP
// 004bf654: PUSH EAX
// 004bf655: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004bf657: ADD EAX,0x30
// 004bf65a: PUSH EAX
// 004bf65b: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004bf660: ADD ESP,0x8
// 004bf663: MOV EAX,dword ptr [ESP + 0x5c]
// 004bf667: MOV dword ptr [ESP + 0x20],EBP
// 004bf66b: MOV dword ptr [ESP + 0x18],EAX
// 004bf66f: MOV dword ptr [ESP + 0x1c],EAX
// 004bf673: LEA EBX,[ESP + 0x3c]
// 004bf677: LEA EAX,[ESP + 0x18]
// 004bf67b: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bf681: FLD float ptr [EAX]
// 004bf683: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bf689: FISTP dword ptr [EBX]
// 004bf68b: FLD float ptr [EAX + 0x4]
// 004bf68e: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bf694: FISTP dword ptr [EBX + 0x4]
// 004bf697: FLD float ptr [EAX + 0x8]
// 004bf69a: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bf6a0: FISTP dword ptr [EBX + 0x8]
// 004bf6a3: LEA EAX,[ESP + 0x3c]
// 004bf6a7: PUSH EAX
// 004bf6a8: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004bf6aa: ADD EAX,0x60
// 004bf6ad: PUSH EAX
// 004bf6ae: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004bf6b3: ADD ESP,0x8
// 004bf6b6: MOV EAX,dword ptr [ESP + 0x54]
// 004bf6ba: LEA EBX,[ESP + 0x24]
// 004bf6be: MOV dword ptr [ESP + 0x18],EAX
// 004bf6c2: MOV EAX,dword ptr [ESP + 0x5c]
// 004bf6c6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bf6cc: MOV dword ptr [ESP + 0x1c],EAX
// 004bf6d0: LEA EAX,[ESP + 0x18]
// 004bf6d4: MOV dword ptr [ESP + 0x20],EBP
// 004bf6d8: FLD float ptr [EAX]
// 004bf6da: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bf6e0: FISTP dword ptr [EBX]
// 004bf6e2: FLD float ptr [EAX + 0x4]
// 004bf6e5: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bf6eb: FISTP dword ptr [EBX + 0x4]
// 004bf6ee: FLD float ptr [EAX + 0x8]
// 004bf6f1: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bf6f7: FISTP dword ptr [EBX + 0x8]
// 004bf6fa: LEA EAX,[ESP + 0x24]
// 004bf6fe: PUSH EAX
// 004bf6ff: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004bf701: ADD EAX,0x90
// 004bf706: PUSH EAX
// 004bf707: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004bf70c: MOV ECX,0x80000
// 004bf711: MOV EBX,0xf80000
//   XREF to: 00f80000 (DATA)
// 004bf716: ADD ESP,0x8
// 004bf719: MOV EAX,ESI
// 004bf71b: MOV dword ptr [0x0068802c],ECX
//   XREF to: 0068802c (WRITE)
// 004bf721: MOV dword ptr [0x00688030],EBX
//   XREF to: 00688030 (WRITE)
// 004bf727: MOV dword ptr [0x0068805c],EBX
//   XREF to: 0068805c (WRITE)
// 004bf72d: MOV dword ptr [0x00688060],EBX
//   XREF to: 00688060 (WRITE)
// 004bf733: MOV dword ptr [0x0068808c],EBX
//   XREF to: 0068808c (WRITE)
// 004bf739: MOV dword ptr [0x00688090],ECX
//   XREF to: 00688090 (WRITE)
// 004bf73f: MOV dword ptr [0x006880bc],ECX
//   XREF to: 006880bc (WRITE)
// 004bf745: LEA EBX,[ESP + 0x30]
// 004bf749: MOV dword ptr [0x006880c0],ECX
//   XREF to: 006880c0 (WRITE)
// 004bf74f: FLD float ptr [EAX]
// 004bf751: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bf757: FISTP dword ptr [EBX]
// 004bf759: FLD float ptr [EAX + 0x4]
// 004bf75c: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bf762: FISTP dword ptr [EBX + 0x4]
// 004bf765: FLD float ptr [EAX + 0x8]
// 004bf768: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004bf76e: FISTP dword ptr [EBX + 0x8]
// 004bf771: PUSH 0x4
// 004bf773: PUSH EBP
// 004bf774: PUSH 0x2d12dc0
//   XREF to: 02d12dc0 (DATA)
// 004bf779: LEA EAX,[ESP + 0x3c]
// 004bf77d: PUSH EAX
// 004bf77e: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004bf783: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004bf784: CALL core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
//   XREF to: 0056e110 (UNCONDITIONAL_CALL)
// 004bf789: ADD ESP,0x14
// 004bf78c: PUSH EBP
// 004bf78d: MOV EAX,[0x00823a74]
//   XREF to: 00823a74 (READ)
// 004bf792: PUSH ESI
// 004bf793: MOV EDX,dword ptr [EAX + 0x3c]
// 004bf796: PUSH EAX
// 004bf797: CALL dword ptr [EDX + 0x4]
// 004bf79a: MOV EAX,0xffff
// 004bf79f: MOV EDX,dword ptr [0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 004bf7a5: ADD ESP,0xc
// 004bf7a8: SUB EAX,EDX
// 004bf7aa: MOV EDX,dword ptr [EDI + 0x28]
// 004bf7ad: IMUL EDX
// 004bf7af: SHRD EAX,EDX,0x10
// 004bf7b3: PUSH EAX
// 004bf7b4: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bf7ba: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004bf7bb: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004bf7c0: ADD ESP,0x8
// 004bf7c3: PUSH 0x2d12dcc
//   XREF to: 02d12dcc (DATA)
// 004bf7c8: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bf7ce: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004bf7cf: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
// 004bf7d4: ADD ESP,0x8
// 004bf7d7: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004bf7dd: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004bf7de: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004bf7e6: ADD ESP,0x60
//   Label: LAB_004bf7e6
// 004bf7e9: POP EBP
// 004bf7ea: POP EDI
// 004bf7eb: POP ESI
// 004bf7ec: POP EBX
// 004bf7ed: RET
