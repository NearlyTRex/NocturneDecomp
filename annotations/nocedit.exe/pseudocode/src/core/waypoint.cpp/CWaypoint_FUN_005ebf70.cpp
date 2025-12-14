// Name: core_waypoint.cpp_CWaypoint_FUN_005ebf70
// Address: 005ebf70
// Address Range: [[005ebf70, 005ec27d]]
// Convention: __cdecl
// Signature: int core_waypoint.cpp_CWaypoint_FUN_005ebf70(CWayPoint * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_waypoint_cpp_CWaypoint_FUN_005ebf70(CWayPoint *this_ptr)

{
  CWayPoint *this_ptr_00;
  int iVar1;
  CDemonActor *pCVar2;
  CBoundingBox3D *pCVar3;
  CPathMap *this_ptr_01;
  CVector3f *pCVar4;
  BADSPACEBASE *in_ESP;
  CWayPoint *pCVar5;
  uint uStack00000010;
  CWayPoint *in_stack_00000014;
  CWayPoint *in_stack_00000018;
  CLocation *pCStack_84;
  CVector3i CStack_5c;
  byte auStack_4c [12];
  CVector3f aCStack_40 [2];
  float fStack_28;
  CVector3f CStack_24;
  float fStack_18;
  float local_14;
  
  if (((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) != 0) &&
      (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
      iVar1 == 0)) &&
     (pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (*(CDemonActor **)(g_CDemonMissionPtr->field2_0xc + 0x1c),
                          g_CWayPointClassInfo.name_hash), pCVar2 != (CDemonActor *)0x0)) {
    core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940((CDemonActor *)this_ptr,3);
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    pCVar3 = (*((this_ptr->base_trigger).base_actor.vtable)->getBoundingBox)
                       ((CDemonActor *)this_ptr,(CBoundingBox3D *)&pCStack_84);
    fStack_28 = (pCVar3->min).x + (pCVar3->max).x;
    CStack_24.x = (pCVar3->min).y + (pCVar3->max).y;
    aCStack_40[0].x = fStack_28 * 0.5f;
    CStack_24.y = (pCVar3->min).z + (pCVar3->max).z;
    aCStack_40[0].y = CStack_24.x * 0.5f;
    aCStack_40[0].z = CStack_24.y * 0.5f;
    auStack_4c._0_4_ = (uint)ROUND(aCStack_40[0].x * _DAT_00665460);
    auStack_4c._4_4_ = (uint)ROUND(aCStack_40[0].y * _DAT_00665460);
    auStack_4c._8_4_ = (uint)ROUND(aCStack_40[0].z * _DAT_00665460);
    iVar1 = 0;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)auStack_4c);
    pCVar5 = this_ptr;
    if (0 < this_ptr->num_adjacent_waypoints) {
      do {
        this_ptr_00 = *(CWayPoint **)pCVar5->field2_0x374;
        if (this_ptr <= this_ptr_00) {
          g_ActiveRenderColor = 2;
          if ((this_ptr == in_stack_00000014) || (this_ptr_00 == in_stack_00000014)) {
            g_ActiveRenderColor = 0xfa;
          }
          pCVar3 = (*((this_ptr_00->base_trigger).base_actor.vtable)->getBoundingBox)
                             ((CDemonActor *)this_ptr_00,(CBoundingBox3D *)&pCStack_84);
          CStack_24.z = (pCVar3->min).x + (pCVar3->max).x;
          fStack_18 = (pCVar3->min).y + (pCVar3->max).y;
          aCStack_40[0].x = CStack_24.z * 0.5f;
          aCStack_40[0].y = fStack_18 * 0.5f;
          local_14 = (pCVar3->min).z + (pCVar3->max).z;
          aCStack_40[0].z = local_14 * 0.5f;
          pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             ((CDemonActor *)this_ptr_00,(CVector3f *)&stack0xfffffff0,aCStack_40);
          pCVar4 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             ((CDemonActor *)this_ptr,&CStack_24,pCVar4);
          if ((CVector3f *)(auStack_4c + 8) != pCVar4) {
            auStack_4c._8_4_ = pCVar4->x;
            aCStack_40[0].x = pCVar4->y;
            aCStack_40[0].y = pCVar4->z;
          }
          CStack_5c.x = (int)ROUND((float)auStack_4c._8_4_ * _DAT_00665460);
          CStack_5c.y = (int)ROUND(aCStack_40[0].x * _DAT_00665460);
          CStack_5c.z = (int)ROUND(aCStack_40[0].y * _DAT_00665460);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&CStack_5c);
          engine_3d_c_drawLine2DFromIndices_FUN_00407cf0(0,1);
        }
        iVar1 = iVar1 + 1;
        pCVar5 = (CWayPoint *)((pCVar5->base_trigger).base_actor.actor_name + 8);
      } while (iVar1 < this_ptr->num_adjacent_waypoints);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    if ((in_stack_00000018 != (CWayPoint *)0x0) &&
       (*(int *)(g_CDemonMissionPtr->field2_0xc + 0x34) != 0)) {
      if ((this_ptr != in_stack_00000018) && (*(int *)(g_CDemonMissionPtr->field2_0xc + 0x34) != 2))
      {
        return 0;
      }
      uStack00000010 = 0xff;
      if (this_ptr == in_stack_00000018) {
        uStack00000010 = 0;
      }
      pCStack_84 = &(this_ptr->base_trigger).base_actor.location;
      this_ptr_01 = (CPathMap *)core_path_cpp_FUN_00548500();
      pCStack_84 = (CLocation *)0x5ec122;
      core_path_cpp_CPathMap_CallToQueuePop_FUN_00548750(this_ptr_01);
      pCStack_84 = (CLocation *)0xff;
      core_path_cpp_FUN_00547fc0();
      return 0;
    }
  }
  return 0;
}
