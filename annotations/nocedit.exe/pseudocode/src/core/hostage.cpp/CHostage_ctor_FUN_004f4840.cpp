// Name: core_hostage.cpp_CHostage_ctor_FUN_004f4840
// Address: 004f4840
// Address Range: [[004f4840, 004f4962]]
// Convention: __cdecl
// Signature: CHostage * core_hostage.cpp_CHostage_ctor_FUN_004f4840(CHostage * this_ptr)

#include "nocturne.h"

CHostage * __cdecl core_hostage_cpp_CHostage_ctor_FUN_004f4840(CHostage *this_ptr)

{
  char cVar1;
  CHostage *pCVar2;
  char *pcVar3;
  char *pcVar4;
  
  pCVar2 = (CHostage *)core_npc_cpp_CNPC_ctor_FUN_005447e0(&this_ptr->base_npc);
  (pCVar2->base_npc).base_character.base_actor.vtable._ub = &g_CHostageVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar2->base_npc).base_character.model,"hickdad.dfm");
  pCVar2->follow_state = 0;
  pCVar2->hostage_state = 0;
  pcVar3 = "true";
  pCVar2->field6_0x1fac0[0] = '\0';
  pCVar2->field6_0x1fac0[1] = '\0';
  pCVar2->field6_0x1fac0[2] = '\0';
  pCVar2->field6_0x1fac0[3] = '\0';
  pCVar2->field6_0x1fac0[4] = '\0';
  pCVar2->field6_0x1fac0[5] = '\0';
  pCVar2->field6_0x1fac0[6] = '\0';
  pCVar2->field6_0x1fac0[7] = '\0';
  pcVar4 = pCVar2->field2_0x1f70c;
  pCVar2->rescue_distance = 5.0;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pCVar2->field6_0x1fac0[8] = '\0';
  pCVar2->field6_0x1fac0[9] = '\0';
  pCVar2->field6_0x1fac0[10] = '\0';
  pCVar2->field6_0x1fac0[0xb] = '\0';
  (pCVar2->base_npc).base_character.grabbed_by = (CDemonActor *)0x0;
  pCVar2->field8_0x1fae0[0] = '\0';
  pCVar2->field8_0x1fae0[1] = '\0';
  pCVar2->field8_0x1fae0[2] = '\0';
  pCVar2->field8_0x1fae0[3] = '\0';
  pCVar2->field8_0x1fae0[4] = '\0';
  pCVar2->field8_0x1fae0[5] = '\0';
  pCVar2->field8_0x1fae0[6] = '\0';
  pCVar2->field8_0x1fae0[7] = '\0';
  pCVar2->field2_0x1f70c[100] = '\0';
  pCVar2->field2_0x1f70c[0x84] = '\0';
  pCVar2->field2_0x1f70c[0xe8] = '\0';
  pCVar2->field2_0x1f70c[0x14c] = '\0';
  pCVar2->field2_0x1f70c[0x1b0] = '\0';
  pCVar2->field2_0x1f70c[0x214] = '\0';
  pCVar2->field2_0x1f70c[0x278] = '\0';
  pCVar2->field8_0x1fae0[8] = '\0';
  pCVar2->field8_0x1fae0[9] = '\0';
  pCVar2->field8_0x1fae0[10] = '\0';
  pCVar2->field8_0x1fae0[0xb] = '\0';
  pCVar2->field8_0x1fae0[0xc] = '\0';
  pCVar2->field8_0x1fae0[0xd] = '\0';
  pCVar2->field8_0x1fae0[0xe] = '\0';
  pCVar2->field8_0x1fae0[0xf] = '\0';
  pCVar2->no_shadows_when_saved = 0;
  (pCVar2->base_npc).base_character.descriptive_name[0] = '\0';
  pCVar2->field2_0x1f70c[0x2dc] = '\0';
  pCVar2->field2_0x1f70c[0x340] = '\0';
  (pCVar2->base_npc).base_character.health_bar_mode = 1;
  return pCVar2;
}
