// Name: core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_004ac1a0
// Address: 004ac1a0
// Address Range: [[004ac1a0, 004ac209]]
// Convention: __cdecl
// Signature: CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_004ac1a0(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_004ac1a0(CFrankenstienMachine *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *pCVar2;
  CCourse *pCVar3;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)&pCVar1[1].field_0x2c);
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_00438a50((CCourse *)(pCVar2 + 1));
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)(pCVar3 + 0xc));
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
  return (CFrankenstienMachine *)(pCVar2[-3].part_visibility_flags + 3);
}
