// Name: core_tawiscar.cpp_CTawiscara_ctor_FUN_00593dd0
// Address: 00593dd0
// Address Range: [[00593dd0, 00593e7d]]
// Convention: unknown
// Signature: CTawiscara * core_tawiscar_cpp_CTawiscara_ctor_FUN_00593dd0(CTawiscara *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CTawiscara * core_tawiscar_cpp_CTawiscara_ctor_FUN_00593dd0(CTawiscara *this_ptr)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  CTawiscara *pCVar4;
  
  pCVar4 = (CTawiscara *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  *(byte ***)&pCVar4->field_0x154 = &g_CTawiscaraVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar4->field_0x158,0x5d9254);
  *(uint *)&pCVar4->field_0x326c = 0x3f800000;
  *(uint *)&pCVar4->field_0x3270 = 0x40000000;
  *(uint *)&pCVar4->field_0xd054 = 0;
  *(uint *)&pCVar4->field_0xd06c = 1;
  *(uint *)&pCVar4->field_0xd080 = 0;
  uVar1 = _DAT_005e7520;
  *(uint *)&pCVar4->field_0xd084 = 0x40a00000;
  uVar2 = _DAT_005e7524;
  *(uint *)&pCVar4->field_0xd088 = 0;
  uVar3 = 0x41200000;
  *(uint *)&pCVar4->field_0xd08c = 0;
  *(uint *)&pCVar4->field_0xd090 = 0;
  *(uint *)&pCVar4->field_0x3274 = uVar1;
  *(uint *)&pCVar4->field_0x3278 = uVar2;
  *(uint *)&pCVar4->field_0xd094 = uVar3;
  return pCVar4;
}
