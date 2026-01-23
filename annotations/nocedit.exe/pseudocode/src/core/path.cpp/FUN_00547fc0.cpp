// Name: core_path.cpp_FUN_00547fc0
// Address: 00547fc0
// Address Range: [[00547fc0, 0054838a]]
// Convention: unknown
// Signature: undefined core_path.cpp_FUN_00547fc0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_path_cpp_FUN_00547fc0(void)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int aiStackY_1040 [1004];
  byte *puVar9;
  CVector3i *pCVar10;
  int iStack_7c;
  CVector3f local_64;
  float local_58;
  float local_54;
  int local_50;
  float local_4c;
  float local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  int local_2c;
  byte *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar3 = 0;
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar2 != 0) {
    return;
  }
  local_64.x = (float)*(int *)(in_stack_00000004 + 0x24) * g_CDemonRaytraceInstance.adjusted_size.x
               + g_CDemonRaytraceInstance.bbox_min.x;
  local_64.y = 0.0;
  local_64.z = (float)*(int *)(in_stack_00000004 + 0x2c) * g_CDemonRaytraceInstance.adjusted_size.z
               + g_CDemonRaytraceInstance.bbox_min.z;
  iStack_7c = 0x548026;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&local_64);
  iStack_7c = 0x54803f;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr2,&DAT_00680bb0);
  DAT_030d4fd0.base.count = 4;
  DAT_030d4fd0.surface_normal.A = 0;
  DAT_030d4fd0.surface_normal.B = 0;
  DAT_030d4fd0.surface_normal.C = 0;
  DAT_030d4fd0.surface_normal.D = 0;
  _DAT_030d4fe8 = 0;
  _DAT_030d4ff4 = 1;
  _DAT_030d5000 = 2;
  _DAT_030d4fec = 0x800000;
  _DAT_030d4ff0 = 0x800000;
  _DAT_030d4ff8 = 0x800000;
  _DAT_030d4ffc = 0x800000;
  _DAT_030d5004 = 0x800000;
  _DAT_030d5008 = 0x800000;
  _DAT_030d5010 = 0x800000;
  _DAT_030d5014 = 0x800000;
  _DAT_030d500c = 3;
  iStack_7c = 0x5480c6;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,0);
  local_20 = in_stack_00000008 << 8;
  local_28 = (byte *)(in_stack_0000000c << 8);
  local_24 = in_stack_00000010 << 8;
  local_58 = 0.0;
  local_2c = 0;
  local_1c = in_stack_00000014 << 8;
  do {
    local_50 = 0;
    local_18 = local_2c + in_stack_00000004;
    do {
      pCVar1 = g_CDemonRendererPtr2;
      if ((-1000 < *(int *)(local_18 + 0x9c70)) && (*(int *)(local_18 + 0x9c70) < 1000)) {
        local_54 = *(float *)(local_18 + 0x30);
        fVar4 = (float10)256;
        fVar5 = (float10)g_CDemonRaytraceInstance.bbox_min.y * fVar4;
        local_4c = local_58;
        (&local_48)[(uint)bVar3 * -2] = (&local_54)[(uint)bVar3 * -2];
        (&local_44)[(uint)bVar3 * -2 + (uint)bVar3 * -2] =
             (&local_50)[(uint)bVar3 * -2 + (uint)bVar3 * -2];
        fVar6 = (float10)(int)local_48 *
                (float10)(g_CDemonRaytraceInstance.adjusted_size.y * 256.0f);
        local_14 = local_44;
        fVar7 = (float10)local_44 *
                (float10)(g_CDemonRaytraceInstance.adjusted_size.z * 256.0f);
        local_40 = g_CDemonRaytraceInstance.adjusted_size.x * 256.0f;
        local_3c = g_CDemonRaytraceInstance.adjusted_size.y * 256.0f;
        local_38 = g_CDemonRaytraceInstance.adjusted_size.z * 256.0f;
        crt_math_c_round_FUN_005fe6b0
                  ((double)((float)(int)local_4c *
                           g_CDemonRaytraceInstance.adjusted_size.x * 256.0f));
        fVar5 = fVar5 + fVar6;
        iStack_7c = 0x548213;
        crt_math_c_round_FUN_005fe6b0((double)fVar7);
        pCVar10 = (CVector3i *)0x548222;
        dVar8 = crt_math_c_round_FUN_005fe6b0((double)(fVar5 + fVar4));
        iVar2 = (int)ROUND(dVar8);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar1->vertex_buffer_ptr->projected_vertex,pCVar10);
        pCVar1 = g_CDemonRendererPtr2;
        local_20 = iStack_7c;
        pCVar10 = (CVector3i *)0x548252;
        crt_math_c_round_FUN_005fe6b0((double)((float)iStack_7c + local_4c));
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar1->vertex_buffer_ptr[1].projected_vertex,pCVar10);
        pCVar1 = g_CDemonRendererPtr2;
        puVar9 = &stack0xffffff80;
        pCVar10 = (CVector3i *)0x548286;
        local_24 = iVar2;
        dVar8 = crt_math_c_round_FUN_005fe6b0((double)((float)iVar2 + local_48));
        iStack_7c = (int)ROUND(dVar8);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar1->vertex_buffer_ptr[2].projected_vertex,pCVar10);
        pCVar1 = g_CDemonRendererPtr2;
        local_28 = puVar9;
        crt_math_c_round_FUN_005fe6b0((double)((float)(int)puVar9 - local_54));
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar1->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)&stack0xffffff7c);
        pCVar1 = g_CDemonRendererPtr2;
        g_CDemonRendererPtr2->vertex_buffer_ptr->light = local_38;
        pCVar1->vertex_buffer_ptr->color = (int)local_40;
        pCVar1->vertex_buffer_ptr->fog = local_3c;
        pCVar1->vertex_buffer_ptr->w_recip = fStack_34;
        pCVar1->vertex_buffer_ptr[1].light = local_38;
        pCVar1->vertex_buffer_ptr[1].color = (int)local_40;
        pCVar1->vertex_buffer_ptr[1].fog = local_3c;
        pCVar1->vertex_buffer_ptr[1].w_recip = fStack_34;
        pCVar1->vertex_buffer_ptr[2].light = local_38;
        pCVar1->vertex_buffer_ptr[2].color = (int)local_40;
        pCVar1->vertex_buffer_ptr[2].fog = local_3c;
        pCVar1->vertex_buffer_ptr[2].w_recip = fStack_34;
        pCVar1->vertex_buffer_ptr[3].light = local_38;
        pCVar1->vertex_buffer_ptr[3].color = (int)local_40;
        pCVar1->vertex_buffer_ptr[3].fog = local_3c;
        pCVar1->vertex_buffer_ptr[3].w_recip = fStack_34;
        engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
                  (pCVar1,&DAT_030d4fd0);
      }
      local_50 = local_50 + 1;
      local_18 = local_18 + 400;
    } while (local_50 < 100);
    local_58 = (float)((int)local_58 + 1);
    local_2c = local_2c + 4;
  } while ((int)local_58 < 100);
  iStack_7c = 0x548163;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,1);
  return;
}
