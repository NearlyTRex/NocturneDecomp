// Name: core_vessel.cpp_CCryptVessel_ctor_FUN_00576350
// Address: 00576350
// Address Range: [[00576350, 005764a7]]
// Convention: __cdecl
// Signature: CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_ctor_FUN_00576350(CCryptVessel *this_ptr)

#include "nocturne.h"

CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_ctor_FUN_00576350(CCryptVessel *this_ptr)

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
  pCVar4 = core_flame_cpp_CFlame_ctor_FUN_004a59b0((CFlame *)&pCVar3[1].field_0xf0);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                     ((CKeyFramedModelInstance *)&pCVar4[1].field_0x4);
  pcVar5 = (char *)0x5d7081;
  *(byte **)&pCVar3[-4].field_0xd8 = &g_CCryptVesselVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)&pCVar3[-4].field_0xdc,"vsslbase.kfm");
  *(uint *)&pCVar3[-3].field_0xdc = 0;
  *(uint *)&pCVar3[-3].field_0xe0 = 0;
  pcVar6 = &pCVar3[-3].field_0xe8;
  *(uint *)&pCVar3[-3].field_0xe4 = 0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar3[-2].field_0x34 = 0;
  *(uint *)&pCVar3[-2].field_0x38 = 0;
  pcVar5 = (char *)0x5d7086;
  *(uint *)&pCVar3[-2].field_0x48 = 0;
  pcVar6 = &pCVar3[-3].field_0x14c;
  *(uint *)&pCVar3[-2].field_0x44 = 0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar3[-2].field_0x3c = 0x41200000;
  *(uint *)&pCVar3[-2].field_0x4c = 1;
  *(uint *)&pCVar3[-2].field_0x40 = 0;
  *(uint *)&pCVar3[-1].field_0x178 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(pCVar3,(char *)0x5d708b);
  *(uint *)(pCVar3 + 1) = 1;
  *(uint *)&pCVar3[-4].field_0x80 = 1;
  *(uint *)&pCVar3[1].field_0x4 = 0;
  *(uint *)&pCVar3[1].field_0x8 = 0;
  return (CCryptVessel *)&pCVar3[-5].field_0x100;
}
