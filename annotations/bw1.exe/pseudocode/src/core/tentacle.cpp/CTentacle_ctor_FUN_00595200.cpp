// Name: core_tentacle.cpp_CTentacle_ctor_FUN_00595200
// Address: 00595200
// Address Range: [[00595200, 0059525f]]
// Convention: __cdecl
// Signature: CTentacle * __cdecl core_tentacle_cpp_CTentacle_ctor_FUN_00595200(CTentacle *this_ptr)

#include "nocturne.h"

CTentacle * __cdecl core_tentacle_cpp_CTentacle_ctor_FUN_00595200(CTentacle *this_ptr)

{
  CTentacle *pCVar1;
  
  pCVar1 = (CTentacle *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CTentacleVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar1->field_0x158,"tentacle.dfm");
  *(uint *)&pCVar1->field_0x2ff4 = 0x42480000;
  *(uint *)&pCVar1->field_0x2ff8 = 0x42c80000;
  *(uint *)&pCVar1->field_0xc268 = 0;
  *(uint *)&pCVar1->field_0xc26c = 0;
  *(uint *)&pCVar1->field_0xc270 = 0;
  return pCVar1;
}
