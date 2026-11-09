// Name: core_simbox.cpp_CSimBox_dtor_FUN_00547720
// Address: 00547720
// Address Range: [[00547720, 00547784]]
// Convention: __cdecl
// Signature: CSimBox * __cdecl core_simbox_cpp_CSimBox_dtor_FUN_00547720(CSimBox *this_ptr,uint flags)

#include "nocturne.h"

CSimBox * __cdecl core_simbox_cpp_CSimBox_dtor_FUN_00547720(CSimBox *this_ptr,uint flags)

{
  CBox *pCVar1;
  CSimBox *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CSimBoxTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041adf0((CBox *)&this_ptr->field_0x358,0);
  pCVar2 = (CSimBox *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)(pCVar1 + -0x358),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005a30c4(pCVar2);
  return pCVar2;
}
