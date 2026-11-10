// Name: core_asgaya.cpp_CAsgaya_ctor_FUN_005a0a10
// Address: 005a0a10
// Address Range: [[005a0a10, 005a0af1]]
// Convention: unknown
// Signature: CAsgaya * core_asgaya_cpp_CAsgaya_ctor_FUN_005a0a10(CAsgaya *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CAsgaya * core_asgaya_cpp_CAsgaya_ctor_FUN_005a0a10(CAsgaya *this_ptr)

{
  CNPC *pCVar1;
  CPathMap *pCVar2;
  float fVar3;
  
  pCVar1 = core_npc_cpp_CNPC_ctor_FUN_00508f40((CNPC *)this_ptr);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_0050acc0((CPathMap *)(pCVar1 + 1));
  pCVar2[-2].height_cache[0x45][0x11] = (int)&g_CAsgayaVTable;
  pCVar2[-2].height_cache_tags[0][0x3b] = 0x3f19999a;
  pCVar2[-2].height_cache_tags[0][0x3c] = 0x3f666666;
  pCVar2[-2].height_cache_tags[0][0x3f] = 0x3fcccccd;
  pCVar2[-2].height_cache_tags[0][0x40] = -0x3b864000;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.9,1.1);
  pCVar2[1].current_position.z = fVar3;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            ((CDeformableModelInstance *)(pCVar2[-2].height_cache[0x45] + 0x12),
             "bwp3_shaman.dfm");
  pCVar2[-2].height_cache[0x5d][0x4c] = 0;
  pCVar2[1].current_position.x = 0.0;
  pCVar2[1].current_position.y = 0.0;
  pCVar2[1].voxel_coords.y = 0;
  pCVar2[1].grid_origin.y = 0xffff;
  pCVar2[-1].path_heading.y = 1.4013e-43;
  pCVar2[-1].update_timer = 0x40000000;
  pCVar2[1].dest_voxel_coords.z = -1;
  return (CAsgaya *)(pCVar2[-2].height_cache[0x44] + 0x20);
}
