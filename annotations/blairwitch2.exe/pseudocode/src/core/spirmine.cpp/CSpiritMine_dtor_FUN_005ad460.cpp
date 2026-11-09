// Name: core_spirmine.cpp_CSpiritMine_dtor_FUN_005ad460
// Address: 005ad460
// Address Range: [[005ad460, 005ad4ec]]
// Convention: unknown
// Signature: CSpiritMine * core_spirmine_cpp_CSpiritMine_dtor_FUN_005ad460(CSpiritMine *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSpiritMine * core_spirmine_cpp_CSpiritMine_dtor_FUN_005ad460(CSpiritMine *this_ptr,uint flags)

{
  CBox *pCVar1;
  CSpiritMine *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CSpiritMineTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  *(byte **)&this_ptr->field_0x2b0 = &g_CSpiritMineVTable;
  unkaddr_005a7eb0_cpp_FUN_005a8100(&this_ptr->field_0x154,0);
  unkafter_superopt_cpp_FUN_005a8220(&this_ptr->field_0x154);
  pCVar1 = core_box_cpp_CBox_dtor_FUN_005b1c70((CBox *)&this_ptr->field_0x4f0,0);
  pCVar2 = (CSpiritMine *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408930((CDemonActor *)(pCVar1 + -0x4f0),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return pCVar2;
}
