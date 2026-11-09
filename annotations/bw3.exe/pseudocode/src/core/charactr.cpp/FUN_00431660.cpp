// Name: core_charactr.cpp_FUN_00431660
// Address: 00431660
// Address Range: [[00431660, 0043196b]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_FUN_00431660(CCharacter *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl core_charactr_cpp_FUN_00431660(CCharacter *this_ptr,float delta_time)

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
  if ((*(int *)&this_ptr->field_0x2704 == 0) && (*(int *)&this_ptr->field_0x2740 == 0)) {
    iVar1 = 0;
  }
  else {
    if ((*(float *)&this_ptr->field_0x2710 < 0.0) ||
       (fVar4 = *(float *)&this_ptr->field_0x2710 - delta_time,
       *(float *)&this_ptr->field_0x2710 = fVar4, 0.0 < fVar4)) {
      if (*(int *)&this_ptr->field_0x2740 != 0) {
        core_door_cpp_FUN_004650a0
                  (*(int *)&this_ptr->field_0x2740,&this_ptr->field_0x2744,&this_ptr->field_0x20);
        fVar5 = 0.0;
        fVar4 = 0.0;
        local_30._0_4_ = local_48._0_4_;
        *(uint *)((int)&local_30 + (uint)bVar3 * -8 + 4) =
             *(uint *)((int)&local_48 + (uint)bVar3 * -8 + 4);
        *(uint *)((int)&local_30 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
             *(uint *)((int)&local_48 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
        direction = (CVector3f *)&DAT_02cfd900;
        path_map = (CPathMap *)
                   (**(code **)(*(int *)(*(int *)&this_ptr->field_0x2740 + 0x154) + 0xc4))
                             (*(int *)&this_ptr->field_0x2740);
        iVar1 = core_charactr_cpp_CCharacter_walkToPoint_FUN_0042b9e0
                          (this_ptr,&local_30,path_map,direction,fVar4,fVar5);
        if (iVar1 < 0) {
          *(uint *)&this_ptr->field_0x273c = 3;
        }
        else {
          if (iVar1 < 1) {
            *(uint *)&this_ptr->field_0x273c = 1;
            return 1;
          }
          core_actor_cpp_FUN_00408bf0(this_ptr,*(int *)&this_ptr->field_0x2740 + 0x9bc);
          uStack_6c = uStack_54;
          *(uint *)((int)&stack0xffffff98 + (uint)bVar3 * 0xfffffffe * 4) =
               *(uint *)(&stack0xffffffb0 + (uint)bVar3 * -8);
          *(uint *)(&stack0xffffff9c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
               *(uint *)(&stack0xffffffb4 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
          core_vecdir_cpp_FUN_00576250(&stack0xffffff94);
          uStack_60 = uStack_3c;
          *(uint *)((int)&stack0xffffffa4 + (uint)bVar3 * -8) = auStack_38[(uint)bVar3 * -2];
          auStack_38[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -8] =
               auStack_38[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
          *(int *)&this_ptr->field_0x2508 = iStack_5c;
          if (iStack_5c < 0x3f20d97c) {
            *(uint *)&this_ptr->field_0x273c = 0;
            (**(code **)(*(int *)&this_ptr->field_0x154 + 0x120))(this_ptr);
          }
          else {
            *(uint *)&this_ptr->field_0x273c = 1;
          }
          uStack_18 = *(uint *)&this_ptr->field_0x2508;
          fStack_1c = *(float *)&this_ptr->field_0x2528;
          fVar5 = (float)core_actor_cpp_FUN_0040cfa0(uStack_18);
          fVar4 = -fStack_1c;
          if ((fVar4 <= fVar5) && (fVar4 = fVar5, fStack_1c < fVar5)) {
            fVar4 = fStack_1c;
          }
          *(float *)&this_ptr->field_0x2508 = fVar4;
        }
        return 1;
      }
      iVar1 = *(int *)&this_ptr->field_0x2704;
      if ((((0.0 <= *(float *)&this_ptr->field_0x2708) && (*(int *)&this_ptr->field_0x27a8 == 0)) &&
          (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840(iVar1,g_CWayPointClassInfo.name_hash)
          , iVar2 != 0)) && (iVar1 = core_charactr_cpp_FUN_004349d0(this_ptr,iVar2), iVar1 == 0)) {
        engine_console_cpp_FUN_00441ff0
                  (g_CConsolePtr,"pB%s can't figure out next waypoint trying to reach %s\n" + 2,this_ptr,
                   *(uint *)&this_ptr->field_0x2704);
        return 1;
      }
      core_charactr_cpp_FUN_004310e0
                (this_ptr,iVar1,*(uint *)&this_ptr->field_0x2708,
                 *(uint *)&this_ptr->field_0x270c,&this_ptr->field_0x273c);
      return 1;
    }
    *(uint *)&this_ptr->field_0x273c = 0;
    *(uint *)&this_ptr->field_0x2710 = 0;
    if (*(int *)&this_ptr->field_0xcdc8 == 0) {
      iVar1 = *(int *)&this_ptr->field_0x2704;
      *(uint *)&this_ptr->field_0x20 = *(uint *)(iVar1 + 0x20);
      *(uint *)&this_ptr->field_0x24 = *(uint *)(iVar1 + 0x24);
      *(uint *)&this_ptr->field_0x28 = *(uint *)(iVar1 + 0x28);
      *(uint *)&this_ptr->field_0x2c = *(uint *)(iVar1 + 0x2c);
      iVar1 = *(int *)&this_ptr->field_0x2704;
      if ((uint *)&this_ptr->field_0x30 != (uint *)(iVar1 + 0x30)) {
        *(uint *)&this_ptr->field_0x30 = *(uint *)(iVar1 + 0x30);
        *(uint *)&this_ptr->field_0x34 = *(uint *)(iVar1 + 0x34);
        *(uint *)&this_ptr->field_0x38 = *(uint *)(iVar1 + 0x38);
      }
    }
    *(uint *)&this_ptr->field_0x2704 = 0;
    if (*(int *)&this_ptr->field_0x2740 != 0) {
      (**(code **)(*(int *)&this_ptr->field_0x154 + 0x120))(this_ptr);
    }
    iVar1 = 1;
    *(uint *)&this_ptr->field_0xcdc8 = 0;
  }
  return iVar1;
}
