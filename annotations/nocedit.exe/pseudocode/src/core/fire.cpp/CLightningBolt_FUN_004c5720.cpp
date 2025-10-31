// Name: core_fire.cpp_CLightningBolt_FUN_004c5720
// Address: 004c5720
// Address Range: [[004c5720, 004c5a47] [004c5a4b, 004c5dd8]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CLightningBolt_FUN_004c5720(CLightningBolt * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_render_FUN_004c7180 (004c7180) at 004c7402 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00629fbb = 256
//   double DOUBLE_00629fc3 = 0.25
//   float FLOAT_0065dca8 = 256
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic[6] g_FireEffectLightningBoltTextures
//   undefined4 g_RenderVertexBuffer[0].u
//   undefined4 g_RenderVertexBuffer[0].v
//   undefined4 g_RenderVertexBuffer[0].light
//   undefined4 g_RenderVertexBuffer[0].color
//   undefined4 g_RenderVertexBuffer[0].fog
//   undefined4 g_RenderVertexBuffer[1].u
//   undefined4 g_RenderVertexBuffer[1].v
//   undefined4 g_RenderVertexBuffer[1].light
//   undefined4 g_RenderVertexBuffer[1].color
//   undefined4 g_RenderVertexBuffer[1].fog
//   undefined4 g_RenderVertexBuffer[2].u
//   undefined4 g_RenderVertexBuffer[2].v
//   undefined4 g_RenderVertexBuffer[2].light
//   undefined4 g_RenderVertexBuffer[2].color
//   undefined4 g_RenderVertexBuffer[2].fog
//   undefined4 g_RenderVertexBuffer[3].u
//   undefined4 g_RenderVertexBuffer[3].v
//   undefined4 g_RenderVertexBuffer[3].light
//   undefined4 g_RenderVertexBuffer[3].color
//   undefined4 g_RenderVertexBuffer[3].fog
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdlib.c_rand_FUN_005feb5c
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   wincore_windll.cpp_transformPoint_FUN_005b5a25

#include "nocturne.h"

void __cdecl core_fire_cpp_CLightningBolt_FUN_004c5720(CLightningBolt *this_ptr)

