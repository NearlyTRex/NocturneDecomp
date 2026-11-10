// Name: core_npc.cpp_CNPC_ctor_FUN_00508f40
// Address: 00508f40
// Address Range: [[00508f40, 00509017]]
// Convention: unknown
// Signature: CNPC * core_npc_cpp_CNPC_ctor_FUN_00508f40(CNPC *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CNPC * core_npc_cpp_CNPC_ctor_FUN_00508f40(CNPC *this_ptr)

{
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  float fVar3;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_0042ac20(&this_ptr->base);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_0050acc0((CPathMap *)(pCVar1 + 1));
  pCVar2[-1].height_cache[0x45][0x19] = (int)&g_CNPCVTable;
  pCVar2[-1].height_cache_tags[0][0x43] = 0x3f19999a;
  pCVar2[-1].height_cache_tags[0][0x44] = 0x3f666666;
  pCVar2[-1].height_cache_tags[0][0x47] = 0x3fcccccd;
  pCVar2[-1].height_cache_tags[0][0x48] = -0x3b864000;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.9,1.1);
  pCVar2[1].current_position.z = fVar3;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)(pCVar2[-1].height_cache[0x45] + 0x1a),
             "nocchar.dfm");
  pCVar2[-1].height_cache[0x5d][0x54] = 0;
  pCVar2[1].current_position.x = 0.0;
  pCVar2[1].current_position.y = 0.0;
  pCVar2[1].voxel_coords.x = 0x10000;
  pCVar2[1].voxel_coords.z = 100;
  pCVar2[1].dest_voxel_coords.y = 0x40000000;
  pCVar2[1].voxel_coords.y = -1;
  return (CNPC *)(pCVar2[-1].height_cache[0x44] + 0x28);
}
