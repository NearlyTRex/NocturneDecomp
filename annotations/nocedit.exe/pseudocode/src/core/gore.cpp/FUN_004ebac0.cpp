// Name: core_gore.cpp_FUN_004ebac0
// Address: 004ebac0
// Address Range: [[004ebac0, 004ebe5c] [004ec23c, 004ec280]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ebac0()
// Globals:
//   undefined4 DAT_0065f024
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   SMRGLTextureBasic DAT_0067b9b0
//   CDemonSet* g_CDemonSetPtr = 03114278
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
//   undefined4 g_RenderVertexBuffer[3].u
//   undefined4 g_RenderVertexBuffer[3].v
//   CDemonCamera* g_CurrentSceneCamera
//   CDemonRenderer g_CDemonRendererInstance
//   float g_PerspectiveReciprocal
//   SMRGLHeaderPrimitive DAT_02d83368
//   undefined4 DAT_02d83390
//   undefined4 DAT_02d8339c
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
//   engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   wincore_windll.cpp_transformPoint_FUN_005b5a25

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_gore.cpp_FUN_004ebac0(undefined4 param_1) */

void core_gore_cpp_FUN_004ebac0(void)

{
  SRenderVertex *output;
  float fVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  CVector3f *in_stack_00000004;
  float fStack_f0;
  float fStack_ec;
  CVector3f CStack_e8;
  CVector3i CStack_dc;
  CVector3i local_d0;
  CVector3i CStack_c4;
  CVector3i local_b8;
  CVector3i CStack_ac;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  CVector3i local_94;
  CVector3i local_88;
  CVector3i local_7c;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CVector3i CStack_64;
  CVector3i local_58;
  float local_4c;
  float local_48;
  undefined4 local_44;
  int local_28;
  int local_24;
  int local_20;
  float fStack_1c;
  float fStack_18;
  
  output = g_CDemonRendererPtr->vertex_buffer_ptr;
  local_58.x = (int)ROUND(in_stack_00000004->x * _DAT_0065f024);
  local_58.y = (int)ROUND(in_stack_00000004->y * _DAT_0065f024);
  local_58.z = (int)ROUND(in_stack_00000004->z * _DAT_0065f024);
  wincore_windll_cpp_transformPoint_FUN_005b5a25(&output->projected_vertex,&local_58);
  if ((int)((output->projected_vertex).screen_x & -0x80000000) != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,in_stack_00000004);
  engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
            (g_CDemonRendererPtr,(CVector3i *)&DAT_02d83390,(CVector3i *)0x0);
  local_4c = -0.1;
  local_48 = -0.1;
  local_44 = 0;
  local_b8.x = (int)ROUND(_DAT_0065f024 * -0.1);
  local_b8.y = (int)ROUND(_DAT_0065f024 * -0.1);
  local_b8.z = (int)ROUND(_DAT_0065f024 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_b8);
  local_4c = 0.1;
  local_48 = -0.1;
  local_44 = 0;
  local_7c.x = (int)ROUND(_DAT_0065f024 * 0.1);
  local_7c.y = (int)ROUND(_DAT_0065f024 * -0.1);
  local_7c.z = (int)ROUND(_DAT_0065f024 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_7c);
  local_4c = 0.1;
  local_48 = 0.1;
  local_44 = 0;
  local_d0.x = (int)ROUND(_DAT_0065f024 * 0.1);
  local_d0.y = (int)ROUND(_DAT_0065f024 * 0.1);
  local_d0.z = (int)ROUND(_DAT_0065f024 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_d0);
  local_48 = 0.1;
  local_4c = -0.1;
  local_44 = 0;
  local_94.x = (int)ROUND(_DAT_0065f024 * -0.1);
  local_94.y = (int)ROUND(_DAT_0065f024 * 0.1);
  local_94.z = (int)ROUND(_DAT_0065f024 * 0.0);
  wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
            (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_94);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_0067b9b0);
  iVar3 = ((uint)in_stack_00000004[5].x & 3) * 0x400000;
  g_RenderVertexBuffer[0].u = (float)(iVar3 + 0x80000);
  iVar4 = ((int)in_stack_00000004[5].x >> 2 & 3U) * 0x400000;
  g_RenderVertexBuffer[1].u = (float)(iVar3 + 0x380000);
  g_RenderVertexBuffer[0].v = (float)(iVar4 + 0x80000);
  g_RenderVertexBuffer[2].v = (float)(iVar4 + 0x380000);
  local_88.x = (int)ROUND(in_stack_00000004->x * _DAT_0065f024);
  local_88.y = (int)ROUND(in_stack_00000004->y * _DAT_0065f024);
  local_88.z = (int)ROUND(in_stack_00000004->z * _DAT_0065f024);
  g_RenderVertexBuffer[1].v = g_RenderVertexBuffer[0].v;
  g_RenderVertexBuffer[2].u = g_RenderVertexBuffer[1].u;
  g_RenderVertexBuffer[3].u = g_RenderVertexBuffer[0].u;
  g_RenderVertexBuffer[3].v = g_RenderVertexBuffer[2].v;
  core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
            (g_CDemonSetPtr,&local_88,(CVector3i *)&DAT_02d8339c,0,4);
  fVar1 = in_stack_00000004[4].z;
  if (fVar1 != 0.0) {
    if ((uint)fVar1 < 2) {
      local_28 = 0;
      local_20 = 0x7f80;
      goto LAB_004ebdb7;
    }
    if (fVar1 == 2.8026e-45) {
      local_20 = 0;
      local_28 = 0;
      goto LAB_004ebdb7;
    }
  }
  local_28 = 0x2000;
  local_20 = 0;
