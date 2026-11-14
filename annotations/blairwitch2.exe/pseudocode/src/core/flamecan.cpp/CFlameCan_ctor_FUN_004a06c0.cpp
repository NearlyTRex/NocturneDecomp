// Name: core_flamecan.cpp_CFlameCan_ctor_FUN_004a06c0
// Address: 004a06c0
// Address Range: [[004a06c0, 004a0758]]
// Convention: __cdecl
// Signature: CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_ctor_FUN_004a06c0(CFlameCan *this_ptr)

#include "nocturne.h"

CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_ctor_FUN_004a06c0(CFlameCan *this_ptr)

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
  pCVar4 = core_flame_cpp_CFlame_ctor_FUN_0049f180
                     ((CFlame *)(pCVar3[1].part_visibility_flags + 0x1b));
  pcVar5 = (char *)0x5d594c;
  pCVar4[-1].base.particle_systems[2].standalone = (int)&g_CFlameCanVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            ((CKeyFramedModelInstance *)&pCVar4[-1].base.particle_systems[2].particles,
             "question.kfm");
  pCVar4[-0xffffffff00000001].off_event[0x1c] = '\0';
  pCVar4[-0xffffffff00000001].off_event[0x1d] = '\0';
  pCVar4[-0xffffffff00000001].off_event[0x1e] = '\0';
  pCVar4[-0xffffffff00000001].off_event[0x1f] = '\0';
  pcVar6 = pCVar4[-1].off_event + 0x24;
  pCVar4[-0xffffffff00000001].off_event[0x20] = '\0';
  pCVar4[-0xffffffff00000001].off_event[0x21] = '\0';
  pCVar4[-0xffffffff00000001].off_event[0x22] = ' ';
  pCVar4[-0xffffffff00000001].off_event[0x23] = 'A';
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pCVar4[1].base.actor_name[0] = '\0';
  pCVar4[1].base.actor_name[1] = '\0';
  pCVar4[1].base.actor_name[2] = '\0';
  pCVar4[1].base.actor_name[3] = '\0';
  return (CFlameCan *)(pCVar4[-2].on_event + 0x50);
}
