// Name: core_vessel.cpp_CCryptVessel_ctor_FUN_00584ed0
// Address: 00584ed0
// Address Range: [[00584ed0, 00585027]]
// Convention: __cdecl
// Signature: CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_ctor_FUN_00584ed0(CCryptVessel *this_ptr)

#include "nocturne.h"

CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_ctor_FUN_00584ed0(CCryptVessel *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  CFlame *pCVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pCVar4 = core_flame_cpp_CFlame_ctor_FUN_0049f180((CFlame *)&pCVar3[1].field_0xf0);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)&pCVar4[1].field_0x4);
  pcVar5 = (char *)0x5eddbc;
  *(byte **)&pCVar3[-5].field_0xf8 = &g_CCryptVesselVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar3[-5].field_0xfc,"vsslbase.kfm");
  *(uint *)&pCVar3[-4].field_0xfc = 0;
  *(uint *)&pCVar3[-4].field_0x100 = 0;
  pcVar6 = &pCVar3[-4].field_0x108;
  *(uint *)&pCVar3[-4].field_0x104 = 0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar3[-3].field_0x54 = 0;
  *(uint *)&pCVar3[-3].field_0x58 = 0;
  pcVar5 = (char *)0x5eddc1;
  *(uint *)&pCVar3[-3].field_0x68 = 0;
  pcVar6 = &pCVar3[-4].field_0x16c;
  *(uint *)&pCVar3[-3].field_0x64 = 0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar3[-3].field_0x5c = 0x41200000;
  *(uint *)&pCVar3[-3].field_0x6c = 1;
  *(uint *)&pCVar3[-3].field_0x60 = 0;
  *(uint *)&pCVar3[-1].field_0x178 = 0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(pCVar3,(char *)0x5eddc6);
  *(uint *)(pCVar3 + 1) = 1;
  *(uint *)&pCVar3[-6].field_0xc0 = 1;
  *(uint *)&pCVar3[1].field_0x4 = 0;
  *(uint *)&pCVar3[1].field_0x8 = 0;
  return (CCryptVessel *)&pCVar3[-7].field_0x140;
}
