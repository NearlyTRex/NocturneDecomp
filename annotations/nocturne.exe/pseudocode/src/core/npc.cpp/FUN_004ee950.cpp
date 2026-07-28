// Name: core_npc.cpp_FUN_004ee950
// Address: 004ee950
// Address Range: [[004ee950, 004ee9d9]]
// Convention: unknown
// Signature: int * core_npc_cpp_FUN_004ee950(CCharacter *param_1)

#include "nocturne.h"

int * core_npc_cpp_FUN_004ee950(CCharacter *param_1)

{
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_00423f40(param_1);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_004efd50((CPathMap *)(pCVar1 + 1));
  pCVar2[-1].height_cache[0x50][0x1b] = (int)&PTR_core_npc_cpp_CNPC_setup_FUN_004ee9e0_005a0eb4;
  pCVar2[-1].height_cache_tags[8][0x4d] = 0x3f19999a;
  pCVar2[-1].height_cache_tags[8][0x4e] = 0x3f666666;
  pCVar2[-1].height_cache_tags[8][0x51] = 0x3fcccccd;
  pCVar2[-1].height_cache_tags[8][0x52] = -0x3b864000;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0051e0c0
            (pCVar2[-1].height_cache[0x50] + 0x1c,"priest.dfm");
  pCVar2[-1].height_cache_tags[3][0x53] = 0;
  pCVar2[1].current_position.x = 0.0;
  pCVar2[1].current_position.y = 0.0;
  return pCVar2[-1].height_cache[0x4f] + 0x2c;
}
