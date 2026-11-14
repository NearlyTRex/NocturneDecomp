// Name: core_enemy.cpp_CEnemy_ctor_FUN_00488fd0
// Address: 00488fd0
// Address Range: [[00488fd0, 00489106]]
// Convention: __cdecl
// Signature: CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(CEnemy *this_ptr)

#include "nocturne.h"

CEnemy * __cdecl core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(CEnemy *this_ptr)

{
  char cVar1;
  CCharacter *pCVar2;
  CKeyFramedModelInstance *pCVar3;
  float fVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar2 = core_charactr_cpp_CCharacter_ctor_FUN_0042ac20(&this_ptr->base);
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00462500
                     ((CKeyFramedModelInstance *)&pCVar2[1].base.process_disabled);
  *(CEnemy_full_vtable **)(pCVar3[-0x8b].model_name + 0x60) = &g_CEnemyVTable;
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.9,1.1);
  pCVar3[-0xffffffff00000001].model_name[4] = '\0';
  pCVar3[-0xffffffff00000001].model_name[5] = '\0';
  pCVar3[-0xffffffff00000001].model_name[6] = '\0';
  pCVar3[-0xffffffff00000001].model_name[7] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x88] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x89] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x8a] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x8b] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x18] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x19] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x1a] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x1b] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x1c] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x1d] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x1e] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x1f] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x20] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x21] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x22] = 'H';
  pCVar3[-0xffffffff00000001].model_name[0x23] = 'B';
  pCVar3[-0xffffffff00000001].model_name[8] = '\x01';
  pCVar3[-0xffffffff00000001].model_name[9] = '\0';
  pCVar3[-0xffffffff00000001].model_name[10] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0xb] = '\0';
  pCVar3[1].part_visibility_flags[0] = 0;
  pCVar3[-0xffffffff00000001].model_name[0xc] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0xd] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0xe] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0xf] = '\0';
  pCVar3[-1].model_name[0x24] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x10] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x11] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x12] = -0x38;
  pCVar3[-0xffffffff00000001].model_name[0x13] = 'B';
  pcVar5 = (char *)0x5bdb7e;
  pCVar3[-0xffffffff00000001].model_name[0x14] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x15] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x16] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x17] = '\0';
  pcVar6 = pCVar3[-0x8b].model_name + 0x2c;
  pCVar3[-0xffffffff00000001].model_name[0x8c] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x8d] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x8e] = -0x40;
  pCVar3[-0xffffffff00000001].model_name[0x8f] = '@';
  pCVar3[1].part_visibility_flags[1] = 1;
  *(float *)pCVar3[-1].model_name = fVar4;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  pCVar3[-0xffffffff00000073].model_name[0x98] = -0x25;
  pCVar3[-0xffffffff00000073].model_name[0x99] = '\x0f';
  pCVar3[-0xffffffff00000073].model_name[0x9a] = -0x37;
  pCVar3[-0xffffffff00000073].model_name[0x9b] = '?';
  pCVar3[-0xffffffff00000001].model_name[0x90] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x91] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x92] = ' ';
  pCVar3[-0xffffffff00000001].model_name[0x93] = 'A';
  pCVar3[-0xffffffff00000001].model_name[0x94] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x95] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x96] = -0x80;
  pCVar3[-0xffffffff00000001].model_name[0x97] = '?';
  pCVar3[-0xffffffff00000001].model_name[0x98] = '\x01';
  pCVar3[-0xffffffff00000001].model_name[0x99] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x9a] = '\0';
  pCVar3[-0xffffffff00000001].model_name[0x9b] = '\0';
  pCVar3[-1].model_name[0x9c] = '\0';
  pCVar3[-1].model_ptr = (CKeyFramedModel *)0x0;
  return (CEnemy *)(pCVar3[-0x8c].model_name + 0x88);
}