LAB_004ebdb7:
  local_24 = 0;
  iVar3 = 0;
  do {
    lVar2 = (longlong)local_28 * (longlong)*(int *)((int)&g_RenderVertexBuffer[0].light + iVar3);
    *(uint *)((int)&g_RenderVertexBuffer[0].light + iVar3) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    lVar2 = (longlong)local_20 * (longlong)*(int *)((int)&g_RenderVertexBuffer[0].color + iVar3);
    *(uint *)((int)&g_RenderVertexBuffer[0].color + iVar3) =
         (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
    iVar4 = iVar3 + 0x30;
    *(undefined4 *)((int)&g_RenderVertexBuffer[0].fog + iVar3) = 0;
    iVar3 = iVar4;
  } while (iVar4 != 0xc0);
  (*(code *)((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr,0xffff - (int)g_PerspectiveReciprocal);
  engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
            (g_CDemonRendererPtr,&DAT_02d83368);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  CStack_e8.x = in_stack_00000004->x;
  CStack_e8.y = in_stack_00000004->y;
  CStack_e8.z = in_stack_00000004->z;
  fStack_70 = in_stack_00000004[1].x;
  fStack_6c = in_stack_00000004[1].y;
  iVar3 = 0;
  fStack_f0 = 1.0;
  fStack_68 = in_stack_00000004[1].z;
  fStack_ec = 0.025;
  do {
    fStack_ec = fStack_ec * (float)DOUBLE_0062e2ea;
    fStack_f0 = (float)DOUBLE_0062e2ea * fStack_f0;
    fStack_a0 = fStack_70 * fStack_ec;
    fStack_6c = fStack_6c - fStack_ec * in_stack_00000004[2].y;
    fStack_98 = fStack_68 * fStack_ec;
    fStack_9c = fStack_6c * fStack_ec;
    CStack_e8.x = CStack_e8.x - fStack_a0;
    CStack_e8.z = CStack_e8.z - fStack_98;
    CStack_e8.y = CStack_e8.y - fStack_9c;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,&CStack_e8);
    engine_drender_cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
              (g_CDemonRendererPtr,(CVector3i *)&DAT_02d83390,(CVector3i *)0x0);
    local_4c = fStack_f0 * (float)DOUBLE_0062e2f2;
    local_44 = 0;
    CStack_dc.x = (int)ROUND(local_4c * _DAT_0065f024);
    CStack_dc.y = (int)ROUND(local_4c * _DAT_0065f024);
    CStack_dc.z = (int)ROUND(_DAT_0065f024 * 0.0);
    local_48 = local_4c;
    fStack_18 = local_4c;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&CStack_dc);
    local_4c = fStack_f0 * (float)DOUBLE_0062e2fa;
    local_44 = 0;
    local_48 = fStack_18;
    CStack_ac.x = (int)ROUND(local_4c * _DAT_0065f024);
    CStack_ac.y = (int)ROUND(fStack_18 * _DAT_0065f024);
    CStack_ac.z = (int)ROUND(_DAT_0065f024 * 0.0);
    fStack_1c = local_4c;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_ac);
    local_4c = fStack_1c;
    local_48 = fStack_1c;
    local_44 = 0;
    CStack_64.x = (int)ROUND(fStack_1c * _DAT_0065f024);
    CStack_64.y = (int)ROUND(fStack_1c * _DAT_0065f024);
    CStack_64.z = (int)ROUND(_DAT_0065f024 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&CStack_64);
    local_4c = fStack_18;
    local_44 = 0;
    local_48 = fStack_1c;
    CStack_c4.x = (int)ROUND(fStack_18 * _DAT_0065f024);
    CStack_c4.y = (int)ROUND(fStack_1c * _DAT_0065f024);
    CStack_c4.z = (int)ROUND(_DAT_0065f024 * 0.0);
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&CStack_c4);
    local_88.x = (int)ROUND(CStack_e8.x * _DAT_0065f024);
    local_88.y = (int)ROUND(CStack_e8.y * _DAT_0065f024);
    local_88.z = (int)ROUND(CStack_e8.z * _DAT_0065f024);
    core_set_cpp_CDemonSet_computeLighting_FUN_0056e110
              (g_CDemonSetPtr,&local_88,(CVector3i *)&DAT_02d8339c,0,4);
    iVar4 = 0;
    do {
      lVar2 = (longlong)local_28 * (longlong)*(int *)((int)&g_RenderVertexBuffer[0].light + iVar4);
      *(uint *)((int)&g_RenderVertexBuffer[0].light + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      lVar2 = (longlong)local_20 * (longlong)*(int *)((int)&g_RenderVertexBuffer[0].color + iVar4);
      *(uint *)((int)&g_RenderVertexBuffer[0].color + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar5 = iVar4 + 0x30;
      lVar2 = (longlong)local_24 * (longlong)*(int *)((int)&g_RenderVertexBuffer[0].fog + iVar4);
      *(uint *)((int)&g_RenderVertexBuffer[0].fog + iVar4) =
           (uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10;
      iVar4 = iVar5;
    } while (iVar5 != 0xc0);
    (*(code *)((g_CurrentSceneCamera->base).vtable)->setupPerspectiveAndFog)();
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
              (g_CDemonRendererPtr,0xffff - (int)g_PerspectiveReciprocal);
    engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
              (g_CDemonRendererPtr,&DAT_02d83368);
    iVar3 = iVar3 + 1;
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  } while (iVar3 < 3);
  return;
}


// Assembly code:
// 004ebac0: PUSH EBX
//   Label: core_gore.cpp_FUN_004ebac0
// 004ebac1: PUSH ESI
// 004ebac2: PUSH EDI
// 004ebac3: PUSH EBP
// 004ebac4: MOV EBP,ESP
// 004ebac6: SUB ESP,0xe4
// 004ebacc: AND ESP,0xfffffff8
// 004ebacf: MOV EDI,dword ptr [EBP + 0x14]
// 004ebad2: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ebad8: LEA EBX,[ESP + 0xa0]
// 004ebadf: MOV EAX,EDI
// 004ebae1: MOV ESI,dword ptr [ESI]
//   XREF to: 02c6d578 (READ)
// 004ebae3: FLD float ptr [EAX]
// 004ebae5: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ebaeb: FISTP dword ptr [EBX]
// 004ebaed: FLD float ptr [EAX + 0x4]
// 004ebaf0: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ebaf6: FISTP dword ptr [EBX + 0x4]
// 004ebaf9: FLD float ptr [EAX + 0x8]
// 004ebafc: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ebb02: FISTP dword ptr [EBX + 0x8]
// 004ebb05: LEA EAX,[ESP + 0xa0]
// 004ebb0c: PUSH EAX
// 004ebb0d: PUSH ESI
// 004ebb0e: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 004ebb13: MOV AH,byte ptr [ESI + 0x13]
// 004ebb16: ADD ESP,0x8
// 004ebb19: TEST AH,0x80
// 004ebb1c: JZ 0x004ebb25
//   XREF to: 004ebb25 (CONDITIONAL_JUMP)
// 004ebb1e: MOV ESP,EBP
//   Label: LAB_004ebb1e
// 004ebb20: POP EBP
// 004ebb21: POP EDI
// 004ebb22: POP ESI
// 004ebb23: POP EBX
// 004ebb24: RET
// 004ebb25: PUSH EDI
//   Label: LAB_004ebb25
// 004ebb26: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ebb2c: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004ebb2d: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004ebb32: ADD ESP,0x8
// 004ebb35: PUSH 0x0
// 004ebb37: PUSH 0x2d83390
//   XREF to: 02d83390 (DATA)
// 004ebb3c: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ebb42: MOV EBX,0xbdcccccd
// 004ebb47: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004ebb48: MOV ESI,EBX
// 004ebb4a: CALL engine_drender.cpp_CDemonRenderer_applyDirectTransform_FUN_0048c4a0
//   XREF to: 0048c4a0 (UNCONDITIONAL_CALL)
// 004ebb4f: ADD ESP,0xc
// 004ebb52: XOR EAX,EAX
// 004ebb54: MOV dword ptr [ESP + 0xac],EBX
// 004ebb5b: MOV dword ptr [ESP + 0xb0],EBX
// 004ebb62: MOV dword ptr [ESP + 0xb4],EAX
// 004ebb69: LEA EBX,[ESP + 0x40]
// 004ebb6d: LEA EAX,[ESP + 0xac]
// 004ebb74: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ebb7a: FLD float ptr [EAX]
// 004ebb7c: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ebb82: FISTP dword ptr [EBX]
// 004ebb84: FLD float ptr [EAX + 0x4]
// 004ebb87: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ebb8d: FISTP dword ptr [EBX + 0x4]
// 004ebb90: FLD float ptr [EAX + 0x8]
// 004ebb93: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ebb99: FISTP dword ptr [EBX + 0x8]
// 004ebb9c: LEA EAX,[ESP + 0x40]
// 004ebba0: PUSH EAX
// 004ebba1: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004ebba3: PUSH EAX
// 004ebba4: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ebba9: MOV EDX,0x3dcccccd
// 004ebbae: LEA EAX,[ESP + 0xb4]
// 004ebbb5: ADD ESP,0x8
// 004ebbb8: MOV ECX,ESI
// 004ebbba: XOR EBX,EBX
// 004ebbbc: MOV dword ptr [ESP + 0xac],EDX
// 004ebbc3: MOV dword ptr [ESP + 0xb0],ECX
// 004ebbca: MOV dword ptr [ESP + 0xb4],EBX
// 004ebbd1: LEA EBX,[ESP + 0x7c]
// 004ebbd5: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ebbdb: FLD float ptr [EAX]
// 004ebbdd: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ebbe3: FISTP dword ptr [EBX]
// 004ebbe5: FLD float ptr [EAX + 0x4]
// 004ebbe8: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ebbee: FISTP dword ptr [EBX + 0x4]
// 004ebbf1: FLD float ptr [EAX + 0x8]
// 004ebbf4: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ebbfa: FISTP dword ptr [EBX + 0x8]
// 004ebbfd: LEA EAX,[ESP + 0x7c]
// 004ebc01: PUSH EAX
// 004ebc02: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004ebc04: ADD EAX,0x30
// 004ebc07: PUSH EAX
// 004ebc08: MOV ESI,0x3dcccccd
// 004ebc0d: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ebc12: LEA EBX,[ESP + 0x30]
// 004ebc16: LEA EAX,[ESP + 0xb4]
// 004ebc1d: ADD ESP,0x8
// 004ebc20: XOR EDX,EDX
// 004ebc22: MOV dword ptr [ESP + 0xac],ESI
// 004ebc29: MOV dword ptr [ESP + 0xb0],ESI
// 004ebc30: MOV dword ptr [ESP + 0xb4],EDX
// 004ebc37: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ebc3d: FLD float ptr [EAX]
// 004ebc3f: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ebc45: FISTP dword ptr [EBX]
// 004ebc47: FLD float ptr [EAX + 0x4]
// 004ebc4a: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ebc50: FISTP dword ptr [EBX + 0x4]
// 004ebc53: FLD float ptr [EAX + 0x8]
// 004ebc56: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ebc5c: FISTP dword ptr [EBX + 0x8]
// 004ebc5f: LEA EAX,[ESP + 0x28]
// 004ebc63: PUSH EAX
// 004ebc64: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004ebc66: ADD EAX,0x60
// 004ebc69: PUSH EAX
// 004ebc6a: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ebc6f: MOV ECX,0xbdcccccd
// 004ebc74: LEA EBX,[ESP + 0x6c]
// 004ebc78: LEA EAX,[ESP + 0xb4]
// 004ebc7f: ADD ESP,0x8
// 004ebc82: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ebc88: MOV dword ptr [ESP + 0xb0],ESI
// 004ebc8f: XOR ESI,ESI
// 004ebc91: MOV dword ptr [ESP + 0xac],ECX
// 004ebc98: MOV dword ptr [ESP + 0xb4],ESI
// 004ebc9f: FLD float ptr [EAX]
// 004ebca1: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ebca7: FISTP dword ptr [EBX]
// 004ebca9: FLD float ptr [EAX + 0x4]
// 004ebcac: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ebcb2: FISTP dword ptr [EBX + 0x4]
// 004ebcb5: FLD float ptr [EAX + 0x8]
// 004ebcb8: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ebcbe: FISTP dword ptr [EBX + 0x8]
// 004ebcc1: LEA EAX,[ESP + 0x64]
// 004ebcc5: PUSH EAX
// 004ebcc6: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 004ebcc8: ADD EAX,0x90
// 004ebccd: PUSH EAX
// 004ebcce: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 004ebcd3: ADD ESP,0x8
// 004ebcd6: PUSH 0x67b9b0
//   XREF to: 0067b9b0 (DATA)
// 004ebcdb: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004ebce0: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004ebce1: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 004ebce6: MOV EAX,dword ptr [EDI + 0x3c]
// 004ebce9: AND EAX,0x3
// 004ebcec: SHL EAX,0x16
// 004ebcef: LEA EDX,[EAX + 0x80000]
// 004ebcf5: MOV EAX,dword ptr [EDI + 0x3c]
// 004ebcf8: LEA EBX,[ESP + 0x78]
// 004ebcfc: SAR EAX,0x2
// 004ebcff: ADD ESP,0x8
// 004ebd02: AND EAX,0x3
// 004ebd05: MOV dword ptr [0x0068802c],EDX
//   XREF to: 0068802c (WRITE)
// 004ebd0b: SHL EAX,0x16
// 004ebd0e: LEA ECX,[EDX + 0x300000]
// 004ebd14: ADD EAX,0x80000
// 004ebd19: MOV dword ptr [0x0068805c],ECX
//   XREF to: 0068805c (WRITE)
// 004ebd1f: MOV [0x00688030],EAX
//   XREF to: 00688030 (WRITE)
// 004ebd24: MOV [0x00688060],EAX
//   XREF to: 00688060 (WRITE)
// 004ebd29: ADD EAX,0x300000
// 004ebd2e: MOV dword ptr [0x0068808c],ECX
//   XREF to: 0068808c (WRITE)
// 004ebd34: MOV [0x00688090],EAX
//   XREF to: 00688090 (WRITE)
// 004ebd39: MOV [0x006880c0],EAX
//   XREF to: 006880c0 (WRITE)
// 004ebd3e: MOV EAX,EDI
// 004ebd40: MOV dword ptr [0x006880bc],EDX
//   XREF to: 006880bc (WRITE)
// 004ebd46: FLD float ptr [EAX]
// 004ebd48: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ebd4e: FISTP dword ptr [EBX]
// 004ebd50: FLD float ptr [EAX + 0x4]
// 004ebd53: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ebd59: FISTP dword ptr [EBX + 0x4]
// 004ebd5c: FLD float ptr [EAX + 0x8]
// 004ebd5f: FMUL float ptr [0x0065f024]
//   XREF to: 0065f024 (READ)
// 004ebd65: FISTP dword ptr [EBX + 0x8]
// 004ebd68: PUSH 0x4
// 004ebd6a: PUSH ESI
// 004ebd6b: PUSH 0x2d8339c
//   XREF to: 02d8339c (DATA)
// 004ebd70: LEA EAX,[ESP + 0x7c]
// 004ebd74: PUSH EAX
// 004ebd75: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004ebd7b: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004ebd7c: LEA EBX,[ESP + 0xec]
// 004ebd83: CALL core_set.cpp_CDemonSet_computeLighting_FUN_0056e110
//   XREF to: 0056e110 (UNCONDITIONAL_CALL)
// 004ebd88: LEA ECX,[ESP + 0xe4]
// 004ebd8f: LEA EDX,[ESP + 0xe8]
// 004ebd96: MOV EAX,dword ptr [EDI + 0x38]
// 004ebd99: ADD ESP,0x14
// 004ebd9c: CMP EAX,0x1
// 004ebd9f: JNC 0x004ec275
//   XREF to: 004ec275 (CONDITIONAL_JUMP)
// 004ebda5: MOV dword ptr [ECX],0x2000
//   Label: LAB_004ebda5
// 004ebdab: MOV dword ptr [EBX],0x0
// 004ebdb1: MOV dword ptr [EDX],0x0
// 004ebdb7: XOR ECX,ECX
//   Label: LAB_004ebdb7
// 004ebdb9: MOV EAX,dword ptr [ESP + 0xd0]
//   Label: LAB_004ebdb9
// 004ebdc0: MOV EDX,dword ptr [ECX + 0x688034]
//   XREF to: 00688034 (READ)
//   XREF to: 00688064 (READ)
// 004ebdc6: IMUL EDX
// 004ebdc8: SHRD EAX,EDX,0x10
// 004ebdcc: MOV EDX,dword ptr [ECX + 0x688038]
//   XREF to: 00688038 (READ)
//   XREF to: 00688068 (READ)
// 004ebdd2: MOV dword ptr [ECX + 0x688034],EAX
//   XREF to: 00688034 (WRITE)
//   XREF to: 00688064 (WRITE)
// 004ebdd8: MOV EAX,dword ptr [ESP + 0xd8]
// 004ebddf: IMUL EDX
// 004ebde1: SHRD EAX,EDX,0x10
// 004ebde5: MOV EDX,dword ptr [ECX + 0x68803c]
//   XREF to: 0068803c (READ)
//   XREF to: 0068806c (READ)
// 004ebdeb: MOV dword ptr [ECX + 0x688038],EAX
//   XREF to: 00688038 (WRITE)
//   XREF to: 00688068 (WRITE)
// 004ebdf1: MOV EAX,dword ptr [ESP + 0xd4]
// 004ebdf8: ADD ECX,0x30
// 004ebdfb: IMUL EDX
// 004ebdfd: SHRD EAX,EDX,0x10
// 004ebe01: MOV dword ptr [ECX + 0x68800c],EAX
//   XREF to: 0068803c (WRITE)
//   XREF to: 0068806c (WRITE)
// 004ebe07: CMP ECX,0xc0
// 004ebe0d: JNZ 0x004ebdb9
//   XREF to: 004ebdb9 (CONDITIONAL_JUMP)
// 004ebe0f: PUSH 0x0
// 004ebe11: MOV EAX,[0x00823a74]
//   XREF to: 00823a74 (READ)
// 004ebe16: PUSH EDI
// 004ebe17: MOV EDX,dword ptr [EAX + 0x3c]
// 004ebe1a: PUSH EAX
// 004ebe1b: CALL dword ptr [EDX + 0x4]
// 004ebe1e: MOV EAX,0xffff
// 004ebe23: MOV EBX,dword ptr [0x02d051f4]
//   XREF to: 02d051f4 (READ)
// 004ebe29: ADD ESP,0xc
// 004ebe2c: SUB EAX,EBX
// 004ebe2e: PUSH EAX
// 004ebe2f: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ebe35: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004ebe36: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 004ebe3b: ADD ESP,0x8
// 004ebe3e: PUSH 0x2d83368
//   XREF to: 02d83368 (DATA)
// 004ebe43: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 004ebe48: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 004ebe49: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
// 004ebe4e: ADD ESP,0x8
// 004ebe51: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004ebe57: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004ebe58: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004ec23c: MOV EDX,0x7f80
//   Label: LAB_004ec23c
// 004ec241: MOV dword ptr [ESP + 0xd4],ESI
// 004ec248: MOV dword ptr [ESP + 0xd0],ESI
// 004ec24f: MOV dword ptr [ESP + 0xd8],EDX
// 004ec256: JMP 0x004ebdb7
//   XREF to: 004ebdb7 (UNCONDITIONAL_JUMP)
// 004ec25b: MOV dword ptr [ESP + 0xd8],ESI
//   Label: LAB_004ec25b
// 004ec262: MOV dword ptr [ESP + 0xd4],ESI
// 004ec269: MOV dword ptr [ESP + 0xd0],ESI
// 004ec270: JMP 0x004ebdb7
//   XREF to: 004ebdb7 (UNCONDITIONAL_JUMP)
// 004ec275: JBE 0x004ec23c
//   Label: LAB_004ec275
//   XREF to: 004ec23c (CONDITIONAL_JUMP)
// 004ec277: CMP EAX,0x2
// 004ec27a: JZ 0x004ec25b
//   XREF to: 004ec25b (CONDITIONAL_JUMP)
// 004ec27c: JMP 0x004ebda5
//   XREF to: 004ebda5 (UNCONDITIONAL_JUMP)
