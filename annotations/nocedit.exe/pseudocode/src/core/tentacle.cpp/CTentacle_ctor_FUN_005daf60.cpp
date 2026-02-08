// Name: core_tentacle.cpp_CTentacle_ctor_FUN_005daf60
// Address: 005daf60
// Address Range: [[005daf60, 005dafbf]]
// Convention: __cdecl
// Signature: CTentacle * __cdecl core_tentacle_cpp_CTentacle_ctor_FUN_005daf60(CTentacle *this_ptr)

#include "nocturne.h"

CTentacle * __cdecl core_tentacle_cpp_CTentacle_ctor_FUN_005daf60(CTentacle *this_ptr)

{
  CTentacle *pCVar1;
  
  pCVar1 = (CTentacle *)core_enemy_cpp_CEnemy_ctor_FUN_004a9500(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CTentacleVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005a0840
            (&(pCVar1->base).base.model,"tentacle.dfm");
  (pCVar1->base).base.field56_0x2de4 = 50.0;
  (pCVar1->base).base.field57_0x2de8 = 100.0;
  pCVar1->unk1[8] = '\0';
  pCVar1->unk1[9] = '\0';
  pCVar1->unk1[10] = '\0';
  pCVar1->unk1[0xb] = '\0';
  pCVar1->unk1[0xc] = '\0';
  pCVar1->unk1[0xd] = '\0';
  pCVar1->unk1[0xe] = '\0';
  pCVar1->unk1[0xf] = '\0';
  pCVar1->grave_actor = (CDemonActor *)0x0;
  return pCVar1;
}
