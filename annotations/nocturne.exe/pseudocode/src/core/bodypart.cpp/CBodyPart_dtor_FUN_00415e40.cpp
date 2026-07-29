// Name: core_bodypart.cpp_CBodyPart_dtor_FUN_00415e40
// Address: 00415e40
// Address Range: [[00415e40, 00415edb]]
// Convention: unknown
// Signature: CDemonActor * core_bodypart_cpp_CBodyPart_dtor_FUN_00415e40(CDemonActor *param_1,byte param_2)

#include "nocturne.h"

CDemonActor * core_bodypart_cpp_CBodyPart_dtor_FUN_00415e40(CDemonActor *param_1,byte param_2)

{
  CBox *pCVar1;
  SBodyPartFire *pSVar2;
  SBodyPartModel *pSVar3;
  CDemonActor *pCVar4;
  void *ptr;
  
  if ((param_2 & 4) != 0) {
    ptr = __vec_delete(param_1,&g_CBodyPartTypeInfo_0059a860);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return param_1;
  }
  (param_1->vtable)._ub = &g_CBodyPartVTable;
  core_bodypart_cpp_CBodyPart_setCounts_FUN_00415ee0(param_1,0,0);
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041a6c0((CBox *)&param_1[9].platform_position_delta.y,0);
  pSVar2 = core_bodypart_cpp_SBodyPartFire_arrdtor_FUN_00418130
                     ((SBodyPartFire *)&pCVar1[-3].scrape_points[4].previous_position,0);
  pSVar3 = core_bodypart_cpp_SBodyPartModel_arrdtor_FUN_00418110
                     ((SBodyPartModel *)(pSVar2[-2].flame.base.create_event + 0xc),0);
  pCVar4 = core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)(pSVar3[-2].model.model_name + 0x10),1);
  if ((param_2 & 2) == 0) {
    return pCVar4;
  }
  FUN_00564494(pCVar4);
  return pCVar4;
}
