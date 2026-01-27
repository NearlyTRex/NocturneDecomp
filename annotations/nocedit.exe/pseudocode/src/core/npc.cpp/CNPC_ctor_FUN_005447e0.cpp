// Name: core_npc.cpp_CNPC_ctor_FUN_005447e0
// Address: 005447e0
// Address Range: [[005447e0, 00544869]]
// Convention: __cdecl
// Signature: CNPC * core_npc.cpp_CNPC_ctor_FUN_005447e0(CNPC * this_ptr)

#include "nocturne.h"

CNPC * __cdecl core_npc_cpp_CNPC_ctor_FUN_005447e0(CNPC *this_ptr)

{
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_00427e20(&this_ptr->base);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_00546450((CPathMap *)(pCVar1 + 1));
  pCVar2[-1].height_cache[0x4f][0x1b] = (int)&g_CNPCVTable;
  pCVar2[-1].height_cache_tags[7][0x4d] = 0x3f19999a;
  pCVar2[-1].height_cache_tags[7][0x4e] = 0x3f666666;
  pCVar2[-1].height_cache_tags[7][0x51] = 0x3fcccccd;
  pCVar2[-1].height_cache_tags[7][0x52] = -0x3b864000;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            ((CDeformableModelInstance *)(pCVar2[-1].height_cache[0x4f] + 0x1c),
             "priest.dfm");
  pCVar2[-1].height_cache_tags[2][0x53] = 0;
  pCVar2[1].current_position.x = 0.0;
  pCVar2[1].current_position.y = 0.0;
  return (CNPC *)(pCVar2[-1].height_cache[0x4e] + 0x2a);
}
