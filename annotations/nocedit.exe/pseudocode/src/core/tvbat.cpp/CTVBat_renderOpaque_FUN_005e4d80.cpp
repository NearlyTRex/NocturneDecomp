// Name: core_tvbat.cpp_CTVBat_renderOpaque_FUN_005e4d80
// Address: 005e4d80
// Address Range: [[005e4d80, 005e504a]]
// Convention: __cdecl
// Signature: int __cdecl core_tvbat_cpp_CTVBat_renderOpaque_FUN_005e4d80(CTVBat *this_ptr)

#include "nocturne.h"

int __cdecl core_tvbat_cpp_CTVBat_renderOpaque_FUN_005e4d80(CTVBat *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  CBoundingBox3D CStack_78;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  CVector3i CStack_54;
  CVector3i CStack_48;
  CVector3i CStack_3c;
  CVector3i CStack_30;
  float fStack_1c;
  int iStack_18;
  int iStack_14;
  
  if (this_ptr->state == 3) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
  this_ptr_00 = (*((this_ptr->base).base.base.vtable._ub)->getBoundingBox)
                          ((CDemonActor *)this_ptr,&CStack_78);
  iStack_18 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iStack_18 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&this_ptr->model,(float)this_ptr->unk1,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  if (g_CDemonMissionPtr->is_in_editor != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if ((iVar1 == 0) && (this_ptr == (CTVBat *)g_CDemonMissionPtr->selected_actor)) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr2,&((CTVBat *)g_CDemonMissionPtr->selected_actor)->home_pos);
      iVar1 = 0;
      engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr2,1);
      do {
        fVar2 = (float10)iVar1 * (float10)0.0055555555555555497 * (float10)3.1415926535000001;
        fStack_1c = (float)fVar2;
        fVar3 = (float10)fsin(fVar2);
        fVar2 = (float10)fcos(fVar2);
        fStack_60 = (float)(fVar3 * (float10)this_ptr->max_distance);
        fStack_5c = -this_ptr->max_height;
        fStack_58 = (float)(fVar2 * (float10)this_ptr->max_distance);
        CStack_48.x = (int)ROUND(fStack_60 * 256.0f);
        CStack_48.y = (int)ROUND(fStack_5c * 256.0f);
        CStack_48.z = (int)ROUND(fStack_58 * 256.0f);
        iStack_14 = iVar1;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_48);
        fStack_5c = this_ptr->max_height;
        CStack_30.x = (int)ROUND(fStack_60 * 256.0f);
        CStack_30.y = (int)ROUND(fStack_5c * 256.0f);
        CStack_30.z = (int)ROUND(fStack_58 * 256.0f);
        iVar1 = iVar1 + 0xc;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&CStack_30);
        fVar2 = (float10)iVar1 * (float10)0.005555556f * (float10)3.1415926535000001;
        fStack_1c = (float)fVar2;
        fVar3 = (float10)fsin(fVar2);
        fVar2 = (float10)fcos(fVar2);
        fStack_60 = (float)(fVar3 * (float10)this_ptr->max_distance);
        fStack_5c = -this_ptr->max_height;
        fStack_58 = (float)(fVar2 * (float10)this_ptr->max_distance);
        CStack_54.x = (int)ROUND(fStack_60 * 256.0f);
        CStack_54.y = (int)ROUND(fStack_5c * 256.0f);
        CStack_54.z = (int)ROUND(fStack_58 * 256.0f);
        iStack_14 = iVar1;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&CStack_54);
        fStack_5c = this_ptr->max_height;
        CStack_3c.x = (int)ROUND(fStack_60 * 256.0f);
        CStack_3c.y = (int)ROUND(fStack_5c * 256.0f);
        CStack_3c.z = (int)ROUND(fStack_58 * 256.0f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&CStack_3c);
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,0,1);
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,2,3);
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr2,0,2);
      } while (iVar1 < 0x169);
    }
  }
  return iStack_18;
}
