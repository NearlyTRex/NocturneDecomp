// Name: core_stairs.cpp_CStairs_ctor_FUN_005b9b70
// Address: 005b9b70
// MANUAL RECONSTRUCTION
// Address Range: [[005b9b70, 005b9bd2]]
// Convention: __cdecl
// Signature: CStairs * __cdecl core_stairs_cpp_CStairs_ctor_FUN_005b9b70(CStairs *this_ptr)

#include "nocturne.h"

CStairs * __cdecl core_stairs_cpp_CStairs_ctor_FUN_005b9b70(CStairs *this_ptr)

{
  CDemonActor *pCVar1;
  CStairs_ptr_368 pvVar2;

  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pvVar2 = __arrinit
                     (((CStairs *)pCVar1)->collision_triangles,0x28,&g_CDemonTriangleTypeInfo);
  ADJ(pvVar2)->base.vtable._ub = &g_CStairsVTable;
  ADJ(pvVar2)->rise = 1.0;
  ADJ(pvVar2)->run = 1.0;
  ADJ(pvVar2)->width = 3.0;
  ADJ(pvVar2)->stair_count = 5;
  ADJ(pvVar2)->bevel_y = 0.5;
  ADJ(pvVar2)->bevel_z = 0.3;
  ADJ(pvVar2)->ground_type = GROUND_TYPE_DEFAULT;
  return ADJ(pvVar2);
}
