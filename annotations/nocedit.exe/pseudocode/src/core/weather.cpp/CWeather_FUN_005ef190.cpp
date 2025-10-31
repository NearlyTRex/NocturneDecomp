// Name: core_weather.cpp_CWeather_FUN_005ef190
// Address: 005ef190
// Address Range: [[005ef190, 005ef5f0] [005ef5f4, 005ef8b6]]
// Convention: unknown
// Signature: undefined core_weather.cpp_CWeather_FUN_005ef190()
// Cross-references:
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c567 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00665700
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   SMRGLTextureBasic DAT_00684900
//   SMRGLTextureBasic DAT_00684918
//   SMRGLTextureBasic DAT_00684930
//   undefined4 DAT_00780000
//   undefined4 DAT_00f80000
//   CDemonRenderer g_CDemonRendererInstance
//   CDemonSet g_CDemonSetInstance
//   CVector3f[200] DAT_03f95df8
//   undefined4 DAT_03f95dfc
//   undefined4 DAT_03f95e00
//   undefined4 DAT_03f95e04
//   undefined4 DAT_03f95e08
//   undefined4 DAT_03f95e0c
//   undefined4 DAT_03f9675c
//   undefined1 DAT_03f96a78
//   undefined1 DAT_03f96a79
// Function calls:
//   core_set.cpp_CDemonSet_CallLightVertexColor_FUN_0056e110
//   core_set.cpp_CDemonSet_FUN_0056d380
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
//   engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   wincore_windll.cpp_transformPoint_FUN_005b5a25

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_weather.cpp_CWeather_FUN_005ef190(CWeather* param_1) */

void core_weather_cpp_CWeather_FUN_005ef190(void)

