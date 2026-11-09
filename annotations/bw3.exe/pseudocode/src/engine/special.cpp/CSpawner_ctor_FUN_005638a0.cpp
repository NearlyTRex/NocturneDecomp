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
                     ((CDeformableModelInstance *)&pCVar1[1].field_0x78);
  *(byte **)&pCVar2[-1].field_0x2328 = &g_CSpawnerVTable;
  *(uint *)&pCVar2[-1].field_0x2390 = 0x41f00000;
  pCVar2[-1].field_0x234a = 0;
  pCVar2[-1].field_0x2368 = 0;
  *(uint *)&pCVar2[-1].field_0x22d4 = 1;
  *(uint *)&pCVar2[-1].field_0x2394 = 0;
  *(uint *)&pCVar2[-1].field_0x2398 = 10;
  *(uint *)&pCVar2[-1].field_0x238c = 0;
  *(uint *)&pCVar2[-1].field_0x2388 = 0;
  *(uint *)&pCVar2[-1].field_0x239c = 0;
  *(uint *)&pCVar2[-1].field_0x23a0 = 0x42c80000;
  return (CSpawner *)&pCVar2[-1].field_0x21d4;
}
