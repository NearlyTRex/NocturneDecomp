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
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408790(&this_ptr->base);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pCVar4 = core_flame_cpp_CFlame_ctor_FUN_0049f180((CFlame *)(pCVar3[1].model_name + 0x78));
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_0044fc80
                     ((CKeyFramedModelInstance *)(pCVar4[1].base.actor_name + 4));
  pcVar5 = (char *)0x5eddbc;
  *(CDemonActor_vtable **)(pCVar3[-5].model_name + 0x80) = &g_CCryptVesselVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)(pCVar3[-5].model_name + 0x84),"vsslbase.kfm");
  pCVar3[-0xffffffff00000004].model_name[0x84] = '\0';
  pCVar3[-0xffffffff00000004].model_name[0x85] = '\0';
  pCVar3[-0xffffffff00000004].model_name[0x86] = '\0';
  pCVar3[-0xffffffff00000004].model_name[0x87] = '\0';
  pCVar3[-0xffffffff00000004].model_name[0x88] = '\0';
  pCVar3[-0xffffffff00000004].model_name[0x89] = '\0';
  pCVar3[-0xffffffff00000004].model_name[0x8a] = '\0';
  pCVar3[-0xffffffff00000004].model_name[0x8b] = '\0';
  pcVar6 = pCVar3[-4].model_name + 0x90;
  pCVar3[-0xffffffff00000004].model_name[0x8c] = '\0';
  pCVar3[-0xffffffff00000004].model_name[0x8d] = '\0';
  pCVar3[-0xffffffff00000004].model_name[0x8e] = '\0';
  pCVar3[-0xffffffff00000004].model_name[0x8f] = '\0';
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pCVar3[-3].part_visibility_flags[0x15] = 0;
  pCVar3[-3].part_visibility_flags[0x16] = 0;
  pcVar5 = (char *)0x5eddc1;
  pCVar3[-3].part_visibility_flags[0x1a] = 0;
  pcVar6 = pCVar3[-4].model_name + 0xf4;
  pCVar3[-3].part_visibility_flags[0x19] = 0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pCVar3[-3].part_visibility_flags[0x17] = 0x41200000;
  pCVar3[-3].part_visibility_flags[0x1b] = 1;
  pCVar3[-3].part_visibility_flags[0x18] = 0;
  pCVar3[-1].model_ptr = (CKeyFramedModel *)0x0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70(pCVar3,(char *)0x5eddc6);
  pCVar3[1].part_visibility_flags[0] = 1;
  pCVar3[-0xffffffff00000006].model_name[0x48] = '\x01';
  pCVar3[-0xffffffff00000006].model_name[0x49] = '\0';
  pCVar3[-0xffffffff00000006].model_name[0x4a] = '\0';
  pCVar3[-0xffffffff00000006].model_name[0x4b] = '\0';
  pCVar3[1].part_visibility_flags[1] = 0;
  pCVar3[1].part_visibility_flags[2] = 0;
  return (CCryptVessel *)(pCVar3[-7].model_name + 200);
}
