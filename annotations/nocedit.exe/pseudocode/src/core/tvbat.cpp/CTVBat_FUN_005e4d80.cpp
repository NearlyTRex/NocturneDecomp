// Name: core_tvbat.cpp_CTVBat_FUN_005e4d80
// Address: 005e4d80
// Address Range: [[005e4d80, 005e504a]]
// Convention: __cdecl
// Signature: int core_tvbat.cpp_CTVBat_FUN_005e4d80(CTVBat * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_tvbat_cpp_CTVBat_FUN_005e4d80(CTVBat *this_ptr)

{
  float fVar1;
  CTVBat *this_ptr_00;
  CBoundingBox3D *this_ptr_01;
  int iVar2;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  float10 fVar4;
  int in_stack_00000008;
  int in_stack_0000000c;
  float fStack00000014;
  int in_stack_00000018;
  float fStack0000001c;
  int in_stack_00000024;
  float fStack_6c;
  float fStack_24;
  CVector3i CStack_1c;
  
  this_ptr_00 = this_ptr;
  if (this_ptr->state == 3) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
  this_ptr_01 = (*((this_ptr_00->base_enemy).base_character.base_actor.vtable)->getBoundingBox)
                          ((CDemonActor *)this_ptr_00,(CBoundingBox3D *)&stack0xffffff8c);
  this_ptr = (CTVBat *)core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_01);
  if (this_ptr != (CTVBat *)0x0) {
    fStack_6c = 8.660472e-39;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(this_ptr_00->field1_0xbeb4 + 0xc),
               *(float *)(this_ptr_00->field1_0xbeb4 + 8),-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr_00);
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) {
    iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if ((iVar2 == 0) && (this_ptr_00 == *(CTVBat **)(g_CDemonMissionPtr->field2_0xc + 0x1c))) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr,
                 &(*(CTVBat **)(g_CDemonMissionPtr->field2_0xc + 0x1c))->home_pos);
      iVar2 = 0;
      engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr,1);
      do {
        fVar3 = (float10)iVar2 * (float10)0.0055555555555555497 * (float10)3.1415926535000001;
        fStack00000014 = (float)fVar3;
        fVar4 = (float10)fsin(fVar3);
        fcos(fVar3);
        fVar1 = this_ptr_00->max_height;
        CStack_1c.y = (int)ROUND((float)(fVar4 * (float10)this_ptr_00->max_distance) * _DAT_00664cb0
                                );
        CStack_1c.z = (int)ROUND(-fVar1 * _DAT_00664cb0);
        fStack0000001c = (float)iVar2;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                   (CVector3i *)&CStack_1c.y);
        this_ptr = (CTVBat *)(int)ROUND(-fVar1 * _DAT_00664cb0);
        in_stack_00000008 = (int)ROUND(this_ptr_00->max_height * _DAT_00664cb0);
        in_stack_0000000c = (int)ROUND(fStack_24 * _DAT_00664cb0);
        iVar2 = iVar2 + 0xc;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                   (CVector3i *)&this_ptr);
        fVar3 = (float10)iVar2 * (float10)0.005555556f * (float10)3.1415926535000001;
        fStack0000001c = (float)fVar3;
        fVar4 = (float10)fsin(fVar3);
        fVar3 = (float10)fcos(fVar3);
        fStack_24 = -this_ptr_00->max_height;
        CStack_1c.x = (int)ROUND((float)(fVar4 * (float10)this_ptr_00->max_distance) * _DAT_00664cb0
                                );
        CStack_1c.y = (int)ROUND(fStack_24 * _DAT_00664cb0);
        CStack_1c.z = (int)ROUND((float)(fVar3 * (float10)this_ptr_00->max_distance) * _DAT_00664cb0
                                );
        in_stack_00000024 = iVar2;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_1c);
        this_ptr = (CTVBat *)(int)ROUND(this_ptr_00->max_height * _DAT_00664cb0);
        in_stack_00000008 = (int)ROUND((float)CStack_1c.x * _DAT_00664cb0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
                   (CVector3i *)&stack0x00000000);
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,0,1);
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,2,3);
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,0,2);
      } while (iVar2 < 0x169);
    }
  }
  return in_stack_00000018;
}
