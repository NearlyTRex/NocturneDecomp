// Name: core_waypoint.cpp_CWaypoint_renderOpaque_FUN_005ebf70
// Address: 005ebf70
// Address Range: [[005ebf70, 005ec27d]]
// Convention: __cdecl
// Signature: int __cdecl core_waypoint_cpp_CWaypoint_renderOpaque_FUN_005ebf70(CWayPoint *this_ptr)

#include "nocturne.h"

int __cdecl core_waypoint_cpp_CWaypoint_renderOpaque_FUN_005ebf70(CWayPoint *this_ptr)

{
  CWayPoint *this_ptr_00;
  int iVar1;
  CBoundingBox3D *pCVar2;
  CPathMap *this_ptr_01;
  CVector3f *pCVar3;
  CWayPoint *pCVar4;
  CBoundingBox3D CStack_ac;
  CBoundingBox3D local_94;
  CVector3i CStack_7c;
  CVector3i CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  CVector3f CStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  int iStack_1c;
  int iStack_18;
  CWayPoint *local_14;
  
  if (((g_CDemonMissionPtr->is_in_editor != 0) &&
      (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
      iVar1 == 0)) &&
     (local_14 = (CWayPoint *)
                 core_actor_cpp_castToClassHash_FUN_0040c790
                           (g_CDemonMissionPtr->selected_actor,g_CWayPointClassInfo.name_hash),
     local_14 != (CWayPoint *)0x0)) {
    core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940((CDemonActor *)this_ptr,3);
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    pCVar2 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
                       ((CDemonActor *)this_ptr,&local_94);
    fStack_4c = (pCVar2->min).x + (pCVar2->max).x;
    fStack_48 = (pCVar2->min).y + (pCVar2->max).y;
    CStack_64.x = fStack_4c * 0.5f;
    fStack_44 = (pCVar2->min).z + (pCVar2->max).z;
    CStack_64.y = fStack_48 * 0.5f;
    CStack_64.z = fStack_44 * 0.5f;
    CStack_70.x = (int)ROUND(CStack_64.x * 256.0f);
    CStack_70.y = (int)ROUND(CStack_64.y * 256.0f);
    CStack_70.z = (int)ROUND(CStack_64.z * 256.0f);
    iVar1 = 0;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&CStack_70);
    pCVar4 = this_ptr;
    if (0 < this_ptr->num_adjacent_waypoints) {
      do {
        this_ptr_00 = pCVar4->adjacency[0].waypoint;
        if (this_ptr <= this_ptr_00) {
          g_ActiveRenderColor = 2;
          if ((this_ptr == local_14) || (this_ptr_00 == local_14)) {
            g_ActiveRenderColor = 0xfa;
          }
          pCVar2 = (*((this_ptr_00->base).base.vtable._ub)->getBoundingBox)
                             ((CDemonActor *)this_ptr_00,&CStack_ac);
          fStack_34 = (pCVar2->min).x + (pCVar2->max).x;
          fStack_30 = (pCVar2->min).y + (pCVar2->max).y;
          CStack_58.x = fStack_34 * 0.5f;
          CStack_58.y = fStack_30 * 0.5f;
          fStack_2c = (pCVar2->min).z + (pCVar2->max).z;
          CStack_58.z = fStack_2c * 0.5f;
          pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             ((CDemonActor *)this_ptr_00,&CStack_28,&CStack_58);
          pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             ((CDemonActor *)this_ptr,&CStack_40,pCVar3);
          if (&CStack_64 != pCVar3) {
            CStack_64.x = pCVar3->x;
            CStack_64.y = pCVar3->y;
            CStack_64.z = pCVar3->z;
          }
          CStack_7c.x = (int)ROUND(CStack_64.x * 256.0f);
          CStack_7c.y = (int)ROUND(CStack_64.y * 256.0f);
          CStack_7c.z = (int)ROUND(CStack_64.z * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&CStack_7c);
          engine_3d_c_drawLine2DFromIndices_FUN_00407cf0(0,1);
        }
        iVar1 = iVar1 + 1;
        pCVar4 = (CWayPoint *)((pCVar4->base).base.actor_name + 8);
      } while (iVar1 < this_ptr->num_adjacent_waypoints);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    if ((local_14 != (CWayPoint *)0x0) && (g_CDemonMissionPtr->show_waypoint_coverage != 0)) {
      if ((this_ptr != local_14) && (g_CDemonMissionPtr->show_waypoint_coverage != 2)) {
        return 0;
      }
      iStack_1c = 0xff;
      iStack_18 = 0xff;
      iVar1 = 0x40;
      if (this_ptr == local_14) {
        iVar1 = 0x80;
        iStack_1c = 0;
        iStack_18 = 0;
      }
      this_ptr_01 = core_path_cpp_getPathMap_FUN_00548500(&(this_ptr->base).base.location);
      core_path_cpp_CPathMap_setupPathSearch_FUN_00548750(this_ptr_01);
      core_path_cpp_CPathMap_renderPathMap_FUN_00547fc0(this_ptr_01,iStack_18,0xff,iStack_1c,iVar1);
      return 0;
    }
  }
  return 0;
}
