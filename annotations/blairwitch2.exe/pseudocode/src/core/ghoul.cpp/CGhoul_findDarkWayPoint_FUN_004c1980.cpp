// Name: core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004c1980
// Address: 004c1980
// Address Range: [[004c1980, 004c1b2e]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004c1980(CGhoul *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004c1980(CGhoul *this_ptr,float delta_time)

{
  float fVar1;
  char *target_string;
  int iVar2;
  CPathMap *this_ptr_00;
  CGhoul *pCVar3;
  int iVar4;
  CVector3f CStack_30;
  CVector3f *local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  if ((*(int *)&this_ptr->field_0x10b60 == 0) &&
     (fVar1 = *(float *)&this_ptr->field_0x10b5c - delta_time,
     *(float *)&this_ptr->field_0x10b5c = fVar1, fVar1 <= 0.0)) {
    local_14 = (float)core_actor_cpp_FUN_0040cf60(0x3f800000,0x40000000);
    local_24 = (CVector3f *)&this_ptr->field_0x20;
    local_18 = 0;
    local_1c = 0;
    *(float *)&this_ptr->field_0x10b5c = local_14 + *(float *)&this_ptr->field_0x10b5c;
    for (; local_18 < *(int *)&g_CDemonSetPtr->field_0x14d164; local_18 = local_18 + 1) {
      target_string =
           (char *)core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(uint *)(&g_CDemonSetPtr->field_0x14d168 + local_1c),
                              g_CWayPointClassInfo.name_hash);
      if ((target_string != (char *)0x0) &&
         (iVar2 = shape_edittool_cpp_wildcardStringMatch_FUN_00485840
                            (PTR_s_darkPoint_005d9266_1_00616780,target_string,0), iVar2 != 0)) {
        iVar2 = 0;
        local_20 = 1;
        for (iVar4 = 0; iVar4 < *(int *)&g_CDemonSetPtr->field_0x150fec; iVar4 = iVar4 + 1) {
          pCVar3 = (CGhoul *)
                   core_actor_cpp_castToClassHash_FUN_0040c8f0
                             (*(uint *)(&g_CDemonSetPtr->field_0x150ff0 + iVar2),
                              g_CGhoulClassInfo.name_hash);
          if (((pCVar3 != (CGhoul *)0x0) && (pCVar3 != this_ptr)) &&
             (target_string == *(char **)&pCVar3->field_0x10b58)) goto LAB_004c1a1f;
          iVar2 = iVar2 + 4;
        }
        if (local_20 != 0) {
          this_ptr_00 = (CPathMap *)
                        (**(code **)(*(int *)(target_string + 0x2b0) + 0xcc))(target_string);
          if (this_ptr_00 == (CPathMap *)0x0) {
            this_ptr_00 = core_path_cpp_getPathMap_FUN_00513ea0((CLocation *)(target_string + 0x20))
            ;
          }
          if (this_ptr_00 == (CPathMap *)0x0) {
            _DAT_01d046a0 = "..\\core\\ghoul.cpp";
            _DAT_01d046a4 = 0x12d;
            core_main_c_FUN_004e4500("CGhoul::findDarkWayPoint - Can't get temp path map");
          }
          CStack_30._0_4_ = 0;
          CStack_30._4_4_ = 0;
          CStack_30._8_4_ = 0;
          iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_00513650
                            (this_ptr_00,local_24,&CStack_30,*(int *)&this_ptr->field_0x6c);
          if (0 < iVar2) {
            *(char **)&this_ptr->field_0x10b58 = target_string;
          }
        }
      }
LAB_004c1a1f:
      local_1c = local_1c + 4;
    }
  }
  return;
}
