// Name: core_tvbat.cpp_CTVBat_renderOpaque_FUN_005e4d80
// Address: 005e4d80
// Address Range: [[005e4d80, 005e504a]]
// Convention: __cdecl
// Signature: int __cdecl core_tvbat_cpp_CTVBat_renderOpaque_FUN_005e4d80(CTVBat *this_ptr)

#include "nocturne.h"

int __cdecl core_tvbat_cpp_CTVBat_renderOpaque_FUN_005e4d80(CTVBat *this_ptr)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D *this_ptr_00;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  CVector3i CStack_4c;
  CVector3i CStack_40;
  CVector3i CStack_34;
  CVector3i CStack_28;
  float fStack_14;
  
  if (this_ptr->state == 3) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
  this_ptr_00 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                          ((CDemonActor *)this_ptr,(CBoundingBox3D *)&stack0xffffff88);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar3 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,*(float *)(this_ptr->unk1 + 8),-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  if (g_CDemonMissionPtr->is_in_editor != 0) {
    iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if ((iVar4 == 0) && (this_ptr == (CTVBat *)g_CDemonMissionPtr->selected_actor)) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr2,&((CTVBat *)g_CDemonMissionPtr->selected_actor)->home_pos);
      iVar4 = 0;
      engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr2,1);
      do {
        fVar5 = (float10)iVar4 * (float10)0.0055555555555555497 * (float10)3.1415926535000001;
        fStack_14 = (float)fVar5;
        fVar6 = (float10)fsin(fVar5);
        fVar5 = (float10)fcos(fVar5);
        fVar1 = (float)(fVar6 * (float10)this_ptr->max_distance);
        fVar2 = (float)(fVar5 * (float10)this_ptr->max_distance);
        CStack_40.x = (int)ROUND(fVar1 * 256.0f);
        CStack_40.y = (int)ROUND(-this_ptr->max_height * 256.0f);
        CStack_40.z = (int)ROUND(fVar2 * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_40);
        CStack_28.x = (int)ROUND(fVar1 * 256.0f);
        CStack_28.y = (int)ROUND(this_ptr->max_height * 256.0f);
        CStack_28.z = (int)ROUND(fVar2 * 256.0f);
        iVar4 = iVar4 + 0xc;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&CStack_28);
        fVar5 = (float10)iVar4 * (float10)0.005555556f * (float10)3.1415926535000001;
        fStack_14 = (float)fVar5;
        fVar6 = (float10)fsin(fVar5);
        fVar5 = (float10)fcos(fVar5);
        fVar1 = (float)(fVar6 * (float10)this_ptr->max_distance);
        fVar2 = (float)(fVar5 * (float10)this_ptr->max_distance);
        CStack_4c.x = (int)ROUND(fVar1 * 256.0f);
        CStack_4c.y = (int)ROUND(-this_ptr->max_height * 256.0f);
        CStack_4c.z = (int)ROUND(fVar2 * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&CStack_4c);
        CStack_34.x = (int)ROUND(fVar1 * 256.0f);
        CStack_34.y = (int)ROUND(this_ptr->max_height * 256.0f);
        CStack_34.z = (int)ROUND(fVar2 * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&CStack_34);
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,0,1);
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,2,3);
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,0,2);
      } while (iVar4 < 0x169);
    }
  }
  return iVar3;
}
