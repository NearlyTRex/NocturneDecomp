// Name: core_fire.cpp_CFireball_render_FUN_004c0e70
// Address: 004c0e70
// Address Range: [[004c0e70, 004c0f6d] [004c0f7c, 004c0fa4]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireball_render_FUN_004c0e70(CFireball * this_ptr)
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   CKeyFramedModelInstance DAT_02d12f70
//   CKeyFramedModelInstance DAT_02d130ec
//   CKeyFramedModelInstance DAT_02d13268
//   CDemonSet g_CDemonSetInstance
//   CVector3f g_ZeroVector
// Function calls:
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   core_set.cpp_CDemonSet_FUN_0056d380
//   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CFireball_render_FUN_004c0e70(CFireball *this_ptr)

{
  CVector3f *pCVar1;
  longlong lVar2;
  CKeyFramedModel *pCVar3;
  int iVar4;
  CKeyFramedModelInstance *this_ptr_00;
  BADSPACEBASE *in_ESP;
  SMRGLTextureBasic *texture;
  float local_e8;
  float local_e4;
  CBoundingBox3D local_e0;
  CVector3i local_c8;
  CVector3i local_bc;
  CVector3f local_b0;
  float local_a4;
  float local_a0;
  float local_9c;
  CVector3i local_98;
  CVector3i local_8c;
  CVector3i local_80;
  CVector3i local_74;
  float local_68;
  float local_64;
  float local_60;
  CVector3i local_5c;
  float local_50;
  float local_4c;
  undefined4 local_48;
  CVector3i local_44 [2];
  float local_28;
  float local_20;
  float local_1c;
  float local_18;
  
  local_20 = 0.5;
  if (this_ptr->lighting_active == 0) {
    local_20 = 4.0;
  }
  if (this_ptr->lighting_active == 2) {
    local_20 = 0.666;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)this_ptr);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr,(CVector3i *)&this_ptr->rotation_angle1,(CVector3i *)0x0);
  if (this_ptr->lighting_active == 0) {
    this_ptr_00 = &DAT_02d12f70;
  }
  else if (this_ptr->lighting_active == 1) {
    this_ptr_00 = &DAT_02d130ec;
  }
  else {
    this_ptr_00 = &DAT_02d13268;
  }
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(this_ptr_00);
  pCVar1 = pCVar3->frame_bounds;
  local_e0.min.x = pCVar1->x;
  local_e0.min.y = pCVar1->y;
  local_e0.min.z = pCVar1->z;
  local_e0.max.x = pCVar1[1].x;
  local_e0.max.y = pCVar1[1].y;
  local_e0.max.z = pCVar1[1].z;
  iVar4 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(&local_e0);
  if (iVar4 != 0) {
    core_set_cpp_CDemonSet_FUN_0056d380(g_CDemonSetPtr);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(this_ptr_00,0.0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  if ((iVar4 != 0) &&
     (iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar4 == 0)) {
    g_RenderVertexBuffer[0].u = 7.34684e-40;
    g_RenderVertexBuffer[0].v = 2.2775203e-38;
    g_RenderVertexBuffer[1].u = 2.2775203e-38;
    g_RenderVertexBuffer[1].v = 2.2775203e-38;
    g_RenderVertexBuffer[2].u = 2.2775203e-38;
    g_RenderVertexBuffer[2].v = 7.34684e-40;
    g_RenderVertexBuffer[3].u = 7.34684e-40;
    g_RenderVertexBuffer[3].v = 7.34684e-40;
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
              (g_CDemonRendererPtr,(CVector3i *)&DAT_02d12db4,(CVector3i *)0x0);
    local_50 = -local_20;
    local_48 = 0;
    local_74.x = (int)ROUND(local_50 * _DAT_0065dca8);
    local_74.y = (int)ROUND(local_50 * _DAT_0065dca8);
    local_74.z = (int)ROUND(_DAT_0065dca8 * 0.0);
    local_4c = local_50;
    local_28 = local_50;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_74);
    local_48 = 0;
    local_50 = local_20;
    local_4c = local_28;
    local_98.x = (int)ROUND(local_20 * _DAT_0065dca8);
    local_98.y = (int)ROUND(local_28 * _DAT_0065dca8);
    local_98.z = (int)ROUND(_DAT_0065dca8 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_98);
    local_50 = local_20;
    local_4c = local_20;
    local_48 = 0;
    local_bc.x = (int)ROUND(local_20 * _DAT_0065dca8);
    local_bc.y = (int)ROUND(local_20 * _DAT_0065dca8);
    local_bc.z = (int)ROUND(_DAT_0065dca8 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_bc);
    local_50 = local_28;
    local_4c = local_20;
    local_48 = 0;
    local_8c.x = (int)ROUND(local_28 * _DAT_0065dca8);
    local_8c.y = (int)ROUND(local_20 * _DAT_0065dca8);
    local_8c.z = (int)ROUND(_DAT_0065dca8 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_8c);
    if (this_ptr->lighting_active == 1) {
      texture = &DAT_0067a7f4;
    }
    else if (this_ptr->lighting_active == 2) {
      texture = &DAT_0067a7dc;
    }
    else {
      texture = &DAT_0067a7ac;
    }
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,texture);
    lVar2 = (longlong)this_ptr->timer * (longlong)(0xffff - (int)g_PerspectiveReciprocal);
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
    if ((this_ptr->lighting_active != 1) && (this_ptr->lighting_active != 2)) {
      local_b0.x = (this_ptr->base).position.x;
      local_b0.y = (this_ptr->base).position.y;
      local_b0.z = (this_ptr->base).position.z;
      local_68 = (this_ptr->base).velocity.x;
      local_64 = (this_ptr->base).velocity.y;
      iVar4 = 0;
      local_e4 = 0.1;
      local_60 = (this_ptr->base).velocity.z;
      local_e8 = 1.0;
      do {
        local_e4 = local_e4 * (float)DOUBLE_00629cab;
        local_e8 = (float)DOUBLE_00629cab * local_e8;
        local_a4 = local_68 * local_e4;
        local_64 = local_64 - local_e4 * (this_ptr->base).gravity_acceleration;
        local_9c = local_60 * local_e4;
        local_a0 = local_64 * local_e4;
        local_b0.x = local_b0.x - local_a4;
        local_b0.z = local_b0.z - local_9c;
        local_b0.y = local_b0.y - local_a0;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,&local_b0);
        engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
                  (g_CDemonRendererPtr,(CVector3i *)&DAT_02d12db4,(CVector3i *)0x0);
        local_50 = -local_20 * local_e8;
        local_48 = 0;
        local_44[0].x = (int)ROUND(local_50 * _DAT_0065dca8);
        local_44[0].y = (int)ROUND(local_50 * _DAT_0065dca8);
        local_44[0].z = (int)ROUND(_DAT_0065dca8 * 0.0);
        local_4c = local_50;
        local_1c = local_50;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,local_44);
        local_50 = local_20 * local_e8;
        local_48 = 0;
        local_4c = local_1c;
        local_5c.x = (int)ROUND(local_50 * _DAT_0065dca8);
        local_5c.y = (int)ROUND(local_1c * _DAT_0065dca8);
        local_5c.z = (int)ROUND(_DAT_0065dca8 * 0.0);
        local_18 = local_50;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_5c);
        local_48 = 0;
        local_50 = local_18;
        local_4c = local_18;
        local_80.x = (int)ROUND(local_18 * _DAT_0065dca8);
        local_80.y = (int)ROUND(local_18 * _DAT_0065dca8);
        local_80.z = (int)ROUND(_DAT_0065dca8 * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_80);
        local_50 = local_1c;
        local_4c = local_18;
        local_48 = 0;
        local_c8.x = (int)ROUND(local_1c * _DAT_0065dca8);
        local_c8.y = (int)ROUND(local_18 * _DAT_0065dca8);
        local_c8.z = (int)ROUND(_DAT_0065dca8 * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_c8);
        (*(code *)((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
        lVar2 = (longlong)this_ptr->timer * (longlong)(0xffff - (int)g_PerspectiveReciprocal);
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
        iVar4 = iVar4 + 1;
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
      } while (iVar4 < 3);
    }
  }
  return;
}