{
  CVector3f *world_position;
  char *pcVar1;
  CLightningBolt *pCVar2;
  SRenderVertex *pSVar3;
  CLightningBolt *pCVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  CDemonRenderer *pCVar8;
  BADSPACEBASE *in_ESP;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  double dVar12;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_0000001c;
  int in_stack_00000020;
  int iStack00000024;
  int in_stack_00000028;
  int in_stack_00000034;
  int in_stack_00000038;
  undefined1 local_a0 [24];
  CVector3i local_88;
  float local_7c;
  float local_78;
  float local_74;
  CVector3i local_70 [2];
  CVector3i local_54;
  undefined1 local_48 [8];
  int local_40;
  int local_3c;
  CVector3i local_34;
  int local_28;
  undefined1 local_24 [8];
  int iStack_1c;
  CVector3i local_18;
  float local_c [2];
  
  pCVar4 = this_ptr;
  if (*(float *)(this_ptr->field0_0x0 + 0x14) <= 0.0) {
    return;
  }
  iVar5 = crt_stdlib_c_rand_FUN_005feb5c();
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr,g_FireEffectLightningBoltTextures + iVar5 % 6);
  uVar6 = crt_stdlib_c_rand_FUN_005feb5c();
  if ((uVar6 & 1) == 0) {
    g_RenderVertexBuffer[1].u = 7.34684e-40;
    g_RenderVertexBuffer[2].u = 7.34684e-40;
    g_RenderVertexBuffer[3].u = 2.2775203e-38;
    g_RenderVertexBuffer[0].u = 2.2775203e-38;
  }
  else {
    g_RenderVertexBuffer[1].u = 2.2775203e-38;
    g_RenderVertexBuffer[2].u = 2.2775203e-38;
    g_RenderVertexBuffer[3].u = 7.34684e-40;
    g_RenderVertexBuffer[0].u = 7.34684e-40;
  }
  g_RenderVertexBuffer[3].v = 2.2775203e-38;
  g_RenderVertexBuffer[2].v = 2.2775203e-38;
  g_RenderVertexBuffer[1].v = 7.34684e-40;
  g_RenderVertexBuffer[0].v = 7.34684e-40;
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
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  pCVar2 = *(CLightningBolt **)pCVar4->field0_0x0;
  world_position = (CVector3f *)(pCVar4->field0_0x0 + 4);
  if (pCVar2 == (CLightningBolt *)0x0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,world_position);
    engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
              (g_CDemonRendererPtr,local_c);
    this_ptr = pCVar2;
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)&this_ptr,(CVector3i *)0x0);
    if (0.0 < *(float *)(pCVar4->field0_0x0 + 0x18)) {
      local_88.x = *(int *)(pCVar4->field0_0x0 + 0x18);
    }
    else {
      local_88.x = (int)(*(float *)(pCVar4->field0_0x0 + 0x10) * (float)DOUBLE_00629fc3);
    }
    local_88.y = *(int *)(pCVar4->field0_0x0 + 0x10);
    local_34.x = (int)ROUND((float)local_88.x * FLOAT_0065dca8);
    local_34.y = (int)ROUND((float)local_88.y * FLOAT_0065dca8);
    local_34.z = (int)ROUND(FLOAT_0065dca8 * 0.0);
    local_88.z = (int)pCVar2;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_34);
    local_88.y = (int)-(float)local_88.y;
    local_18.x = (int)ROUND((float)local_88.y * FLOAT_0065dca8);
    local_18.y = (int)ROUND((float)local_88.z * FLOAT_0065dca8);
    local_18.z = (int)ROUND(local_7c * FLOAT_0065dca8);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_18);
    local_7c = 0.0;
    this_ptr = (CLightningBolt *)(int)ROUND((float)local_88.z * FLOAT_0065dca8);
    in_stack_00000008 = (int)ROUND(FLOAT_0065dca8 * 0.0);
    in_stack_0000000c = (int)ROUND(local_78 * FLOAT_0065dca8);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,(CVector3i *)&this_ptr);
    local_7c = -local_7c;
    in_stack_00000020 = (int)ROUND(local_7c * FLOAT_0065dca8);
    iStack00000024 = (int)ROUND(local_78 * FLOAT_0065dca8);
    in_stack_00000028 = (int)ROUND(local_74 * FLOAT_0065dca8);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
               (CVector3i *)&stack0x00000020);
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_a0);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  }
  else {
    local_88.x = (int)ROUND(world_position->x * FLOAT_0065dca8);
    local_88.y = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 8) * FLOAT_0065dca8);
    local_88.z = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0xc) * FLOAT_0065dca8);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_88);
    local_54.x = (int)ROUND(world_position->x * FLOAT_0065dca8);
    local_54.y = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 8) * FLOAT_0065dca8);
    local_54.z = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0xc) * FLOAT_0065dca8);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_54);
    pcVar1 = pCVar4->field0_0x0 + 0x1c;
    local_24._4_4_ = (undefined4)ROUND(*(float *)pcVar1 * FLOAT_0065dca8);
    iStack_1c = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0x20) * FLOAT_0065dca8);
    local_18.x = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0x24) * FLOAT_0065dca8);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
               (CVector3i *)(local_24 + 4));
    local_70[0].x = (int)ROUND(*(float *)pcVar1 * FLOAT_0065dca8);
    local_70[0].y = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0x20) * FLOAT_0065dca8);
    local_70[0].z = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0x24) * FLOAT_0065dca8);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,local_70);
    pCVar8 = g_CDemonRendererPtr;
    fVar9 = (float10)DOUBLE_00629fbb;
    fVar10 = (float10)*(float *)(pCVar4->field0_0x0 + 0x18) * fVar9;
    pSVar3 = g_CDemonRendererPtr->vertex_buffer_ptr;
    fVar11 = (float10)*(float *)(pCVar4->field0_0x0 + 0x28);
    (pSVar3->projected_vertex).screen_x = -0x80000000;
    dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(pCVar8,pSVar3));
    piVar7 = (int *)((ulonglong)dVar12 >> 0x20);
    in_stack_0000001c = (int)ROUND(fVar10);
    *(int *)(*piVar7 + 4) = *(int *)(*piVar7 + 4) - in_stack_0000001c;
    *(undefined4 *)(*piVar7 + 0x40) = 0x80000000;
    *(int *)(*piVar7 + 0x34) = *(int *)(*piVar7 + 0x34) + in_stack_0000001c;
    iVar5 = *piVar7;
    fVar11 = fVar11 * fVar9;
    *(undefined4 *)(iVar5 + 0x70) = 0x80000000;
    dVar12 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(piVar7,iVar5));
    pCVar8 = (CDemonRenderer *)((ulonglong)dVar12 >> 0x20);
    iStack00000024 = (int)ROUND(fVar11);
    piVar7 = &pCVar8->vertex_buffer_ptr[2].projected_vertex.transformed_y;
    *piVar7 = *piVar7 + iStack00000024;
    pCVar8->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
    pCVar8->vertex_buffer_ptr[3].projected_vertex.transformed_y =
         pCVar8->vertex_buffer_ptr[3].projected_vertex.transformed_y - iStack00000024;
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (pCVar8,(SMRGLHeaderPrimitive *)&stack0xffffff50);
    local_28 = (int)ROUND(world_position->x * FLOAT_0065dca8);
    local_24._0_4_ = (undefined4)ROUND(*(float *)(pCVar4->field0_0x0 + 8) * FLOAT_0065dca8);
    local_24._4_4_ = (undefined4)ROUND(*(float *)(pCVar4->field0_0x0 + 0xc) * FLOAT_0065dca8);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)local_24);
    local_48._4_4_ = (undefined4)ROUND(world_position->x * FLOAT_0065dca8);
    local_40 = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 8) * FLOAT_0065dca8);
    local_3c = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0xc) * FLOAT_0065dca8);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
               (CVector3i *)(local_48 + 4));
    local_70[0].x = (int)ROUND(*(float *)pcVar1 * FLOAT_0065dca8);
    local_70[0].y = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0x20) * FLOAT_0065dca8);
    local_70[0].z = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0x24) * FLOAT_0065dca8);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,local_70);
    local_48._0_4_ = (undefined4)ROUND(*(float *)pcVar1 * FLOAT_0065dca8);
    local_48._4_4_ = (undefined4)ROUND(*(float *)(pCVar4->field0_0x0 + 0x20) * FLOAT_0065dca8);
    local_40 = (int)ROUND(*(float *)(pCVar4->field0_0x0 + 0x24) * FLOAT_0065dca8);
    wincore_windll_cpp_transformPoint_FUN_005b5a25
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_48);
    pCVar8 = g_CDemonRendererPtr;
    (g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex).screen_x = -0x80000000;
    (pCVar8->vertex_buffer_ptr->projected_vertex).transformed_x =
         (pCVar8->vertex_buffer_ptr->projected_vertex).transformed_x - in_stack_00000034;
    pCVar8->vertex_buffer_ptr[1].projected_vertex.screen_x = -0x80000000;
    pCVar8->vertex_buffer_ptr[1].projected_vertex.transformed_x =
         pCVar8->vertex_buffer_ptr[1].projected_vertex.transformed_x + in_stack_00000034;
    pCVar8->vertex_buffer_ptr[2].projected_vertex.screen_x = -0x80000000;
    pCVar8->vertex_buffer_ptr[2].projected_vertex.transformed_x =
         pCVar8->vertex_buffer_ptr[2].projected_vertex.transformed_x + in_stack_00000038;
    pCVar8->vertex_buffer_ptr[3].projected_vertex.screen_x = -0x80000000;
    pCVar8->vertex_buffer_ptr[3].projected_vertex.transformed_x =
         pCVar8->vertex_buffer_ptr[3].projected_vertex.transformed_x - in_stack_00000038;
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (pCVar8,(SMRGLHeaderPrimitive *)(local_a0 + 4));
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}


