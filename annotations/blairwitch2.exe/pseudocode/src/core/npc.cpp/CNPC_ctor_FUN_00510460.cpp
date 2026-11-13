// Name: core_npc.cpp_CNPC_ctor_FUN_00510460
// Address: 00510460
// Address Range: [[00510460, 0051050f]]
// Convention: __cdecl
// Signature: CNPC * __cdecl core_npc_cpp_CNPC_ctor_FUN_00510460(CNPC *this_ptr)

#include "nocturne.h"

CNPC * __cdecl core_npc_cpp_CNPC_ctor_FUN_00510460(CNPC *this_ptr)

{
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  float fVar3;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_00422340(&this_ptr->base);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_00511c90((CPathMap *)(pCVar1 + 1));
  pCVar2[-1].height_cache[0x1f][0x23] = (int)&g_CNPCVTable;
  pCVar2[-1].height_cache[0x3f][3] = 0x3f19999a;
  pCVar2[-1].height_cache[0x3f][4] = 0x3f666666;
  pCVar2[-1].height_cache[0x3f][7] = 0x3fcccccd;
  pCVar2[-1].height_cache[0x3f][8] = -0x3b864000;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.9,1.1);
  pCVar2[1].current_position.z = fVar3;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)(pCVar2[-1].height_cache[0x1f] + 0x24),
             "nocchar.dfm");
  pCVar2[-1].height_cache[0x37][0x22] = 0;
  pCVar2[1].current_position.x = 0.0;
  pCVar2[1].current_position.y = 0.0;
  return (CNPC *)(pCVar2[-1].height_cache[0x1d] + 0x3f);
}
