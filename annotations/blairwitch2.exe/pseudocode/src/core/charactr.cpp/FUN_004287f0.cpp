// Name: core_charactr.cpp_FUN_004287f0
// Address: 004287f0
// Address Range: [[004287f0, 00428aa4]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_FUN_004287f0(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_charactr_cpp_FUN_004287f0(CCharacter *this_ptr,float delta_time)

{
  int iVar1;
  CPathMap *path_map;
  int iVar2;
  byte bVar3;
  int aiStackY_1054 [1012];
  CVector3f *direction;
  float fVar4;
  float fVar5;
  uint uStack_6c;
  uint uStack_60;
  int iStack_5c;
  uint uStack_54;
  CVector3f local_48;
  uint uStack_3c;
  uint auStack_38 [2];
  CVector3f local_30;
  float fStack_1c;
  uint uStack_18;
  
  bVar3 = 0;
  if ((*(int *)&this_ptr->field_0x2774 == 0) && (*(int *)&this_ptr->field_0x27b0 == 0)) {
    iVar1 = 0;
  }
  else {
    if ((*(float *)&this_ptr->field_0x2780 < 0.0) ||
       (fVar4 = *(float *)&this_ptr->field_0x2780 - delta_time,
       *(float *)&this_ptr->field_0x2780 = fVar4, 0.0 < fVar4)) {
      if (*(int *)&this_ptr->field_0x27b0 == 0) {
        iVar1 = *(int *)&this_ptr->field_0x2774;
        if ((((0.0 <= *(float *)&this_ptr->field_0x2778) && (*(int *)&this_ptr->field_0x2814 == 0))
            && (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                                  (iVar1,g_CWayPointClassInfo.name_hash), iVar2 != 0)) &&
           (iVar1 = core_charactr_cpp_FUN_0042b420(this_ptr,iVar2), iVar1 == 0)) {
          engine_console_cpp_FUN_00436710
                    (g_CConsolePtr,"@%s can't figure out next waypoint trying to reach %s\n" + 1,this_ptr,
                     *(uint *)&this_ptr->field_0x2774);
          return 1;
        }
        core_charactr_cpp_FUN_00428260
                  (this_ptr,iVar1,*(uint *)&this_ptr->field_0x2778,
                   *(uint *)&this_ptr->field_0x277c,&this_ptr->field_0x27ac);
        return 1;
      }
      core_door_cpp_FUN_00460350
                (*(int *)&this_ptr->field_0x27b0,&this_ptr->field_0x27b4,&this_ptr->field_0x20);
      fVar5 = 0.0;
      fVar4 = 0.0;
      local_30._0_4_ = local_48._0_4_;
      *(uint *)((int)&local_30 + (uint)bVar3 * -8 + 4) =
           *(uint *)((int)&local_48 + (uint)bVar3 * -8 + 4);
      *(uint *)((int)&local_30 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)((int)&local_48 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      direction = (CVector3f *)&DAT_0265370c;
      path_map = (CPathMap *)
                 (**(code **)(*(int *)(*(int *)&this_ptr->field_0x27b0 + 0x2b0) + 0xcc))
                           (*(int *)&this_ptr->field_0x27b0);
      iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_00423000
                        (this_ptr,&local_30,path_map,direction,fVar4,fVar5);
      if (iVar1 < 0) {
        *(uint *)&this_ptr->field_0x27ac = 3;
        return 1;
      }
      if (iVar1 < 1) {
        *(uint *)&this_ptr->field_0x27ac = 1;
        return 1;
      }
      core_actor_cpp_FUN_00408de0(this_ptr,*(int *)&this_ptr->field_0x27b0 + 0xb18);
      uStack_6c = uStack_3c;
      *(uint *)((int)&stack0xffffff98 + (uint)bVar3 * 0xfffffffe * 4) =
           auStack_38[(uint)bVar3 * -2];
      *(uint *)(&stack0xffffff9c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           auStack_38[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      core_vecdir_cpp_FUN_005838f0(&stack0xffffff94);
      uStack_60 = uStack_54;
      *(uint *)((int)&stack0xffffffa4 + (uint)bVar3 * -8) =
           *(uint *)(&stack0xffffffb0 + (uint)bVar3 * -8);
      auStack_38[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -8] =
           *(uint *)(&stack0xffffffb4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      *(int *)&this_ptr->field_0x2578 = iStack_5c;
      if (iStack_5c < 0x3f20d97c) {
        *(uint *)&this_ptr->field_0x27ac = 0;
        (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x128))(this_ptr);
      }
      else {
        *(uint *)&this_ptr->field_0x27ac = 1;
      }
      uStack_18 = *(uint *)&this_ptr->field_0x2578;
      fStack_1c = *(float *)&this_ptr->field_0x2598;
      fVar5 = (float)core_actor_cpp_FUN_0040d0c0(uStack_18);
      fVar4 = -fStack_1c;
      if ((fVar4 <= fVar5) && (fVar4 = fVar5, fStack_1c < fVar5)) {
        fVar4 = fStack_1c;
      }
      *(float *)&this_ptr->field_0x2578 = fVar4;
      return 1;
    }
    *(uint *)&this_ptr->field_0x27ac = 0;
    *(uint *)&this_ptr->field_0x2774 = 0;
    *(uint *)&this_ptr->field_0x2780 = 0;
    if (*(int *)&this_ptr->field_0x27b0 != 0) {
      (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x128))(this_ptr);
    }
    iVar1 = 1;
  }
  return iVar1;
}