// Assembly code:
// 004c0e70: PUSH EBX
//   Label: core_fire.cpp_CFireball_render_FUN_004c0e70
// 004c0e71: PUSH ESI
// 004c0e72: PUSH EDI
// 004c0e73: PUSH EBP
// 004c0e74: MOV EBP,ESP
// 004c0e76: SUB ESP,0xd4
// 004c0e7c: AND ESP,0xfffffff8
// 004c0e7f: MOV ESI,dword ptr [EBP + 0x14]
// 004c0e82: MOV EDX,0x3f000000
// 004c0e87: MOV ECX,dword ptr [ESI + 0x44]
// 004c0e8a: MOV dword ptr [ESP + 0xc8],EDX
// 004c0e91: TEST ECX,ECX
// 004c0e93: JZ 0x004c0f7c
//   XREF to: 004c0f7c (CONDITIONAL_JUMP)
// 004c0e99: CMP dword ptr [ESI + 0x44],0x2
//   Label: LAB_004c0e99
// 004c0e9d: JNZ 0x004c0eaa
//   XREF to: 004c0eaa (CONDITIONAL_JUMP)
// 004c0e9f: MOV dword ptr [ESP + 0xc8],0x3f2a7efa
// 004c0eaa: PUSH ESI
//   Label: LAB_004c0eaa
// 004c0eab: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c0eb1: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c0eb2: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c0eb7: ADD ESP,0x8
// 004c0eba: PUSH 0x0
// 004c0ebc: LEA EAX,[ESI + 0x4c]
// 004c0ebf: PUSH EAX
// 004c0ec0: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c0ec6: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c0ec7: CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
//   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)
// 004c0ecc: MOV EBX,dword ptr [ESI + 0x44]
// 004c0ecf: ADD ESP,0xc
// 004c0ed2: TEST EBX,EBX
// 004c0ed4: JNZ 0x004c0f8c
//   XREF to: 004c0f8c (CONDITIONAL_JUMP)
// 004c0eda: MOV EBX,0x2d12f70
//   XREF to: 02d12f70 (PARAM)
// 004c0edf: PUSH EBX
//   Label: LAB_004c0edf
//   XREF to: 02d12f70 (DATA)
//   XREF to: 02d130ec (DATA)
//   XREF to: 02d13268 (DATA)
// 004c0ee0: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004c0ee5: MOV EDX,dword ptr [EAX + 0x5690]
// 004c0eeb: ADD ESP,0x4
// 004c0eee: MOV EAX,dword ptr [EDX]
// 004c0ef0: MOV dword ptr [ESP + 0x8],EAX
// 004c0ef4: LEA EAX,[EDX + 0x4]
// 004c0ef7: MOV EAX,dword ptr [EAX]
// 004c0ef9: MOV dword ptr [ESP + 0xc],EAX
// 004c0efd: LEA EAX,[EDX + 0x8]
// 004c0f00: MOV EAX,dword ptr [EAX]
// 004c0f02: MOV dword ptr [ESP + 0x10],EAX
// 004c0f06: MOV EAX,dword ptr [EDX + 0xc]
// 004c0f09: ADD EDX,0xc
// 004c0f0c: MOV dword ptr [ESP + 0x14],EAX
// 004c0f10: LEA EAX,[EDX + 0x4]
// 004c0f13: MOV EAX,dword ptr [EAX]
// 004c0f15: MOV dword ptr [ESP + 0x18],EAX
// 004c0f19: LEA EAX,[EDX + 0x8]
// 004c0f1c: MOV EAX,dword ptr [EAX]
// 004c0f1e: MOV dword ptr [ESP + 0x1c],EAX
// 004c0f22: LEA EAX,[ESP + 0x8]
// 004c0f26: PUSH EAX
// 004c0f27: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004c0f2c: ADD ESP,0x4
// 004c0f2f: MOV EDI,EAX
// 004c0f31: TEST EAX,EAX
// 004c0f33: JZ 0x004c0f62
//   XREF to: 004c0f62 (CONDITIONAL_JUMP)
// 004c0f35: PUSH 0x0
// 004c0f37: LEA EAX,[ESP + 0x18]
// 004c0f3b: PUSH EAX
// 004c0f3c: LEA EAX,[ESP + 0x10]
// 004c0f40: PUSH EAX
// 004c0f41: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 004c0f46: PUSH ESI
// 004c0f47: MOV EAX,[0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004c0f4c: PUSH EAX
//   XREF to: 03114278 (DATA)
// 004c0f4d: CALL core_set.cpp_CDemonSet_FUN_0056d380
//   XREF to: 0056d380 (UNCONDITIONAL_CALL)
// 004c0f52: ADD ESP,0x18
// 004c0f55: PUSH -0x1
// 004c0f57: PUSH 0x0
// 004c0f59: PUSH EBX
//   XREF to: 02d12f70 (DATA)
// 004c0f5a: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 004c0f5f: ADD ESP,0xc
// 004c0f62: MOV EDX,dword ptr [0x006703ec]
//   Label: LAB_004c0f62
//   XREF to: 006703ec (READ)
// 004c0f68: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c0f69: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004c0f7c: MOV dword ptr [ESP + 0xc8],0x40800000
//   Label: LAB_004c0f7c
// 004c0f87: JMP 0x004c0e99
//   XREF to: 004c0e99 (UNCONDITIONAL_JUMP)
// 004c0f8c: CMP EBX,0x1
//   Label: LAB_004c0f8c
// 004c0f8f: JNZ 0x004c0f9b
//   XREF to: 004c0f9b (CONDITIONAL_JUMP)
// 004c0f91: MOV EBX,0x2d130ec
//   XREF to: 02d130ec (DATA)
// 004c0f96: JMP 0x004c0edf
//   XREF to: 004c0edf (UNCONDITIONAL_JUMP)
// 004c0f9b: MOV EBX,0x2d13268
//   Label: LAB_004c0f9b
//   XREF to: 02d13268 (DATA)
// 004c0fa0: JMP 0x004c0edf
//   XREF to: 004c0edf (UNCONDITIONAL_JUMP)
