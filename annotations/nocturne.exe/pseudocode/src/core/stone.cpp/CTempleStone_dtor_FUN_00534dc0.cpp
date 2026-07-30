// Name: core_stone.cpp_CTempleStone_dtor_FUN_00534dc0
// Address: 00534dc0
// Address Range: [[00534dc0, 00534e24]]
// Convention: unknown
// Signature: CDemonActor * core_stone_cpp_CTempleStone_dtor_FUN_00534dc0(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_stone_cpp_CTempleStone_dtor_FUN_00534dc0(CDemonActor *param_1,byte param_2)

{
  CBox *pCVar1;
  CDemonActor *pCVar2;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CTempleStoneTypeInfo_005a26b0);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041a6c0((CBox *)&param_1[2].platform_orientation_delta,0);
  pCVar2 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)&pCVar1[-2].scrape_points[2].local_position.z,1);
  if ((param_2 & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
