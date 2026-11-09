// Name: core_bodypart.cpp_CBodyPart_dtor_FUN_00414880
// Address: 00414880
// Address Range: [[00414880, 0041490b]]
// Convention: unknown
// Signature: CBodyPart * core_bodypart_cpp_CBodyPart_dtor_FUN_00414880(CBodyPart *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBodyPart * core_bodypart_cpp_CBodyPart_dtor_FUN_00414880(CBodyPart *this_ptr,uint flags)

{
  CBox *pCVar1;
  int iVar2;
  CBodyPart *pCVar3;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CBodyPartTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  *(byte ***)&this_ptr->field_0x154 = &g_CBodyPartVTable;
  core_bodypart_cpp_FUN_00414910(this_ptr,0,0);
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041adf0((CBox *)&this_ptr->field_0xcd0,0);
  iVar2 = core_bodypart_cpp_FUN_00416dc0(pCVar1 + -0x580,0);
  pCVar3 = (CBodyPart *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)(iVar2 + -0x750),1);
  if ((flags & 2) == 0) {
    return pCVar3;
  }
  FUN_005a30c4(pCVar3);
  return pCVar3;
}
