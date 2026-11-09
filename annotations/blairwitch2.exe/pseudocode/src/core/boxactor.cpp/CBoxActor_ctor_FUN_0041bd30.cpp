// Name: core_boxactor.cpp_CBoxActor_ctor_FUN_0041bd30
// Address: 0041bd30
// Address Range: [[0041bd30, 0041be6d]]
// Convention: __cdecl
// Signature: CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_ctor_FUN_0041bd30(CBoxActor *this_ptr)

#include "nocturne.h"

CBoxActor * __cdecl core_boxactor_cpp_CBoxActor_ctor_FUN_0041bd30(CBoxActor *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *pCVar2;
  CBox *pCVar3;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)(pCVar1 + 1));
  pCVar3 = core_box_cpp_CBox_ctor_FUN_005b1bc0((CBox *)&pCVar2[1].field_0xc0);
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
  *(uint *)(pCVar3 + 0x2e0) = 0;
  *(uint *)(pCVar3 + 0x2dc) = *(uint *)(pCVar3 + 0x2e0);
  *(uint *)(pCVar3 + 0x2d8) = *(uint *)(pCVar3 + 0x2dc);
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)(pCVar3 + -0x23c),"?question.kfm" + 1);
  *(uint *)(pCVar3 + 0x254) = 0xffffffff;
  *(uint *)(pCVar3 + 0x260) = 1;
  *(uint *)(pCVar3 + 0x264) = 1;
  *(uint *)(pCVar3 + 0x268) = 0;
  pCVar3[0x26c] = (CBox)0x0;
  *(uint *)(pCVar3 + 0x2d0) = 0;
  *(uint *)(pCVar3 + 0x2d4) = 0;
  return (CBoxActor *)(pCVar3 + -0x4f0);
}
