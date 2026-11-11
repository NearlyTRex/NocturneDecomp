// Name: unkafter_bird.cpp_CBird_ctor_FUN_004151f0
// Address: 004151f0
// Address Range: [[004151f0, 004152b3]]
// Convention: unknown
// Signature: CBird * unkafter_bird_cpp_CBird_ctor_FUN_004151f0(CBird *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBird * unkafter_bird_cpp_CBird_ctor_FUN_004151f0(CBird *this_ptr)

{
  CCharacter *pCVar1;
  CPathMap *pCVar2;
  float fVar3;
  
  pCVar1 = core_charactr_cpp_CCharacter_ctor_FUN_0042c080(&this_ptr->base);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_00532fe0((CPathMap *)(pCVar1 + 1));
  pCVar2[-1].height_cache[0x4c][0x5c] = (int)&g_CBirdVTable;
  pCVar2[-1].height_cache_tags[6][0x4a] = 0x3f19999a;
  pCVar2[-1].height_cache_tags[6][0x4b] = 0x3f666666;
  pCVar2[-1].height_cache_tags[6][0x4e] = 0x3fcccccd;
  pCVar2[-1].height_cache_tags[6][0x4f] = -0x3b864000;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.9,1.1);
  pCVar2[1].voxel_coords.x = 0;
  pCVar2[1].voxel_coords.y = 0;
  pCVar2[1].current_position.z = fVar3;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            ((CDeformableModelInstance *)(pCVar2[-1].height_cache[0x4c] + 0x5d),(char *)0x5d3c93);
  pCVar2[-1].height_cache_tags[1][0x33] = 0;
  pCVar2[1].current_position.x = 0.0;
  pCVar2[1].current_position.y = 0.0;
  return (CBird *)(pCVar2[-1].height_cache[0x4c] + 7);
}