{
  SRenderVertex *vertex_ptr;
  CDemonRenderer *pCVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  float fVar6;
  CVector3f *world_position;
  uint uVar7;
  int iVar8;
  float unaff_retaddr;
  int *in_stack_00000004;
  int *in_stack_00000008;
  int *in_stack_00000010;
  float in_stack_00000014;
  int *in_stack_00000018;
  int *in_stack_0000002c;
  undefined1 local_b8 [24];
  int local_a0;
  int local_9c;
  CVector3i local_90 [2];
  CVector3i local_78;
  CVector3i local_64;
  int local_58;
  int local_54;
  CVector3i local_3c;
  CVector3i local_2c;
  CVector3f local_18;
  float fVar9;
  
  if (*in_stack_00000004 == 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
            (g_CDemonRendererPtr,(float *)(local_b8 + 8));
  if (*in_stack_00000008 == 1) {
    local_b8._12_4_ = 0.0;
  }
  if (*in_stack_00000008 == 1) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_00684900)
    ;
    pCVar1 = g_CDemonRendererPtr;
    g_CDemonRendererPtr->vertex_buffer_ptr->u = 7.34684e-40;
    pCVar1->vertex_buffer_ptr->v = 7.34684e-40;
    pCVar1->vertex_buffer_ptr[1].u = 1.102026e-38;
    pCVar1->vertex_buffer_ptr[1].v = 7.34684e-40;
    pCVar1->vertex_buffer_ptr[2].u = 1.102026e-38;
    pCVar1->vertex_buffer_ptr[2].v = 2.2775203e-38;
    pCVar1->vertex_buffer_ptr[3].u = 7.34684e-40;
    pCVar1->vertex_buffer_ptr[3].v = 2.2775203e-38;
  }
  else {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_00684930)
    ;
  }
  core_set_cpp_CDemonSet_FUN_0056d380(g_CDemonSetPtr);
  fVar9 = 0.1;
  if (*in_stack_00000010 == 1) {
    fVar9 = -0.4;
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  world_position = DAT_03f95df8;
  uVar7 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0x8000);
  do {
    vertex_ptr = g_CDemonRendererPtr->vertex_buffer_ptr;
    local_3c.x = (int)ROUND(world_position->x * _DAT_00665700);
    local_3c.y = (int)ROUND(world_position->y * _DAT_00665700);
    local_3c.z = (int)ROUND(world_position->z * _DAT_00665700);
    wincore_windll_cpp_transformPoint_FUN_005b5a25(&vertex_ptr->projected_vertex,&local_3c);
    iVar2 = engine_drender_cpp_CDemonRenderer_depthTest_FUN_0048dc50(g_CDemonRendererPtr,vertex_ptr)
    ;
    if (iVar2 != 0) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr,world_position);
      engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                (g_CDemonRendererPtr,local_90,(CVector3i *)0x0);
      local_64.z = (int)ROUND(world_position->x * _DAT_00665700);
      local_58 = (int)ROUND(world_position->y * _DAT_00665700);
      local_54 = (int)ROUND(world_position->z * _DAT_00665700);
      core_set_cpp_CDemonSet_CallLightVertexColor_FUN_0056e110(g_CDemonSetPtr);
      pCVar1 = g_CDemonRendererPtr;
      if (*in_stack_0000002c == 2) {
        iVar2 = (uVar7 & 3) * 0x400000;
        fVar4 = (float)(iVar2 + 0x80000);
        iVar5 = ((int)(uVar7 & 0xc) >> 2) * 0x400000;
        g_CDemonRendererPtr->vertex_buffer_ptr->u = fVar4;
        fVar6 = (float)(iVar5 + 0x80000);
        pCVar1->vertex_buffer_ptr->v = fVar6;
        fVar3 = (float)(iVar2 + 0x380000);
        pCVar1->vertex_buffer_ptr[1].u = fVar3;
        pCVar1->vertex_buffer_ptr[1].v = fVar6;
        pCVar1->vertex_buffer_ptr[2].u = fVar3;
        fVar6 = (float)(iVar5 + 0x380000);
        pCVar1->vertex_buffer_ptr[2].v = fVar6;
        pCVar1->vertex_buffer_ptr[3].u = fVar4;
        pCVar1->vertex_buffer_ptr[3].v = fVar6;
      }
      local_18.z = in_stack_00000014;
      local_64.x = (int)ROUND(in_stack_00000014 * _DAT_00665700);
      local_64.y = (int)ROUND(-(float)in_stack_00000018 * _DAT_00665700);
      local_64.z = (int)ROUND(_DAT_00665700 * 0.0);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_64);
      local_3c.x = (int)ROUND(--(float)in_stack_00000018 * _DAT_00665700);
      local_3c.y = (int)ROUND(_DAT_00665700 * 0.0);
      local_3c.z = (int)ROUND(fVar9 * _DAT_00665700);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_3c);
      local_2c.x = (int)ROUND(_DAT_00665700 * 0.0);
      local_2c.y = (int)ROUND(-fVar9 * _DAT_00665700);
      local_2c.z = (int)ROUND(unaff_retaddr * _DAT_00665700);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_2c);
      fVar9 = --fVar9;
      local_64.x = (int)ROUND(fVar9 * _DAT_00665700);
      local_64.y = (int)ROUND(unaff_retaddr * _DAT_00665700);
      local_64.z = (int)ROUND((float)in_stack_00000004 * _DAT_00665700);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_64);
      engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)local_b8);
      engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    }
    uVar7 = uVar7 + 1;
    world_position = world_position + 1;
  } while ((int)uVar7 < 200);
  if (*in_stack_00000018 == 1) {
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_00684918)
    ;
    pCVar1 = g_CDemonRendererPtr;
    g_CDemonRendererPtr->vertex_buffer_ptr->u = 7.34684e-40;
    pCVar1->vertex_buffer_ptr->v = 7.34684e-40;
    pCVar1->vertex_buffer_ptr[1].u = 1.102026e-38;
    pCVar1->vertex_buffer_ptr[1].v = 7.34684e-40;
    pCVar1->vertex_buffer_ptr[2].u = 1.102026e-38;
    pCVar1->vertex_buffer_ptr[2].v = 2.2775203e-38;
    iVar5 = 0;
    pCVar1->vertex_buffer_ptr[3].u = 7.34684e-40;
    iVar2 = 0;
    iVar8 = 0x3f95dfc;
    pCVar1->vertex_buffer_ptr[3].v = 2.2775203e-38;
    do {
      if ((&DAT_03f96a78)[iVar5] != '\0') {
        local_18.x = DAT_03f95df8[iVar5].x;
        local_18.z = *(float *)(iVar8 + 4);
        local_18.y = *(float *)((int)&DAT_03f96758 + iVar2);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,&local_18);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr,(CVector3i *)local_b8,(CVector3i *)0x0);
        local_b8._0_4_ = 0.0;
        local_78.x = (int)ROUND(_DAT_00665700 * 0.2);
        local_78.y = (int)ROUND(_DAT_00665700 * 0.0);
        local_78.z = (int)ROUND(_DAT_00665700 * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_78);
        local_b8._20_4_ = (undefined4)ROUND(_DAT_00665700 * -0.0);
        local_a0 = (int)ROUND((float)local_b8._0_4_ * _DAT_00665700);
        local_9c = (int)ROUND((float)local_b8._4_4_ * _DAT_00665700);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,
                   (CVector3i *)(local_b8 + 0x14));
        local_b8._4_4_ = 0.4;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                   (CVector3i *)&stack0xffffff3c);
        local_b8._4_4_ = -(float)local_b8._4_4_;
        local_3c.x = (int)ROUND((float)local_b8._4_4_ * _DAT_00665700);
        local_3c.y = (int)ROUND((float)local_b8._8_4_ * _DAT_00665700);
        local_3c.z = (int)ROUND((float)local_b8._12_4_ * _DAT_00665700);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_3c);
        engine_drender_cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff1c);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
      }
      iVar8 = iVar8 + 0xc;
      iVar5 = iVar5 + 1;
      iVar2 = iVar2 + 4;
    } while (iVar5 < 200);
  }
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}


