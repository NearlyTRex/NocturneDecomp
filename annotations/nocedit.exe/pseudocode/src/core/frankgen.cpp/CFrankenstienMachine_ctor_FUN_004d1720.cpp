// Name: core_frankgen.cpp_CFrankenstienMachine_ctor_FUN_004d1720
// Address: 004d1720
// Address Range: [[004d1720, 004d1789]]
// Convention: __cdecl
// Signature: CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_004d1720(CFrankenstienMachine *this_ptr)

#include "nocturne.h"

CFrankenstienMachine * __cdecl core_frankgen_cpp_CFrankenstienMachine_ctor_FUN_004d1720(CFrankenstienMachine *this_ptr)

{
  CFrankenstienMachine *pCVar1;
  CFrankenstienMachine_ptr_388 pCVar2;
  CFrankenstienMachine_ptr_768 pCVar3;
  CFrankenstienMachine_ptr_780 pCVar4;
  
  pCVar1 = (CFrankenstienMachine *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&pCVar1->bed_model);
  pCVar3 = core_course_cpp_CCourse_ctor_FUN_004424c0(&ADJ(pCVar2)->course);
  pCVar4 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0(&ADJ(pCVar3)->body_model);
  ADJ(pCVar4)->base.vtable._ub = &g_CFrankenstienMachineVTable;
  ADJ(pCVar4)->master_frame = 0.0;
  ADJ(pCVar4)->course_filename[0] = '\0';
  ADJ(pCVar4)->part_frame = 0.0;
  ADJ(pCVar4)->particle_accumulator = 0.0;
  return ADJ(pCVar4);
}
