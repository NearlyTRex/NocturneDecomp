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
  this_ptr_00 = (*((this_ptr->base_enemy).base_character.base_actor.vtable)->getBoundingBox)
                          ((CDemonActor *)this_ptr,(CBoundingBox3D *)&stack0xffffff88);
  iVar3 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar3 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(this_ptr->field1_0xbeb4 + 0xc),
               *(float *)(this_ptr->field1_0xbeb4 + 8),-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) {
    iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if ((iVar4 == 0) && (this_ptr == *(CTVBat **)(g_CDemonMissionPtr->field2_0xc + 0x1c))) {
      engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                (g_CDemonRendererPtr,
                 &(*(CTVBat **)(g_CDemonMissionPtr->field2_0xc + 0x1c))->home_pos);
      iVar4 = 0;
      engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr,1);
      do {
        fVar5 = (float10)iVar4 * (float10)0.0055555555555555497 * (float10)3.1415926535000001;
        fStack_14 = (float)fVar5;
        fVar6 = (float10)fsin(fVar5);
        fVar5 = (float10)fcos(fVar5);
        fVar1 = (float)(fVar6 * (float10)this_ptr->max_distance);
        fVar2 = (float)(fVar5 * (float10)this_ptr->max_distance);
        CStack_40.x = (int)ROUND(fVar1 * _DAT_00664cb0);
        CStack_40.y = (int)ROUND(-this_ptr->max_height * _DAT_00664cb0);
        CStack_40.z = (int)ROUND(fVar2 * _DAT_00664cb0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&CStack_40);
        CStack_28.x = (int)ROUND(fVar1 * _DAT_00664cb0);
        CStack_28.y = (int)ROUND(this_ptr->max_height * _DAT_00664cb0);
        CStack_28.z = (int)ROUND(fVar2 * _DAT_00664cb0);
        iVar4 = iVar4 + 0xc;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&CStack_28);
        fVar5 = (float10)iVar4 * (float10)0.005555556f * (float10)3.1415926535000001;
        fStack_14 = (float)fVar5;
        fVar6 = (float10)fsin(fVar5);
        fVar5 = (float10)fcos(fVar5);
        fVar1 = (float)(fVar6 * (float10)this_ptr->max_distance);
        fVar2 = (float)(fVar5 * (float10)this_ptr->max_distance);
        CStack_4c.x = (int)ROUND(fVar1 * _DAT_00664cb0);
        CStack_4c.y = (int)ROUND(-this_ptr->max_height * _DAT_00664cb0);
        CStack_4c.z = (int)ROUND(fVar2 * _DAT_00664cb0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_4c);
        CStack_34.x = (int)ROUND(fVar1 * _DAT_00664cb0);
        CStack_34.y = (int)ROUND(this_ptr->max_height * _DAT_00664cb0);
        CStack_34.z = (int)ROUND(fVar2 * _DAT_00664cb0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&CStack_34);
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,0,1);
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,2,3);
        engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0(g_CDemonRendererPtr,0,2);
      } while (iVar4 < 0x169);
    }
  }
  return iVar3;
}
