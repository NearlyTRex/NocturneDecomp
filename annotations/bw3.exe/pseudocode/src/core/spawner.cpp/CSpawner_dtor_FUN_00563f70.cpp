// Name: core_spawner.cpp_CSpawner_dtor_FUN_00563f70
// Address: 00563f70
// Address Range: [[00563f70, 00563fd4]]
// Convention: __cdecl
// Signature: CSpawner * __cdecl core_spawner_cpp_CSpawner_dtor_FUN_00563f70(CSpawner *this_ptr,uint flags)

#include "nocturne.h"

CSpawner * __cdecl core_spawner_cpp_CSpawner_dtor_FUN_00563f70(CSpawner *this_ptr,uint flags)

{
  CDeformableModelInstance *pCVar1;
  CSpawner *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CSpawnerTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80(&this_ptr->spawn_model,0);
  pCVar2 = (CSpawner *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770
                     ((CDemonActor *)(pCVar1[-1].part_data.visibility_flags + 0x25),1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005a30c4(pCVar2);
  return pCVar2;
}
