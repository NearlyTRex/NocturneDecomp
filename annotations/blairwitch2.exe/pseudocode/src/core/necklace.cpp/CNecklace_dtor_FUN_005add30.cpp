// Name: core_necklace.cpp_CNecklace_dtor_FUN_005add30
// Address: 005add30
// Address Range: [[005add30, 005add94]]
// Convention: unknown
// Signature: CNecklace * core_necklace_cpp_CNecklace_dtor_FUN_005add30(CNecklace *this_ptr,uint flags)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CNecklace * core_necklace_cpp_CNecklace_dtor_FUN_005add30(CNecklace *this_ptr,uint flags)

{
  CBox *pCVar1;
  CDemonActor *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = (void *)__vec_delete(this_ptr,&g_CNecklaceTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = core_box_cpp_CBox_dtor_FUN_005b1c70(&(this_ptr->base).physics_box,0);
  pCVar2 = core_actor_cpp_CDemonActor_dtor_FUN_00408930
                     ((CDemonActor *)&pCVar1[-3].scrape_points[6].raytrace_normal.y,1);
  if ((flags & 2) == 0) {
    return (CNecklace *)pCVar2;
  }
  FUN_005b7fdc(pCVar2);
  return (CNecklace *)pCVar2;
}
