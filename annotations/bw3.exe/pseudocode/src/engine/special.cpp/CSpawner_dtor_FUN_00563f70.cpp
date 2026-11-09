// Name: engine_special.cpp_CSpawner_dtor_FUN_00563f70
// Address: 00563f70
// Address Range: [[00563f70, 00563fd4]]
// Convention: unknown
// Signature: CSpawner * engine_special_cpp_CSpawner_dtor_FUN_00563f70(CSpawner *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CSpawner * engine_special_cpp_CSpawner_dtor_FUN_00563f70(CSpawner *this_ptr,uint flags)

{
  CDeformableModelInstance *pCVar1;
  CSpawner *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CSpawnerTypeInfo);
    FUN_005a30b6(ptr);
    return this_ptr;
  }
  pCVar1 = core_skeleton_cpp_CDeformableModelInstance_dtor_FUN_0054bf80
                     ((CDeformableModelInstance *)&this_ptr->field_0x1d0,0);
  pCVar2 = (CSpawner *)
           core_actor_cpp_CDemonActor_dtor_FUN_00408770((CDemonActor *)&pCVar1[-1].field_0x21d4,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_005a30c4(pCVar2);
  return pCVar2;
}
