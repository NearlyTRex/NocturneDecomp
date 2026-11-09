// Name: core_bodypart.cpp_CBodyPart_ctor_FUN_004156e0
// Address: 004156e0
// Address Range: [[004156e0, 004157f6]]
// Convention: __cdecl
// Signature: CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_004156e0(CBodyPart *this_ptr)

#include "nocturne.h"

CBodyPart * __cdecl core_bodypart_cpp_CBodyPart_ctor_FUN_004156e0(CBodyPart *this_ptr)

{
  CDemonActor *pCVar1;
  int iVar2;
  CBox *pCVar3;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  iVar2 = __arrinit(&pCVar1[1].field_0x138,3,&g_SBodyPartModelTypeInfo);
  iVar2 = __arrinit(iVar2 + 0x4c0,2,&g_SBodyPartFireTypeInfo);
  pCVar3 = core_box_cpp_CBox_ctor_FUN_005b1bc0((CBox *)(iVar2 + 0x834));
  *(byte **)(pCVar3 + -0xe30) = &g_CBodyPartVTable;
  *(uint *)(pCVar3 + 0x25c) = 0;
  *(uint *)(pCVar3 + -0xe10) = 0;
  *(uint *)(pCVar3 + -0xe0c) = 0;
  *(uint *)(pCVar3 + -0xe08) = 0;
  *(uint *)(pCVar3 + -0xe04) = 0;
  *(uint *)(pCVar3 + -0xe00) = 0;
  *(uint *)(pCVar3 + -0xdfc) = 0;
  *(uint *)(pCVar3 + -0xdf8) = 0;
  *(uint *)(pCVar3 + -0xe2c) = 0;
  *(uint *)(pCVar3 + -0xcfc) = 0;
  *(uint *)(pCVar3 + -0xd00) = *(uint *)(pCVar3 + -0xcfc);
  *(uint *)(pCVar3 + -0xd04) = *(uint *)(pCVar3 + -0xd00);
  *(uint *)(pCVar3 + -0x838) = 0;
  *(uint *)(pCVar3 + -0xcf8) = 0;
  *(uint *)(pCVar3 + -0x10) = 0x40a00000;
  *(uint *)(pCVar3 + -0x14) = 0;
  *(uint *)(pCVar3 + -0xc) = 0xffff;
  *(uint *)(pCVar3 + 0x260) = 0;
  *(uint *)(pCVar3 + -8) = 0;
  *(uint *)(pCVar3 + -4) = 0;
  return (CBodyPart *)(pCVar3 + -0x10e0);
}
