// Name: core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_00494630
// Address: 00494630
// Address Range: [[00494630, 00494699]]
// Convention: __cdecl
// Signature: CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_00494630(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_00494630(CFrankenstienMachine *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *pCVar2;
  CCourse *pCVar3;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00409d30(&this_ptr->base);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                     ((CKeyFramedModelInstance *)&pCVar1[1].location.area_id);
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_0043b5d0((CCourse *)(pCVar2 + 1));
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                     ((CKeyFramedModelInstance *)(pCVar3 + 1));
  *(CDemonActor_vtable **)(pCVar2[-2].model_name + 200) = &g_CFrankenstienMachineVTable;
  pCVar2[-0xffffffff00000002].model_name[0xd0] = '\0';
  pCVar2[-0xffffffff00000002].model_name[0xd1] = '\0';
  pCVar2[-0xffffffff00000002].model_name[0xd2] = '\0';
  pCVar2[-0xffffffff00000002].model_name[0xd3] = '\0';
  pCVar2[-2].model_name[0xd4] = '\0';
  pCVar2[-0xffffffff00000002].model_name[0xf4] = '\0';
  pCVar2[-0xffffffff00000002].model_name[0xf5] = '\0';
  pCVar2[-0xffffffff00000002].model_name[0xf6] = '\0';
  pCVar2[-0xffffffff00000002].model_name[0xf7] = '\0';
  pCVar2[1].part_visibility_flags[1] = 0;
  return (CFrankenstienMachine *)(pCVar2[-3].model_name + 0xf8);
}
