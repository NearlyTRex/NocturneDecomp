// Name: core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004c6c80
// Address: 004c6c80
// Address Range: [[004c6c80, 004c6e2e]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004c6c80(CGhoul *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004c6c80(CGhoul *this_ptr,float delta_time)

{
  float fVar1;
  CDemonActor *this_ptr_00;
  int iVar2;
  CPathMap *this_ptr_01;
  CGhoul *pCVar3;
  int iVar4;
  CVector3f CStack_30;
  CVector3f *local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  if ((this_ptr->is_berserk == 0) &&
     (fVar1 = this_ptr->heal_timer - delta_time, this_ptr->heal_timer = fVar1, fVar1 <= 0.0)) {
    local_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(1.0,2.0);
    local_24 = &(this_ptr->base).base.base.location.position;
    local_18 = 0;
    local_1c = 0;
    this_ptr->heal_timer = local_14 + this_ptr->heal_timer;
    for (; local_18 < g_CDemonSetPtr->actor_count; local_18 = local_18 + 1) {
      this_ptr_00 = (CDemonActor *)
                    core_actor_cpp_castToClassHash_FUN_0040c840
                              (*(uint *)((int)g_CDemonSetPtr->actors + local_1c),
                               g_CWayPointClassInfo.name_hash);
      if ((this_ptr_00 != (CDemonActor *)0x0) &&
         (iVar2 = shape_edittool_cpp_wildcardStringMatch_FUN_00486a40
                            (PTR_s_darkPoint_005c442c_1_005fecb0,(char *)this_ptr_00,0), iVar2 != 0)
         ) {
        iVar2 = 0;
        local_20 = 1;
        for (iVar4 = 0; iVar4 < g_CDemonSetPtr->enemy_count; iVar4 = iVar4 + 1) {
          pCVar3 = (CGhoul *)
                   core_actor_cpp_castToClassHash_FUN_0040c840
                             (*(uint *)((int)g_CDemonSetPtr->enemies + iVar2),
                              g_CGhoulClassInfo.name_hash);
          if (((pCVar3 != (CGhoul *)0x0) && (pCVar3 != this_ptr)) &&
             (this_ptr_00 == pCVar3->dark_waypoint)) goto LAB_004c6d1f;
          iVar2 = iVar2 + 4;
        }
        if (local_20 != 0) {
          this_ptr_01 = (*((this_ptr_00->vtable)._ub)->getPathMap)(this_ptr_00);
          if (this_ptr_01 == (CPathMap *)0x0) {
            this_ptr_01 = core_path_cpp_getPathMap_FUN_0050ced0(&this_ptr_00->location);
          }
          if (this_ptr_01 == (CPathMap *)0x0) {
            _DAT_01d71de0 = "..\\core\\ghoul.cpp";
            _DAT_01d71de4 = 0x12d;
            core_main_c_FUN_004e4330("CGhoul::findDarkWayPoint - Can't get temp path map");
          }
          CStack_30.x = 0.0;
          CStack_30.y = 0.0;
          CStack_30.z = 0.0;
          iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_0050c680
                            (this_ptr_01,local_24,&CStack_30,
                             (this_ptr->base).base.base.direction_hint);
          if (0 < iVar2) {
            this_ptr->dark_waypoint = this_ptr_00;
          }
        }
      }
LAB_004c6d1f:
      local_1c = local_1c + 4;
    }
  }
  return;
}
