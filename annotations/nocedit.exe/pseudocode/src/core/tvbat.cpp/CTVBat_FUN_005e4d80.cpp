// Name: core_tvbat.cpp_CTVBat_FUN_005e4d80
// Address: 005e4d80
// Address Range: [[005e4d80, 005e504a]]
// Convention: __cdecl
// Signature: int core_tvbat.cpp_CTVBat_FUN_005e4d80(CTVBat * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_tvbat_cpp_CTVBat_FUN_005e4d80(CTVBat *this_ptr)

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
  this_ptr_00 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->getBoundingBox)
                          ((CDemonActor *)this_ptr,&CStack_78);
  iStack_18 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iStack_18 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(this_ptr->field1_0xbeb4 + 0xc),
               *(float *)(this_ptr->field1_0xbeb4 + 8),-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if ((iVar1 == 0) && (this_ptr == *(CTVBat **)(g_CDemonMissionPtr->field2_0xc + 0x1c))) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr,
                 &(*(CTVBat **)(g_CDemonMissionPtr->field2_0xc + 0x1c))->home_pos);
      iVar1 = 0;
      engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr,1);
      do {
        fVar2 = (float10)iVar1 * (float10)0.0055555555555555497 * (float10)3.1415926535000001;
        fStack_1c = (float)fVar2;
        fVar3 = (float10)fsin(fVar2);
        fVar2 = (float10)fcos(fVar2);
        fStack_60 = (float)(fVar3 * (float10)this_ptr->max_distance);
        fStack_5c = -this_ptr->max_height;
        fStack_58 = (float)(fVar2 * (float10)this_ptr->max_distance);
        CStack_48.x = (int)ROUND(fStack_60 * _DAT_00664cb0);
        CStack_48.y = (int)ROUND(fStack_5c * _DAT_00664cb0);
        CStack_48.z = (int)ROUND(fStack_58 * _DAT_00664cb0);
        iStack_14 = iVar1;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&CStack_48);
        fStack_5c = this_ptr->max_height;
        CStack_30.x = (int)ROUND(fStack_60 * _DAT_00664cb0);
        CStack_30.y = (int)ROUND(fStack_5c * _DAT_00664cb0);
        CStack_30.z = (int)ROUND(fStack_58 * _DAT_00664cb0);
        iVar1 = iVar1 + 0xc;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&CStack_30);
        fVar2 = (float10)iVar1 * (float10)0.005555556f * (float10)3.1415926535000001;
        fStack_1c = (float)fVar2;
        fVar3 = (float10)fsin(fVar2);
        fVar2 = (float10)fcos(fVar2);
        fStack_60 = (float)(fVar3 * (float10)this_ptr->max_distance);
        fStack_5c = -this_ptr->max_height;
        fStack_58 = (float)(fVar2 * (float10)this_ptr->max_distance);
        CStack_54.x = (int)ROUND(fStack_60 * _DAT_00664cb0);
        CStack_54.y = (int)ROUND(fStack_5c * _DAT_00664cb0);
        CStack_54.z = (int)ROUND(fStack_58 * _DAT_00664cb0);
        iStack_14 = iVar1;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_54);
        fStack_5c = this_ptr->max_height;
        CStack_3c.x = (int)ROUND(fStack_60 * _DAT_00664cb0);
        CStack_3c.y = (int)ROUND(fStack_5c * _DAT_00664cb0);
        CStack_3c.z = (int)ROUND(fStack_58 * _DAT_00664cb0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&CStack_3c);
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,0,1);
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,2,3);
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,0,2);
      } while (iVar1 < 0x169);
    }
  }
  return iStack_18;
}
