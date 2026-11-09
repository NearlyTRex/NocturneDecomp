// Name: core_bodypart.cpp_CBodyPart_ctor_FUN_00414750
// Address: 00414750
// Address Range: [[00414750, 00414870]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_00414750(CBodyPart *this_ptr)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_00414750(CBodyPart *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  CBox *pCVar3;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  iVar2 = __arrinit(&pCVar1[1].field_0x138,3,&g_SBodyPartModelTypeInfo);
  iVar2 = __arrinit(iVar2 + 0x4c0,2,&g_SBodyPartFireTypeInfo);
  pCVar3 = core_box_cpp_CBox_ctor_FUN_0041ad40((CBox *)(iVar2 + 0x580));
  *(byte ***)(pCVar3 + -0xb7c) = &g_CBodyPartVTable;
  *(uint *)(pCVar3 + 0x25c) = 0;
  *(uint *)(pCVar3 + -0xb5c) = 0;
  *(uint *)(pCVar3 + -0xb58) = 0;
  *(uint *)(pCVar3 + -0xb54) = 0;
  *(uint *)(pCVar3 + -0xb50) = 0;
  *(uint *)(pCVar3 + -0xb4c) = 0;
  *(uint *)(pCVar3 + -0xb48) = 0;
  *(uint *)(pCVar3 + -0xb44) = 0;
  *(uint *)(pCVar3 + -0xb78) = 0;
  *(uint *)(pCVar3 + -0xa48) = 0;
  *(uint *)(pCVar3 + -0xa4c) = *(uint *)(pCVar3 + -0xa48);
  *(uint *)(pCVar3 + -0xa50) = *(uint *)(pCVar3 + -0xa4c);
  *(uint *)(pCVar3 + -0x584) = 0;
  *(uint *)(pCVar3 + -0xa44) = 0;
  *(uint *)(pCVar3 + -0x14) = 0x40a00000;
  *(uint *)(pCVar3 + -0x18) = 0;
  *(uint *)(pCVar3 + -0x10) = 0xffff;
  *(uint *)(pCVar3 + 0x260) = 0;
  *(uint *)(pCVar3 + -0xc) = 0;
  *(uint *)(pCVar3 + -8) = 0;
  *(uint *)(pCVar3 + -4) = 0;
  return (CBodyPart *)(pCVar3 + -0xcd0);
}
