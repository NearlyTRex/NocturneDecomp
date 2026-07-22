// Name: core_ghoul.cpp_CGhoul_findDarkWayPoint_FUN_004a9040
// Address: 004a9040
// Address Range: [[004a9040, 004a91ee]]
// Convention: __cdecl
// Signature: void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004a9040(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ghoul_cpp_CGhoul_findDarkWayPoint_FUN_004a9040(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  if ((*(int *)(param_1 + 0xbd8c) == 0) &&
     (param_2 = *(float *)(param_1 + 0xbd88) - param_2, *(float *)(param_1 + 0xbd88) = param_2,
     param_2 <= 0.0)) {
    local_14 = (float)core_actor_cpp_getRandomFloatFromRange_FUN_0040dda0(0x3f800000,0x40000000);
    local_24 = param_1 + 0x20;
    local_18 = 0;
    local_1c = 0;
    *(float *)(param_1 + 0xbd88) = local_14 + *(float *)(param_1 + 0xbd88);
    for (; local_18 < *(int *)(0x01E57284 + 0x14cd6c); local_18 = local_18 + 1) {
      iVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                        (*(uint *)(0x01E57284 + local_1c + 0x14cd70),_DAT_02ddf54c);
      if ((iVar1 != 0) &&
         (iVar2 = shape_edittool_cpp_wildcardStringMatch_FUN_004775b0
                            (PTR_s_darkPoint_00584ead_005b9654,iVar1,0), iVar2 != 0)) {
        iVar2 = 0;
        local_20 = 1;
        for (iVar4 = 0; iVar4 < *(int *)(0x01E57284 + 0x150bf4); iVar4 = iVar4 + 1) {
          iVar3 = core_actor_cpp_castToClassHash_FUN_0040d890
                            (*(uint *)(iVar2 + 0x150bf8 + 0x01E57284),_DAT_01c78c10);
          if (((iVar3 != 0) && (iVar3 != param_1)) && (iVar1 == *(int *)(iVar3 + 0xbd84)))
          goto LAB_004a90df;
          iVar2 = iVar2 + 4;
        }
        if (local_20 != 0) {
          iVar2 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0xbc))(iVar1);
          if (iVar2 == 0) {
            iVar2 = core_path_cpp_getPathMap_FUN_004f1e00(iVar1 + 0x20);
          }
          if (iVar2 == 0) {
            _DAT_01cc4800 = "..\\core\\ghoul.cpp";
            _DAT_01cc4804 = 300;
            FUN_004c8440("CGhoul::findDarkWayPoint - Can't get temp path map");
          }
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_28 = 0;
          iVar2 = core_path_cpp_CPathMap_findPathWithRetry_FUN_004f1600
                            (iVar2,local_24,&uStack_30,*(uint *)(param_1 + 0x6c));
          if (0 < iVar2) {
            *(int *)(param_1 + 0xbd84) = iVar1;
          }
        }
      }
LAB_004a90df:
      local_1c = local_1c + 4;
    }
  }
  return;
}
