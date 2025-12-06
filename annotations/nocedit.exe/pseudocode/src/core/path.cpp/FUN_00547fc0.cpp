// Name: core_path.cpp_FUN_00547fc0
// Address: 00547fc0
// Address Range: [[00547fc0, 0054838a]]
// Convention: unknown
// Signature: undefined core_path.cpp_FUN_00547fc0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_path_cpp_FUN_00547fc0(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  byte bVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  int in_stack_00000004;
  int in_stack_0000000c;
  int in_stack_00000010;
  float in_stack_00000018;
  int aiStackY_1030 [1007];
  byte *local_60;
  CVector3i *input;
  CVector3i *input_00;
  CVector3i *input_01;
  CDemonRenderer *pCVar7;
  CDemonRenderer *pCVar8;
  CDemonRenderer *this_ptr;
  int local_38 [2];
  float fStack_30;
  float local_2c;
  float local_28;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar2 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar1 != 0) {
    return;
  }
  local_60 = (byte *)
             ((float)*(int *)(in_stack_00000004 + 0x24) * g_CDemonRaytraceInstance.adjusted_size.x +
             g_CDemonRaytraceInstance.bbox_min.x);
  input = (CVector3i *)
          ((float)*(int *)(in_stack_00000004 + 0x2c) * g_CDemonRaytraceInstance.adjusted_size.z +
          g_CDemonRaytraceInstance.bbox_min.z);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)&local_60);
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
  local_18 = in_stack_0000000c << 8;
  local_14 = in_stack_00000010 << 8;
  input_01 = (CVector3i *)0x0;
  local_1c = 0;
  do {
    iVar1 = local_1c + in_stack_00000004;
    pCVar7 = (CDemonRenderer *)0x0;
    do {
      this_ptr = pCVar7;
      if ((-1000 < *(int *)(iVar1 + 0x9c70)) && (*(int *)(iVar1 + 0x9c70) < 1000)) {
        fVar3 = (float10)256;
        fVar4 = (float10)g_CDemonRaytraceInstance.bbox_min.y * fVar3;
        local_38[(uint)bVar2 * -2] = *(int *)(&stack0xffffffbc + (uint)bVar2 * -8);
        local_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1] =
             *(int *)(&stack0xffffffc0 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
        fVar5 = (float10)local_38[0] *
                (float10)(g_CDemonRaytraceInstance.adjusted_size.y * 256f);
        fStack_30 = g_CDemonRaytraceInstance.adjusted_size.x * 256f;
        local_2c = g_CDemonRaytraceInstance.adjusted_size.y * 256f;
        local_28 = g_CDemonRaytraceInstance.adjusted_size.z * 256f;
        dVar6 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(g_CDemonRendererPtr,local_38[1]));
        local_60 = &stack0xffffffa4;
        fVar4 = fVar4 + fVar5;
        dVar6 = crt_math_c_round_FUN_005fe6b0
                          ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar6 >> 0x20),&stack0xffffffa4));
        fVar4 = fVar4 + fVar3;
        local_60 = (byte *)0x548222;
        dVar6 = crt_math_c_round_FUN_005fe6b0(dVar6);
        input_00 = (CVector3i *)(int)ROUND(fVar4);
        local_60 = (byte *)0x54822e;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)*(uint *)((ulonglong)dVar6 >> 0x20),input);
        dVar6 = crt_math_c_round_FUN_005fe6b0
                          ((double)CONCAT44 /* combine 2-byte values */(g_CDemonRendererPtr,&stack0xffffffb0));
        input = (CVector3i *)0x548261;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)(*(int *)((ulonglong)dVar6 >> 0x20) + 0x30),input_00);
        pCVar8 = pCVar7;
        dVar6 = crt_math_c_round_FUN_005fe6b0
                          ((double)CONCAT44 /* combine 2-byte values */(g_CDemonRendererPtr,&stack0xffffffb8));
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)(*(int *)((ulonglong)dVar6 >> 0x20) + 0x60),input_01);
        dVar6 = crt_math_c_round_FUN_005fe6b0
                          ((double)CONCAT44 /* combine 2-byte values */(&stack0xffffffc0,g_CDemonRendererPtr));
        input_01 = (CVector3i *)0x5482c8;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  ((SProjectedVertex *)(*SUB84 /* extract 2-byte value */(dVar6,0) + 0x90),
                   (CVector3i *)((ulonglong)dVar6 >> 0x20));
        this_ptr = g_CDemonRendererPtr;
        g_CDemonRendererPtr->vertex_buffer_ptr->light = in_stack_00000018;
        this_ptr->vertex_buffer_ptr->color = in_stack_00000010;
        this_ptr->vertex_buffer_ptr->fog = (float)pCVar7;
        this_ptr->vertex_buffer_ptr->w_recip = (float)pCVar8;
        this_ptr->vertex_buffer_ptr[1].light = in_stack_00000018;
        this_ptr->vertex_buffer_ptr[1].color = in_stack_00000010;
        this_ptr->vertex_buffer_ptr[1].fog = (float)pCVar7;
        this_ptr->vertex_buffer_ptr[1].w_recip = (float)pCVar8;
        this_ptr->vertex_buffer_ptr[2].light = in_stack_00000018;
        this_ptr->vertex_buffer_ptr[2].color = in_stack_00000010;
        this_ptr->vertex_buffer_ptr[2].fog = (float)pCVar7;
        this_ptr->vertex_buffer_ptr[2].w_recip = (float)pCVar8;
        this_ptr->vertex_buffer_ptr[3].light = in_stack_00000018;
        this_ptr->vertex_buffer_ptr[3].color = in_stack_00000010;
        this_ptr->vertex_buffer_ptr[3].fog = (float)pCVar7;
        this_ptr->vertex_buffer_ptr[3].w_recip = (float)pCVar8;
        engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
                  (this_ptr,&DAT_030d4fd0);
      }
      pCVar7 = (CDemonRenderer *)((int)&this_ptr->vertex_buffer_ptr + 1);
      iVar1 = iVar1 + 400;
    } while ((int)pCVar7 < 100);
    input_01 = (CVector3i *)((int)&input_01->x + 1);
    local_1c = local_1c + 4;
  } while ((int)input_01 < 100);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr,1);
  return;
}
