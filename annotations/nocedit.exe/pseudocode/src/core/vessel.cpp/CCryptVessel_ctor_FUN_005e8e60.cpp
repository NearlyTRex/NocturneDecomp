// Name: core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60
// Address: 005e8e60
// Address Range: [[005e8e60, 005e8fb7]]
// Convention: __cdecl
// Signature: CCryptVessel * core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60(CCryptVessel * this_ptr)

#include "nocturne.h"

CCryptVessel * __cdecl core_vessel_cpp_CCryptVessel_ctor_FUN_005e8e60(CCryptVessel *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  CFlame *pCVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pCVar4 = core_flame_cpp_CFlame_ctor_FUN_004c9aa0((CFlame *)(pCVar3[1].animation_state + 0x14));
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(pCVar4[1].base_actor.actor_name + 4));
  pcVar5 = "none";
  *(CDemonActor_vtable **)(pCVar3[-4].model_name + 0x60) = &g_CCryptVesselVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)pCVar3[-4].animation_state,"vsslbase.kfm");
  pCVar3[-0xffffffff00000003].animation_state[0] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[1] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[2] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[3] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[4] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[5] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[6] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[7] = '\0';
  pcVar6 = pCVar3[-3].animation_state + 0xc;
  pCVar3[-0xffffffff00000003].animation_state[8] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[9] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[10] = '\0';
  pCVar3[-0xffffffff00000003].animation_state[0xb] = '\0';
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pCVar3[-2].part_visibility_flags[0xd] = 0;
  pCVar3[-2].part_visibility_flags[0xe] = 0;
  pcVar5 = "none";
  pCVar3[-2].part_visibility_flags[0x12] = 0;
  pcVar6 = pCVar3[-3].animation_state + 0x70;
  pCVar3[-2].part_visibility_flags[0x11] = 0;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pCVar3[-2].part_visibility_flags[0xf] = 0x41200000;
  pCVar3[-2].part_visibility_flags[0x13] = 1;
  pCVar3[-2].part_visibility_flags[0x10] = 0;
  pCVar3[-1].model_ptr = (CKeyFramedModel *)0x0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0(pCVar3,"vsslorb.kfm");
  pCVar3[1].part_visibility_flags[0] = 1;
  pCVar3[-0xffffffff00000004].model_name[8] = '\x01';
  pCVar3[-0xffffffff00000004].model_name[9] = '\0';
  pCVar3[-0xffffffff00000004].model_name[10] = '\0';
  pCVar3[-0xffffffff00000004].model_name[0xb] = '\0';
  pCVar3[1].part_visibility_flags[1] = 0;
  pCVar3[1].part_visibility_flags[2] = 0;
  return (CCryptVessel *)(pCVar3[-5].animation_state + 0x24);
}
