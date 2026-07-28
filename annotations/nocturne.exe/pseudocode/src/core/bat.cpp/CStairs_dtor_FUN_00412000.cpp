// Name: core_bat.cpp_CStairs_dtor_FUN_00412000
// Address: 00412000
// Address Range: [[00412000, 00412064]]
// Convention: unknown
// Signature: CDemonActor * core_bat_cpp_CStairs_dtor_FUN_00412000(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_bat_cpp_CStairs_dtor_FUN_00412000(CDemonActor *param_1,byte param_2)

{
  CDemonTriangle *pCVar1;
  CDemonActor *pCVar2;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CBatTypeInfo_00599f70);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  pCVar1 = core_course_cpp_CDemonTriangle_arrdtor_FUN_0043b5f0
                     ((CDemonTriangle *)&param_1[1].location,0);
  pCVar2 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0((CDemonActor *)&pCVar1[-7].vertex3,1);
  if ((param_2 & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