// Assembly code:
// 005ef190: PUSH ESI
//   Label: core_weather.cpp_CWeather_FUN_005ef190
// 005ef191: PUSH EDI
// 005ef192: PUSH EBP
// 005ef193: SUB ESP,0xe4
// 005ef199: MOV EAX,dword ptr [ESP + 0xf4]
// 005ef1a0: CMP dword ptr [EAX],0x0
// 005ef1a3: JNZ 0x005ef1af
//   XREF to: 005ef1af (CONDITIONAL_JUMP)
// 005ef1a5: ADD ESP,0xe4
// 005ef1ab: POP EBP
// 005ef1ac: POP EDI
// 005ef1ad: POP ESI
// 005ef1ae: RET
// 005ef1af: LEA EAX,[ESP + 0x40]
//   Label: LAB_005ef1af
// 005ef1b3: PUSH EAX
// 005ef1b4: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef1ba: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005ef1bb: CALL engine_drender.cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
//   XREF to: 0048c800 (UNCONDITIONAL_CALL)
// 005ef1c0: ADD ESP,0x8
// 005ef1c3: MOV EAX,dword ptr [ESP + 0xf4]
// 005ef1ca: CMP dword ptr [EAX],0x1
// 005ef1cd: JNZ 0x005ef1d5
//   XREF to: 005ef1d5 (CONDITIONAL_JUMP)
// 005ef1cf: XOR ESI,ESI
// 005ef1d1: MOV dword ptr [ESP + 0x40],ESI
// 005ef1d5: MOV EAX,dword ptr [ESP + 0xf4]
//   Label: LAB_005ef1d5
// 005ef1dc: CMP dword ptr [EAX],0x1
// 005ef1df: JNZ 0x005ef6bb
//   XREF to: 005ef6bb (CONDITIONAL_JUMP)
// 005ef1e5: PUSH 0x684900
//   XREF to: 00684900 (DATA)
// 005ef1ea: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef1ef: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 005ef1f0: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 005ef1f5: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef1fa: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef1fc: MOV dword ptr [EDX + 0x18],0x80000
// 005ef203: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef205: MOV dword ptr [EDX + 0x1c],0x80000
// 005ef20c: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef20e: MOV dword ptr [EDX + 0x48],0x780000
//   XREF to: 00780000 (DATA)
// 005ef215: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef217: MOV dword ptr [EDX + 0x4c],0x80000
// 005ef21e: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef220: MOV dword ptr [EDX + 0x78],0x780000
//   XREF to: 00780000 (DATA)
// 005ef227: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef229: MOV dword ptr [EDX + 0x7c],0xf80000
//   XREF to: 00f80000 (DATA)
// 005ef230: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef232: MOV dword ptr [EDX + 0xa8],0x80000
// 005ef23c: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef23e: ADD ESP,0x8
// 005ef241: MOV dword ptr [EAX + 0xac],0xf80000
//   XREF to: 00f80000 (DATA)
// 005ef24b: PUSH 0x0
//   Label: LAB_005ef24b
// 005ef24d: PUSH 0x0
// 005ef24f: PUSH 0x0
// 005ef251: PUSH 0x0
// 005ef253: PUSH 0x0
// 005ef255: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005ef25b: PUSH EDX
//   XREF to: 03114278 (DATA)
// 005ef25c: CALL core_set.cpp_CDemonSet_FUN_0056d380
//   XREF to: 0056d380 (UNCONDITIONAL_CALL)
// 005ef261: ADD ESP,0x18
// 005ef264: MOV ECX,0x3dcccccd
// 005ef269: MOV EAX,dword ptr [ESP + 0xf4]
// 005ef270: MOV dword ptr [ESP + 0xdc],ECX
// 005ef277: MOV ESI,dword ptr [EAX]
// 005ef279: MOV dword ptr [ESP + 0xe0],ECX
// 005ef280: CMP ESI,0x1
// 005ef283: JZ 0x005ef6d4
//   XREF to: 005ef6d4 (CONDITIONAL_JUMP)
// 005ef289: PUSH EBX
//   Label: LAB_005ef289
// 005ef28a: MOV EAX,0x4
// 005ef28f: MOV EBP,0x1
// 005ef294: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef29a: XOR EDX,EDX
// 005ef29c: MOV dword ptr [ESP + 0x8],EAX
// 005ef2a0: MOV dword ptr [ESP + 0x18],EDX
// 005ef2a4: MOV dword ptr [ESP + 0x14],EDX
// 005ef2a8: MOV dword ptr [ESP + 0x10],EDX
// 005ef2ac: MOV dword ptr [ESP + 0xc],EDX
// 005ef2b0: MOV dword ptr [ESP + 0x1c],EDX
// 005ef2b4: MOV dword ptr [ESP + 0x20],EBP
// 005ef2b8: PUSH EBP
// 005ef2b9: MOV EAX,0x2
// 005ef2be: MOV EDX,0x3
// 005ef2c3: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005ef2c4: MOV dword ptr [ESP + 0x2c],EAX
// 005ef2c8: MOV dword ptr [ESP + 0x30],EDX
// 005ef2cc: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 005ef2d1: ADD ESP,0x8
// 005ef2d4: PUSH 0x8000
// 005ef2d9: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef2df: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 005ef2e0: MOV ESI,0x3f95df8
//   XREF to: 03f95df8 (DATA)
// 005ef2e5: XOR EDI,EDI
// 005ef2e7: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 005ef2ec: ADD ESP,0x8
// 005ef2ef: MOV EBP,dword ptr [0x006703ec]
//   Label: LAB_005ef2ef
//   XREF to: 006703ec (READ)
// 005ef2f5: LEA EBX,[ESP + 0xa4]
// 005ef2fc: MOV EAX,ESI
// 005ef2fe: MOV EBP,dword ptr [EBP]
//   XREF to: 02c6d578 (READ)
// 005ef301: FLD float ptr [EAX]
//   XREF to: 03f95df8 (READ)
//   XREF to: 03f95e04 (READ)
// 005ef303: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef309: FISTP dword ptr [EBX]
// 005ef30b: FLD float ptr [EAX + 0x4]
//   XREF to: 03f95dfc (READ)
//   XREF to: 03f95e08 (READ)
// 005ef30e: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef314: FISTP dword ptr [EBX + 0x4]
// 005ef317: FLD float ptr [EAX + 0x8]
//   XREF to: 03f95e00 (READ)
//   XREF to: 03f95e0c (READ)
// 005ef31a: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef320: FISTP dword ptr [EBX + 0x8]
// 005ef323: LEA EAX,[ESP + 0xa4]
// 005ef32a: PUSH EAX
// 005ef32b: PUSH EBP
// 005ef32c: CALL wincore_windll.cpp_transformPoint_FUN_005b5a25
//   XREF to: 005b5a25 (UNCONDITIONAL_CALL)
// 005ef331: ADD ESP,0x8
// 005ef334: PUSH EBP
// 005ef335: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef33b: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 005ef33c: CALL engine_drender.cpp_CDemonRenderer_depthTest_FUN_0048dc50
//   XREF to: 0048dc50 (UNCONDITIONAL_CALL)
// 005ef341: ADD ESP,0x8
// 005ef344: TEST EAX,EAX
// 005ef346: JZ 0x005ef5f4
//   XREF to: 005ef5f4 (CONDITIONAL_JUMP)
// 005ef34c: PUSH ESI
//   XREF to: 03f95df8 (DATA)
// 005ef34d: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef352: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 005ef353: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 005ef358: ADD ESP,0x8
// 005ef35b: PUSH 0x0
// 005ef35d: LEA EAX,[ESP + 0x48]
// 005ef361: PUSH EAX
// 005ef362: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef368: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005ef369: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 005ef36e: ADD ESP,0xc
// 005ef371: LEA EBX,[ESP + 0x74]
// 005ef375: MOV EAX,ESI
// 005ef377: FLD float ptr [EAX]
//   XREF to: 03f95df8 (READ)
// 005ef379: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef37f: FISTP dword ptr [EBX]
// 005ef381: FLD float ptr [EAX + 0x4]
//   XREF to: 03f95dfc (READ)
// 005ef384: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef38a: FISTP dword ptr [EBX + 0x4]
// 005ef38d: FLD float ptr [EAX + 0x8]
//   XREF to: 03f95e00 (READ)
// 005ef390: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef396: FISTP dword ptr [EBX + 0x8]
// 005ef399: PUSH 0x4
// 005ef39b: PUSH 0x0
// 005ef39d: PUSH 0x0
// 005ef39f: LEA EAX,[ESP + 0x80]
// 005ef3a6: PUSH EAX
// 005ef3a7: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 005ef3ad: PUSH ECX
//   XREF to: 03114278 (DATA)
// 005ef3ae: CALL core_set.cpp_CDemonSet_CallLightVertexColor_FUN_0056e110
//   XREF to: 0056e110 (UNCONDITIONAL_CALL)
// 005ef3b3: ADD ESP,0x14
// 005ef3b6: MOV EAX,dword ptr [ESP + 0xf8]
// 005ef3bd: CMP dword ptr [EAX],0x2
// 005ef3c0: JNZ 0x005ef455
//   XREF to: 005ef455 (CONDITIONAL_JUMP)
// 005ef3c6: MOV EAX,EDI
// 005ef3c8: AND EAX,0x3
// 005ef3cb: SHL EAX,0x16
// 005ef3ce: MOV EBP,EDI
// 005ef3d0: MOV dword ptr [ESP + 0xd4],EAX
// 005ef3d7: AND EBP,0xc
// 005ef3da: MOV EDX,dword ptr [ESP + 0xd4]
// 005ef3e1: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef3e6: SAR EBP,0x2
// 005ef3e9: ADD EDX,0x80000
// 005ef3ef: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef3f1: SHL EBP,0x16
// 005ef3f4: MOV dword ptr [EBX + 0x18],EDX
// 005ef3f7: LEA ECX,[EBP + 0x80000]
// 005ef3fd: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef3ff: MOV dword ptr [ESP + 0xdc],ECX
// 005ef406: MOV dword ptr [EBX + 0x1c],ECX
// 005ef409: MOV ECX,dword ptr [ESP + 0xd4]
// 005ef410: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef412: ADD ECX,0x380000
// 005ef418: MOV dword ptr [EBX + 0x48],ECX
// 005ef41b: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef41d: MOV dword ptr [ESP + 0xd8],ECX
// 005ef424: MOV ECX,dword ptr [ESP + 0xdc]
// 005ef42b: MOV dword ptr [EBX + 0x4c],ECX
// 005ef42e: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef430: MOV ECX,dword ptr [ESP + 0xd8]
// 005ef437: MOV dword ptr [EBX + 0x78],ECX
// 005ef43a: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef43c: ADD EBP,0x380000
// 005ef442: MOV dword ptr [EBX + 0x7c],EBP
// 005ef445: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef447: MOV dword ptr [EBX + 0xa8],EDX
// 005ef44d: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef44f: MOV dword ptr [EAX + 0xac],EBP
// 005ef455: FLD float ptr [ESP + 0xe4]
//   Label: LAB_005ef455
// 005ef45c: MOV EAX,dword ptr [ESP + 0xe0]
// 005ef463: LEA EBX,[ESP + 0x68]
// 005ef467: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef46d: FCHS
// 005ef46f: XOR EBP,EBP
// 005ef471: FSTP float ptr [ESP + 0xc0]
// 005ef478: MOV dword ptr [ESP + 0xbc],EAX
// 005ef47f: LEA EAX,[ESP + 0xbc]
// 005ef486: MOV dword ptr [ESP + 0xc4],EBP
// 005ef48d: FLD float ptr [EAX]
// 005ef48f: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef495: FISTP dword ptr [EBX]
// 005ef497: FLD float ptr [EAX + 0x4]
// 005ef49a: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef4a0: FISTP dword ptr [EBX + 0x4]
// 005ef4a3: FLD float ptr [EAX + 0x8]
// 005ef4a6: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef4ac: FISTP dword ptr [EBX + 0x8]
// 005ef4af: LEA EAX,[ESP + 0x68]
// 005ef4b3: PUSH EAX
// 005ef4b4: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ef4b6: PUSH EAX
// 005ef4b7: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ef4bc: ADD ESP,0x8
// 005ef4bf: MOV AH,byte ptr [ESP + 0xbf]
// 005ef4c6: XOR AH,0x80
// 005ef4c9: LEA EBX,[ESP + 0x8c]
// 005ef4d0: MOV byte ptr [ESP + 0xbf],AH
// 005ef4d7: LEA EAX,[ESP + 0xbc]
// 005ef4de: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef4e4: FLD float ptr [EAX]
// 005ef4e6: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef4ec: FISTP dword ptr [EBX]
// 005ef4ee: FLD float ptr [EAX + 0x4]
// 005ef4f1: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef4f7: FISTP dword ptr [EBX + 0x4]
// 005ef4fa: FLD float ptr [EAX + 0x8]
// 005ef4fd: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef503: FISTP dword ptr [EBX + 0x8]
// 005ef506: LEA EAX,[ESP + 0x8c]
// 005ef50d: PUSH EAX
// 005ef50e: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ef510: ADD EAX,0x30
// 005ef513: PUSH EAX
// 005ef514: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ef519: ADD ESP,0x8
// 005ef51c: MOV DL,byte ptr [ESP + 0xc3]
// 005ef523: LEA EBX,[ESP + 0x98]
// 005ef52a: XOR DL,0x80
// 005ef52d: LEA EAX,[ESP + 0xbc]
// 005ef534: MOV byte ptr [ESP + 0xc3],DL
// 005ef53b: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef541: FLD float ptr [EAX]
// 005ef543: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef549: FISTP dword ptr [EBX]
// 005ef54b: FLD float ptr [EAX + 0x4]
// 005ef54e: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef554: FISTP dword ptr [EBX + 0x4]
// 005ef557: FLD float ptr [EAX + 0x8]
// 005ef55a: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef560: FISTP dword ptr [EBX + 0x8]
// 005ef563: LEA EAX,[ESP + 0x98]
// 005ef56a: PUSH EAX
// 005ef56b: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ef56d: ADD EAX,0x60
// 005ef570: PUSH EAX
// 005ef571: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ef576: ADD ESP,0x8
// 005ef579: MOV DH,byte ptr [ESP + 0xbf]
// 005ef580: LEA EBX,[ESP + 0x5c]
// 005ef584: XOR DH,0x80
// 005ef587: LEA EAX,[ESP + 0xbc]
// 005ef58e: MOV byte ptr [ESP + 0xbf],DH
// 005ef595: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef59b: FLD float ptr [EAX]
// 005ef59d: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef5a3: FISTP dword ptr [EBX]
// 005ef5a5: FLD float ptr [EAX + 0x4]
// 005ef5a8: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef5ae: FISTP dword ptr [EBX + 0x4]
// 005ef5b1: FLD float ptr [EAX + 0x8]
// 005ef5b4: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef5ba: FISTP dword ptr [EBX + 0x8]
// 005ef5bd: LEA EAX,[ESP + 0x5c]
// 005ef5c1: PUSH EAX
// 005ef5c2: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ef5c4: ADD EAX,0x90
// 005ef5c9: PUSH EAX
// 005ef5ca: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ef5cf: ADD ESP,0x8
// 005ef5d2: LEA EAX,[ESP + 0x4]
// 005ef5d6: PUSH EAX
// 005ef5d7: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef5dc: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 005ef5dd: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
// 005ef5e2: ADD ESP,0x8
// 005ef5e5: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef5eb: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005ef5ec: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 005ef5f4: INC EDI
//   Label: LAB_005ef5f4
// 005ef5f5: ADD ESI,0xc
// 005ef5f8: CMP EDI,0xc8
// 005ef5fe: JL 0x005ef2ef
//   XREF to: 005ef2ef (CONDITIONAL_JUMP)
// 005ef604: MOV EAX,dword ptr [ESP + 0xf8]
// 005ef60b: CMP dword ptr [EAX],0x1
// 005ef60e: JNZ 0x005ef69f
//   XREF to: 005ef69f (CONDITIONAL_JUMP)
// 005ef614: PUSH 0x684918
//   XREF to: 00684918 (DATA)
// 005ef619: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef61f: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 005ef620: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 005ef625: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef62a: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef62c: MOV dword ptr [EDX + 0x18],0x80000
// 005ef633: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef635: MOV dword ptr [EDX + 0x1c],0x80000
// 005ef63c: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef63e: MOV dword ptr [EDX + 0x48],0x780000
//   XREF to: 00780000 (DATA)
// 005ef645: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef647: MOV dword ptr [EDX + 0x4c],0x80000
// 005ef64e: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef650: MOV dword ptr [EDX + 0x78],0x780000
//   XREF to: 00780000 (DATA)
// 005ef657: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef659: MOV dword ptr [EDX + 0x7c],0xf80000
//   XREF to: 00f80000 (DATA)
// 005ef660: MOV EDX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef662: MOV EDI,0x3f95df8
//   XREF to: 03f95df8 (DATA)
// 005ef667: XOR ESI,ESI
// 005ef669: MOV dword ptr [EDX + 0xa8],0x80000
// 005ef673: XOR EBP,EBP
// 005ef675: MOV EAX,dword ptr [EAX]
//   XREF to: 02c6d578 (READ)
// 005ef677: ADD EDI,0x4
// 005ef67a: ADD ESP,0x8
// 005ef67d: MOV dword ptr [EAX + 0xac],0xf80000
//   XREF to: 00f80000 (DATA)
// 005ef687: CMP byte ptr [ESI + 0x3f96a78],0x0
//   Label: LAB_005ef687
//   XREF to: 03f96a78 (READ)
//   XREF to: 03f96a79 (READ)
// 005ef68e: JNZ 0x005ef6f1
//   XREF to: 005ef6f1 (CONDITIONAL_JUMP)
// 005ef690: ADD EDI,0xc
//   Label: LAB_005ef690
// 005ef693: INC ESI
// 005ef694: ADD EBP,0x4
// 005ef697: CMP ESI,0xc8
// 005ef69d: JL 0x005ef687
//   XREF to: 005ef687 (CONDITIONAL_JUMP)
// 005ef69f: PUSH 0x0
//   Label: LAB_005ef69f
// 005ef6a1: MOV ESI,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef6a7: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 005ef6a8: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 005ef6ad: ADD ESP,0x8
// 005ef6b0: POP EBX
// 005ef6b1: ADD ESP,0xe4
// 005ef6b7: POP EBP
// 005ef6b8: POP EDI
// 005ef6b9: POP ESI
// 005ef6ba: RET
// 005ef6bb: PUSH 0x684930
//   Label: LAB_005ef6bb
//   XREF to: 00684930 (DATA)
// 005ef6c0: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef6c6: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 005ef6c7: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 005ef6cc: ADD ESP,0x8
// 005ef6cf: JMP 0x005ef24b
//   XREF to: 005ef24b (UNCONDITIONAL_JUMP)
// 005ef6d4: MOV EBP,0xbecccccd
//   Label: LAB_005ef6d4
// 005ef6d9: MOV EDI,0x3d4ccccd
// 005ef6de: MOV dword ptr [ESP + 0xe0],EBP
// 005ef6e5: MOV dword ptr [ESP + 0xdc],EDI
// 005ef6ec: JMP 0x005ef289
//   XREF to: 005ef289 (UNCONDITIONAL_JUMP)
// 005ef6f1: IMUL EAX,ESI,0xc
//   Label: LAB_005ef6f1
// 005ef6f4: ADD EAX,0x3f95df8
//   XREF to: 03f95df8 (DATA)
// 005ef6f9: MOV EAX,dword ptr [EAX]
//   XREF to: 03f95e04 (READ)
// 005ef6fb: MOV dword ptr [ESP + 0xc8],EAX
// 005ef702: MOV EAX,dword ptr [EDI]
//   XREF to: 03f95e08 (READ)
// 005ef704: MOV dword ptr [ESP + 0xcc],EAX
// 005ef70b: MOV EAX,dword ptr [EDI + 0x4]
//   XREF to: 03f95e0c (READ)
// 005ef70e: MOV dword ptr [ESP + 0xd0],EAX
// 005ef715: MOV EAX,dword ptr [EBP + 0x3f96758]
//   XREF to: 03f9675c (READ)
// 005ef71b: MOV dword ptr [ESP + 0xcc],EAX
// 005ef722: LEA EAX,[ESP + 0xc8]
// 005ef729: PUSH EAX
// 005ef72a: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef72f: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 005ef730: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 005ef735: ADD ESP,0x8
// 005ef738: PUSH 0x0
// 005ef73a: LEA EAX,[ESP + 0x48]
// 005ef73e: PUSH EAX
// 005ef73f: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef745: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 005ef746: XOR EBX,EBX
// 005ef748: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 005ef74d: MOV ECX,0x3e4ccccd
// 005ef752: LEA EAX,[ESP + 0x44]
// 005ef756: ADD ESP,0xc
// 005ef759: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef75f: MOV dword ptr [ESP + 0x3c],EBX
// 005ef763: MOV dword ptr [ESP + 0x40],EBX
// 005ef767: LEA EBX,[ESP + 0x80]
// 005ef76e: MOV dword ptr [ESP + 0x38],ECX
// 005ef772: FLD float ptr [EAX]
// 005ef774: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef77a: FISTP dword ptr [EBX]
// 005ef77c: FLD float ptr [EAX + 0x4]
// 005ef77f: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef785: FISTP dword ptr [EBX + 0x4]
// 005ef788: FLD float ptr [EAX + 0x8]
// 005ef78b: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef791: FISTP dword ptr [EBX + 0x8]
// 005ef794: LEA EAX,[ESP + 0x80]
// 005ef79b: PUSH EAX
// 005ef79c: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ef79e: PUSH EAX
// 005ef79f: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ef7a4: ADD ESP,0x8
// 005ef7a7: MOV BH,byte ptr [ESP + 0x3b]
// 005ef7ab: XOR BH,0x80
// 005ef7ae: LEA EAX,[ESP + 0x38]
// 005ef7b2: MOV byte ptr [ESP + 0x3b],BH
// 005ef7b6: LEA EBX,[ESP + 0x50]
// 005ef7ba: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef7c0: FLD float ptr [EAX]
// 005ef7c2: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef7c8: FISTP dword ptr [EBX]
// 005ef7ca: FLD float ptr [EAX + 0x4]
// 005ef7cd: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef7d3: FISTP dword ptr [EBX + 0x4]
// 005ef7d6: FLD float ptr [EAX + 0x8]
// 005ef7d9: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef7df: FISTP dword ptr [EBX + 0x8]
// 005ef7e2: LEA EAX,[ESP + 0x50]
// 005ef7e6: PUSH EAX
// 005ef7e7: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ef7e9: ADD EAX,0x30
// 005ef7ec: PUSH EAX
// 005ef7ed: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ef7f2: MOV EDX,0x3ecccccd
// 005ef7f7: LEA EBX,[ESP + 0x34]
// 005ef7fb: ADD ESP,0x8
// 005ef7fe: LEA EAX,[ESP + 0x38]
// 005ef802: MOV dword ptr [ESP + 0x3c],EDX
// 005ef806: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef80c: FLD float ptr [EAX]
// 005ef80e: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef814: FISTP dword ptr [EBX]
// 005ef816: FLD float ptr [EAX + 0x4]
// 005ef819: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef81f: FISTP dword ptr [EBX + 0x4]
// 005ef822: FLD float ptr [EAX + 0x8]
// 005ef825: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef82b: FISTP dword ptr [EBX + 0x8]
// 005ef82e: LEA EAX,[ESP + 0x2c]
// 005ef832: PUSH EAX
// 005ef833: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ef835: ADD EAX,0x60
// 005ef838: PUSH EAX
// 005ef839: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ef83e: ADD ESP,0x8
// 005ef841: LEA EBX,[ESP + 0xb0]
// 005ef848: MOV CL,byte ptr [ESP + 0x3b]
// 005ef84c: LEA EAX,[ESP + 0x38]
// 005ef850: XOR CL,0x80
// 005ef853: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef859: MOV byte ptr [ESP + 0x3b],CL
// 005ef85d: FLD float ptr [EAX]
// 005ef85f: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef865: FISTP dword ptr [EBX]
// 005ef867: FLD float ptr [EAX + 0x4]
// 005ef86a: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef870: FISTP dword ptr [EBX + 0x4]
// 005ef873: FLD float ptr [EAX + 0x8]
// 005ef876: FMUL float ptr [0x00665700]
//   XREF to: 00665700 (READ)
// 005ef87c: FISTP dword ptr [EBX + 0x8]
// 005ef87f: LEA EAX,[ESP + 0xb0]
// 005ef886: PUSH EAX
// 005ef887: MOV EAX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 005ef889: ADD EAX,0x90
// 005ef88e: PUSH EAX
// 005ef88f: CALL wincore_windll.cpp_transformAndProjectPoint_FUN_005b575c
//   XREF to: 005b575c (UNCONDITIONAL_CALL)
// 005ef894: ADD ESP,0x8
// 005ef897: LEA EAX,[ESP + 0x4]
// 005ef89b: PUSH EAX
// 005ef89c: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef8a2: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 005ef8a3: CALL engine_drender.cpp_CDemonRenderer_renderEnhancedQuality_FUN_0048bcf0
//   XREF to: 0048bcf0 (UNCONDITIONAL_CALL)
// 005ef8a8: ADD ESP,0x8
// 005ef8ab: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 005ef8b1: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 005ef8b2: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
