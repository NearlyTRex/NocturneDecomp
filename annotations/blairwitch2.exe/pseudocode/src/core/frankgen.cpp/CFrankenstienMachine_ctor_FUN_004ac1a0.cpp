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
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)&pCVar1[1].field_0x2c);
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_00438a50((CCourse *)(pCVar2 + 1));
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)(pCVar3 + 0xc));
  *(byte **)&pCVar2[-2].field_0x140 = &g_CFrankenstienMachineVTable;
  *(uint *)&pCVar2[-2].field_0x148 = 0;
  pCVar2[-2].field_0x14c = 0;
  *(uint *)&pCVar2[-2].field_0x16c = 0;
  *(uint *)&pCVar2[1].field_0x4 = 0;
  return (CFrankenstienMachine *)&pCVar2[-3].field_0xc;
}
