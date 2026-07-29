// Name: core_vessel.cpp_CCryptVessel_ctor_FUN_0054f920
// Address: 0054f920
// Address Range: [[0054f920, 0054fa77]]
// Convention: __cdecl
// Signature: CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_ctor_FUN_0054f920(CCryptVessel *this_ptr)

#include "nocturne.h"

CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_ctor_FUN_0054f920(CCryptVessel *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  CFlame *pCVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar2 = core_actor_cpp_FUN_00409d30(&this_ptr->base);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pCVar4 = core_flame_cpp_CFlame_ctor_FUN_0048cf60((CFlame *)(pCVar3[1].model_name + 0x78));
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00454490
                     ((CKeyFramedModelInstance *)(pCVar4[1].base.actor_name + 4));
  pcVar5 = "none";
  *(CDemonActor_vtable **)(pCVar3[-4].model_name + 0x68) = &g_CCryptVesselVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580
            ((CKeyFramedModelInstance *)(pCVar3[-4].model_name + 0x6c),"vsslbase.kfm");
  pCVar3[-0xffffffff00000003].model_name[0x6c] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x6d] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x6e] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x6f] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x70] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x71] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x72] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x73] = '\0';
  pcVar6 = pCVar3[-3].model_name + 0x78;
  pCVar3[-0xffffffff00000003].model_name[0x74] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x75] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x76] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x77] = '\0';
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pCVar3[-2].part_visibility_flags[0xf] = 0;
  pCVar3[-2].part_visibility_flags[0x10] = 0;
  pcVar5 = "none";
  pCVar3[-2].part_visibility_flags[0x14] = 0;
  pcVar6 = pCVar3[-3].model_name + 0xdc;
  pCVar3[-2].part_visibility_flags[0x13] = 0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pCVar3[-2].part_visibility_flags[0x11] = 0x41200000;
  pCVar3[-2].part_visibility_flags[0x15] = 1;
  pCVar3[-2].part_visibility_flags[0x12] = 0;
  pCVar3[-1].model_ptr = (CKeyFramedModel *)0x0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00454580(pCVar3,"vsslorb.kfm");
  pCVar3[1].part_visibility_flags[0] = 1;
  pCVar3[-0xffffffff00000004].model_name[0x18] = '\x01';
  pCVar3[-0xffffffff00000004].model_name[0x19] = '\0';
  pCVar3[-0xffffffff00000004].model_name[0x1a] = '\0';
  pCVar3[-0xffffffff00000004].model_name[0x1b] = '\0';
  pCVar3[1].part_visibility_flags[1] = 0;
  pCVar3[1].part_visibility_flags[2] = 0;
  return (CCryptVessel *)(pCVar3[-5].model_name + 0x98);
}
