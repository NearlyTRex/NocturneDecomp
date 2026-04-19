// Name: core_npc.cpp_CNPC_ctor_FUN_005447e0
// Address: 005447e0
// Address Range: [[005447e0, 00544869]]
// Convention: __cdecl
// Signature: CNPC * __cdecl core_npc_cpp_CNPC_ctor_FUN_005447e0(CNPC *this_ptr)

#include "nocturne.h"

CNPC * __cdecl core_npc_cpp_CNPC_ctor_FUN_005447e0(CNPC *this_ptr)

{
  CNPC *pCVar1;
  CNPC_ptr_48676 pCVar2;
  
  pCVar1 = (CNPC *)core_charactr_cpp_CCharacter_ctor_FUN_00427e20(&this_ptr->base);
  pCVar2 = core_path_cpp_CPathMap_ctor_FUN_00546450(&pCVar1->path_map);
  ADJ(pCVar2)->base.base.vtable._ub = &g_CNPCVTable._ub;
  ADJ(pCVar2)->base.collision_cylinder_height = 0.6;
  ADJ(pCVar2)->base.collision_cylinder_radius = 0.9;
  ADJ(pCVar2)->base.collision_cylinder_bottom = 1.6;
  ADJ(pCVar2)->base.collision_cylinder_top = -999.0;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&ADJ(pCVar2)->base.model,"priest.dfm");
  ADJ(pCVar2)->base.show_in_editor = 0;
  ADJ(pCVar2)->shoot_me = 0;
  ADJ(pCVar2)->pool_me = 0;
  return ADJ(pCVar2);
}
