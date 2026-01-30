// Name: core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004e63d0
// Address: 004e63d0
// Address Range: [[004e63d0, 004e6413]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004e63d0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_ghoul.cpp_CGhoul_findDarkWayPoint(CGhoul* param_1, uint
   param_2) */

void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004e63d0(void)

{
  float fVar1;
  CDemonActor *this_ptr;
  int iVar2;
  CPathMap *this_ptr_00;
  CDemonActor *pCVar3;
  CPathMap *extraout_EAX;
  int iVar4;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  CVector3f CStack_2c;
  CVector3f *local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  if ((in_stack_00000004[0x8e].orient_matrix.m[2].x == 0.0) &&
     (fVar1 = in_stack_00000004[0x8e].orient_matrix.m[1].z - in_stack_00000008,
     in_stack_00000004[0x8e].orient_matrix.m[1].z = fVar1, fVar1 <= 0.0)) {
    local_14 = core_actor_cpp_getRandomFloat_FUN_0040cc10(1.0,2.0);
    CStack_2c.z = (float)&in_stack_00000004->location;
    local_18 = 0;
    local_1c = 0;
    in_stack_00000004[0x8e].orient_matrix.m[1].z =
         local_14 + in_stack_00000004[0x8e].orient_matrix.m[1].z;
    for (; local_18 < (int)g_CDemonSetPtr->actor_list_ptr; local_18 = local_18 + 1) {
      this_ptr = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + local_1c),
                            g_CWayPointClassInfo.name_hash);
      if ((this_ptr != (CDemonActor *)0x0) &&
         (iVar2 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                            (PTR_s_darkPoint_0062df3e_0067b930,this_ptr->actor_name,0), iVar2 != 0))
      {
        iVar2 = 0;
        local_20 = (CVector3f *)0x1;
        for (iVar4 = 0; iVar4 < *(int *)(g_CDemonSetPtr->unk4 + 0x1f3c); iVar4 = iVar4 + 1) {
          pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)(g_CDemonSetPtr->unk4 + iVar2 + 8000),
                              g_CGhoulClassInfo.name_hash);
          if (((pCVar3 != (CDemonActor *)0x0) && (pCVar3 != in_stack_00000004)) &&
             (this_ptr == (CDemonActor *)pCVar3[0x8e].orient_matrix.m[1].y)) goto LAB_004e646f;
          iVar2 = iVar2 + 4;
        }
        if (local_20 != (CVector3f *)0x0) {
          this_ptr_00 = (*((this_ptr->vtable)._ub)->getPathMap)(this_ptr);
          if (this_ptr_00 == (CPathMap *)0x0) {
            core_path_cpp_FUN_00548500();
            this_ptr_00 = extraout_EAX;
          }
          if (this_ptr_00 == (CPathMap *)0x0) {
            g_CurrentFilename = "..\\core\\ghoul.cpp";
            g_CurrentLineNumber = 300;
            core_main_c_displayErrorAndQuit_FUN_00506f10("CGhoul::findDarkWayPoint - Can't get temp path map");
          }
          CStack_2c.x = 0.0;
          CStack_2c.y = 0.0;
          CStack_2c.z = 0.0;
          iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00547d00
                            (this_ptr_00,local_20,&CStack_2c,in_stack_00000004->unk1);
          if (0 < iVar2) {
            in_stack_00000004[0x8e].orient_matrix.m[1].y = (float)this_ptr;
          }
        }
      }
LAB_004e646f:
      local_1c = local_1c + 4;
    }
  }
  return;
}
