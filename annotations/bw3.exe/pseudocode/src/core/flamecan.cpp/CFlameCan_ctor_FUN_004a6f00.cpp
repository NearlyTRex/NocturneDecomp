// Name: core_flamecan.cpp_CFlameCan_ctor_FUN_004a6f00
// Address: 004a6f00
// Address Range: [[004a6f00, 004a6f98]]
// Convention: __cdecl
// Signature: CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_ctor_FUN_004a6f00(CFlameCan *this_ptr)

#include "nocturne.h"

CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_ctor_FUN_004a6f00(CFlameCan *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  CFlame *pCVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pCVar4 = core_flame_cpp_CFlame_ctor_FUN_004a59b0((CFlame *)&pCVar3[1].field_0x6c);
  pcVar5 = (char *)0x5c0ca3;
  *(byte **)&pCVar4[-1].field_0xb8 = &g_CFlameCanVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar4[-1].field_0xbc,"question.kfm");
  *(uint *)&pCVar4[-1].field_0x238 = 0;
  pcVar6 = &pCVar4[-1].field_0x240;
  *(uint *)&pCVar4[-1].field_0x23c = 0x41200000;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)(pCVar4 + 1) = 0;
  return (CFlameCan *)&pCVar4[-2].field_0x208;
}