// Assembly code:
// 004c5720: PUSH EBP
//   Label: core_fire.cpp_CLightningBolt_FUN_004c5720
// 004c5721: SUB ESP,0xd8
// 004c5727: MOV EBP,dword ptr [ESP + 0xe0]
// 004c572e: FLD float ptr [EBP + 0x14]
// 004c5731: FLDZ
// 004c5733: FCOMPP
// 004c5735: FNSTSW AX
// 004c5737: SAHF
// 004c5738: JC 0x004c5742
//   XREF to: 004c5742 (CONDITIONAL_JUMP)
// 004c573a: ADD ESP,0xd8
// 004c5740: POP EBP
// 004c5741: RET
// 004c5742: PUSH EDI
//   Label: LAB_004c5742
// 004c5743: PUSH ESI
// 004c5744: PUSH EBX
// 004c5745: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 004c574a: MOV EDX,EAX
// 004c574c: MOV EBX,0x6
// 004c5751: SAR EDX,0x1f
// 004c5754: IDIV EBX
// 004c5756: LEA EAX,[EDX*0x4 + 0x0]
// 004c575d: SUB EAX,EDX
// 004c575f: SHL EAX,0x3
// 004c5762: ADD EAX,0x67adf4
//   XREF to: 0067adf4 (DATA)
// 004c5767: PUSH EAX
// 004c5768: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c576e: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c576f: MOV ESI,0x3
// 004c5774: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004c5779: MOV ECX,0x4
// 004c577e: ADD ESP,0x8
// 004c5781: XOR EBX,EBX
// 004c5783: MOV dword ptr [ESP + 0x10],ECX
// 004c5787: MOV dword ptr [ESP + 0x20],EBX
// 004c578b: MOV dword ptr [ESP + 0x1c],EBX
// 004c578f: MOV dword ptr [ESP + 0x18],EBX
// 004c5793: MOV dword ptr [ESP + 0x14],EBX
// 004c5797: MOV dword ptr [ESP + 0x24],EBX
// 004c579b: MOV dword ptr [ESP + 0x30],ESI
// 004c579f: MOV ECX,0x1
// 004c57a4: MOV EBX,0x2
// 004c57a9: MOV dword ptr [ESP + 0x28],ECX
// 004c57ad: MOV dword ptr [ESP + 0x2c],EBX
// 004c57b1: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 004c57b6: TEST AL,0x1
// 004c57b8: JZ 0x004c5a66
//   XREF to: 004c5a66 (CONDITIONAL_JUMP)
// 004c57be: MOV EDX,0x80000
// 004c57c3: MOV EBX,0xf80000
//   XREF to: 00f80000 (DATA)
// 004c57c8: MOV dword ptr [0x00688030],EDX
//   XREF to: 00688030 (WRITE)
// 004c57ce: MOV dword ptr [0x0068805c],EBX
//   XREF to: 0068805c (WRITE)
// 004c57d4: MOV dword ptr [0x00688060],EDX
//   XREF to: 00688060 (WRITE)
// 004c57da: MOV dword ptr [0x0068808c],EBX
//   XREF to: 0068808c (WRITE)
// 004c57e0: MOV dword ptr [0x00688090],EBX
//   XREF to: 00688090 (WRITE)
// 004c57e6: MOV dword ptr [0x006880bc],EDX
//   XREF to: 006880bc (WRITE)
// 004c57ec: MOV dword ptr [0x006880c0],EBX
//   XREF to: 006880c0 (WRITE)
// 004c57f2: MOV dword ptr [0x0068802c],EDX
//   XREF to: 0068802c (WRITE)
// 004c57f8: MOV EBX,0xffff
//   Label: LAB_004c57f8
// 004c57fd: MOV dword ptr [0x00688034],EBX
//   XREF to: 00688034 (WRITE)
// 004c5803: MOV dword ptr [0x00688038],EBX
//   XREF to: 00688038 (WRITE)
// 004c5809: MOV dword ptr [0x0068803c],EBX
//   XREF to: 0068803c (WRITE)
// 004c580f: MOV dword ptr [0x00688064],EBX
//   XREF to: 00688064 (WRITE)
// 004c5815: MOV dword ptr [0x00688068],EBX
//   XREF to: 00688068 (WRITE)
// 004c581b: MOV dword ptr [0x0068806c],EBX
//   XREF to: 0068806c (WRITE)
// 004c5821: MOV dword ptr [0x00688094],EBX
//   XREF to: 00688094 (WRITE)
// 004c5827: MOV dword ptr [0x00688098],EBX
//   XREF to: 00688098 (WRITE)
// 004c582d: MOV dword ptr [0x0068809c],EBX
//   XREF to: 0068809c (WRITE)
// 004c5833: MOV dword ptr [0x006880c4],EBX
//   XREF to: 006880c4 (WRITE)
// 004c5839: MOV dword ptr [0x006880c8],EBX
//   XREF to: 006880c8 (WRITE)
// 004c583f: PUSH EBX
// 004c5840: MOV dword ptr [0x006880cc],EBX
//   XREF to: 006880cc (WRITE)
// 004c5846: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c584c: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c584d: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004c5852: ADD ESP,0x8
// 004c5855: PUSH 0x1
// 004c5857: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c585d: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004c585e: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004c5863: ADD ESP,0x8
// 004c5866: MOV EDI,dword ptr [EBP]
// 004c5869: LEA ESI,[EBP + 0x4]
// 004c586c: TEST EDI,EDI
// 004c586e: JNZ 0x004c5aad
//   XREF to: 004c5aad (CONDITIONAL_JUMP)
// 004c5874: PUSH ESI
// 004c5875: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c587b: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c587c: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c5881: ADD ESP,0x8
// 004c5884: LEA EAX,[ESP + 0xc4]
// 004c588b: PUSH EAX
// 004c588c: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5892: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004c5893: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   XREF to: 0048c800 (UNCONDITIONAL_CALL)
// 004c5898: ADD ESP,0x8
// 004c589b: PUSH EDI
// 004c589c: LEA EAX,[ESP + 0xc8]
// 004c58a3: PUSH EAX
// 004c58a4: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c58a9: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004c58aa: MOV dword ptr [ESP + 0xd0],EDI
// 004c58b1: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004c58b6: ADD ESP,0xc
// 004c58b9: MOV dword ptr [ESP + 0x34],EDI
// 004c58bd: MOV dword ptr [ESP + 0x38],EDI
// 004c58c1: MOV dword ptr [ESP + 0x3c],EDI
// 004c58c5: FLD float ptr [EBP + 0x18]
// 004c58c8: FLDZ
// 004c58ca: FCOMPP
// 004c58cc: FNSTSW AX
// 004c58ce: SAHF
// 004c58cf: JC 0x004c5aa1
//   XREF to: 004c5aa1 (CONDITIONAL_JUMP)
// 004c58d5: FLD float ptr [EBP + 0x10]
// 004c58d8: FMUL double ptr [0x00629fc3]
//   XREF to: 00629fc3 (READ)
// 004c58de: FSTP float ptr [ESP + 0x34]
// 004c58e2: MOV EAX,dword ptr [EBP + 0x10]
//   Label: LAB_004c58e2
// 004c58e5: LEA EBX,[ESP + 0x88]
// 004c58ec: MOV dword ptr [ESP + 0x38],EAX
// 004c58f0: LEA EAX,[ESP + 0x34]
// 004c58f4: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c58fa: FLD float ptr [EAX]
// 004c58fc: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5902: FISTP dword ptr [EBX]
// 004c5904: FLD float ptr [EAX + 0x4]
// 004c5907: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c590d: FISTP dword ptr [EBX + 0x4]
// 004c5910: FLD float ptr [EAX + 0x8]
// 004c5913: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5919: FISTP dword ptr [EBX + 0x8]
// 004c591c: LEA EAX,[ESP + 0x88]
// 004c5923: PUSH EAX
// 004c5924: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5926: PUSH EAX
// 004c5927: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c592c: ADD ESP,0x8
// 004c592f: MOV AH,byte ptr [ESP + 0x37]
// 004c5933: XOR AH,0x80
// 004c5936: LEA EBX,[ESP + 0xa0]
// 004c593d: MOV byte ptr [ESP + 0x37],AH
// 004c5941: LEA EAX,[ESP + 0x34]
// 004c5945: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c594b: FLD float ptr [EAX]
// 004c594d: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5953: FISTP dword ptr [EBX]
// 004c5955: FLD float ptr [EAX + 0x4]
// 004c5958: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c595e: FISTP dword ptr [EBX + 0x4]
// 004c5961: FLD float ptr [EAX + 0x8]
// 004c5964: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c596a: FISTP dword ptr [EBX + 0x8]
// 004c596d: LEA EAX,[ESP + 0xa0]
// 004c5974: PUSH EAX
// 004c5975: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5977: ADD EAX,0x30
// 004c597a: PUSH EAX
// 004c597b: XOR ESI,ESI
// 004c597d: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c5982: LEA EBX,[ESP + 0xc0]
// 004c5989: LEA EAX,[ESP + 0x3c]
// 004c598d: ADD ESP,0x8
// 004c5990: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5996: MOV dword ptr [ESP + 0x38],ESI
// 004c599a: FLD float ptr [EAX]
// 004c599c: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c59a2: FISTP dword ptr [EBX]
// 004c59a4: FLD float ptr [EAX + 0x4]
// 004c59a7: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c59ad: FISTP dword ptr [EBX + 0x4]
// 004c59b0: FLD float ptr [EAX + 0x8]
// 004c59b3: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c59b9: FISTP dword ptr [EBX + 0x8]
// 004c59bc: LEA EAX,[ESP + 0xb8]
// 004c59c3: PUSH EAX
// 004c59c4: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c59c6: ADD EAX,0x60
// 004c59c9: PUSH EAX
// 004c59ca: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c59cf: ADD ESP,0x8
// 004c59d2: MOV DL,byte ptr [ESP + 0x37]
// 004c59d6: LEA EBX,[ESP + 0xd0]
// 004c59dd: XOR DL,0x80
// 004c59e0: LEA EAX,[ESP + 0x34]
// 004c59e4: MOV byte ptr [ESP + 0x37],DL
// 004c59e8: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c59ee: FLD float ptr [EAX]
// 004c59f0: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c59f6: FISTP dword ptr [EBX]
// 004c59f8: FLD float ptr [EAX + 0x4]
// 004c59fb: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5a01: FISTP dword ptr [EBX + 0x4]
// 004c5a04: FLD float ptr [EAX + 0x8]
// 004c5a07: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5a0d: FISTP dword ptr [EBX + 0x8]
// 004c5a10: LEA EAX,[ESP + 0xd0]
// 004c5a17: PUSH EAX
// 004c5a18: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5a1a: ADD EAX,0x90
// 004c5a1f: PUSH EAX
// 004c5a20: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004c5a25: ADD ESP,0x8
// 004c5a28: LEA EAX,[ESP + 0xc]
// 004c5a2c: PUSH EAX
// 004c5a2d: MOV EDI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5a33: PUSH EDI
//   XREF to: 02c6d578 (DATA)
// 004c5a34: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
// 004c5a39: ADD ESP,0x8
// 004c5a3c: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5a42: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 004c5a43: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004c5a4b: PUSH 0x0
//   Label: LAB_004c5a4b
// 004c5a4d: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5a52: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004c5a53: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 004c5a58: ADD ESP,0x8
// 004c5a5b: POP EBX
// 004c5a5c: POP ESI
// 004c5a5d: POP EDI
// 004c5a5e: ADD ESP,0xd8
// 004c5a64: POP EBP
// 004c5a65: RET
// 004c5a66: MOV EAX,0x80000
//   Label: LAB_004c5a66
// 004c5a6b: MOV EDI,0xf80000
//   XREF to: 00f80000 (DATA)
// 004c5a70: MOV [0x00688030],EAX
//   XREF to: 00688030 (WRITE)
// 004c5a75: MOV [0x0068805c],EAX
//   XREF to: 0068805c (WRITE)
// 004c5a7a: MOV [0x00688060],EAX
//   XREF to: 00688060 (WRITE)
// 004c5a7f: MOV [0x0068808c],EAX
//   XREF to: 0068808c (WRITE)
// 004c5a84: MOV dword ptr [0x00688090],EDI
//   XREF to: 00688090 (WRITE)
// 004c5a8a: MOV dword ptr [0x006880bc],EDI
//   XREF to: 006880bc (WRITE)
// 004c5a90: MOV dword ptr [0x006880c0],EDI
//   XREF to: 006880c0 (WRITE)
// 004c5a96: MOV dword ptr [0x0068802c],EDI
//   XREF to: 0068802c (WRITE)
// 004c5a9c: JMP 0x004c57f8
//   XREF to: 004c57f8 (UNCONDITIONAL_JUMP)
// 004c5aa1: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_004c5aa1
// 004c5aa4: MOV dword ptr [ESP + 0x34],EAX
// 004c5aa8: JMP 0x004c58e2
//   XREF to: 004c58e2 (UNCONDITIONAL_JUMP)
// 004c5aad: MOV EAX,[0x006703ec]
//   Label: LAB_004c5aad
//   XREF to: 006703ec (READ)
// 004c5ab2: LEA EBX,[ESP + 0x4c]
// 004c5ab6: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c5ab8: MOV EAX,ESI
// 004c5aba: FLD float ptr [EAX]
// 004c5abc: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5ac2: FISTP dword ptr [EBX]
// 004c5ac4: FLD float ptr [EAX + 0x4]
// 004c5ac7: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5acd: FISTP dword ptr [EBX + 0x4]
// 004c5ad0: FLD float ptr [EAX + 0x8]
// 004c5ad3: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5ad9: FISTP dword ptr [EBX + 0x8]
// 004c5adc: LEA EAX,[ESP + 0x4c]
// 004c5ae0: PUSH EAX
// 004c5ae1: PUSH EDX
// 004c5ae2: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004c5ae7: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5aec: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c5aee: ADD ESP,0x8
// 004c5af1: LEA EDX,[EAX + 0x30]
// 004c5af4: LEA EBX,[ESP + 0x7c]
// 004c5af8: MOV EAX,ESI
// 004c5afa: FLD float ptr [EAX]
// 004c5afc: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5b02: FISTP dword ptr [EBX]
// 004c5b04: FLD float ptr [EAX + 0x4]
// 004c5b07: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5b0d: FISTP dword ptr [EBX + 0x4]
// 004c5b10: FLD float ptr [EAX + 0x8]
// 004c5b13: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5b19: FISTP dword ptr [EBX + 0x8]
// 004c5b1c: LEA EAX,[ESP + 0x7c]
// 004c5b20: PUSH EAX
// 004c5b21: PUSH EDX
// 004c5b22: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004c5b27: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5b2c: LEA EDI,[EBP + 0x1c]
// 004c5b2f: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c5b31: ADD ESP,0x8
// 004c5b34: LEA EDX,[EAX + 0x60]
// 004c5b37: LEA EBX,[ESP + 0xac]
// 004c5b3e: MOV EAX,EDI
// 004c5b40: FLD float ptr [EAX]
// 004c5b42: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5b48: FISTP dword ptr [EBX]
// 004c5b4a: FLD float ptr [EAX + 0x4]
// 004c5b4d: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5b53: FISTP dword ptr [EBX + 0x4]
// 004c5b56: FLD float ptr [EAX + 0x8]
// 004c5b59: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5b5f: FISTP dword ptr [EBX + 0x8]
// 004c5b62: LEA EAX,[ESP + 0xac]
// 004c5b69: PUSH EAX
// 004c5b6a: PUSH EDX
// 004c5b6b: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004c5b70: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5b75: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c5b77: ADD ESP,0x8
// 004c5b7a: LEA EDX,[EAX + 0x90]
// 004c5b80: LEA EBX,[ESP + 0x58]
// 004c5b84: MOV EAX,EDI
// 004c5b86: FLD float ptr [EAX]
// 004c5b88: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5b8e: FISTP dword ptr [EBX]
// 004c5b90: FLD float ptr [EAX + 0x4]
// 004c5b93: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5b99: FISTP dword ptr [EBX + 0x4]
// 004c5b9c: FLD float ptr [EAX + 0x8]
// 004c5b9f: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5ba5: FISTP dword ptr [EBX + 0x8]
// 004c5ba8: LEA EAX,[ESP + 0x58]
// 004c5bac: PUSH EAX
// 004c5bad: PUSH EDX
// 004c5bae: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004c5bb3: FLD float ptr [EBP + 0x18]
// 004c5bb6: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5bbc: FLD double ptr [0x00629fbb]
//   XREF to: 00629fbb (READ)
// 004c5bc2: FXCH
// 004c5bc4: FMUL ST1
// 004c5bc6: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5bc8: FLD float ptr [EBP + 0x28]
// 004c5bcb: ADD ESP,0x8
// 004c5bce: MOV dword ptr [EAX + 0x10],0x80000000
// 004c5bd5: FXCH
// 004c5bd7: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c5bdc: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5bde: FISTP dword ptr [ESP + 0xdc]
// 004c5be5: MOV EAX,dword ptr [ESP + 0xdc]
// 004c5bec: SUB dword ptr [EBX + 0x4],EAX
// 004c5bef: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5bf1: MOV dword ptr [EAX + 0x40],0x80000000
// 004c5bf8: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5bfa: MOV EAX,dword ptr [ESP + 0xdc]
// 004c5c01: ADD dword ptr [EBX + 0x34],EAX
// 004c5c04: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5c06: FMULP
// 004c5c08: MOV dword ptr [EAX + 0x70],0x80000000
// 004c5c0f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004c5c14: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5c16: FISTP dword ptr [ESP + 0xe0]
// 004c5c1d: MOV EAX,dword ptr [ESP + 0xe0]
// 004c5c24: ADD dword ptr [EBX + 0x64],EAX
// 004c5c27: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5c29: MOV dword ptr [EAX + 0xa0],0x80000000
// 004c5c33: MOV EBX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5c35: MOV EAX,dword ptr [ESP + 0xe0]
// 004c5c3c: MOV ECX,dword ptr [EBX + 0x94]
// 004c5c42: SUB ECX,EAX
// 004c5c44: LEA EAX,[ESP + 0xc]
// 004c5c48: PUSH EAX
// 004c5c49: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c5c4a: MOV dword ptr [EBX + 0x94],ECX
// 004c5c50: LEA EBX,[ESP + 0x9c]
// 004c5c57: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
// 004c5c5c: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5c62: ADD ESP,0x8
// 004c5c65: MOV EAX,ESI
// 004c5c67: MOV EDX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004c5c69: FLD float ptr [EAX]
// 004c5c6b: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5c71: FISTP dword ptr [EBX]
// 004c5c73: FLD float ptr [EAX + 0x4]
// 004c5c76: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5c7c: FISTP dword ptr [EBX + 0x4]
// 004c5c7f: FLD float ptr [EAX + 0x8]
// 004c5c82: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5c88: FISTP dword ptr [EBX + 0x8]
// 004c5c8b: LEA EAX,[ESP + 0x94]
// 004c5c92: PUSH EAX
// 004c5c93: PUSH EDX
// 004c5c94: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004c5c99: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5c9e: LEA EBX,[ESP + 0x78]
// 004c5ca2: ADD ESP,0x8
// 004c5ca5: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c5ca7: MOV EAX,ESI
// 004c5ca9: FLD float ptr [EAX]
// 004c5cab: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5cb1: FISTP dword ptr [EBX]
// 004c5cb3: FLD float ptr [EAX + 0x4]
// 004c5cb6: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5cbc: FISTP dword ptr [EBX + 0x4]
// 004c5cbf: FLD float ptr [EAX + 0x8]
// 004c5cc2: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5cc8: FISTP dword ptr [EBX + 0x8]
// 004c5ccb: LEA EAX,[ESP + 0x70]
// 004c5ccf: PUSH EAX
// 004c5cd0: ADD EDX,0x30
// 004c5cd3: PUSH EDX
// 004c5cd4: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004c5cd9: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5cde: LEA EBX,[ESP + 0x48]
// 004c5ce2: ADD ESP,0x8
// 004c5ce5: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c5ce7: MOV EAX,EDI
// 004c5ce9: FLD float ptr [EAX]
// 004c5ceb: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5cf1: FISTP dword ptr [EBX]
// 004c5cf3: FLD float ptr [EAX + 0x4]
// 004c5cf6: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5cfc: FISTP dword ptr [EBX + 0x4]
// 004c5cff: FLD float ptr [EAX + 0x8]
// 004c5d02: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5d08: FISTP dword ptr [EBX + 0x8]
// 004c5d0b: LEA EAX,[ESP + 0x40]
// 004c5d0f: PUSH EAX
// 004c5d10: ADD EDX,0x60
// 004c5d13: PUSH EDX
// 004c5d14: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004c5d19: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5d1e: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 004c5d20: ADD ESP,0x8
// 004c5d23: LEA EDX,[EAX + 0x90]
// 004c5d29: LEA EBX,[ESP + 0x64]
// 004c5d2d: MOV EAX,EDI
// 004c5d2f: FLD float ptr [EAX]
// 004c5d31: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5d37: FISTP dword ptr [EBX]
// 004c5d39: FLD float ptr [EAX + 0x4]
// 004c5d3c: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5d42: FISTP dword ptr [EBX + 0x4]
// 004c5d45: FLD float ptr [EAX + 0x8]
// 004c5d48: FMUL float ptr [0x0065dca8]
//   XREF to: 0065dca8 (READ)
// 004c5d4e: FISTP dword ptr [EBX + 0x8]
// 004c5d51: LEA EAX,[ESP + 0x64]
// 004c5d55: PUSH EAX
// 004c5d56: PUSH EDX
// 004c5d57: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004c5d5c: ADD ESP,0x8
// 004c5d5f: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c5d65: MOV EAX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004c5d67: MOV dword ptr [EAX + 0x10],0x80000000
// 004c5d6e: MOV EDX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004c5d70: MOV EAX,dword ptr [ESP + 0xdc]
// 004c5d77: SUB dword ptr [EDX],EAX
// 004c5d79: MOV EAX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004c5d7b: MOV dword ptr [EAX + 0x40],0x80000000
// 004c5d82: MOV EDX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004c5d84: MOV EAX,dword ptr [ESP + 0xdc]
// 004c5d8b: ADD dword ptr [EDX + 0x30],EAX
// 004c5d8e: MOV EAX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004c5d90: MOV dword ptr [EAX + 0x70],0x80000000
// 004c5d97: MOV EDX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004c5d99: MOV EAX,dword ptr [ESP + 0xe0]
// 004c5da0: ADD dword ptr [EDX + 0x60],EAX
// 004c5da3: MOV EAX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004c5da5: MOV dword ptr [EAX + 0xa0],0x80000000
// 004c5daf: MOV EDX,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004c5db1: MOV EAX,dword ptr [ESP + 0xe0]
// 004c5db8: MOV ECX,dword ptr [EDX + 0x90]
// 004c5dbe: SUB ECX,EAX
// 004c5dc0: LEA EAX,[ESP + 0xc]
// 004c5dc4: PUSH EAX
// 004c5dc5: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004c5dc6: MOV dword ptr [EDX + 0x90],ECX
// 004c5dcc: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
// 004c5dd1: ADD ESP,0x8
// 004c5dd4: JMP 0x004c5a4b
//   XREF to: 004c5a4b (UNCONDITIONAL_JUMP)
