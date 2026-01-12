// Name: core_path.cpp_FUN_00547fc0
// Address: 00547fc0
// Address Range: [[00547fc0, 0054838a]]
// Convention: unknown
// Signature: undefined core_path.cpp_FUN_00547fc0()

#include "nocturne.h"

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
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int aiStackY_1040 [1007];
  CVector3i *pCVar8;
  int local_70;
  int local_6c;
  int local_68;
  CVector3f local_64;
  int local_58;
  int local_54 [4];
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  bVar2 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar1 != 0) {
    return;
  }
  local_64.x = (float)*(int *)(in_stack_00000004 + 0x24) * g_CDemonRaytraceInstance.adjusted_size.x
               + g_CDemonRaytraceInstance.bbox_min.x;
  local_64.y = 0.0;
  local_64.z = (float)*(int *)(in_stack_00000004 + 0x2c) * g_CDemonRaytraceInstance.adjusted_size.z
               + g_CDemonRaytraceInstance.bbox_min.z;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&local_64);
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
  local_20 = (float)(in_stack_00000008 << 8);
  local_28 = in_stack_0000000c << 8;
  local_24 = (float)(in_stack_00000010 << 8);
  local_58 = 0;
  local_2c = 0;
  local_1c = (float)(in_stack_00000014 << 8);
  do {
    local_54[1] = 0;
    local_18 = local_2c + in_stack_00000004;
    do {
      if ((-1000 < *(int *)(local_18 + 0x9c70)) && (*(int *)(local_18 + 0x9c70) < 1000)) {
        local_54[0] = *(int *)(local_18 + 0x30);
        fVar3 = (float10)256;
        fVar4 = (float10)g_CDemonRaytraceInstance.bbox_min.y * fVar3;
        local_54[2] = local_58;
        local_54[(uint)bVar2 * -2 + 3] = local_54[(uint)bVar2 * -2];
        local_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
             local_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
        fVar5 = (float10)local_54[3] *
                (float10)(g_CDemonRaytraceInstance.adjusted_size.y * 256f);
        local_14 = local_44;
        fVar6 = (float10)local_44 *
                (float10)(g_CDemonRaytraceInstance.adjusted_size.z * 256f);
        local_40 = g_CDemonRaytraceInstance.adjusted_size.x * 256f;
        local_3c = g_CDemonRaytraceInstance.adjusted_size.y * 256f;
        local_38 = g_CDemonRaytraceInstance.adjusted_size.z * 256f;
        crt_math_c_round_FUN_005fe6b0
                  ((double)((float)local_54[2] *
                           g_CDemonRaytraceInstance.adjusted_size.x * 256f));
        fVar4 = fVar4 + fVar5;
        dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
        local_70 = (int)ROUND(dVar7);
        pCVar8 = (CVector3i *)0x548222;
        crt_math_c_round_FUN_005fe6b0((double)(fVar4 + fVar3));
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)*extraout_EDX,pCVar8);
        local_14 = local_70;
        pCVar8 = (CVector3i *)0x548252;
        crt_math_c_round_FUN_005fe6b0((double)((float)local_70 + local_40));
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)(*extraout_EDX_00 + 0x30),pCVar8);
        local_14 = local_68;
        pCVar8 = (CVector3i *)0x548286;
        dVar7 = crt_math_c_round_FUN_005fe6b0((double)((float)local_68 + local_38));
        local_6c = (int)ROUND(dVar7);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)(*extraout_EDX_01 + 0x60),pCVar8);
        local_14 = local_70;
        crt_math_c_round_FUN_005fe6b0((double)((float)local_70 - local_40));
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)(*extraout_EAX + 0x90),input);
        this_ptr = g_CDemonRendererPtr;
        g_CDemonRendererPtr->vertex_buffer_ptr->light = local_20;
        this_ptr->vertex_buffer_ptr->color = local_28;
        this_ptr->vertex_buffer_ptr->fog = local_24;
        this_ptr->vertex_buffer_ptr->w_recip = local_1c;
        this_ptr->vertex_buffer_ptr[1].light = local_20;
        this_ptr->vertex_buffer_ptr[1].color = local_28;
        this_ptr->vertex_buffer_ptr[1].fog = local_24;
        this_ptr->vertex_buffer_ptr[1].w_recip = local_1c;
        this_ptr->vertex_buffer_ptr[2].light = local_20;
        this_ptr->vertex_buffer_ptr[2].color = local_28;
        this_ptr->vertex_buffer_ptr[2].fog = local_24;
        this_ptr->vertex_buffer_ptr[2].w_recip = local_1c;
        this_ptr->vertex_buffer_ptr[3].light = local_20;
        this_ptr->vertex_buffer_ptr[3].color = local_28;
        this_ptr->vertex_buffer_ptr[3].fog = local_24;
        this_ptr->vertex_buffer_ptr[3].w_recip = local_1c;
        engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
                  (this_ptr,&DAT_030d4fd0);
      }
      local_54[1] = local_54[1] + 1;
      local_18 = local_18 + 400;
    } while (local_54[1] < 100);
    local_58 = local_58 + 1;
    local_2c = local_2c + 4;
  } while (local_58 < 100);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,1);
  return;
}
