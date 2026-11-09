// Name: core_tentacle.cpp_CTentacle_ctor_FUN_005725d0
// Address: 005725d0
// Address Range: [[005725d0, 0057262f]]
// Convention: __cdecl
// Signature: CTentacle * __cdecl core_tentacle_cpp_CTentacle_ctor_FUN_005725d0(CTentacle *this_ptr)

#include "nocturne.h"

CTentacle * __cdecl core_tentacle_cpp_CTentacle_ctor_FUN_005725d0(CTentacle *this_ptr)

{
  CTentacle *pCVar1;
  
  pCVar1 = (CTentacle *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  *(byte **)&pCVar1->field_0x2b0 = &g_CTentacleVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar1->field_0x2b4,"tentacle.dfm");
  *(uint *)&pCVar1->field_0x3438 = 0x42480000;
  *(uint *)&pCVar1->field_0x343c = 0x42c80000;
  *(uint *)&pCVar1->field_0x10af8 = 0;
  *(uint *)&pCVar1->field_0x10afc = 0;
  *(uint *)&pCVar1->field_0x10b00 = 0;
  return pCVar1;
}
