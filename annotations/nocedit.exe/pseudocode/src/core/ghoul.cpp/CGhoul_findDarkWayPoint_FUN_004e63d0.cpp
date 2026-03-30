// Name: core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004e63d0
// Address: 004e63d0
// Address Range: [[004e63d0, 004e6413]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004e63d0(CGhoul *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004e63d0(CGhoul *this_ptr,float delta_time)

{
  float fVar2;
  CWayPoint *this_ptr_00;
  int iVar2;
  CPathMap *this_ptr_01;
  CGhoul *pCVar3;
  int iVar3;
  int iVar4;
  CVector3f CStack_30;
  CVector3f *local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  float fVar1;
  
  if ((this_ptr->is_berserk == 0) &&
     (fVar1 = this_ptr->heal_timer - delta_time, this_ptr->heal_timer = fVar1, fVar1 <= 0.0)) {
    fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(1.0,2.0);
    local_18 = 0;
    local_1c = 0;
    this_ptr->heal_timer = fVar2 + this_ptr->heal_timer;
    for (; local_18 < g_CDemonSetPtr->actor_count; local_18 = local_18 + 1) {
      this_ptr_00 = (CWayPoint *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_1c),
                               g_CWayPointClassInfo.name_hash);
      if ((this_ptr_00 != (CWayPoint *)0x0) &&
         (iVar2 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                            (g_GhoulWayPointTypes[0],(char *)this_ptr_00,0), iVar2 != 0)) {
        iVar3 = 0;
        for (iVar4 = 0; iVar4 < g_CDemonSetPtr->enemy_count; iVar4 = iVar4 + 1) {
          pCVar3 = (CGhoul *)
                   core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar3),
                              g_CGhoulClassInfo.name_hash);
          if (((pCVar3 != (CGhoul *)0x0) && (pCVar3 != this_ptr)) &&
             (this_ptr_00 == (CWayPoint *)pCVar3->dark_waypoint)) goto LAB_004e646f;
          iVar3 = iVar3 + 4;
        }
        this_ptr_01 = (*((this_ptr_00->base).base.vtable._ub)->getPathMap)
                                ((CDemonActor *)this_ptr_00);
        if (this_ptr_01 == (CPathMap *)0x0) {
          this_ptr_01 = core_path_cpp_getPathMap_FUN_00548500(&(this_ptr_00->base).base.location);
        }
        if (this_ptr_01 == (CPathMap *)0x0) {
          g_CurrentFilename = "..\\core\\ghoul.cpp";
          g_CurrentLineNumber = 300;
          core_main_c_displayErrorAndQuit_FUN_00506f10("CGhoul::findDarkWayPoint - Can't get temp path map");
        }
        CStack_30.x = 0.0;
        CStack_30.y = 0.0;
        CStack_30.z = 0.0;
        iVar3 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                          (this_ptr_01,&(this_ptr->base).base.base.location.position,&CStack_30,
                           (this_ptr->base).base.base.direction_hint);
        if (0 < iVar3) {
          this_ptr->dark_waypoint = (CDemonActor *)this_ptr_00;
        }
      }
LAB_004e646f:
      local_1c = local_1c + 4;
    }
  }
  return;
}
