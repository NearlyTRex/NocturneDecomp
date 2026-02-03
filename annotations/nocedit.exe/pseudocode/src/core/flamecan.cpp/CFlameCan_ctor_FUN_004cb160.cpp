// Name: core_flamecan.cpp_CFlameCan_ctor_FUN_004cb160
// Address: 004cb160
// Address Range: [[004cb160, 004cb1f8]]
// Convention: __cdecl
// Signature: CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_ctor_FUN_004cb160(CFlameCan *this_ptr)

#include "nocturne.h"

CFlameCan * __cdecl core_flamecan_cpp_CFlameCan_ctor_FUN_004cb160(CFlameCan *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  CFlame *pCVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(pCVar2 + 1));
  pCVar4 = core_flame_cpp_CFlame_ctor_FUN_004c9aa0
                     ((CFlame *)(pCVar3[1].part_visibility_flags + 0x1b));
  pcVar5 = "none";
  *(CDemonActor_vtable **)(pCVar4[-1].base.create_event + 0x40) = &g_CFlameCanVTable;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)(pCVar4[-1].base.create_event + 0x44),
             "question.kfm");
  pCVar4[-0xffffffff00000001].on_event_alt[0x1c] = '\0';
  pCVar4[-0xffffffff00000001].on_event_alt[0x1d] = '\0';
  pCVar4[-0xffffffff00000001].on_event_alt[0x1e] = '\0';
  pCVar4[-0xffffffff00000001].on_event_alt[0x1f] = '\0';
  pcVar6 = pCVar4[-1].on_event_alt + 0x24;
  pCVar4[-0xffffffff00000001].on_event_alt[0x20] = '\0';
  pCVar4[-0xffffffff00000001].on_event_alt[0x21] = '\0';
  pCVar4[-0xffffffff00000001].on_event_alt[0x22] = ' ';
  pCVar4[-0xffffffff00000001].on_event_alt[0x23] = 'A';
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
