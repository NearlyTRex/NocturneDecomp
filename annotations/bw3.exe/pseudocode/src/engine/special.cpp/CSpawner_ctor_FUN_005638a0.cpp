// Name: engine_special.cpp_CSpawner_ctor_FUN_005638a0
// Address: 005638a0
// Address Range: [[005638a0, 0056390a]]
// Convention: unknown
// Signature: CSpawner * engine_special_cpp_CSpawner_ctor_FUN_005638a0(CSpawner *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSpawner * engine_special_cpp_CSpawner_ctor_FUN_005638a0(CSpawner *this_ptr)

{
  CDemonActor *pCVar1;
  CDeformableModelInstance *pCVar2;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_ctor_FUN_0054bf00
                     ((CDeformableModelInstance *)pCVar1[1].create_event);
  pCVar2[-1].bounding_box.min.x = (float)&g_CSpawnerVTable;
  pCVar2[-0xffffffff00000001].model_name[0x40] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x41] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x42] = -0x10;
  pCVar2[-0xffffffff00000001].model_name[0x43] = 'A';
  *(byte *)((int)&pCVar2[-1].accumulated_root_motion.y + 2) = 0;
  pCVar2[-1].model_name[0x18] = '\0';
  *(uint *)&pCVar2[-1].field_0x22d4 = 1;
  pCVar2[-0xffffffff00000001].model_name[0x44] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x45] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x46] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x47] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x48] = '\n';
  pCVar2[-0xffffffff00000001].model_name[0x49] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x4a] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x4b] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x3c] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x3d] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x3e] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x3f] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x38] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x39] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x3a] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x3b] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x4c] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x4d] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x4e] = '\0';
  pCVar2[-0xffffffff00000001].model_name[0x4f] = '\0';
  pCVar2[-1].model_ptr = (CDeformableModel *)0x42c80000;
  return (CSpawner *)&pCVar2[-1].field_0x21d4;
}
