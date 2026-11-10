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
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_00408600(&this_ptr->base);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pCVar4 = core_flame_cpp_CFlame_ctor_FUN_004a59b0((CFlame *)(pCVar3[1].model_name + 0x78));
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                     ((CKeyFramedModelInstance *)(pCVar4[1].base.actor_name + 4));
  pcVar5 = (char *)0x5d7081;
  *(CDemonActor_vtable **)(pCVar3[-4].model_name + 0x60) = &g_CCryptVesselVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0
            ((CKeyFramedModelInstance *)(pCVar3[-4].model_name + 100),"vsslbase.kfm");
  pCVar3[-0xffffffff00000003].model_name[100] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x65] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x66] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x67] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x68] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x69] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x6a] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x6b] = '\0';
  pcVar6 = pCVar3[-3].model_name + 0x70;
  pCVar3[-0xffffffff00000003].model_name[0x6c] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x6d] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x6e] = '\0';
  pCVar3[-0xffffffff00000003].model_name[0x6f] = '\0';
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
  pcVar5 = (char *)0x5d7086;
  pCVar3[-2].part_visibility_flags[0x12] = 0;
  pcVar6 = pCVar3[-3].model_name + 0xd4;
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
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_004625f0(pCVar3,(char *)0x5d708b);
  pCVar3[1].part_visibility_flags[0] = 1;
  pCVar3[-0xffffffff00000004].model_name[8] = '\x01';
  pCVar3[-0xffffffff00000004].model_name[9] = '\0';
  pCVar3[-0xffffffff00000004].model_name[10] = '\0';
  pCVar3[-0xffffffff00000004].model_name[0xb] = '\0';
  pCVar3[1].part_visibility_flags[1] = 0;
  pCVar3[1].part_visibility_flags[2] = 0;
  return (CCryptVessel *)(pCVar3[-5].model_name + 0x88);
}
