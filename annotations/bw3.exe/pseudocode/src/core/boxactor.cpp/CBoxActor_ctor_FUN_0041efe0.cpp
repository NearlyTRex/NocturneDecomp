// Name: core_boxactor.cpp_CBoxActor_ctor_FUN_0041efe0
// Address: 0041efe0
// Address Range: [[0041efe0, 0041f12e]]
// Convention: __cdecl
// Signature: CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_ctor_FUN_0041efe0(CBoxActor *this_ptr)

#include "nocturne.h"

CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_ctor_FUN_0041efe0(CBoxActor *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *pCVar2;
  CBox *pCVar3;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                     ((CKeyFramedModelInstance *)(pCVar1 + 1));
  pCVar3 = core_box_cpp_CBox_ctor_FUN_0041ad40((CBox *)&pCVar2[1].field_0xc0);
  *(byte **)(pCVar3 + -0x240) = &g_CBoxActorVTable;
  *(uint *)(pCVar3 + -4) = 0;
  *(uint *)(pCVar3 + -0x88) = 0x41a00000;
  *(uint *)(pCVar3 + -0x84) = 0;
  *(uint *)(pCVar3 + -0x8c) = 0;
  *(uint *)(pCVar3 + -0x90) = *(uint *)(pCVar3 + -0x8c);
  *(uint *)(pCVar3 + -0x94) = *(uint *)(pCVar3 + -0x90);
  pCVar3[-0xc0] = (CBox)0x0;
  pCVar3[-0xac] = (CBox)0x0;
  *(uint *)(pCVar3 + -0x98) = 0;
  *(uint *)(pCVar3 + -0x80) = 0;
  *(uint *)(pCVar3 + -0x78) = 0;
  *(uint *)(pCVar3 + -0x7c) = 0;
  *(uint *)(pCVar3 + -0x74) = 0;
  pCVar3[-0x68] = (CBox)0x0;
  *(uint *)(pCVar3 + -0x70) = 0;
  *(uint *)(pCVar3 + 0x25c) = 0;
  *(uint *)(pCVar3 + 0x344) = 0;
  *(uint *)(pCVar3 + 0x340) = *(uint *)(pCVar3 + 0x344);
  *(uint *)(pCVar3 + 0x33c) = *(uint *)(pCVar3 + 0x340);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)(pCVar3 + -0x23c),"?question.kfm" + 1);
  *(uint *)(pCVar3 + 0x254) = 0xffffffff;
  *(uint *)(pCVar3 + 0x260) = 1;
  *(uint *)(pCVar3 + 0x264) = 1;
  *(uint *)(pCVar3 + 0x268) = 0;
  pCVar3[0x26c] = (CBox)0x0;
  pCVar3[0x2d0] = (CBox)0x0;
  *(uint *)(pCVar3 + 0x334) = 0;
  *(uint *)(pCVar3 + 0x338) = 0;
  *(uint *)(pCVar3 + 0x34c) = 0x40000000;
  return (CBoxActor *)(pCVar3 + -0x394);
}
