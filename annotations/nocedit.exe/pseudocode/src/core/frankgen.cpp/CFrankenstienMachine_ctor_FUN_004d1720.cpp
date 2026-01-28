// Name: core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_004d1720
// Address: 004d1720
// Address Range: [[004d1720, 004d1789]]
// Convention: __cdecl
// Signature: CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_004d1720(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

CFrankenstienMachine * __cdecl
core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_004d1720(CFrankenstienMachine *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *pCVar2;
  CCourse *pCVar3;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)&pCVar1[1].location.area_id);
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_004424c0((CCourse *)(pCVar2 + 1));
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(pCVar3 + 1));
  *(CDemonActor_vtable **)(pCVar2[-2].animation_state + 100) = &g_CFrankenstienMachineVTable;
  pCVar2[-0xffffffff00000002].animation_state[0x6c] = '\0';
  pCVar2[-0xffffffff00000002].animation_state[0x6d] = '\0';
  pCVar2[-0xffffffff00000002].animation_state[0x6e] = '\0';
  pCVar2[-0xffffffff00000002].animation_state[0x6f] = '\0';
  pCVar2[-2].animation_state[0x70] = '\0';
  pCVar2[-0xffffffff00000002].animation_state[0x90] = '\0';
  pCVar2[-0xffffffff00000002].animation_state[0x91] = '\0';
  pCVar2[-0xffffffff00000002].animation_state[0x92] = '\0';
  pCVar2[-0xffffffff00000002].animation_state[0x93] = '\0';
  pCVar2[1].part_visibility_flags[1] = 0;
  return (CFrankenstienMachine *)(pCVar2[-3].animation_state + 0x8c);
}
