// Name: core_drip.cpp_CDrip_ctor_FUN_0048e000
// Address: 0048e000
// Address Range: [[0048e000, 0048e0de]]
// Convention: __cdecl
// Signature: CDrip * __cdecl core_drip_cpp_CDrip_ctor_FUN_0048e000(CDrip *this_ptr)

#include "nocturne.h"

CDrip * __cdecl core_drip_cpp_CDrip_ctor_FUN_0048e000(CDrip *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *this_ptr_00;
  char *pcVar3;
  int *piVar4;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  this_ptr_00 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                          ((CKeyFramedModelInstance *)(pCVar2 + 1));
  this_ptr_00[-1].model_ptr = (CKeyFramedModel *)&g_CDripVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            (this_ptr_00,"stalag.kfm");
  this_ptr_00[1].part_visibility_flags[0] = 2;
  this_ptr_00[1].part_visibility_flags[1] = 1;
  this_ptr_00[1].part_visibility_flags[0xe] = 0;
  this_ptr_00[1].part_visibility_flags[0xd] = this_ptr_00[1].part_visibility_flags[0xe];
  this_ptr_00[1].part_visibility_flags[0xc] = this_ptr_00[1].part_visibility_flags[0xd];
  this_ptr_00[1].part_visibility_flags[3] = 0x40a00000;
  this_ptr_00[1].part_visibility_flags[4] = 0x41200000;
  this_ptr_00[1].part_visibility_flags[2] = 0;
  pcVar3 = "rock-x.wav";
  this_ptr_00[1].part_visibility_flags[5] = 0;
  this_ptr_00[1].part_visibility_flags[0xf] = 0x41200000;
  piVar4 = this_ptr_00[1].part_visibility_flags + 0x10;
  this_ptr_00[1].part_visibility_flags[0x19] = 0;
  do {
    cVar1 = *pcVar3;
    *(char *)piVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    *(char *)((int)piVar4 + 1) = cVar1;
    piVar4 = (int *)((int)piVar4 + 2);
  } while (cVar1 != '\0');
  this_ptr_00[1].part_visibility_flags[0x18] = 0;
  return (CDrip *)(this_ptr_00[-1].part_visibility_flags + 9);
}
