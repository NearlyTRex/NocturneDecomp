// Name: core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004e63d0
// Address: 004e63d0
// Address Range: [[004e63d0, 004e6413]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004e63d0(CGhoul *this_ptr)

#include "nocturne.h"

void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004e63d0(CGhoul *this_ptr)

{
  float fVar1;
  CDemonActor *this_ptr_00;
  int iVar2;
  CPathMap *this_ptr_01;
  CGhoul *pCVar3;
  int iVar4;
  float in_stack_00000008;
  CVector3f CStack_30;
  CVector3f *local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  if ((this_ptr->is_berserk == 0) &&
     (fVar1 = this_ptr->heal_timer - in_stack_00000008, this_ptr->heal_timer = fVar1, fVar1 <= 0.0))
  {
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,2.0);
    local_24 = &(this_ptr->base).base.base.location.position;
    local_18 = 0;
    local_1c = 0;
    this_ptr->heal_timer = local_14 + this_ptr->heal_timer;
    for (; local_18 < g_CDemonSetPtr->actor_count; local_18 = local_18 + 1) {
      this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                              (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_1c),
                               g_CWayPointClassInfo.name_hash);
      if ((this_ptr_00 != (CDemonActor *)0x0) &&
         (iVar2 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                            (PTR_s_darkPoint_0062df3e_0067b930,this_ptr_00->actor_name,0),
         iVar2 != 0)) {
        iVar2 = 0;
        local_20 = 1;
        for (iVar4 = 0; iVar4 < g_CDemonSetPtr->enemy_count; iVar4 = iVar4 + 1) {
          pCVar3 = (CGhoul *)
                   core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)((int)g_CDemonSetPtr->enemies + iVar2),
                              g_CGhoulClassInfo.name_hash);
          if (((pCVar3 != (CGhoul *)0x0) && (pCVar3 != this_ptr)) &&
             (this_ptr_00 == pCVar3->dark_waypoint)) goto LAB_004e646f;
          iVar2 = iVar2 + 4;
        }
        if (local_20 != 0) {
          this_ptr_01 = (*((this_ptr_00->vtable)._ub)->getPathMap)(this_ptr_00);
          if (this_ptr_01 == (CPathMap *)0x0) {
            this_ptr_01 = core_path_cpp_FUN_00548500(&this_ptr_00->location);
          }
          if (this_ptr_01 == (CPathMap *)0x0) {
            g_CurrentFilename = "..\\core\\ghoul.cpp";
            g_CurrentLineNumber = 300;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CGhoul::findDarkWayPoint - Can't get temp path map");
          }
          CStack_30.x = 0.0;
          CStack_30.y = 0.0;
          CStack_30.z = 0.0;
          iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                            (this_ptr_01,local_24,&CStack_30,
                             (this_ptr->base).base.base.direction_hint);
          if (0 < iVar2) {
            this_ptr->dark_waypoint = this_ptr_00;
          }
        }
      }
LAB_004e646f:
      local_1c = local_1c + 4;
    }
  }
  return;
}
