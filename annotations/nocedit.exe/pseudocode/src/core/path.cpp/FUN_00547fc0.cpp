// Name: core_path.cpp_FUN_00547fc0
// Address: 00547fc0
// Address Range: [[00547fc0, 0054838a]]
// Convention: unknown
// Signature: undefined core_path.cpp_FUN_00547fc0()

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_path_cpp_FUN_00547fc0(void)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  int *extraout_EAX;
  uint *extraout_EDX;
  int *extraout_EDX_00;
  int *extraout_EDX_01;
  CVector3i *input;
  BADSPACEBASE *in_ESP;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  int in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000010;
  float afStackY_1030 [1007];
  CVector3i *pCVar8;
  int iVar9;
  CVector3f local_60 [2];
  int local_48;
  float local_44;
  int local_40;
  int local_3c;
  float local_38;
  int iStack_34;
  float fStack_30;
  float local_2c;
  float local_28;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar2 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar1 != 0) {
    return;
  }
  local_60[0].x =
       (float)*(int *)(in_stack_00000004 + 0x24) * g_CDemonRaytraceInstance.adjusted_size.x +
       g_CDemonRaytraceInstance.bbox_min.x;
  local_60[0].y = 0.0;
  local_60[0].z =
       (float)*(int *)(in_stack_00000004 + 0x2c) * g_CDemonRaytraceInstance.adjusted_size.z +
       g_CDemonRaytraceInstance.bbox_min.z;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,local_60);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_00680bb0);
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
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,0);
  local_18 = (float)(in_stack_0000000c << 8);
  local_14 = (float)(in_stack_00000010 << 8);
  local_48 = 0;
  local_1c = 0.0;
  do {
    iVar1 = (int)local_1c + in_stack_00000004;
    local_40 = 0;
    do {
      if ((-1000 < *(int *)(iVar1 + 0x9c70)) && (*(int *)(iVar1 + 0x9c70) < 1000)) {
        local_44 = *(float *)(iVar1 + 0x30);
        fVar3 = (float10)256;
        fVar4 = (float10)g_CDemonRaytraceInstance.bbox_min.y * fVar3;
        local_3c = local_48;
        (&local_38)[(uint)bVar2 * -2] = (&local_44)[(uint)bVar2 * -2];
        (&local_38)[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
             (&local_44)[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
        fVar5 = (float10)(int)local_38 *
                (float10)(g_CDemonRaytraceInstance.adjusted_size.y * 256f);
        fVar6 = (float10)iStack_34 *
                (float10)(g_CDemonRaytraceInstance.adjusted_size.z * 256f);
        fStack_30 = g_CDemonRaytraceInstance.adjusted_size.x * 256f;
        local_2c = g_CDemonRaytraceInstance.adjusted_size.y * 256f;
        local_28 = g_CDemonRaytraceInstance.adjusted_size.z * 256f;
        crt_math_c_round_FUN_005fe6b0
                  ((double)((float)local_3c *
                           g_CDemonRaytraceInstance.adjusted_size.x * 256f));
        fVar4 = fVar4 + fVar5;
        dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
        local_60[0].x = (float)(int)ROUND(dVar7);
        pCVar8 = (CVector3i *)0x548222;
        dVar7 = crt_math_c_round_FUN_005fe6b0((double)(fVar4 + fVar3));
        iVar9 = (int)ROUND(dVar7);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)*extraout_EDX,pCVar8);
        pCVar8 = (CVector3i *)0x548252;
        crt_math_c_round_FUN_005fe6b0((double)((float)iVar9 + local_38));
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)(*extraout_EDX_00 + 0x30),pCVar8);
        pCVar8 = (CVector3i *)0x548286;
        crt_math_c_round_FUN_005fe6b0((double)((float)(int)local_60[0].x + fStack_30));
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)(*extraout_EDX_01 + 0x60),pCVar8);
        crt_math_c_round_FUN_005fe6b0((double)((float)iVar9 - local_38));
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)(*extraout_EAX + 0x90),input);
        this_ptr = g_CDemonRendererPtr;
        g_CDemonRendererPtr->vertex_buffer_ptr->light = local_18;
        this_ptr->vertex_buffer_ptr->color = local_20;
        this_ptr->vertex_buffer_ptr->fog = local_1c;
        this_ptr->vertex_buffer_ptr->w_recip = local_14;
        this_ptr->vertex_buffer_ptr[1].light = local_18;
        this_ptr->vertex_buffer_ptr[1].color = local_20;
        this_ptr->vertex_buffer_ptr[1].fog = local_1c;
        this_ptr->vertex_buffer_ptr[1].w_recip = local_14;
        this_ptr->vertex_buffer_ptr[2].light = local_18;
        this_ptr->vertex_buffer_ptr[2].color = local_20;
        this_ptr->vertex_buffer_ptr[2].fog = local_1c;
        this_ptr->vertex_buffer_ptr[2].w_recip = local_14;
        this_ptr->vertex_buffer_ptr[3].light = local_18;
        this_ptr->vertex_buffer_ptr[3].color = local_20;
        this_ptr->vertex_buffer_ptr[3].fog = local_1c;
        this_ptr->vertex_buffer_ptr[3].w_recip = local_14;
        engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
                  (this_ptr,&DAT_030d4fd0);
      }
      local_40 = local_40 + 1;
      iVar1 = iVar1 + 400;
    } while (local_40 < 100);
    local_48 = local_48 + 1;
    local_1c = (float)((int)local_1c + 4);
  } while (local_48 < 100);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,1);
  return;
}
