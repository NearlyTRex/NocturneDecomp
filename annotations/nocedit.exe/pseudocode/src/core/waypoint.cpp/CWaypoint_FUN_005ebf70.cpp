// Name: core_waypoint.cpp_CWaypoint_FUN_005ebf70
// Address: 005ebf70
// Address Range: [[005ebf70, 005ec27d]]
// Convention: __cdecl
// Signature: int core_waypoint.cpp_CWaypoint_FUN_005ebf70(CWayPoint * this_ptr)

#include "nocturne.h"

int __cdecl core_waypoint_cpp_CWaypoint_FUN_005ebf70(CWayPoint *this_ptr)

{
  CWayPoint *this_ptr_00;
  int iVar1;
  CBoundingBox3D *pCVar2;
  CPathMap *this_ptr_01;
  CVector3f *pCVar3;
  CWayPoint *pCVar4;
  CWayPoint *unaff_EDI;
  CBoundingBox3D local_94;
  byte auStack_6c [8];
  int iStack_64;
  int iStack_60;
  float fStack_5c;
  float fStack_58;
  CVector3f CStack_54;
  CVector3f CStack_48;
  float fStack_3c;
  CVector3f CStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  CDemonActor *local_14;
  
  if (((*(int *)(g_CDemonMissionPtr->unk1 + 4) != 0) &&
      (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2),
      iVar1 == 0)) &&
     (local_14 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonMissionPtr->unk2 + 0x1c),
                            g_CWayPointClassInfo.name_hash), local_14 != (CDemonActor *)0x0)) {
    core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940((CDemonActor *)this_ptr,3);
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00((CDemonActor *)this_ptr);
    pCVar2 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
                       ((CDemonActor *)this_ptr,&local_94);
    CStack_48.y = (pCVar2->min).x + (pCVar2->max).x;
    CStack_48.z = (pCVar2->min).y + (pCVar2->max).y;
    fStack_5c = CStack_48.y * 0.5f;
    fStack_3c = (pCVar2->min).z + (pCVar2->max).z;
    fStack_58 = CStack_48.z * 0.5f;
    CStack_54.x = fStack_3c * 0.5f;
    auStack_6c._4_4_ = (uint)ROUND(fStack_5c * 256.0f);
    iStack_64 = (int)ROUND(fStack_58 * 256.0f);
    iStack_60 = (int)ROUND(CStack_54.x * 256.0f);
    iVar1 = 0;
    wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
              (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,
               (CVector3i *)(auStack_6c + 4));
    pCVar4 = this_ptr;
    if (0 < this_ptr->num_adjacent_waypoints) {
      do {
        this_ptr_00 = *(CWayPoint **)pCVar4->unk;
        if (this_ptr <= this_ptr_00) {
          g_ActiveRenderColor = 2;
          if ((this_ptr == unaff_EDI) || (this_ptr_00 == unaff_EDI)) {
            g_ActiveRenderColor = 0xfa;
          }
          pCVar2 = (*((this_ptr_00->base).base.vtable._ub)->getBoundingBox)
                             ((CDemonActor *)this_ptr_00,(CBoundingBox3D *)&stack0xffffff5c);
          fStack_24 = (pCVar2->min).x + (pCVar2->max).x;
          fStack_20 = (pCVar2->min).y + (pCVar2->max).y;
          CStack_48.x = fStack_24 * 0.5f;
          CStack_48.y = fStack_20 * 0.5f;
          fStack_1c = (pCVar2->min).z + (pCVar2->max).z;
          CStack_48.z = fStack_1c * 0.5f;
          pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             ((CDemonActor *)this_ptr_00,(CVector3f *)&stack0xffffffe8,&CStack_48);
          pCVar3 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                             ((CDemonActor *)this_ptr,&CStack_30,pCVar3);
          if (&CStack_54 != pCVar3) {
            CStack_54.x = pCVar3->x;
            CStack_54.y = pCVar3->y;
            CStack_54.z = pCVar3->z;
          }
          auStack_6c._0_4_ = (uint)ROUND(CStack_54.x * 256.0f);
          auStack_6c._4_4_ = (uint)ROUND(CStack_54.y * 256.0f);
          iStack_64 = (int)ROUND(CStack_54.z * 256.0f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,
                     (CVector3i *)auStack_6c);
          engine_3d_c_drawLine2DFromIndices_FUN_00407cf0(0,1);
        }
        iVar1 = iVar1 + 1;
        pCVar4 = (CWayPoint *)((pCVar4->base).base.actor_name + 8);
      } while (iVar1 < this_ptr->num_adjacent_waypoints);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40((CDemonActor *)this_ptr);
    if ((unaff_EDI != (CWayPoint *)0x0) && (*(int *)(g_CDemonMissionPtr->unk2 + 0x34) != 0)) {
      if ((this_ptr != unaff_EDI) && (*(int *)(g_CDemonMissionPtr->unk2 + 0x34) != 2)) {
        return 0;
      }
      local_14 = (CDemonActor *)0xff;
      if (this_ptr == unaff_EDI) {
        local_14 = (CDemonActor *)0x0;
      }
      this_ptr_01 = (CPathMap *)core_path_cpp_FUN_00548500();
      core_path_cpp_CPathMap_CallToQueuePop_FUN_00548750(this_ptr_01);
      core_path_cpp_FUN_00547fc0();
      return 0;
    }
  }
  return 0;
}
